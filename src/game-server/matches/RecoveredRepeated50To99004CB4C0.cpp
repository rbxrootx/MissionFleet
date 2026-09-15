extern "C" void *Data0058EDD0;
extern "C" void *Data005E0500;
extern "C" void *Data005E2464;
extern "C" void *Data005E25C4;
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004CB4C0()
{
    __asm sub esp, 0x10
    __asm cmp word ptr [Data005E0500], 0x35f
    __asm jb loc_004CB4FE
    __asm mov eax, dword ptr [esp + 0x24]
    __asm test eax, eax
    __asm je loc_004CB4FE
    __asm _emit 8dh
    __asm _emit 4ch
    __asm _emit 24h
    __asm _emit 00h
    __asm push 0x10
    __asm push ecx
    __asm push eax
    __asm call dword ptr [Data005E25C4]
    __asm _emit 8dh
    __asm _emit 4ch
    __asm _emit 24h
    __asm _emit 00h
    __asm push offset Data0058EDD0
    __asm push ecx
    __asm call dword ptr [Data005E2464]
    __asm cmp eax, 1
    __asm sbb eax, eax
    __asm add esp, 0x10
    __asm inc eax
    __asm ret
loc_004CB4FE:
    __asm mov eax, 1
    __asm add esp, 0x10
    __asm ret
}
