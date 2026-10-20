// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F43686 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58f43686_58F43686() {
    __asm {
        ; Exact mapped bytes 0F 84 0E 00 00 00: je 0x58f4369a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5a4dh
        ; Exact mapped bytes 66 39 07: cmp word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x07
        ; Exact mapped bytes 0F 84 42 EF DB FF: je 0x58d025dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0xef
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, eax
        pop edi
        mov esp, ebp
        not ebp
        pop ebp
        ; Exact mapped bytes E9 4C 32 BD FF: jmp 0x58b168f3
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x32
        __asm _emit 0xbd
        __asm _emit 0xff
        dec eax
        ; Exact mapped bytes E9 D8 0F C2 FF: jmp 0x58b64685
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0xc2
        __asm _emit 0xff
        ; Exact mapped bytes 66 C1 F1 4A: sal cx, 0x4a
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xf1
        __asm _emit 0x4a
        neg al
        ; Exact mapped bytes 66 D3 C1: rol cx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xc1
        sar ch, 10h
    }
}
