extern "C" void Call004FC38E();
extern "C" void Call004FC5D1();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004FC2D9()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm cmp dword ptr [ebp + 8], 0
    __asm jne loc_004FC305
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ecx + 4], 0
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 8], 0
    __asm jmp loc_004FC31E
loc_004FC305:
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004FC5D1
    __asm add esp, 4
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004FC38E
loc_004FC31E:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
