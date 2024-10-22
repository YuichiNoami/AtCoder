import * as fs from "fs";
const inputs = fs.readFileSync("/dev/stdin", "utf8").split("\n");
const len: number = Number(inputs[0]);
const s: string = String(inputs[1]);
const seats: string[] = s.split("");

export class Solution {
  static solve(seats: string[], len: number) {
    if (len < 3) return 0;

    let res: number = 0;

    for (let i = 1; i < seats.length - 1; i++) {
      const current: string = seats[i];
      if (current !== ".") continue;

      const prev: number = i - 1;
      const next: number = i + 1;

      if (seats[prev] === "#" && seats[next] === "#") res++;
    }

    return res;
  }
}

const ans: number = Solution.solve(seats, len);
console.log(ans);
