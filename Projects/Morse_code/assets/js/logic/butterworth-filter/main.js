function startCalculations() {
    resultContainer = document.getElementById("filterCalculations");
    resultContainer.style.display = "block";
    
    // Check Form Validity
    var valid = document.getElementById("filterDesignerForm").checkValidity()

    if (!valid) {
        // Show Alert To The User
        alert("Please Enter Valid Options..!");
    } else {
        // Grab Form Values
        console.log(x)
        MORSE_CODE_DICT = {
            'A': '.-', 'B': '-...',
            'C': '-.-.', 'D': '-..', 'E': '.',
            'F': '..-.', 'G': '--.', 'H': '....',
            'I': '..', 'J': '.---', 'K': '-.-',
            'L': '.-..', 'M': '--', 'N': '-.',
            'O': '---', 'P': '.--.', 'Q': '--.-',
            'R': '.-.', 'S': '...', 'T': '-',
            'U': '..-', 'V': '...-', 'W': '.--',
            'X': '-..-', 'Y': '-.--', 'Z': '--..',
            '1': '.----', '2': '..---', '3': '...--',
            '4': '....-', '5': '.....', '6': '-....',
            '7': '--...', '8': '---..', '9': '----.',
            '0': '-----', ', ': '--..--', '.': '.-.-.-',
            '?': '..--..', '/': '-..-.', '-': '-....-',
            '(': '-.--.', ')': '-.--.-'
        }
        var cipher = ''
        // reload()
        // window.location.reload(); 
        var x = document.getElementById("minPassBandGain").value
        console.log(x)
        if (x == "") {
            alert("Name must be filled out");
            return false;
        }
        console.log(x.charAt(0))

        for (let i = 0; i < x.length; i++) {
            if (x.charAt(i) != ' ') {
                cipher += MORSE_CODE_DICT[x.charAt(i)] + ' '
            }
            else {
                cipher += ' ' + ' '
            }
            localStorage.setItem("titles", cipher)
        }
        document.getElementById("filterCalculations").innerHTML = cipher;

    }
}
function clearResults() {
    resultContainer = document.getElementById("filterCalculations");
    // resultContainer.innerHTML = "";
    resultContainer.style.display = "none";
}

