function addUptoN(n) {
  let total = 0;
  for (let i = 1; i <= n; i++) {
    total = total + 1;
  }
  return total;
}

let t1 = performance.now();
addUptoN(10000000000);
let t2 = performance.now();

console.log(`Time elapsed: ${(t2 - t1) / 1000} seconds.`);
