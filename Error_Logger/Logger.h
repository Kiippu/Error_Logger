
#pragma once
#ifndef LOGGER_H

#include "FileSystemHelper.h"
#include <string>


	inline void logError(std::string txt) {
		FileSystemHelper::getInstance().createFolder("./logging");
		FileSystemHelper::getInstance().createFile("./logging", "general", "txt");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "general", "txt", txt, false, "GENERAL");
	};

	void logEngineError(std::string txt) {
		FileSystemHelper::getInstance().createFolder("./logging");
		FileSystemHelper::getInstance().createFile("./logging", "engine", "log");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "engine", "log", txt, true, "ENGINE_ERROR");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "general", "log", txt, true, "ENGINE_ERROR");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "system", "log", txt, true, "ENGINE_ERROR");
	};

	void logSystemError(std::string txt) {
		FileSystemHelper::getInstance().createFolder("./logging");
		FileSystemHelper::getInstance().createFile("./logging", "system", "log");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "system", "log", txt, true, "SYSTEM_ERROR");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "general", "log", txt, true, "SYSTEM_ERROR");
	};

	void logAnimationError(std::string txt) {
		FileSystemHelper::getInstance().createFolder("./logging");
		FileSystemHelper::getInstance().createFile("./logging", "animation", "log");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "animation", "log", txt, true, "ANIMATION_ERROR");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "general", "log", txt, true, "ANIMATION_ERROR");
	};

	void logStageError(std::string txt) {
		FileSystemHelper::getInstance().createFolder("./logging");
		FileSystemHelper::getInstance().createFile("./logging", "stage", "log");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "stage", "log", txt, true, "STAGE_ERROR");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "general", "log", txt, true, "STAGE_ERROR");
	};

	void logComponentError(std::string txt) {
		FileSystemHelper::getInstance().createFolder("./logging");
		FileSystemHelper::getInstance().createFile("./logging", "component", "log");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "component", "log", txt, true, "COMPONENT_ERROR");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "general", "log", txt, true, "COMPONENT_ERROR");
	};

	void logStateError(std::string txt) {
		FileSystemHelper::getInstance().createFolder("./logging");
		FileSystemHelper::getInstance().createFile("./logging", "state", "log");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "state", "log", txt, true, "STATE_ERROR");
		FileSystemHelper::getInstance().writeToFileAppend("./logging", "general", "log", txt, true, "STATE_ERROR");
	};




#endif // !LOGGER_H
