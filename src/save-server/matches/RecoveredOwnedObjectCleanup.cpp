// Original x86 ABI: ECX is an owning wrapper whose first member is a pointer.
// Call the pointee's first virtual slot with deletion flag 1 if it is non-null.
// Preserve both original null checks; the stored pointer is not cleared.
extern "C" __declspec(naked) void Recovered00543C98()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 14h
    __asm mov dword ptr [ebp-0ch], ecx
    __asm mov eax, dword ptr [ebp-0ch]
    __asm cmp dword ptr [eax], 0
    __asm je done
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp-8], edx
    __asm mov eax, dword ptr [ebp-8]
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm je null_object
    __asm push 1
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ebp-10h], ecx
    __asm mov edx, dword ptr [ebp-10h]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp-10h]
    __asm call dword ptr [eax]
    __asm mov dword ptr [ebp-14h], eax
    __asm jmp done
    __asm null_object:
    __asm mov dword ptr [ebp-14h], 0
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
