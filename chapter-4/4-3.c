#include <stdio.h>

int main(void) {
	//...
	switch (type) {
	case '%':
		op2 = pop();
		if (op2 != 0.0) push(pop() % op2);
		else printf("error: zero division\n");
		break;
	}
	//...
}
