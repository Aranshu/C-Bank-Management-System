/**
 * @file FileCheck.h
 * @author your name (you@domain.com)
 * @brief Header file of File
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "HeaderFile.h"

/**
 * @brief Error values for calculator operations
 * 
 */
typedef enum error_file {
    ERROR_File_Not_Present = -1, /**< Failer File not Present */
    SUCCESS_File_Present = 0                  /**< Compute operation is successful */
}error_file;

/**
 * @brief function for checking all file present or not 
 * 
 * @return error_file 
 */
error_file file_check_all();