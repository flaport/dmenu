# dmenu - dynamic menu

`dmenu` is an efficient dynamic menu for X.


## Requirements
In order to build `dmenu` you need the `Xlib` header files.


## Installation
Edit `config.mk` to match your local setup (dmenu is installed as
`/usr/local/bin/dmenu` by default).

Afterwards enter the following command to build and install `dmenu`
(if necessary as root):

```
    make clean install
```

## Patches
The following patches were applied:
* [dmenu-center-4.8](https://tools.suckless.org/dmenu/patches/center/)
* [dmenu-border-4.9](https://tools.suckless.org/dmenu/patches/border/)
* [dmenu-fuzzymatch-20170606-f428f3e](https://tools.suckless.org/dmenu/patches/fuzzymatch/)
* [dmenu-initialtext-4.7](https://tools.suckless.org/dmenu/patches/initialtext/)
* [dmenu-navhistory-4.6](https://tools.suckless.org/dmenu/patches/navhistory/)
* [dmenu-scroll-20180607-a314412](https://tools.suckless.org/dmenu/patches/scroll/)
* [dmenu-password-4.7](https://tools.suckless.org/dmenu/patches/password/)

## Running dmenu
See `man dmenu` for details.
