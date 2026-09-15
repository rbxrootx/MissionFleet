// Exact recovered repeated access/value leaf helper.
extern "C" __declspec(naked) void Recovered0049A3D0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm imul eax, eax, 48
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+16]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ecx+8]
    __asm add ecx, dword ptr [edx+eax+4]
    __asm mov eax, ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
