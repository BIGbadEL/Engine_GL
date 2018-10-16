//
// Created by grzegorz on 21.09.18.
//



#pragma once


#include "src/graphics/batch_renderer_2_d.h"
#include "src/graphics/layer/layer.h"



    class ExampleLayer : public engine::graphics::Layer{
    public:
        ExampleLayer(engine::graphics::Shader *shader);
        ~ExampleLayer();
    };

