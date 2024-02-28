/*
    Author: Sumeet Singh
    Dated: 22/01/2024
    Minimum C++ Standard: C++11
    Purpose: Implementation file
    License: MIT License
    Description: Read README.md for more details
*/

#include <glad/glad.h> // Include glad/include/glad.h then compile this "source file" file glad/src/glad.c with main.cpp
#include <GLFW/glfw3.h>
#include <iostream>
#include "headers/adding.hpp"

// Prototype function
// void framebuffer_size_callback(GLFWwindow *window, int width, int height);

// Callback function to resize the viewport everytime the window is resized
void framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
    glViewport(0, 0, width, height);
}

int main()
{
    std::cout << "STARTING OPENGL PROGRAM" << std::endl;

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    GLFWwindow *window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Error: Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Error: Failed to initialise GLAD" << std::endl;
        glfwTerminate();
        return -1;
    }

    // set the viewport same size as window width/height
    glViewport(0, 0, 800, 600);

    // tell GLFW to call this callback function on every window resize
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // Keep running GLFW in a poll loop until quit
    while (!glfwWindowShouldClose(window))
    {
        // send new frame to window e.g. SDL_draw()
        glfwSwapBuffers(window);
        // e.g. sdl_event e
        glfwPollEvents();
    }

    // glfw cleanup
    glfwTerminate();
    return 0;
}