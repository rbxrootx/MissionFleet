extern "C" void Call0054AA07();
extern "C" void Call0054F97B();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered0054F9C7()
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
loc_0054F9E1:
    __asm lea eax, [ebp - 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call Call0054F97B
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_0054FA28
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp dword ptr [ecx + 0x20], 0
    __asm je loc_0054FA26
    __asm push 1
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [eax + 0x60]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call dword ptr [eax + 0xc8]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0054AA07
loc_0054FA26:
    __asm jmp loc_0054F9E1
loc_0054FA28:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
