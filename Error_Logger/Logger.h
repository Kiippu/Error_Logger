
#pragma once
#ifndef LOGGER_H

#include "FileSystemHelper.h"
#include <string>


	inline void logError(std::string txt) {
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "general", "txt", txt, false, "GENERAL");
	};

	void logEngineError(std::string txt) {
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "engine", "txt", txt, true, "ENGINE_ERROR");
		logError(txt);
	};

	void logSystemError(std::string txt) {
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "system", "txt", txt, true, "SYSTEM_ERROR");
		logError(txt);
		logEngineError(txt);
	};

	void logSpriteError(std::string txt) {
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "animation", "txt", txt, true, "ANIMATION_ERROR");
		logError(txt);
	};

	void logStageError(std::string txt) {
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "stage", "txt", txt, true, "STAGE_ERROR");
		logError(txt);
	};

	void logComponentError(std::string txt) {
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "component", "txt", txt, true, "COMPONENT_ERROR");
		logError(txt);
	};

	void logStateError(std::string txt) {
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "state", "txt", txt, true, "STATE_ERROR");
		logError(txt);
	};




#endif // !LOGGER_H
