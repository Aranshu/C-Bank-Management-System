/**
 * @file Account.h
 * @author your name (you@domain.com)
 * @brief Header file for account
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief User created header file
 * 
 */
#include "HeaderFile.h"

/**
 * @brief Error values for calculator operations
 * 
 */
typedef enum error {
    ERROR_File = -1, /**< Failer File not Present */
    SUCCESS = 0                  /**< Compute operation is successful */
}error;

/**
 * @brief function for creating account
 * 
 * @return error 
 */
error account_create();

/**
 * @brief function for deleting all account
 * 
 * @return error 
 */
error account_delete_all();

/**
 * @brief function for printing account list
 * 
 * @return error 
 */
error account_list();

/**
 * @brief Displaying a particular record
 * 
 * @return error 
 */
error account_Record();


void account_update();