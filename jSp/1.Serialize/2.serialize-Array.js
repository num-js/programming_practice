
const myArr = ["Numan", "Full Stack Dev", "JS & PY"];
console.log('typeOf: ', typeof (myArr));


//Serializing
console.log('Serializing---------');
const serializeArr = JSON.stringify(myArr);
console.log('typeOf: ', typeof (serializeArr));
console.log('serializeArr: ', serializeArr);


//UnPacking/UnSerializing
console.log('UnSerializing---------');
const unSerializeArr = JSON.parse(serializeArr);
console.log('typeOf: ', typeof (unSerializeArr));
console.log('unSerializeArr: ', unSerializeArr);