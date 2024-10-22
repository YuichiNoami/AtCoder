import * as fs from "fs";

const ins = fs.readFileSync(0, 'utf8').split('\n');
const n: number = +ins[0];

let bef: string[][] = [];
for (let i=1; i<=n; i++) {
	const line: string = ins[i];
	bef.push(ins[i].split(''));
}

const solve = (n: number, bef: string[][]) => {
	const aft = structuredClone(bef);
	
	for(let x=0; x<n; x++) {
		for (let y=0; y<n; y++) {
			const end: number = Math.min(y+1, x+1, n-y, n-x) % 4;
			let xx = x;
			let yy = y;
			for(let i=0; i<end; i++) {
				[xx, yy] = [yy, n-1-xx];
			}
			aft[xx][yy] = bef[x][y];
		}
	}
	
	return aft;
}

const ans = solve(n, bef);

for (let i=0; i<n; i++) {
	console.log(ans[i].join(''));
}