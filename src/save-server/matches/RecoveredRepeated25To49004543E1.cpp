extern "C" void Call0045443A();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004543E1()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0xc]
    __asm cmp ecx, dword ptr [ebp + 8]
    __asm jne loc_004543F5
    __asm jmp loc_00454406
loc_004543F5:
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov dword ptr [edx + 0xc], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0045443A
loc_00454406:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
