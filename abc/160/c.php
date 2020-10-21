<?php
fscanf(STDIN, '%d %d', $len, $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
$nums[] = $nums[0] + $len;
$ans = 0;
for ($i=0; $i < $cnt; $i++) { 
    $ans = max($ans, $nums[$i+1] - $nums[$i]);
}
$ans = $len - $ans;
echo $ans;
echo "\n";