<?php
$que = [];
array_push($que, 1);
array_push($que, 2);
array_push($que, 3);
echo sprintf("%d\n", array_shift($que));
echo sprintf("%d\n", array_shift($que));
echo sprintf("%d\n", array_shift($que));