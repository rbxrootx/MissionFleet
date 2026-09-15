extern "C" void Call0054AD56();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0054ADAA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 8], 0
    __asm je loc_0054ADD5
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 8]
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 8]
    __asm mov edx, dword ptr [eax]
    __asm push ecx
    __asm call dword ptr [edx]
    __asm jmp loc_0054ADE5
loc_0054ADD5:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0054AD56
loc_0054ADE5:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
