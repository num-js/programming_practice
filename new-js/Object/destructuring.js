/*
 * File: Destructuring.js
 * Description: Destructuring Array inside Object by Index
 * Project: js_practice\Destructuring.js
 * Created Date: Monday, 4 Oct 2021
 * Author: Num
 */

const dataObj = {
    name: "Num",
    pro: "SDE",
    tech: ['React', 'Next', 'Node', 'Express', 'PWA']
}

// Destructure the tech array by Index
const { 0: tech1, 1: tech2, 2: tech3 } = dataObj.tech;

console.log(tech1);
console.log(tech2);
console.log(tech3);