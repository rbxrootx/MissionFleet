// Original x86 ABI: ECX holds the window; EAX returns the virtual handler result.
// Retrieve thread state, then dispatch its current message through vtable slot 0xa8.
extern "C" char Data00686D24;
extern "C" void Target0053D630();
extern "C" __declspec(naked) long Recovered004CF7A2()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], ecx
    __asm mov ecx, offset Data00686D24
    __asm call Target0053D630
    __asm mov dword ptr [ebp-4], eax
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+40h]
    __asm push ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx+3ch]
    __asm push eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+38h]
    __asm push edx
    __asm mov eax, dword ptr [ebp-8]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp-8]
    __asm call dword ptr [edx+0a8h]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
