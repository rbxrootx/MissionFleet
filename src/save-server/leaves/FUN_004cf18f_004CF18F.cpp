// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF18F .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_004cf18f_004CF18F() {
    __asm {
        push ebp
        mov ebp, esp
        xor eax, eax
        ; Exact mapped bytes A0 D4 69 68 00: mov al, byte ptr [0x6869d4]
        __asm _emit 0xa0
        __asm _emit 0xd4
        __asm _emit 0x69
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x4cf1b9
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8A 0D D4 69 68 00: mov cl, byte ptr [0x6869d4]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x69
        __asm _emit 0x68
        __asm _emit 0x00
        or cl, 2
        ; Exact mapped bytes 88 0D D4 69 68 00: mov byte ptr [0x6869d4], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x69
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, 686998h
        ; Exact mapped bytes E8 A6 14 00 00: call 0x4d065f
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ret
    }
}
