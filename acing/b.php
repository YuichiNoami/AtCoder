<?php
fscanf(STDIN, '%d', $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
$ans = 0;
for ($i=0; $i < $cnt; $i++) { 
    if ($i % 2 == 0 && $nums[$i] & 2 != 0) {
        $ans++;
    }
}
echo $ans;