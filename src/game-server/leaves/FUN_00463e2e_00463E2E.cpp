// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00463E2E .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00463e2e_00463E2E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        imul ecx, ecx, 9
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 124h], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 124h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 124h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
