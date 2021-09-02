const graphTimeLine = ["1Month", "3Month", "5Month", "MAX Month"];

console.log(graphTimeLine);

let convertedObject = [];
let distance = 0;

graphTimeLine.map((data, index) => {
    if (index == 0) {
        distance = 5;
        console.log(distance);
    } else if (index == graphTimeLine.length - 1) {
        distance = 95;
    } else {
        distance = distance + (100 / (graphTimeLine.length - 1))
    }

    const newSingleObject = { label: data, value: distance }

    convertedObject = [...convertedObject, newSingleObject];
})

console.log(convertedObject);



    // *** Using For Loop ***
// for (let index = 0; index < graphTimeLine.length; index++) {

//     newSingleObject = {
//         label: graphTimeLine[index],
//         value: distance + (100 / graphTimeLine.length - 2)
//     }

//     convertedObject = [...convertedObject, newSingleObject]
//     distance = distance + (100 / graphTimeLine.length - 2);
// }
// console.log(convertedObject);