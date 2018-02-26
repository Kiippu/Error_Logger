#include "Logger.h"
#include "FileSystemHelper.h"


int main() {

	logError("log error");

	logSystemError("system error");

	logAnimationError("Animation error");

	logStageError("Stage error");

	logStateError("state error");

	logComponentError("component error");

	return 0;
}