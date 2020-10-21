<?php
fscanf(STDIN, '%d %d', $cnt, $limit);
$lifes = array_map('intval', explode(' ', trim(fgets(STDIN))));
rsort($lifes);
for ($i=0; $i < $limit; $i++) { 
    unset($lifes[$i]);
}
echo array_sum($lifes);