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

## Running dmenu
See `man dmenu` for details.
