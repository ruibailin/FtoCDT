#include "qarmmessagebox.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QIcon>
#include <QLabel>
#include <QDialogButtonBox>
#include <QStyle>
#include <QApplication>

QarmMessageBox::QarmMessageBox(DType t, QString &title, QString &text, QWidget * parent, Qt::WindowFlags f)
{
    QarmMessageBox(t, title.toStdString().c_str(), text.toStdString().c_str(), parent, f);
}

QarmMessageBox::QarmMessageBox(DType t, const char *title, const char *text, QWidget * parent, Qt::WindowFlags f):
    QDialog(parent,f)
{
    setModal(true);
    setWindowTitle(title);

    QLayout *mainLayout = new QVBoxLayout();
    QWidget *topWidget = new QWidget(this);

    QLayout *topLayout = new QHBoxLayout();
    QStyle *style = QApplication::style();
    QIcon icon;
    QString accName;
    switch(t){
        case INFO:
            icon = style->standardIcon(QStyle::SP_MessageBoxInformation);
            accName = QString("Information Dialog");
            break;
        case WARNING:
            icon = style->standardIcon(QStyle::SP_MessageBoxWarning);
            accName = QString("Warning Dialog");
            break;
        case CRITICAL:
            icon = style->standardIcon(QStyle::SP_MessageBoxCritical);
            accName = QString("Error Dialog");
            break;
        case QUESTION:
            icon = style->standardIcon(QStyle::SP_MessageBoxQuestion);
            accName = QString("Question Dialog");
            break;
    }
    if(parent)
        setWindowIcon(parent->windowIcon());
    else
        setWindowIcon(icon);

    accName = accName.append(" : ");
    accName = accName.append(text);
    this->setAccessibleName(accName);

    QLabel *contentL = new QLabel(text, topWidget);
    contentL->setAccessibleName("Dialog content");
    contentL->setAccessibleDescription(text);

    QLabel *iconL = new QLabel(topWidget);
    iconL->setAlignment(Qt::AlignCenter);
    //iconL->setFrameShape(QFrame::Box);
    iconL->setAccessibleName(accName);
    iconL->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    iconL->setMinimumSize(16, 16);
    iconL->setPixmap(icon.pixmap(contentL->height()*2, contentL->height()*2, QIcon::Normal, QIcon::On));

    topLayout->addWidget(iconL);
    topLayout->addWidget(contentL);

    topWidget->setLayout(topLayout);

    QDialogButtonBox *buttonBox;
    if(t == QUESTION){
        buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
    } else {
        buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok, this);
    }

    connect(buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

    mainLayout->addWidget(topWidget);
    mainLayout->addWidget(buttonBox);

    setLayout(mainLayout);
}
