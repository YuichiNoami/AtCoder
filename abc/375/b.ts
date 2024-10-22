import * as fs from "fs";

const ins = fs.readFileSync(0, 'utf8').split('\n')
const n: number = +ins[0];
const poses: {x: number; y: number}[] = [];

poses.push({x: 0, y: 0});
for (let i=1; i<=n; i++) {
	const xy :string[] = ins[i].split(' ');
	const pos = {x: +xy[0], y: +xy[1]};
	poses.push(pos);
}
poses.push({x: 0, y: 0});

const solve = (cur: {x: number; y: number}, nex: {x: number; y: number}) => {
	const som = Math.pow(cur.x-nex.x, 2) + Math.pow(cur.y-nex.y, 2);
	return Math.sqrt(som);
}

let ans = 0;
for (let i=0; i<=n; i++) {
	ans += solve(poses[i], poses[i+1])
}

console.log(ans);
