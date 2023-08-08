function generatePrimes(n) {
    const primeNumbers = [];
    
    for (let num = 2; primeNumbers.length < n; num++) {
        let isPrime = true;
        
        for (let i = 2; i <= Math.sqrt(num); i++) {
            if (num % i === 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            primeNumbers.push(num);
        }
    }
    
    return primeNumbers;
}

document.getElementById("generateButton").addEventListener("click", function () {
    const userInput = document.getElementById("inputNumber").value;
    const n = parseInt(userInput);

    const primeNumbers = generatePrimes(n);

    const primeNumbersDiv = document.getElementById("primeNumbers");
    primeNumbersDiv.innerHTML = primeNumbers.join(", ");
});
