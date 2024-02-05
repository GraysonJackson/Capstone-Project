# 9/12/2023: 
Currently, I have been reading numerous articles about FSR arrays, as well as documents on Arduinos and Multiplexers. I have aquired the Multiplexer components, but am currently still in the process of ataining the FSR array and an Arduino. Upon gathering all these items, I plan to test the Arduino in order ot learn basic functions before implementing the Multiplexer or Matrix.  
# 9/14/2023: 
I have recieved an Arduino UNO and have now been able to light up an LED with it. Along with this, I saudered pins to a multiplexer and have attached it to a breadboard. After working with the multiplexer with Seward for a while, we were able to make LEDs light up at different times by changing whether voltage was going to one of the selection pins after a second delay. I am currentlly still awaiting my FSR matrix, but I have aquired three basic FSRs that I plan to wire to the arduino.  
# 9/19/2023:
I have attached a basic FSR to my Arduino UNO board, and have added code so that the serial outport can read the FSR values as pressure is applied. My FSR matrix has arrived, but I need to retrieve it from my home before I can begin working with it. For now, I plan to continue working with the FSR so that I have a basic understanding of how FSRs work.  
# 9/28/2023:
I wired the Arduino UNO in Fritzing and then exported the file into an SVG. I plan to update this file by improving readability. The FSRs that I was using broke, so I plan to aquire new ones or aquire my FSR array in order to continue testing.
![FSR_bb](https://github.com/GraysonJackson/Capstone-Project/assets/99559775/a9018754-34b5-4062-836d-cb77db264588)  
# 10/4/2023:
I have acquired both new FSRs as well as my FSR array and have continued working on using two FSRs and alternating between the two of them from a multiplexer to a singular analog pin. Working on this has continuted to give me a lot of trouble, namely how to route the two back to the analog pin without interacting with each other. In order for them to send a resistance back to the analog pin, I have to have them go to the same line in the breadboard, but this causes them to send current to the inactive one.
# 10/16/2023:
After failing to swap between the two multiplexers, I have decided to instead ensure that a singlular FSR can go through the multiplexer. After doing this, I also found the singular FSR to be inoperable. I now believe the issue to be a wiring issue.
# 10/24/2023:
After continuing to experiment, I am certain that the issue was in the wiring. The most notable change made to the wiring was the changing of the anolog pin, which is now connected to the signal pin instead of being connected to the FSRs. The FSRs are also no longer connected to a second line, and are instead connected to unused ground and positive sections on the breadboard. I am not able to understand why this assists the anolog reading yet, but I plan to find out soon.
# 11/2/2023:
Having finished the wring for two FSRs, I began saudering another mulitplexer and adding it to the existing breadboard. I also ordered a prototyping board to attach to my Arduino UNO in order to sauder the FSR multiplexer to the board to use it.
# 11/7/2023:
Having successfully attached the second multiplexer to the breadboard, I began testing it to see if it has the same functionality as the first multiplexer. This was first tested by using alternating LED lights, and then tested using the same FSR multiplexer code and setup as the first multiplexer.
# 11/9/2023:
I've tried to connect the two multiplexers to the same anolog pin, and have run into difficulty. While they both work individually, when put together they have the same issue as before where the reading does not change. I feel that this may be because they are both connecting to the anolog pin, even when one isn't supposed to be read. I plan to see if turning the multiplexer off and on with code will change this.
# 11/20/2023:
I have progressed past two FSRs and have set up the FSR matrix. Many of the issues from last entry are still occurring, and I haven't been able to identify the problems
# 12/5/2023:
While many of the issues from last entry are still unidentifiable, I have been able determine that it would be best for me to add resistors between the FSRM and the analog pin in order to acheive a tighter spread of numbers in order to represent accuracy
# 1/17/2024:
I was finally able to find some of the issues with the multiplexer and FSRM. Some of the issues included using control pins that refused to turn on and off and voltage issues. The control pin fix was easy as I was able to change the control pins that were used, but the voltage is more complex. There should only be current running through one output of the multiplexer at a time, but there is voltage across all outputs. I am unsure of how to fix this as the control pins have no power, but I belive the issue may be within the VCC and EN pins of the mulitplexers.
# 2/2/2024:
Due to upcoming deadlines, I made the decision to downsize my project and collect data about the capabilities of FSRs first and foremost. I am doing this by downsizing to a singular FSR and testing its accuracy, speed, and how the two correlate with each other. I am also using different resistors with the FSR in order to find the best resistance to measure the the output of the FSR.
# 2/4/2024:
I was able to test the general readings of the FSR with a resisor, and was able to create a graph with the results. The outputted resistance by the FSR follows a logarithmic function when testing with weights ranging from 20g to 1kg.