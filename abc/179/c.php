<?php
fscanf(STDIN, '%d', $cnt);
$ans = 0;
for ($i=1; $i < $cnt; $i++) { 
    $ans += floor(($cnt - 1) / $i);
}
echo $ans;