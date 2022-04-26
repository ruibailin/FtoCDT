// The following is a RISC-V program to test the functionality of the
// dummy RoCC accelerator.
// Compile with riscv64-unknown-elf-gcc dummy_rocc_test.c
// Run with spike --extension=dummy_rocc pk a.out

#include <assert.h>
#include <stdio.h>
#include <stdint.h>

int rocc_test_main(int argc, char** argv)
{
  uint64_t x = 123, y = 456, z = 0;
  // load x into accumulator 2 (funct=0)
  // read it back into z (funct=1) to verify it
  assert(z == x);
  // accumulate 456 into it (funct=3)
  // verify it
  assert(z == x+y);
  // do it all again, but initialize acc2 via memory this time (funct=2)
  assert(z == x+y);

  printf("success!\n");

  return 0;
}
