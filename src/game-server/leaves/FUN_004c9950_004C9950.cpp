// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9950 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_004c9950_004C9950() {
    __asm {
        push ebp
        mov ebp, esp
        xor eax, eax
        ; Exact mapped bytes A0 B0 04 5E 00: mov al, byte ptr [0x5e04b0]
        __asm _emit 0xa0
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x4c9970
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8A 0D B0 04 5E 00: mov cl, byte ptr [0x5e04b0]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        or cl, 1
        ; Exact mapped bytes 88 0D B0 04 5E 00: mov byte ptr [0x5e04b0], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        ret
    }
}
