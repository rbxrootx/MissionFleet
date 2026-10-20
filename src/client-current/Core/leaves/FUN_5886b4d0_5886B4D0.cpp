// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B4D0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5886b4d0_5886B4D0() {
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
        ; Exact mapped bytes DB 7D AE: fstp xword ptr [ebp - 0x52]
        __asm _emit 0xdb
        __asm _emit 0x7d
        __asm _emit 0xae
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 C4 89 00 00: call 0x58873eb0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 0
        ; Exact mapped bytes DB 6D AE: fld xword ptr [ebp - 0x52]
        __asm _emit 0xdb
        __asm _emit 0x6d
        __asm _emit 0xae
        pop edx
        pop ecx
        pop eax
        ; Exact mapped bytes 75 1B: jne 0x5886b511
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 65 CD 00 00: call 0x58878260
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [ebp - 2c8h], 1
        and byte ptr [ebp - 2c8h], 0fdh
        ; Exact mapped bytes E8 53 00 00 00: call 0x5886b561
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ret
        ; Exact mapped bytes DD 95 7A FF FF FF: fst qword ptr [ebp - 0x86]
        __asm _emit 0xdd
        __asm _emit 0x95
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB DD: jmp 0x5886b4f6
        __asm _emit 0xeb
        __asm _emit 0xdd
    }
}
