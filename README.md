# LD_PRELOAD AFNOM Talk
This repo contains the slide deck / code examples for my lighning talk about LD_PRELOAD for the University of Birmingham's ethical hacking club [AFNOM](https://afnom.net).

## Building the slides
It can be built using [Marp][(https://marp.app) like so:
* Development: `marp -w -s ./`
* Final PDF: `marp --pdf=true slides.md`

## Code Examples
All code referenced is provided in the `src` directory.

Per the slides, here's how you can explore LD_PRELOAD

1. Run make to compile both binaries
    * `$ make`
2. Run the random_number binary a few times:
    * `$ ./random_number`
3. Now, run the random_number binary after preloading the unrandom library:
    * `$ env LD_PRELOAD=$PWD/unrandom.so ./random_num`

## TODO
* [More examples of what you can do with this?](https://rafalcieslak.wordpress.com/2013/04/02/dynamic-linker-tricks-using-ld_preload-to-cheat-inject-features-and-investigate-programs/)
* More emojis?!
* talk about calling original implementation?
* Add link to slides: <https://github.com/heavyimage/ld_preload_afnom_talk>
