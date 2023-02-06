const isPalindrome = (number) => {
    // string representation of number
    number = String(number);

    // create a forwards stack
    const forwards = [];

    // push values onto forwards stack
    for (i = 0; i < number.length; i++) {
        forwards.push(number[i]);
    }

    // create a backwards stack
    const backwards = [];

    // make a deep copy of the forwards stack for popping values off of
    const copy = [...forwards];

    // pop values off copy into backwards stack
    while (copy.length > 0) {
        backwards.push(copy.pop());
    }

    // convert forwards and backwards stacks to strings and compare for equality
    return forwards.join('') === backwards.join('');
};

console.log(isPalindrome(2314234));
console.log(isPalindrome(121));
