import * as fs from "fs";
const ins = fs.readFileSync(0, "utf8").split("\n");

const n: number = +ins[0];
const cnts: number[] = ins[1].split(" ").map((val) => +val);

let someCnt: number = 0;
cnts.forEach((val) => (someCnt += val));

const solve = (): number => {
  let ans: number = Number.MAX_SAFE_INTEGER;
  for (let i = 0; i < 1 << n; i++) {
    let k = i;
    let oneCnt = 0;
    for (let j = 0; j < n; j++) {
      if (k & (1 << j)) {
        oneCnt += cnts[j];
      }
    }
    ans = Math.min(ans, Math.max(oneCnt, someCnt - oneCnt));
  }

  return ans;
};

console.log(solve());
