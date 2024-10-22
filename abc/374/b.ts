import * as fs from 'fs';

const ins = fs.readFileSync(0, 'utf8').split('\n');

const s = ins[0];
const t = ins[1];

const solve = (s: string | any[], t: string | any[], lim: number, over: number) => {
	if (s === t)
		return 0;
	
	for(let i=0; i<lim; i++) {
		if (i===over)
			return ++i;
			
		if (s[i] !== t[i])
			return ++i;
	}
}

const lim = Math.max(s.length, t.length);
const over = Math.min(s.length, t.length);

const ans = solve(s, t, lim, over);
console.log(ans);
