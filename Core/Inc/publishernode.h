/*
 * publishernode.h
 *
 *  Created on: Feb 19, 2024
 *      Author: a
 */

#ifndef INC_PUBLISHERNODE_H_
#define INC_PUBLISHERNODE_H_


#ifdef __cplusplus
 extern "C" {

#endif

 extern volatile int16_t received_value;
 extern volatile int16_t position1;
 extern volatile int16_t position2;
 extern volatile int16_t position3;
 extern volatile int16_t position4;
 extern volatile uint32_t c_millis;
 extern int16_t speeds[4];
 void setup(void);
 void loop(void);

#ifdef __cplusplus
}
#endif

#endif /* INC_PUBLISHERNODE_H_ */
