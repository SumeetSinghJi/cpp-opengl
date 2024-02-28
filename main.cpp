/*
    Author: Sumeet Singh
    Dated: 22/01/2024
    Minimum C++ Standard: C++11
    Purpose: Implementation file
    License: MIT License
    Description: Read README.md for more details
*/

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "headers/adding.hpp"

int main() {
    std::cout << "STARTING OPENGL PROGRAM" << std::endl;

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    return 0;
}