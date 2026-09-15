// Exact recovered linker/container state helper.
extern "C" __declspec(naked) void Recovered0048C928()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0ch
    __asm mov dword ptr [ebp-0ch], 0cccccccch
    __asm mov dword ptr [ebp-8], 0cccccccch
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-8], ecx
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [eax+10h]
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+0ch]
    __asm mov ecx, dword ptr [eax+ecx*4]
    __asm mov dword ptr [ebp-4], ecx
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+4]
    __asm sub eax, 1
    __asm mov ecx, dword ptr [ebp-8]
    __asm cmp dword ptr [ecx+10h], eax
    __asm jne increment
    __asm mov dword ptr [ebp-0ch], 0
    __asm jmp store
    __asm increment:
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+10h]
    __asm add eax, 1
    __asm mov dword ptr [ebp-0ch], eax
    __asm store:
    __asm mov ecx, dword ptr [ebp-8]
    __asm mov edx, dword ptr [ebp-0ch]
    __asm mov dword ptr [ecx+10h], edx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
