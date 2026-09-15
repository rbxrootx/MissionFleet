// Exact recovered OLE/math dispatch helper.
extern "C" __declspec(naked) void Recovered0057B4E6()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm sub eax, 112
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp+20]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+16]
    __asm push edx
    __asm mov eax, dword ptr [ebp+12]
    __asm push eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 104
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx+104]
    __asm push ecx
    __asm call dword ptr [eax+28]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 16
}
