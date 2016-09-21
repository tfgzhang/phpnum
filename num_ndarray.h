/*
  +----------------------------------------------------------------------+
  | phpnum - A PHP extension for scientific computing                    |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author:  Astraeux  <astraeux@gmail.com>                              |
  +----------------------------------------------------------------------+
*/

#ifndef NUM_NDARRAY_H
#define NUM_NDARRAY_H

extern zend_class_entry *num_ndarray_ce;

#define NUM_NDARRAY_PROPERT_DATA          "_data"
#define NUM_NDARRAY_PROPERT_SHAPE         "_shape"

typedef double (*num_func_t)(double val1, double val2);

zval* num_calc_shape(zval *data, zval *shape, zend_long dimension);

double num_operator_add(double val1, double val2);
double num_operator_sub(double val1, double val2);
double num_operator_mult(double val1, double val2);
double num_operator_div(double val1, double val2);

int num_recursive(zval *data1, zval *data2, num_func_t num_func);

NUM_STARTUP_FUNCTION(ndarray);

#endif