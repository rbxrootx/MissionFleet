// Exact recovered repeated object/value leaf helper.
extern "C" __declspec(naked) void Recovered0053239E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp-4], ecx
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax+8]
    __asm mov dword ptr [edx], ecx
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [edx+8], eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
