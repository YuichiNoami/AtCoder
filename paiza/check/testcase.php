<?php
echo "10000\n";
$list = [];
for ($i=1; $i < 10000; $i++) { 
    $list[] = $i;
}
echo implode(" ", $list);