extern "C" void Call004DB14E();
extern "C" void Call004DB391();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004DB099()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm cmp dword ptr [ebp + 8], 0
    __asm jne loc_004DB0C5
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ecx + 4], 0
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 8], 0
    __asm jmp loc_004DB0DE
loc_004DB0C5:
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004DB391
    __asm add esp, 4
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004DB14E
loc_004DB0DE:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
