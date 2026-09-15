// Exact recovered parser/runtime helper.
extern "C" __declspec(naked) void Recovered004ED24B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push esi
    __asm mov dword ptr [ebp-8], ecx
    __asm mov dword ptr [ebp-4], 0
    __asm jmp check
    __asm iterate:
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 1
    __asm mov dword ptr [ebp-4], eax
    __asm check:
    __asm cmp dword ptr [ebp-4], 5
    __asm jge totals
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esi, dword ptr [ebp-8]
    __asm mov eax, dword ptr [esi+eax*4+4]
    __asm mov dword ptr [edx+ecx*4+52], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esi, dword ptr [ebp-8]
    __asm mov eax, dword ptr [esi+eax*4+24]
    __asm mov dword ptr [edx+ecx*4+72], eax
    __asm jmp iterate
    __asm totals:
    __asm mov ecx, dword ptr [ebp-8]
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+44]
    __asm mov dword ptr [ecx+92], eax
    __asm mov ecx, dword ptr [ebp-8]
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+48]
    __asm mov dword ptr [ecx+96], eax
    __asm pop esi
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
