/*
 * Led.h
 *
 *  Created on: 11 ����. 2019 �.
 *      Author: �������������
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
