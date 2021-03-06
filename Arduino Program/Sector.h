#pragma once
#include <Arduino.h>

#define val_matrix_len 43  // initially 51 (was decreased due to redundant zeroes)
const PROGMEM float val_matrix[val_matrix_len][val_matrix_len] = {
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.95, 0.88, 0.82, 0.76, 0.70, 0.64, 0.58, 0.53, 0.47, 0.42, 0.38, 0.33, 0.29, 0.25, 0.21, 0.18, 0.15, 0.12, 0.10, 0.08, 0.06, 0.05, 0.04, 0.03, 0.02, 0.01, 0.01, 0.01}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.94, 0.88, 0.82, 0.76, 0.70, 0.64, 0.58, 0.53, 0.47, 0.42, 0.37, 0.33, 0.29, 0.25, 0.21, 0.18, 0.15, 0.12, 0.10, 0.08, 0.06, 0.05, 0.04, 0.03, 0.02, 0.01, 0.01, 0.01}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.94, 0.88, 0.82, 0.76, 0.70, 0.64, 0.58, 0.52, 0.47, 0.42, 0.37, 0.33, 0.28, 0.25, 0.21, 0.18, 0.15, 0.12, 0.10, 0.08, 0.06, 0.05, 0.04, 0.03, 0.02, 0.01, 0.01, 0.01}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.99, 0.93, 0.87, 0.81, 0.75, 0.69, 0.63, 0.57, 0.52, 0.47, 0.42, 0.37, 0.32, 0.28, 0.24, 0.21, 0.18, 0.15, 0.12, 0.10, 0.08, 0.06, 0.05, 0.04, 0.03, 0.02, 0.01, 0.01, 0.01}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.97, 0.92, 0.86, 0.80, 0.74, 0.68, 0.62, 0.57, 0.51, 0.46, 0.41, 0.36, 0.32, 0.28, 0.24, 0.21, 0.17, 0.15, 0.12, 0.10, 0.08, 0.06, 0.05, 0.04, 0.03, 0.02, 0.01, 0.01, 0.01}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.96, 0.90, 0.84, 0.78, 0.73, 0.67, 0.61, 0.56, 0.50, 0.45, 0.40, 0.36, 0.31, 0.27, 0.24, 0.20, 0.17, 0.14, 0.12, 0.10, 0.08, 0.06, 0.05, 0.04, 0.03, 0.02, 0.01, 0.01, 0.01}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.99, 0.94, 0.88, 0.82, 0.77, 0.71, 0.65, 0.60, 0.54, 0.49, 0.44, 0.39, 0.35, 0.31, 0.27, 0.23, 0.20, 0.17, 0.14, 0.12, 0.09, 0.08, 0.06, 0.05, 0.03, 0.03, 0.02, 0.01, 0.01, 0.01}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.97, 0.91, 0.86, 0.80, 0.75, 0.69, 0.64, 0.58, 0.53, 0.48, 0.43, 0.38, 0.34, 0.30, 0.26, 0.22, 0.19, 0.16, 0.14, 0.11, 0.09, 0.07, 0.06, 0.04, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.99, 0.94, 0.88, 0.83, 0.78, 0.72, 0.67, 0.62, 0.57, 0.51, 0.47, 0.42, 0.37, 0.33, 0.29, 0.25, 0.22, 0.19, 0.16, 0.13, 0.11, 0.09, 0.07, 0.06, 0.04, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.95, 0.90, 0.86, 0.80, 0.75, 0.70, 0.65, 0.60, 0.55, 0.50, 0.45, 0.40, 0.36, 0.32, 0.28, 0.24, 0.21, 0.18, 0.15, 0.13, 0.11, 0.09, 0.07, 0.05, 0.04, 0.03, 0.02, 0.02, 0.01, 0.01, 0.00}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.96, 0.92, 0.87, 0.82, 0.77, 0.72, 0.67, 0.62, 0.57, 0.53, 0.48, 0.43, 0.39, 0.35, 0.31, 0.27, 0.23, 0.20, 0.17, 0.15, 0.12, 0.10, 0.08, 0.07, 0.05, 0.04, 0.03, 0.02, 0.02, 0.01, 0.01, 0.00}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.96, 0.92, 0.88, 0.83, 0.79, 0.74, 0.69, 0.65, 0.60, 0.55, 0.50, 0.46, 0.41, 0.37, 0.33, 0.29, 0.26, 0.22, 0.19, 0.17, 0.14, 0.12, 0.10, 0.08, 0.06, 0.05, 0.04, 0.03, 0.02, 0.02, 0.01, 0.01, 0.00}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.99, 0.95, 0.92, 0.88, 0.84, 0.80, 0.75, 0.71, 0.66, 0.62, 0.57, 0.52, 0.48, 0.44, 0.40, 0.35, 0.32, 0.28, 0.25, 0.21, 0.19, 0.16, 0.13, 0.11, 0.09, 0.08, 0.06, 0.05, 0.04, 0.03, 0.02, 0.01, 0.01, 0.01, 0.00}, 
  {1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.99, 0.97, 0.94, 0.90, 0.87, 0.83, 0.80, 0.75, 0.71, 0.67, 0.63, 0.58, 0.54, 0.50, 0.46, 0.41, 0.38, 0.34, 0.30, 0.27, 0.23, 0.20, 0.18, 0.15, 0.13, 0.11, 0.09, 0.07, 0.06, 0.05, 0.03, 0.03, 0.02, 0.01, 0.01, 0.01, 0.00}, 
  {1.00, 1.00, 1.00, 0.99, 0.97, 0.96, 0.94, 0.91, 0.88, 0.86, 0.82, 0.79, 0.75, 0.71, 0.67, 0.63, 0.59, 0.55, 0.51, 0.47, 0.43, 0.39, 0.35, 0.32, 0.28, 0.25, 0.22, 0.19, 0.17, 0.14, 0.12, 0.10, 0.08, 0.07, 0.05, 0.04, 0.03, 0.03, 0.02, 0.01, 0.01, 0.01, 0.00}, 
  {0.95, 0.94, 0.94, 0.93, 0.92, 0.90, 0.88, 0.86, 0.83, 0.80, 0.77, 0.74, 0.71, 0.67, 0.63, 0.60, 0.56, 0.52, 0.48, 0.44, 0.40, 0.37, 0.33, 0.30, 0.27, 0.24, 0.21, 0.18, 0.16, 0.13, 0.11, 0.09, 0.08, 0.06, 0.05, 0.04, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.00}, 
  {0.88, 0.88, 0.88, 0.87, 0.86, 0.84, 0.82, 0.80, 0.78, 0.75, 0.72, 0.69, 0.66, 0.63, 0.59, 0.56, 0.52, 0.49, 0.45, 0.41, 0.38, 0.34, 0.31, 0.28, 0.25, 0.22, 0.19, 0.17, 0.15, 0.12, 0.11, 0.09, 0.07, 0.06, 0.05, 0.04, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.00}, 
  {0.82, 0.82, 0.82, 0.81, 0.80, 0.78, 0.77, 0.75, 0.72, 0.70, 0.67, 0.65, 0.62, 0.58, 0.55, 0.52, 0.49, 0.45, 0.42, 0.39, 0.35, 0.32, 0.29, 0.26, 0.23, 0.21, 0.18, 0.16, 0.14, 0.12, 0.10, 0.08, 0.07, 0.06, 0.04, 0.03, 0.03, 0.02, 0.02, 0.01, 0.01, 0.00, 0.00}, 
  {0.76, 0.76, 0.76, 0.75, 0.74, 0.73, 0.71, 0.69, 0.67, 0.65, 0.62, 0.60, 0.57, 0.54, 0.51, 0.48, 0.45, 0.42, 0.39, 0.36, 0.33, 0.30, 0.27, 0.24, 0.22, 0.19, 0.17, 0.15, 0.13, 0.11, 0.09, 0.08, 0.06, 0.05, 0.04, 0.03, 0.03, 0.02, 0.01, 0.01, 0.01, 0.00, 0.00}, 
  {0.70, 0.70, 0.70, 0.69, 0.68, 0.67, 0.65, 0.64, 0.62, 0.60, 0.57, 0.55, 0.52, 0.50, 0.47, 0.44, 0.41, 0.39, 0.36, 0.33, 0.30, 0.27, 0.25, 0.22, 0.20, 0.18, 0.15, 0.13, 0.12, 0.10, 0.08, 0.07, 0.06, 0.05, 0.04, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.00, 0.00}, 
  {0.64, 0.64, 0.64, 0.63, 0.62, 0.61, 0.60, 0.58, 0.57, 0.55, 0.53, 0.50, 0.48, 0.46, 0.43, 0.40, 0.38, 0.35, 0.33, 0.30, 0.28, 0.25, 0.23, 0.20, 0.18, 0.16, 0.14, 0.12, 0.11, 0.09, 0.08, 0.06, 0.05, 0.04, 0.03, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.00, 0.00}, 
  {0.58, 0.58, 0.58, 0.57, 0.57, 0.56, 0.54, 0.53, 0.51, 0.50, 0.48, 0.46, 0.44, 0.41, 0.39, 0.37, 0.34, 0.32, 0.30, 0.27, 0.25, 0.23, 0.21, 0.19, 0.17, 0.15, 0.13, 0.11, 0.10, 0.08, 0.07, 0.06, 0.05, 0.04, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00}, 
  {0.53, 0.53, 0.52, 0.52, 0.51, 0.50, 0.49, 0.48, 0.47, 0.45, 0.43, 0.41, 0.40, 0.38, 0.35, 0.33, 0.31, 0.29, 0.27, 0.25, 0.23, 0.21, 0.19, 0.17, 0.15, 0.13, 0.12, 0.10, 0.09, 0.07, 0.06, 0.05, 0.04, 0.04, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00}, 
  {0.47, 0.47, 0.47, 0.47, 0.46, 0.45, 0.44, 0.43, 0.42, 0.40, 0.39, 0.37, 0.35, 0.34, 0.32, 0.30, 0.28, 0.26, 0.24, 0.22, 0.20, 0.19, 0.17, 0.15, 0.13, 0.12, 0.10, 0.09, 0.08, 0.07, 0.06, 0.05, 0.04, 0.03, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00}, 
  {0.42, 0.42, 0.42, 0.42, 0.41, 0.40, 0.39, 0.38, 0.37, 0.36, 0.35, 0.33, 0.32, 0.30, 0.28, 0.27, 0.25, 0.23, 0.22, 0.20, 0.18, 0.17, 0.15, 0.13, 0.12, 0.11, 0.09, 0.08, 0.07, 0.06, 0.05, 0.04, 0.03, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00}, 
  {0.38, 0.37, 0.37, 0.37, 0.36, 0.36, 0.35, 0.34, 0.33, 0.32, 0.31, 0.29, 0.28, 0.27, 0.25, 0.24, 0.22, 0.21, 0.19, 0.18, 0.16, 0.15, 0.13, 0.12, 0.11, 0.09, 0.08, 0.07, 0.06, 0.05, 0.04, 0.04, 0.03, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00}, 
  {0.33, 0.33, 0.33, 0.32, 0.32, 0.31, 0.31, 0.30, 0.29, 0.28, 0.27, 0.26, 0.25, 0.23, 0.22, 0.21, 0.19, 0.18, 0.17, 0.15, 0.14, 0.13, 0.12, 0.10, 0.09, 0.08, 0.07, 0.06, 0.05, 0.05, 0.04, 0.03, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00}, 
  {0.29, 0.29, 0.28, 0.28, 0.28, 0.27, 0.27, 0.26, 0.25, 0.24, 0.23, 0.22, 0.21, 0.20, 0.19, 0.18, 0.17, 0.16, 0.15, 0.13, 0.12, 0.11, 0.10, 0.09, 0.08, 0.07, 0.06, 0.05, 0.05, 0.04, 0.03, 0.03, 0.02, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00}, 
  {0.25, 0.25, 0.25, 0.24, 0.24, 0.24, 0.23, 0.22, 0.22, 0.21, 0.20, 0.19, 0.19, 0.18, 0.17, 0.16, 0.15, 0.14, 0.13, 0.12, 0.11, 0.10, 0.09, 0.08, 0.07, 0.06, 0.05, 0.05, 0.04, 0.03, 0.03, 0.02, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.21, 0.21, 0.21, 0.21, 0.21, 0.20, 0.20, 0.19, 0.19, 0.18, 0.17, 0.17, 0.16, 0.15, 0.14, 0.13, 0.12, 0.12, 0.11, 0.10, 0.09, 0.08, 0.07, 0.07, 0.06, 0.05, 0.05, 0.04, 0.03, 0.03, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.18, 0.18, 0.18, 0.18, 0.17, 0.17, 0.17, 0.16, 0.16, 0.15, 0.15, 0.14, 0.13, 0.13, 0.12, 0.11, 0.11, 0.10, 0.09, 0.08, 0.08, 0.07, 0.06, 0.06, 0.05, 0.04, 0.04, 0.03, 0.03, 0.03, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.15, 0.15, 0.15, 0.15, 0.15, 0.14, 0.14, 0.14, 0.13, 0.13, 0.12, 0.12, 0.11, 0.11, 0.10, 0.09, 0.09, 0.08, 0.08, 0.07, 0.06, 0.06, 0.05, 0.05, 0.04, 0.04, 0.03, 0.03, 0.02, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.11, 0.11, 0.11, 0.10, 0.10, 0.09, 0.09, 0.08, 0.08, 0.07, 0.07, 0.06, 0.06, 0.05, 0.05, 0.04, 0.04, 0.03, 0.03, 0.03, 0.02, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.10, 0.10, 0.10, 0.10, 0.10, 0.10, 0.09, 0.09, 0.09, 0.09, 0.08, 0.08, 0.08, 0.07, 0.07, 0.06, 0.06, 0.06, 0.05, 0.05, 0.04, 0.04, 0.04, 0.03, 0.03, 0.03, 0.02, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.08, 0.08, 0.08, 0.08, 0.08, 0.08, 0.08, 0.07, 0.07, 0.07, 0.07, 0.06, 0.06, 0.06, 0.05, 0.05, 0.05, 0.04, 0.04, 0.04, 0.03, 0.03, 0.03, 0.03, 0.02, 0.02, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.06, 0.06, 0.06, 0.06, 0.06, 0.06, 0.06, 0.06, 0.06, 0.05, 0.05, 0.05, 0.05, 0.05, 0.04, 0.04, 0.04, 0.03, 0.03, 0.03, 0.03, 0.02, 0.02, 0.02, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.04, 0.04, 0.04, 0.04, 0.04, 0.04, 0.03, 0.03, 0.03, 0.03, 0.03, 0.03, 0.02, 0.02, 0.02, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.04, 0.04, 0.04, 0.04, 0.04, 0.04, 0.03, 0.03, 0.03, 0.03, 0.03, 0.03, 0.03, 0.03, 0.03, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.03, 0.03, 0.03, 0.03, 0.03, 0.03, 0.03, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}, 
  {0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00}
};


