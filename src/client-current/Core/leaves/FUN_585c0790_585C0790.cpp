// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C0790 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_585c0790_585C0790() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 63a0h]
        add ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 79 0F: jns 0x585c07b4
        __asm _emit 0x79
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 63a0h], 0
        ; Exact mapped bytes EB 15: jmp 0x585c07c9
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 63a0h]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 63a0h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
