// Exact recovered login connection socket-event dispatcher at 0x00410700.
extern "C" unsigned char EventMap004107FC;
extern "C" void *EventJumpTable004107E8;
extern "C" void *ImportWSAAsyncSelect0043C5B4;
extern "C" void *ImportShutdown0043C5E0;
extern "C" void QueueSocketEvent0040FBC0();

extern "C" __declspec(naked) void Recovered00410700()
{
    __asm mov eax, dword ptr [esp+4]
    __asm push esi
    __asm dec eax
    __asm mov esi, ecx
    __asm cmp eax, 1fh
    __asm ja ignored
    __asm xor ecx, ecx
    __asm mov cl, byte ptr [eax+EventMap004107FC]
    __asm jmp dword ptr [ecx*4+EventJumpTable004107E8]

read_event:
    __asm mov edx, dword ptr [esi]
    __asm mov ecx, esi
    __asm call dword ptr [edx+8]
    __asm pop esi
    __asm ret 4

connect_event:
    __asm mov eax, dword ptr [esi+48h]
    __asm mov edx, dword ptr [esi+4]
    __asm push 23h
    __asm push 464h
    __asm mov ecx, dword ptr [eax+1ch]
    __asm push ecx
    __asm push edx
    __asm call dword ptr [ImportWSAAsyncSelect0043C5B4]
    __asm cmp eax, -1
    __asm jne connected
    __asm mov eax, dword ptr [esi+48h]
    __asm xor ecx, ecx
    __asm cmp eax, ecx
    __asm je ignored
    __asm cmp dword ptr [esi+0ach], ecx
    __asm je ignored
    __asm mov eax, dword ptr [esi+4]
    __asm push 1
    __asm push eax
    __asm mov dword ptr [esi+0ach], ecx
    __asm call dword ptr [ImportShutdown0043C5E0]
    __asm mov ecx, dword ptr [esi+4]
    __asm push 20h
    __asm push ecx
    __asm mov ecx, dword ptr [esi+48h]
    __asm call QueueSocketEvent0040FBC0

ignored:
    __asm xor eax, eax
    __asm pop esi
    __asm ret 4

connected:
    __asm mov edx, dword ptr [esi]
    __asm mov ecx, esi
    __asm mov dword ptr [esi+0ach], 1
    __asm call dword ptr [edx+0ch]
    __asm xor eax, eax
    __asm pop esi
    __asm ret 4

close_event:
    __asm mov eax, dword ptr [esi]
    __asm mov ecx, esi
    __asm call dword ptr [eax+10h]
    __asm mov eax, dword ptr [esi+48h]
    __asm mov edx, 1
    __asm mov ecx, dword ptr [eax+0bd0h]
    __asm add ecx, edx
    __asm mov dword ptr [eax+0bd0h], ecx
    __asm mov esi, dword ptr [eax+0bd4h]
    __asm mov ecx, 0
    __asm adc esi, ecx
    __asm mov dword ptr [eax+0bd4h], esi
    __asm mov esi, dword ptr [eax+0c08h]
    __asm add esi, edx
    __asm mov dword ptr [eax+0c08h], esi
    __asm mov edx, dword ptr [eax+0c0ch]
    __asm adc edx, ecx
    __asm pop esi
    __asm mov dword ptr [eax+0c0ch], edx
    __asm or eax, -1
    __asm ret 4
}
