// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFFE0 .. +0x1C2 bytes.
extern "C" __declspec(naked) void FUN_587affe0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 8
        ; Exact mapped bytes 0F 87 B2 01 00 00: ja 0x587b019f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 587b01b4h]
        push esi
        ; Exact mapped bytes FF 24 95 A4 01 7B 58: jmp dword ptr [edx*4 + 0x587b01a4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x7b
        __asm _emit 0x58
        mov dword ptr [ecx + 58h], 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 79: jne 0x587b0085
        __asm _emit 0x75
        __asm _emit 0x79
        mov edx, dword ptr [ecx + 34h]
        test edx, edx
        ; Exact mapped bytes 7D 22: jge 0x587b0035
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ecx + 3ch]
        add eax, edx
        xor edx, edx
        test eax, eax
        setg dl
        mov dword ptr [ecx + 58h], 0
        dec edx
        and edx, eax
        mov dword ptr [ecx + 34h], edx
        ; Exact mapped bytes E8 BF FE FF FF: call 0x587afef0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 2D: jne 0x587b0064
        __asm _emit 0x75
        __asm _emit 0x2d
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x587b00eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 3ch]
        mov edx, dword ptr [ecx + 38h]
        cmp eax, edx
        ; Exact mapped bytes 0F 8E 99 00 00 00: jle 0x587b00e8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edx
        mov dword ptr [ecx + 34h], eax
        mov dword ptr [ecx + 58h], 0
        ; Exact mapped bytes E8 90 FE FF FF: call 0x587afef0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 3ch]
        add eax, edx
        mov edx, dword ptr [ecx + 38h]
        cmp eax, edx
        ; Exact mapped bytes 7E 78: jle 0x587b00e8
        __asm _emit 0x7e
        __asm _emit 0x78
        mov eax, edx
        mov dword ptr [ecx + 34h], eax
        mov dword ptr [ecx + 58h], 0
        ; Exact mapped bytes E8 6F FE FF FF: call 0x587afef0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 0B 01 00 00: jne 0x587b0199
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 34h]
        test eax, eax
        ; Exact mapped bytes 7E 21: jle 0x587b00b6
        __asm _emit 0x7e
        __asm _emit 0x21
        sub eax, dword ptr [ecx + 3ch]
        mov edx, 0
        sets dl
        mov dword ptr [ecx + 58h], 0
        dec edx
        and edx, eax
        mov dword ptr [ecx + 34h], edx
        ; Exact mapped bytes E8 3E FE FF FF: call 0x587afef0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x587b00c5
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 74 2D: je 0x587b00eb
        __asm _emit 0x74
        __asm _emit 0x2d
        mov esi, dword ptr [ecx + 3ch]
        neg esi
        ; Exact mapped bytes EB 05: jmp 0x587b00ca
        __asm _emit 0xeb
        __asm _emit 0x05
        sub eax, dword ptr [ecx + 3ch]
        mov esi, eax
        mov edx, dword ptr [ecx + 38h]
        neg edx
        add edx, edx
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp esi, eax
        ; Exact mapped bytes 7C 02: jl 0x587b00e8
        __asm _emit 0x7c
        __asm _emit 0x02
        mov eax, esi
        mov dword ptr [ecx + 34h], eax
        mov dword ptr [ecx + 58h], 0
        ; Exact mapped bytes E8 F9 FD FF FF: call 0x587afef0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 70h]
        dec eax
        cmp eax, 3
        ; Exact mapped bytes 0F 87 91 00 00 00: ja 0x587b0199
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 C0 01 7B 58: jmp dword ptr [eax*4 + 0x587b01c0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x7b
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 3ch]
        add eax, dword ptr [ecx + 34h]
        xor edx, edx
        test eax, eax
        setg dl
        dec edx
        and edx, eax
        mov eax, edx
        mov dword ptr [ecx + 34h], eax
        ; Exact mapped bytes 75 73: jne 0x587b0199
        __asm _emit 0x75
        __asm _emit 0x73
        ; Exact mapped bytes EB 63: jmp 0x587b018b
        __asm _emit 0xeb
        __asm _emit 0x63
        mov eax, dword ptr [ecx + 3ch]
        add eax, dword ptr [ecx + 34h]
        mov edx, dword ptr [ecx + 38h]
        cmp eax, edx
        ; Exact mapped bytes 7E 02: jle 0x587b0137
        __asm _emit 0x7e
        __asm _emit 0x02
        mov eax, edx
        cmp eax, edx
        mov dword ptr [ecx + 34h], eax
        ; Exact mapped bytes 7D 4D: jge 0x587b018b
        __asm _emit 0x7d
        __asm _emit 0x4d
        mov eax, dword ptr [ecx + 28h]
        cmp eax, dword ptr [ecx + 2ch]
        ; Exact mapped bytes EB 43: jmp 0x587b0189
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ecx + 38h]
        mov esi, dword ptr [ecx + 34h]
        sub esi, dword ptr [ecx + 3ch]
        neg edx
        add edx, edx
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp esi, eax
        ; Exact mapped bytes 7C 02: jl 0x587b016a
        __asm _emit 0x7c
        __asm _emit 0x02
        mov eax, esi
        cmp eax, 64h
        mov dword ptr [ecx + 34h], eax
        ; Exact mapped bytes 7F 27: jg 0x587b0199
        __asm _emit 0x7f
        __asm _emit 0x27
        ; Exact mapped bytes EB 17: jmp 0x587b018b
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 3ch]
        add eax, dword ptr [ecx + 34h]
        mov edx, dword ptr [ecx + 38h]
        cmp eax, edx
        ; Exact mapped bytes 7E 02: jle 0x587b0183
        __asm _emit 0x7e
        __asm _emit 0x02
        mov eax, edx
        mov dword ptr [ecx + 34h], eax
        cmp eax, 64h
        ; Exact mapped bytes 7C 0E: jl 0x587b0199
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov dword ptr [ecx + 70h], 0
        mov dword ptr [ecx + 8], 4
        ; Exact mapped bytes E8 52 FD FF FF: call 0x587afef0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
