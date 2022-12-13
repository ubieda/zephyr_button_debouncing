#ifndef _BUTTON_H_
#define _BUTTON_H_

enum button_evt {
    BUTTON_EVT_PRESSED,
    BUTTON_EVT_RELEASED
};

typedef void (*button_event_handler_t)(enum button_evt evt);

int button_init(button_event_handler_t handler);

#endif /* _BUTTON_H_ */
