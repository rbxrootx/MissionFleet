// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D958D .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_004d958d_004D958D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 1
        ; Exact mapped bytes 75 05: jne 0x4d95a2
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x4d95bf
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 0fh
        ; Exact mapped bytes 75 12: jne 0x4d95bd
        __asm _emit 0x75
        __asm _emit 0x12
        push 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 15 F0 BD 68 00: call dword ptr [0x68bdf0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x4d95bf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
