// Age To Days Challenge
const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter your age in years: ", function(age) {
  console.log(`You are ${age * 365} years old`);
  rl.close();
});

rl.on("close", function() {
  process.exit(0);
});
