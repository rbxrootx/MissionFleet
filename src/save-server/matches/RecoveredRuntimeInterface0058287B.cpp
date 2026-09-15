// Exact recovered runtime/interface helper.
extern "C" __declspec(naked) void Recovered0058287B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax], 0
    __asm je done
    __asm mov ecx, dword ptr [ebp-4]
    __asm cmp dword ptr [ecx+4], 0
    __asm je clear
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [edx]
    __asm push eax
    __asm call dword ptr [ecx+8]
    __asm clear:
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx], 0
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
