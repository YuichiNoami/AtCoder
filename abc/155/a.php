<?php
fscanf(STDIN, '%d %d %d', $nums[], $nums[], $nums[]);
$cnts = array_count_values($nums);
rsort($cnts);
$ans = $cnts[0] === 2 ? 'Yes' : 'No';
echo $ans;
