//*****************************************************************************
// main.c
// Author: jkrachey@wisc.edu
// Evan Wildenberg
// Deen Majeed
//*****************************************************************************
#include "lab_buttons.h"

// TODO add config parameters

#define LOCAL_ID     51
#define REMOTE_ID    52


/******************************************************************************
 * Global Variables
 *****************************************************************************/


//*****************************************************************************
//*****************************************************************************
int 
main(void)
{
	// TODO initialize screen
	// TODO initialize positions
  
  while(1)
  {
    // TODO read joystick and update postition

		// TODO read network and update opponent position
		
		// Update ball position if master
		
		// Send ball position to network if master
		
		// Read ball position from network if slave
		
		// Update ball position if slave
		
		// TODO check for ball collision if master
		
		// Check for scoring if master
		
		// Send score information if master, read if slave
		
		// Write updated score and reset if necessary
		
		// Delay after reseting
  }
}


