
const check = (data) => {
    try {
        return data.toUpperCase();
    } catch (err) {
        return 'Invlid String:- ' + err+ ', Please Enter Proper String';
    }
}

const res1 = check('numan Ahhhh');
console.log(res1);

const res2 = check(123);
console.log(res2);

