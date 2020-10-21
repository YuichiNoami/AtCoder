<?php
fscanf(STDIN, '%d', $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
$flag = true;
for ($i=0; $i < $cnt; $i++) { 
    if ($nums[$i] % 2 !== 0) {
        continue;
    }
    if ($nums[$i] % 3 !== 0 && $nums[$i] % 5 !== 0) {
        $flag = false;
    }
}
echo $flag ? 'APPROVED' : 'DENIED';
echo "\n";