<?php
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
$key = array_search(0, $nums);
echo ++$key;