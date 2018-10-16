//
// Created by grzegorz on 21.09.18.
//

#include "example_layer.h"





ExampleLayer::ExampleLayer(engine::graphics::Shader *shader)
        : Layer(new engine::graphics::BatchRenderer2D(), shader, engine::maths::Mat4::orthographic(-16.0f, 16.0f, -9.0f, 9.0f, -1.0f, 1.0f)){

}

ExampleLayer::~ExampleLayer(){}