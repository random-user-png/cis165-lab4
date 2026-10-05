# cis165-lab4

Program and test        	Values used                	Expected results	Actual results	Match or correction
Average — assigned values	28, 32, 37, 24, 33	        30.8	            30.8           	Match
Average — changed values	65, 33, 9, 4, 90          	40.2	            40.2	          Match
Ocean — assigned rate	    1.5	1.5(5), 1.5(7), 1.5(10)	7.5, 10.5, 15     7.5, 10.5, 15	  Match
Ocean — changed rate    	2.5	2.5(5), 2.5(7), 2.5(10)	12.5, 17.5, 25    12.5, 17.5, 25  Match

The five values and the average should use the double data type so that they have a tenths place.
28+32+37+24+33 = 154. 154/5 = 30.8.
The average calculation should divide the completed sum rather than only the final value so that the variables can be altered and still yield a correct result.
The ocean-level calculations multiply the rate by the number of years.
The annual ocean-level rate is a good candidate for a named constant because it is fixed and won't change.
The assignment requires calculations to be stored before using cout so they can be recalled later.
