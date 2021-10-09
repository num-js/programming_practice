const checkPalindrome = (data) => {
    const dataString = data.toString(); //Converted into String
    let reverseValue = dataString.split('');  //String Split
    reverseValue = reverseValue.reverse();  //String Reverse
    reverseValue = reverseValue.join('');  //String Joining

    if (dataString == reverseValue) {
        console.log(data + ' is a Palindrome');
    } else {
        console.log(data + ' is not a Palindrome');
    }
}

checkPalindrome("jahaj");
checkPalindrome("numun");
checkPalindrome("numan");
checkPalindrome("madam");