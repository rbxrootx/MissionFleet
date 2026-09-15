extern "C" void *Data00641568;
extern "C" void *Data00689060;
extern "C" void *Data0068B7E0;
extern "C" void *Data0068BF04;
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00485F00()
{
    __asm sub esp, 0x10
    __asm cmp word ptr [Data00689060], 0x35f
    __asm jb loc_00485F3E
    __asm mov eax, dword ptr [esp + 0x24]
    __asm test eax, eax
    __asm je loc_00485F3E
    __asm _emit 8dh
    __asm _emit 4ch
    __asm _emit 24h
    __asm _emit 00h
    __asm push 0x10
    __asm push ecx
    __asm push eax
    __asm call dword ptr [Data0068BF04]
    __asm _emit 8dh
    __asm _emit 4ch
    __asm _emit 24h
    __asm _emit 00h
    __asm push offset Data00641568
    __asm push ecx
    __asm call dword ptr [Data0068B7E0]
    __asm cmp eax, 1
    __asm sbb eax, eax
    __asm add esp, 0x10
    __asm inc eax
    __asm ret
loc_00485F3E:
    __asm mov eax, 1
    __asm add esp, 0x10
    __asm ret
}
