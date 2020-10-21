<?php
fscanf(STDIN, '%d %d', $sell, $buy);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
sort($nums);
$sum = array_sum(array_slice($nums, 0, $buy));
echo $sum;