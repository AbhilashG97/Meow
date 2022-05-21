function addUptoN(n) {
  return (n * (n + 1)) / 2;
}

let t1 = performance.now();
addUptoN(10000000000);
let t2 = performance.now();

console.log(`Time elapsed: ${(t2 - t1) / 1000} seconds.`);
