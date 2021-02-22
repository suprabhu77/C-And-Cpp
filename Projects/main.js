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
function validateForm() {
    // reload()
    // window.location.reload(); 
    flag = 1;
    var x = document.getElementById("fname").value;
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
            cipher += ' '+' '
        }
        localStorage.setItem("titles",cipher)
    }
    var result = localStorage.getItem('titles')
    document.getElementById('please').innerHTML = result + x
}
// document.getElementById('please').innerHTML = cipher + "123";
