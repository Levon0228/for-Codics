function check(num) {
  var last  = num % 10;
  num = (num - last) / 10;
  while(num > 0) {
   var current = num % 10;
   num = (num - current) / 10;
   if (current === last) {
     return false;
   }
    last = current;
  }
   return true;
    
}

function calculate(n) {
  var count = 0;
  for (var i = 10101; i <= n; ++i ) {
    if (check(i) === true) {
      ++count;
    }
    
  }
  return count;
} 

console.log(calculate(98989))
