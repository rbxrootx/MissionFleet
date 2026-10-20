// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588312B1 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_588312b1_588312B1() {
    __asm {
        push ebp
        mov ebp, esp
        add esp, -10h
        and esp, 0fffffff0h
        ; Exact mapped bytes D9 C0: fld st(0)
        __asm _emit 0xd9
        __asm _emit 0xc0
        ; Exact mapped bytes DB 3C 24: fstp xword ptr [esp]
        __asm _emit 0xdb
        __asm _emit 0x3c
        __asm _emit 0x24
        mov eax, dword ptr [esp + 4]
        movzx ecx, word ptr [esp + 8]
        btr ecx, 0fh
        sbb edx, edx
        ; Exact mapped bytes 66 81 F9 FF 3F: cmp cx, 0x3fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0x3f
        ; Exact mapped bytes 72 1F: jb 0x588312f4
        __asm _emit 0x72
        __asm _emit 0x1f
        test eax, eax
        ; Exact mapped bytes 79 36: jns 0x5883130f
        __asm _emit 0x79
        __asm _emit 0x36
        ; Exact mapped bytes 66 81 F9 1E 40: cmp cx, 0x401e
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x1e
        __asm _emit 0x40
        ; Exact mapped bytes 73 1C: jae 0x588312fc
        __asm _emit 0x73
        __asm _emit 0x1c
        ; Exact mapped bytes 66 F7 D9: neg cx
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xd9
        ; Exact mapped bytes 66 81 C1 3E 40: add cx, 0x403e
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x3e
        __asm _emit 0x40
        ; Exact mapped bytes D9 FC: frndint
        __asm _emit 0xd9
        __asm _emit 0xfc
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        shr eax, cl
        xor eax, edx
        sub eax, edx
        leave
        ret
        ; Exact mapped bytes D9 FC: frndint
        __asm _emit 0xd9
        __asm _emit 0xfc
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        xor eax, eax
        leave
        ret
        ; Exact mapped bytes 77 11: ja 0x5883130f
        __asm _emit 0x77
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 79 0D: jns 0x5883130f
        __asm _emit 0x79
        __asm _emit 0x0d
        cmp eax, 80000000h
        ; Exact mapped bytes 75 06: jne 0x5883130f
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes D9 FC: frndint
        __asm _emit 0xd9
        __asm _emit 0xfc
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        leave
        ret
        ; Exact mapped bytes D8 1D 78 1C 8C 58: fcomp dword ptr [0x588c1c78]
        __asm _emit 0xd8
        __asm _emit 0x1d
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x8c
        __asm _emit 0x58
        leave
        mov eax, 80000000h
        ret
    }
}