// Stays for one Sector on 3x3 PCB matrix
// Main purpose is to provide smooth transition between Sectors 
class Sector{
  public:
    Sector();
    Sector(int x, int y, int r, byte p);
    uint16_t getPwmTime(int x, int y, int pot_value_mapped);
  private:
    int radius;
    int x_center;
    int y_center;
    byte pos;
    float norm_factor;
};

Sector::Sector(){}

Sector::Sector(int x, int y, int r, byte p){
  radius = r;
  x_center = x;
  y_center = y;
  pos = p;
  norm_factor = 0.05042; //float(val_matrix_len - 1) / radius == 35 / 989
}


uint16_t Sector::getPwmTime(int x, int y, int pot_value_mapped){
  
  if(abs(x - x_center) > radius || abs(y - y_center) > radius){
    return 0;
  } else {
    int row = float(abs(abs(x) - abs(x_center))) * norm_factor;
    int column = float(abs(abs(y) - abs(y_center))) * norm_factor;
    float float_val = pgm_read_float(&val_matrix[row][column]);
    
//    Serial.println(pos + String(" ") + float_val + String(" ") + row + String(" ") + column + String(" ") + x + String(" ") + x_center + String(" ") + y + String(" ") + y_center); // Debug
    return 4 * int(float(pot_value_mapped) * float(float_val) + 0.5);
  }
}
