extern "C" void Call0040108C();
extern "C" void Call00464DF0();
extern "C" void Call004CC4A9();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00405DE0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x44
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm push ecx
    __asm lea edi, [ebp - 0x44]
    __asm mov ecx, 0x11
    __asm mov eax, 0xcccccccc
    __asm rep stosd
    __asm pop ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0040108C
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je loc_00405E1B
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call004CC4A9
    __asm add esp, 4
loc_00405E1B:
    __asm mov eax, dword ptr [ebp - 4]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm add esp, 0x44
    __asm cmp ebp, esp
    __asm call Call00464DF0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
