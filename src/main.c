#include <zephyr/kernel.h>
#include "button.h"

static char *helper_button_evt_str(enum button_evt evt)
{
	switch (evt) {
	case BUTTON_EVT_PRESSED:
		return "Pressed";
	case BUTTON_EVT_RELEASED:
		return "Released";
	default:
		return "Unknown";
	}
}

static void button_event_handler(enum button_evt evt)
{
	printk("Button event: %s\n", helper_button_evt_str(evt));
}

void main(void)
{
	int err = -1;

	printk("Button Debouncing Sample!\n");

	err = button_init(button_event_handler);
	if (err) {
		printk("Button Init failed: %d\n", err);
		return;
	}

	printk("Init succeeded. Waiting for event...\n");
}
