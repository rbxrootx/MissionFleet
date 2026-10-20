// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B480 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_5886b480_5886B480() {
    __asm {
        push ebp
        mov ebp, esp
        add esp, 0fffffd30h
        push ebx
        wait
        ; Exact mapped bytes D9 BD 5C FF FF FF: fnstcw word ptr [ebp - 0xa4]
        __asm _emit 0xd9
        __asm _emit 0xbd
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        wait
        ; Exact mapped bytes DB 7D AE: fstp xword ptr [ebp - 0x52]
        __asm _emit 0xdb
        __asm _emit 0x7d
        __asm _emit 0xae
        ; Exact mapped bytes DB 7D B8: fstp xword ptr [ebp - 0x48]
        __asm _emit 0xdb
        __asm _emit 0x7d
        __asm _emit 0xb8
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 10 8A 00 00: call 0x58873eb0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 0
        ; Exact mapped bytes DB 6D B8: fld xword ptr [ebp - 0x48]
        __asm _emit 0xdb
        __asm _emit 0x6d
        __asm _emit 0xb8
        ; Exact mapped bytes DB 6D AE: fld xword ptr [ebp - 0x52]
        __asm _emit 0xdb
        __asm _emit 0x6d
        __asm _emit 0xae
        pop edx
        pop ecx
        pop eax
        ; Exact mapped bytes 75 14: jne 0x5886b4c1
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes E8 23 CE 00 00: call 0x588782d5
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [ebp - 2c8h], 3
        ; Exact mapped bytes E8 A3 00 00 00: call 0x5886b561
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ret
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes DD 95 7A FF FF FF: fst qword ptr [ebp - 0x86]
        __asm _emit 0xdd
        __asm _emit 0x95
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes DD 55 82: fst qword ptr [ebp - 0x7e]
        __asm _emit 0xdd
        __asm _emit 0x55
        __asm _emit 0x82
        ; Exact mapped bytes EB DD: jmp 0x5886b4ad
        __asm _emit 0xeb
        __asm _emit 0xdd
    }
}
