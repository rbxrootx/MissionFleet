// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D795 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0043d795_0043D795() {
    __asm {
        push ebp
        mov ebp, esp
        xor eax, eax
        ; Exact mapped bytes A0 70 32 5D 00: mov al, byte ptr [0x5d3270]
        __asm _emit 0xa0
        __asm _emit 0x70
        __asm _emit 0x32
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x43d7bf
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8A 0D 70 32 5D 00: mov cl, byte ptr [0x5d3270]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x32
        __asm _emit 0x5d
        __asm _emit 0x00
        or cl, 1
        ; Exact mapped bytes 88 0D 70 32 5D 00: mov byte ptr [0x5d3270], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x32
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, 5d3278h
        ; Exact mapped bytes E8 31 25 00 00: call 0x43fcf0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, esp
        ; Exact mapped bytes E8 1A B0 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x00
        pop ebp
        ret
    }
}
