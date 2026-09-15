// Original x86 ABI: ECX holds the window; EAX returns the virtual handler result.
// Retrieve thread state, then dispatch its current message through vtable slot 0xa8.
extern "C" char Data005DE7B4;
extern "C" void Target00542440();
extern "C" __declspec(naked) long Recovered004F1872()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], ecx
    __asm mov ecx, offset Data005DE7B4
    __asm call Target00542440
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
