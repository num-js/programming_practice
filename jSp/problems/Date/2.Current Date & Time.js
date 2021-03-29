const currentFullDate = new Date();
console.log(currentFullDate);

const currentDateString = currentFullDate.toLocaleDateString();
console.log(currentDateString);

const currentTimeString = currentFullDate.toLocaleTimeString();
console.log(currentTimeString);