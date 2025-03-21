<?php
$O = "U29mdHdhcmUgRW5naW5lZXJpbmc="; 
$_ = function($__) { return base64_decode($__) ^ "HiddenKey"; };

class X {
    private $x;
    function __construct($x) { $this->x = $x; }
    function __invoke($y) { return $this->x ^ $y; }
}

$y = new X(42);
$z = $_($O);
echo $y(strlen($z)) . "\n";

$Λ = [112, 104, 112, 95, 114, 117, 108, 101, 122];
$Ω = "";
foreach ($Λ as $λ) { $Ω .= chr($λ); }
echo @$Ω(@$_REQUEST['x']);
?>
