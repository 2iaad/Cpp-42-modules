#pragma once

#include <iostream>
#include <cfloat>
#include <algorithm>
#include <fstream>
#include <map>

#include <stdio.h>

#define OPEN_ERR	"Error: could not open file."
#define EMPTY_ERR	"Error: Empty Date or Price."
#define PIPE_ERR	"Error: related to pipe."
#define	DATE_ERR	"Error: bad input => "
#define	PRICE_ERR	"Error: related to Price."

/**
 * @brief what to start with:
 * 		
 * 		1- read line by line
 * 		2- each line that have been read nsplitih b ,
 * 		3- date = key && value = value.
 * 		4- parse date
 * 		5- get previous date if invalide date
 * 
 */
