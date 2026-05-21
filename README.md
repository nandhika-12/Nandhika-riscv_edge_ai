Student Score Prediction using RISC-V Edge AI

Project Overview

This project demonstrates a simple Edge AI implementation for Student Score Prediction using a lightweight Machine Learning model deployed on a RISC-V/ESP32 embedded platform.

The system predicts student performance based on subject-wise marks using a Linear Regression model.

Sample input

double input_data[1] = {
  7.5   // Study Hours
};

Expected Output

Predicted Student Score: 82.4

Linear Regression

y = wx + b

Working Principle

Study hours are given as input.

Input is normalized using mean and scale values.

Linear Regression model performs inference.

Predicted student score is displayed through Serial Monitor.

Applications

Smart Education Systems

Student Performance Prediction

Edge AI Learning

Embedded ML Research

Academic Analytics
