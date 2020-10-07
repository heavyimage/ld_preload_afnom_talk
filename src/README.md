# Simple demo of LD_PRELOAD trick

Steps:
1. Run make to compile both binaries
    * `$ make`
2. Run the random_number binary a few times:
    * `$ ./random_number`
3. Now, run the random_number binary after preloading the unrandom library:
    * `$ env LD_PRELOAD=$PWD/unrandom.so ./random_num`
