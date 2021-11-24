# Test plan
## LOW LEVEL TEST PLAN
ID       |Description                                                  |Expected output     |Actual output    |Type of test
---------|-------------------------------------------------------------|---------------------|-----------------|------------
L_01|Open the app|PASSED|SUCCESS|Requirement
L_02|Secret word hidden from player2|HIDDEN|SUCCESS|Scenario
L_03|Player2 inputs word|PASSED|SUCCESS|Boundary

## HIGH LEVEL TEST PLAN
ID       |Description                                                  |Expected output     |Actual output    |Type of test
---------|-------------------------------------------------------------|---------------------|-----------------|------------
H_01|Show current state of guessed text|Shows output with only charecters identified by payer 2|Shows output with only charecters identified by payer 2|Requirement
H_02|Show current state of hangman on wrong guess|Shows HANGMAN diagram|Shows HANGMAN diagram|Scenario
H_03|Player types non alphabet|Re-reads input|Re-reads input|Boundary
