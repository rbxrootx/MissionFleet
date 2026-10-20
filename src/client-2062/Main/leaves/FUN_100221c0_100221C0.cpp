// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100221C0 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_100221c0_100221C0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, 91a2b3c5h
        push edi
        imul esi
        add edx, esi
        xor edi, edi
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 3
        ; Exact mapped bytes 0F 87 8E 00 00 00: ja 0x10022272
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 95 D0 22 02 10: jmp dword ptr [edx*4 + 0x100222d0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 10h]
        mov eax, 91a2b3c5h
        imul ecx
        add edx, ecx
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 3
        ; Exact mapped bytes 77 6B: ja 0x10022272
        __asm _emit 0x77
        __asm _emit 0x6b
        ; Exact mapped bytes FF 24 95 E0 22 02 10: jmp dword ptr [edx*4 + 0x100222e0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 10h]
        mov eax, 91a2b3c5h
        imul ecx
        add edx, ecx
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes 78 4B: js 0x10022272
        __asm _emit 0x78
        __asm _emit 0x4b
        cmp edx, 2
        ; Exact mapped bytes 7E 42: jle 0x1002226e
        __asm _emit 0x7e
        __asm _emit 0x42
        cmp edx, 3
        ; Exact mapped bytes 75 41: jne 0x10022272
        __asm _emit 0x75
        __asm _emit 0x41
        lea eax, [esi + 708h]
        cmp eax, ecx
        ; Exact mapped bytes 7F 33: jg 0x1002226e
        __asm _emit 0x7f
        __asm _emit 0x33
        ; Exact mapped bytes 7D 55: jge 0x10022292
        __asm _emit 0x7d
        __asm _emit 0x55
        sub ecx, esi
        sub ecx, 0e10h
        mov edi, ecx
        mov eax, edi
        pop edi
        pop esi
        ret
        mov ecx, dword ptr [esp + 10h]
        mov eax, 91a2b3c5h
        imul ecx
        add edx, ecx
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes 74 12: je 0x10022277
        __asm _emit 0x74
        __asm _emit 0x12
        test edx, edx
        ; Exact mapped bytes 7E 09: jle 0x10022272
        __asm _emit 0x7e
        __asm _emit 0x09
        cmp edx, 3
        ; Exact mapped bytes 7F 04: jg 0x10022272
        __asm _emit 0x7f
        __asm _emit 0x04
        sub ecx, esi
        mov edi, ecx
        mov eax, edi
        pop edi
        pop esi
        ret
        lea eax, [esi - 708h]
        cmp eax, ecx
        ; Exact mapped bytes 7E 0F: jle 0x10022290
        __asm _emit 0x7e
        __asm _emit 0x0f
        sub ecx, esi
        add ecx, 0e10h
        mov edi, ecx
        mov eax, edi
        pop edi
        pop esi
        ret
        ; Exact mapped bytes 7C DC: jl 0x1002226e
        __asm _emit 0x7c
        __asm _emit 0xdc
        mov edi, 708h
        mov eax, edi
        pop edi
        pop esi
        ret
        mov ecx, dword ptr [esp + 10h]
        mov eax, 91a2b3c5h
        imul ecx
        add edx, ecx
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 3
        ; Exact mapped bytes 77 BA: ja 0x10022272
        __asm _emit 0x77
        __asm _emit 0xba
        ; Exact mapped bytes FF 24 95 F0 22 02 10: jmp dword ptr [edx*4 + 0x100222f0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x10
        sub ecx, esi
        add ecx, 0e10h
        mov edi, ecx
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
