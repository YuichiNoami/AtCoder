<?php
fscanf(STDIN, '%d', $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
$ans = 0;
$ref = $nums[0];
for ($i=1; $i < $cnt; $i++) { 
    if ($nums[$i] == $ref) {
        continue;
    }
    if ($nums[$i] > $ref) {
        $ref = $nums[$i];
        continue;
    }
    if ($nums[$i] < $ref) {
        $ans += $ref - $nums[$i];
    }
}
echo $ans;