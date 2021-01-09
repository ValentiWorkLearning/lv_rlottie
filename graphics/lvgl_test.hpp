#pragma once

#include <lvgl.h>
#include "lv_rlottie/lv_rlottie.h"
#include "lvgl_material_loader.hpp"

inline void rlottie_test(void)
{
    lv_obj_t* rlottie_anim_camera = lv_rlottie_create_from_file(lv_scr_act(),150,200, EXAMPLES_DIR"/resource/insta_camera.json");

    lv_obj_t* rlottie_anim_3d = lv_rlottie_create_from_file(lv_scr_act(),100,100, EXAMPLES_DIR"/resource/3d.json");
    lv_obj_set_x(rlottie_anim_3d, 100);

    lv_obj_t* rlottie_anim_browser = lv_rlottie_create_from_file(lv_scr_act(), 100, 100, EXAMPLES_DIR"/resource/browser.json");
    lv_obj_set_x(rlottie_anim_browser, 100);
    lv_obj_set_y(rlottie_anim_browser, 100);


    lv_obj_t* rlottie_anim_loader_from_raw = lv_rlottie_create_from_raw(lv_scr_act(), 100, 100,MaterialLoaderRes);
    lv_obj_set_x(rlottie_anim_loader_from_raw, 150);
}