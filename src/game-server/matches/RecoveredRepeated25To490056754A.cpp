extern "C" void Call00566982();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0056754A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0xa8
    __asm mov dword ptr [ebp - 4], eax
    __asm push 1
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00566982
    __asm xor eax, eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
