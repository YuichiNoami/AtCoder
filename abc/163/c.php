<?php
fscanf(STDIN, '%d', $cnt);
$map = array_fill(0, $cnt, 0);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
for ($i=0; $i < $cnt-1; $i++) { 
    $map[$nums[$i]-1]++;
}
echo implode("\n", $map);