// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004012A0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_004012a0_004012A0() {
    __asm {
        push ebp
        mov ebp, esp
        xor eax, eax
        ; Exact mapped bytes A0 09 F1 5D 00: mov al, byte ptr [0x5df109]
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x4012c0
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8A 0D 09 F1 5D 00: mov cl, byte ptr [0x5df109]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x09
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        or cl, 1
        ; Exact mapped bytes 88 0D 09 F1 5D 00: mov byte ptr [0x5df109], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x09
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        pop ebp
        ret
    }
}
