// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588508B7 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_588508b7_588508B7() {
    __asm {
        push esi
        push edi
        mov edi, 589695c4h
        xor esi, esi
        push 0
        push 0fa0h
        push edi
        ; Exact mapped bytes E8 2F 02 00 00: call 0x58850afc
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x588508e9
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes FF 05 DC 95 96 58: inc dword ptr [0x589695dc]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        add esi, 18h
        add edi, 18h
        cmp esi, 18h
        ; Exact mapped bytes 72 DB: jb 0x588508c0
        __asm _emit 0x72
        __asm _emit 0xdb
        mov al, 1
        ; Exact mapped bytes EB 07: jmp 0x588508f0
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E8 05 00 00 00: call 0x588508f3
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor al, al
        pop edi
        pop esi
        ret
    }
}
