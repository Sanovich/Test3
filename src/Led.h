/*
 * Led.h
 *
 *  Created on: 11 жовт. 2019 р.
 *      Author: Администратор
 */

#ifndef SRC_LED_H_
#define SRC_LED_H_

class Led {

 public:
	Led();
	int	ledPwm(int);
	virtual ~Led();
};

#endif /* SRC_LED_H_ */
