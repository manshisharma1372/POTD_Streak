/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    let i=n;
    let ans=res=> i++;
    return ans;
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */