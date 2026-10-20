// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883133E .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_5883133e_5883133E() {
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
        mov eax, dword ptr [esp]
        mov edx, dword ptr [esp + 4]
        movzx ecx, word ptr [esp + 8]
        btr ecx, 0fh
        ; Exact mapped bytes 66 81 F9 FF 3F: cmp cx, 0x3fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0x3f
        ; Exact mapped bytes 72 36: jb 0x58831399
        __asm _emit 0x72
        __asm _emit 0x36
        test edx, edx
        ; Exact mapped bytes 79 55: jns 0x588313bc
        __asm _emit 0x79
        __asm _emit 0x55
        ; Exact mapped bytes 66 81 F9 3E 40: cmp cx, 0x403e
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x3e
        __asm _emit 0x40
        ; Exact mapped bytes 73 35: jae 0x588313a3
        __asm _emit 0x73
        __asm _emit 0x35
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
        cmp cl, 20h
        ; Exact mapped bytes 72 04: jb 0x58831383
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, edx
        xor edx, edx
        shrd eax, edx, cl
        shr edx, cl
        ; Exact mapped bytes 66 83 7C 24 08 00: cmp word ptr [esp + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 7D 07: jge 0x58831397
        __asm _emit 0x7d
        __asm _emit 0x07
        neg eax
        adc edx, 0
        neg edx
        leave
        ret
        ; Exact mapped bytes D9 FC: frndint
        __asm _emit 0xd9
        __asm _emit 0xfc
        ; Exact mapped bytes DD D8: fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0xd8
        xor eax, eax
        xor edx, edx
        leave
        ret
        lea ecx, [edx*2]
        ; Exact mapped bytes 77 10: ja 0x588313bc
        __asm _emit 0x77
        __asm _emit 0x10
        or ecx, eax
        ; Exact mapped bytes 75 0C: jne 0x588313bc
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 7C 24 08 00: cmp word ptr [esp + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 7D 04: jge 0x588313bc
        __asm _emit 0x7d
        __asm _emit 0x04
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
        mov edx, 80000000h
        xor eax, eax
        ret
    }
}
