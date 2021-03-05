const myDataObj = {
    name: 'Numan',
    pro: 'Full Stack Developer',
    lang: 'JS'
}

localStorage.setItem("myData", myDataObj);
console.log('MyData: ', localStorage.getItem('myData')); // MyData:  [object Object]

/* localStorage don't Support Objects,
so we need to convert into string with JSON.stringify methods
*/

const serializedObj = JSON.stringify(myDataObj);

localStorage.setItem("myData", serializedObj);
console.log('MyData: ', localStorage.getItem('myData'));