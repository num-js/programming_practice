/**
 * Remove Duplicate values from the Array
 */
const duplicateValuesArray = [1, 2, 1, 4, 5, 1, 2, 7, 8, 1, 6, 8, 1, 7, 2, 5, 6, 6, 9, 8, 4, 5, 8, 2, 4, 6, 7, 3, 9];

const filteredArr = [...new Set(duplicateValuesArray)];

console.log(filteredArr);