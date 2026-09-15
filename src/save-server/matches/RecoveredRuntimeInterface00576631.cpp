// Exact recovered runtime/interface helper.
extern "C" __declspec(naked) void Recovered00576631()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm sub eax, 216
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp+12]
    __asm push ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp-4]
    __asm call dword ptr [eax+216]
    __asm mov ecx, dword ptr [ebp+20]
    __asm mov dword ptr [ecx], eax
    __asm mov edx, dword ptr [ebp+20]
    __asm mov eax, dword ptr [edx]
    __asm neg eax
    __asm sbb eax, eax
    __asm and eax, 7fffbffbh
    __asm add eax, 80004005h
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 16
}
