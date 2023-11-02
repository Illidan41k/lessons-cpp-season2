#pragma once

static int globalIntegerValue{55};

extern int nextUserId;

void CheckGlobalVar();

int GetUniqueIdForNextUser();