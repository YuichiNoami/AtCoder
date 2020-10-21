<?php
fscanf(STDIN, '%d', $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
$ans = true;
for ($i=0; $i < $cnt; $i++) { 
    (int)$ans *= $nums[$i];
}
$limit = pow(10, 18);
if ($ans > $limit) {
    $ans = -1;
} 
echo $ans;