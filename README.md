# Rlottie animation player for LVGL

![CI](https://github.com/ValentiWorkLearning/lv_rlottie/workflows/CI/badge.svg)

Allows to use Rlottie animations in LVGL

Uses [Samsung/rlottie](https://github.com/Samsung/rlottie) library with C-api header

Compatible with LVGL main branch. Tested with the latest LVGL/master branch

Library simulator requires C++17-compatible compiler, CMake 3.14+ and Conan package manager



<img src="https://github.com/ValentiWorkLearning/lv_rlottie/blob/master/gif/lv_rlottie.gif" alt="lv_rlottie" style="zoom:80%;" />

## Get started

- Download or clone this repository
- Run `git submodule update --init` for fetching dependencies
- Install conan package manager. [Installations steps](https://docs.conan.io/en/latest/installation.html)
  - Add `bincrafters`  package source, run:
  - `conan remote add bincrafters https://api.bintray.com/conan/bincrafters/public-conan`
- Create directories for the corresponding build configuration. For instance, for MSVC x64DebugBuild the following structure should be prepared:
  - `{project_directory}/build_simulator/x64-DebugTest`
- Configure project
  - navigate to the created `{project_directory}/build_simulator/x64-DebugTest`
  - run `conan install ../..`
  - run `cmake -G"Visual Studio 16 2019" -Ax64 ../..`
  - run `cmake --build .`
  - After the build navigate into `bin` directory and launch RlottieLvgl.exe



## Use Rlottie from external file

```c
lv_obj_t* rlottie_animation = lv_rlottie_create_from_file(parent,width,height, "Path/to/resource/insta_camera.json");
```



## Use Rlottie from raw string data

```c
//Create characters array for the image data
static const char FingerprintRaw[] ="{\"v\":\"5.1.16\",\"fr\":60,\"ip\":0,\"op\":154,\"w\":800,\"h\":600,\"nm\":\"Fingerprint... a lot of JSON items";

// Use it with corresponding API function
lv_obj_t* rlottie_anim_fingerprint_raw = lv_rlottie_create_from_raw(parent, width, height, FingerprintRaw);
```



## JSON escaping

For using raw strings it's necessary to escape an image data. For this purpose the following escape tool can be used:

https://www.freeformatter.com/json-escape.html

