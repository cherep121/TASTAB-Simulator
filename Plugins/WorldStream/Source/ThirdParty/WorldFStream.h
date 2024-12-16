#pragma once

class WorldFStream
{
public:
	WorldFStream();
	bool Init(char* buf, unsigned __int32 bufSize);
	bool InitProcess(char* buf);
	void SetPos(unsigned __int32 posXNow, unsigned __int32 posYNow, char** dataToSwap);
	bool LoadProcess(bool* dataDeltaInfo);
	~WorldFStream();
	unsigned char* segments[4][4];
	bool segmentsToLoad[4][4];
	unsigned __int32 posXLoad;
	unsigned __int32 posYLoad;
	unsigned char* segmentsToSave[4][4];
	unsigned __int32 posXSave;
	unsigned __int32 posYSave;

private:
	unsigned char rawSegments[4096];
	char saveSlot[288];
};