// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F12BD .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_004f12bd_004F12BD() {
    __asm {
        push ebp
        mov ebp, esp
        xor eax, eax
        ; Exact mapped bytes A0 BC E4 5D 00: mov al, byte ptr [0x5de4bc]
        __asm _emit 0xa0
        __asm _emit 0xbc
        __asm _emit 0xe4
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x4f12e7
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8A 0D BC E4 5D 00: mov cl, byte ptr [0x5de4bc]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xe4
        __asm _emit 0x5d
        __asm _emit 0x00
        or cl, 4
        ; Exact mapped bytes 88 0D BC E4 5D 00: mov byte ptr [0x5de4bc], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xe4
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, 5de440h
        ; Exact mapped bytes E8 48 14 00 00: call 0x4f272f
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ret
    }
}
