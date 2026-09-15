extern "C" void Call0054F97B();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0054FC7B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call dword ptr [edx + 0xbc]
    __asm mov dword ptr [ebp - 8], eax
loc_0054FC95:
    __asm lea eax, [ebp - 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call Call0054F97B
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_0054FCBE
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [eax + 0xe4]
    __asm jmp loc_0054FC95
loc_0054FCBE:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
