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
typedef struct account_t {
    char holder_name[50];
    int holder_account_number;
    int holder_amount;               
}account_t;

/**
 * @brief function for creating account
 * 
 * @return void
 */
void admin_account_create(void);

/**
 * @brief function for deleting all account
 * 
 * @return void 
 */
void admin_account_delete_all(void);

/**
 * @brief function for deleting single account
 * 
 */
void admin_account_delete(void);

/**
 * @brief function for printing account list
 * 
 */
void admin_account_list(void);

/**
 * @brief function for printing a particular record
 *  
 */
void admin_account_Record(void);

/**
 * @brief  function for updating account datail
 * 
 */
void admin_account_update(void);

/**
 * @brief Function to check balance
 * 
 * @param account_number_temp account number of customer
 */
void customer_account_balance(int account_number_temp);

/**
 * @brief function for checking detail
 * 
 * @param account_number_temp account number of customer
 */
void customer_account_detail(int account_number_temp);


/**
 * @brief function to make withdrawl
 * 
 * @param account_number_temp account number of customer
 */
void customer_account_withdrawl(int account_number_temp);

/**
 * @brief Function used Login customer
 * 
 * @param account_number_temp account number of customer
 * @return true 
 * @return false 
 */
bool login_customer (int account_number_temp);