<?php
fscanf(STDIN, '%d', $count);
$nums = explode(' ', trim(fgets(STDIN)));
$ans = 0;
rsort($nums);
echo $nums[$count/2-1] - $nums[$count/2]."\n";