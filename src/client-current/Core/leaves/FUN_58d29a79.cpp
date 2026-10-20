// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D29A79 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_58d29a79() {
    __asm {
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes E9 90 54 1F 00: jmp 0x58f1ef12
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 4C 25 00: movzx cx, byte ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x25
        __asm _emit 0x00
        ; Exact mapped bytes 8A 45 02: mov al, byte ptr [ebp + 2]
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B DA: cmp bx, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xda
        ; Exact mapped bytes 8D AD FE FF FF FF: lea ebp, [ebp - 2]
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EC D5 E1 FF: jmp 0x58b47085
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xd5
        __asm _emit 0xe1
        __asm _emit 0xff
    }
}
