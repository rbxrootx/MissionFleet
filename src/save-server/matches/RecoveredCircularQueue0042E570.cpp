// Exact recovered circular-queue operation.
extern "C" __declspec(naked) void Recovered0042E570()
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
    __asm mov dword ptr [ebp-4], ecx
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [edx+10h]
    __asm cmp ecx, dword ptr [eax+0ch]
    __asm je select
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+4]
    __asm sub eax, 1
    __asm mov ecx, dword ptr [ebp-8]
    __asm cmp dword ptr [ecx+10h], eax
    __asm jne increment
    __asm mov dword ptr [ebp-0ch], 0
    __asm jmp update
    __asm increment:
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+10h]
    __asm add eax, 1
    __asm mov dword ptr [ebp-0ch], eax
    __asm update:
    __asm mov ecx, dword ptr [ebp-8]
    __asm mov edx, dword ptr [ebp-0ch]
    __asm mov dword ptr [ecx+10h], edx
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [eax+8]
    __asm sub ecx, 1
    __asm mov edx, dword ptr [ebp-8]
    __asm mov dword ptr [edx+8], ecx
    __asm select:
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [eax+14h]
    __asm mov edx, dword ptr [ebp-4]
    __asm lea eax, [ecx+edx*8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
