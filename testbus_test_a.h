#ifndef TESTBUS_TEST_A_H
#define TESTBUS_TEST_A_H

#include <stdint.h>

#include "testbus.h"

extern uint16_t testbus_buffer[][8];

struct testbus_subscriptions_t {
    struct CAN_Test_Message_t CAN_Test_Message;
};

int testbus_init(enum ecan_speed, enum ecan_mode);

int testbus_check_subscriptions(struct testbus_subscriptions_t *);

int testbus_publish_CAN_Test_Message(struct CAN_Test_Message_t *);

#endif // TESTBUS_TEST_A_H