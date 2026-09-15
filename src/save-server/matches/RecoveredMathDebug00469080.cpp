// Exact recovered math/debug structure leaf.
extern "C" __declspec(naked) void Recovered00469080()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [ebp-4], eax
    __asm scan:
    __asm mov ecx, dword ptr [ebp-4]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx]
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 2
    __asm mov dword ptr [ebp-4], eax
    __asm test edx, edx
    __asm je done_scan
    __asm jmp scan
    __asm done_scan:
    __asm mov eax, dword ptr [ebp-4]
    __asm sub eax, dword ptr [ebp+8]
    __asm sar eax, 1
    __asm sub eax, 1
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
