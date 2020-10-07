---
theme: gaia
_class: lead
backgroundColor: #def
paginate: true
_paginate: false
footer: 'LD_PRELOAD and you'
_footer: ''
---

# LD_PRELOAD and you

By Jesse Spielman / @heavyimage

---

# First, xkcd.com/221

<style>
img[alt~="center"] {
  display: block;
  margin: 0 auto;
  padding: 80px;
}
</style>

![center](https://imgs.xkcd.com/comics/random_number.png)

"RFC 1149.5 specifies 4 as the standard IEEE-vetted random number."


---
# Why am I showing you this?

Easy!  In the next 10 mins:

- We're going to alter a compiled program
- ...that uses a random number generator
- ...to always return 4.
    - This is okay because it's IEEE-vetted!


---
# Why would you want to do this?

Modifying programs without recompiling them ("dynamically") rules.

Useful for:

- CTFs
- Cheating at things
- Impressing strangers
- Vanity projects (*more later*)



---
# Wat?

- No seriously
- It is actually pretty easy
- Along the way, we're going to learn about useful Linux-y stuff like:
    - **Environment Variables**
    - the **Dyamic Linker**
    - your new best friend, **LD_PRELOAD**



---
# Background: Environment Variables

```bash
[jesse@carcosa:~]$ env
SHELL=/usr/local/bin/bash
XPC_FLAGS=0x0
HISTCONTROL=ignoreboth
TERM_PROGRAM_VERSION=421.2
USER=jesse
DELIGHT=/Applications/Graphics/3Delight/
TMUX=/tmp//tmux-501/default,3834,0
PKG_CONFIG_PATH=:/opt/X11/lib/pkgconfig:/opt/X11/lib/pkgconfig
.
.
.
[jesse@carcosa:~]$ 
```

---
# Background: Dynamic Linker


---
# Conclusion
- XKCD is real
- Compiled software is not a monolithic, fixed thing and instead something you can play with :smile:
- What aspects of a program would you alter?


---
# Links

Related Tools:
- [preeny](https://github.com/zardus/preeny)
- [frida](https://frida.re)

Blog posts:
- [LD_PRELOAD: The Hero We Need and Deserve](https://blog.jessfraz.com/post/ld_preload/)
- [The LD_PRELOAD trick](http://www.goldsborough.me/c/low-level/kernel/2016/08/29/16-48-53-the_-ld_preload-_trick/)
- [Using LD_PRELOAD to cheat, inject features...](https://rafalcieslak.wordpress.com/2013/04/02/dynamic-linker-tricks-using-ld_preload-to-cheat-inject-features-and-investigate-programs/)



