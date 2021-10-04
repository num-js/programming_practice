/*
 * File: remove-element from Object by key.js
 * Description: Remeove Element of an Object by Key Name
 * Project: js_practice\remove-element from Object by key.js
 * Created Date: Monday, 4 Oct 2021
 * Author: Num
 */

const dataObj = {
    name: "Num",
    pro: "SDE",
    comp: "W42"
}


/**
 * 
 * @param {String} propKey - Key of the Element, which need to remove
 * @param {Object} param1 - Full Object
 * @returns 
 */
const removeElement = (propKey, { [propKey]: propValue, ...rest }) => rest;

const finalDataObject = removeElement('comp', dataObj);
console.log(finalDataObject);