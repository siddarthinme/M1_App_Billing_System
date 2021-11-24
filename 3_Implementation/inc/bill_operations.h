/** 
* @file bill_operations.h
* 
*
*/
#ifndef __BILL_OPERATIONS_H__
#define __BILL_OPERATIONS_H__

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
#include "bill_entities.h"
#include "stdio_ext.h"


/**
 * @brief Calculate bill amount for particular item
 * 
 * @param qty represents the quantity of prticular item
 * @param price represents the price of particular item
 * @return Bill amount of particular item
 */
float total_bill(float qty, float price);

/**
 * @brief Calculate Bill amount after applying Discount
 * 
 * @param total  Bill amount without discount
 * @return total bill amount after discount
 */

float net_total(float total);

/**
 * @brief Caculate grand total by adding GST
 * 
 * @param net_total Bill amount before adding Gst
 * @return grand_total after applying GST
 */

float grand_total(float net_total);

/*Function to generate Bill Header */
void generate_bill_header(char name[100], time_t date);

/*Function to generate Bill Body */
void generate_bill_body( items item);

/*Function to generate Bill Footer */
void generate_bill_footer(float total);




#endif  /* #define __BILL_OPERATIONS_H__ */