var rev_arr = [];
function rev (arr) {
  if (!arr.length) {
    return rev_arr
  }
  rev_arr.push(arr.pop())
  return rev(arr)
  
}

console.log(rev([1,2,3,4,5]))
