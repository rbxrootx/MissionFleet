extern "C" void Call0056A409();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00569A68()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call0056A409
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov dword ptr [edx], 0
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov dword ptr [eax + 8], 0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
