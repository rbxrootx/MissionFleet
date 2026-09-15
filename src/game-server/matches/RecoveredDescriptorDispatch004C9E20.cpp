// Exact recovered descriptor/bitmask dispatch sequence.
extern "C" void Dispatch004C9CE0();
extern "C" __declspec(naked) void Recovered004C9E20()
{
    __asm mov ecx, dword ptr [esp+8]
    __asm sub esp, 16
    __asm _emit 0x8d
    __asm _emit 0x54
    __asm _emit 0x24
    __asm _emit 0x00
    __asm push esi
    __asm push edi
    __asm mov eax, dword ptr [ecx]
    __asm mov esi, dword ptr [ecx+4]
    __asm mov edi, dword ptr [ecx+8]
    __asm mov dword ptr [edx], eax
    __asm mov eax, dword ptr [ecx+12]
    __asm mov dword ptr [edx+4], esi
    __asm mov dword ptr [edx+8], edi
    __asm mov di, word ptr [esp+36]
    __asm mov dword ptr [edx+12], eax
    __asm mov ax, di
    __asm lea edx, [esp+8]
    __asm and ax, 15
    __asm mov esi, dword ptr [esp+28]
    __asm push eax
    __asm push 1
    __asm push 7
    __asm push edx
    __asm push esi
    __asm call Dispatch004C9CE0
    __asm dec dword ptr [esp+28]
    __asm dec dword ptr [esp+32]
    __asm lea ecx, [esp+28]
    __asm inc dword ptr [esp+36]
    __asm inc dword ptr [esp+40]
    __asm add esp, 20
    __asm push edi
    __asm push 0
    __asm push 2
    __asm push ecx
    __asm push esi
    __asm call Dispatch004C9CE0
    __asm add esp, 20
    __asm pop edi
    __asm pop esi
    __asm add esp, 16
    __asm ret
}
