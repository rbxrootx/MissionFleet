// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883181F .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5883181f_5883181F() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x5883182f
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes C6 05 EC 66 96 58 01: mov byte ptr [0x589666ec], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x66
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes E8 C7 09 00 00: call 0x588321fb
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C6 D9 01 00: call 0x5884f1ff
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 04: jne 0x58831841
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        pop ebp
        ret
        ; Exact mapped bytes E8 7A 45 03 00: call 0x58865dc0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 0A: jne 0x58831854
        __asm _emit 0x75
        __asm _emit 0x0a
        push 0
        ; Exact mapped bytes E8 E0 D9 01 00: call 0x5884f231
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB E9: jmp 0x5883183d
        __asm _emit 0xeb
        __asm _emit 0xe9
        mov al, 1
        pop ebp
        ret
    }
}
