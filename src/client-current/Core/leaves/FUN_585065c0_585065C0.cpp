// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585065C0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_585065c0_585065C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        xor edx, edx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], edx
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
