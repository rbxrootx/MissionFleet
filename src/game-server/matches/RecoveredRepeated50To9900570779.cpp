extern "C" void Call0057011B();
extern "C" void Call0057020F();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00570779()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 4], 0
    __asm je loc_00570790
    __asm mov eax, 1
    __asm jmp loc_005707B6
loc_00570790:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0057020F
    __asm test eax, eax
    __asm jne loc_005707B4
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0057011B
    __asm cmp dword ptr [eax + 0xac], 0
    __asm je loc_005707B4
    __asm mov eax, 1
    __asm jmp loc_005707B6
loc_005707B4:
    __asm xor eax, eax
loc_005707B6:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
