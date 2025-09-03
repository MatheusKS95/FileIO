# Matheus' FileIO Helper

A simple file i/o utility made in C (C99) built on top of MiniPhysFS that makes it easier to load and save files (both binary and text) from an archive or a directory.

I made this for a few gamedev and rendering projects I have made in the past so I can easily deal with filesystem access in a safe-r way (like having read-only directories and read-write directories separate, among other things). I used it to load 3D models, textures, shaders, audio and a lot of stuff, and save config files. So it's kinda ready.

_However_, this is only one of my implementations, I've made one using traditional PhysFS and others using SDL instead of directly using C standard library. You might want to change it according to your own tastes if you want.



### Set up

FileIO Helper is meant to be used as a CMake submodule. Just copy the folder into your project and change your CMakeLists file to include it as a dubdirectory. The root contains an example.

See the example.c file on how to use in your code. Remember to init it before use and deinit it after you are done with it.

### Testing

I never unit tested it. I just used it and it worked. So, use at your own risk.
<img src="https://i.redd.it/ynp50nf1339b1.png" width="480px">

### Dependencies

No dependencies other than C standard library. It uses edubart's [header-only version](https://github.com/edubart/miniphysfs) of icculus' [PhysFS](https://github.com/icculus/physfs). I chose the header-only version for simplicity reasons as probably most of you would want something that can work out of box, but it can work fine with icculus original version as well.

In short, just drop the folder into your CMake project and you are ready to go.

### Licence

Since it's just a bunch of quick functions over much bigger stuff, it uses the same license as both MiniPhysFS and PhysFS: zlib license.
