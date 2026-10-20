// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58562150 .. +0x3AE bytes.
extern "C" __declspec(naked) void FUN_58562150_58562150() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 0F 87 8F 03 00 00: ja 0x585624f8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 8D 00 25 56 58: jmp dword ptr [ecx*4 + 0x58562500]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x25
        __asm _emit 0x56
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 1
        ; Exact mapped bytes E9 76 03 00 00: jmp 0x585624f8
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x5856224f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 7D 2F: jge 0x585621c4
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 34h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 09: jle 0x585621b3
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 06: jmp 0x585621b9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 34h], eax
        ; Exact mapped bytes EB 7C: jmp 0x58562240
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 3F: jne 0x5856220c
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 74 34: je 0x5856220a
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 7E 0B: jle 0x585621fb
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 06: jmp 0x58562201
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 34h], eax
        ; Exact mapped bytes EB 34: jmp 0x58562240
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 34h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 24h]
        cmp edx, dword ptr [ecx + 38h]
        ; Exact mapped bytes 7E 0B: jle 0x58562231
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 38h]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 06: jmp 0x58562237
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 0
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x58562342
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x58562342
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 7E 2E: jle 0x58562290
        __asm _emit 0x7e
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        sub eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 79 09: jns 0x5856227c
        __asm _emit 0x79
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 06: jmp 0x58562282
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx + 34h], eax
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x58562338
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 55: jne 0x585622ee
        __asm _emit 0x75
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 74 4A: je 0x585622ec
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 34h]
        sub edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 38h], -1
        shl eax, 1
        cdq
        mov ecx, 0ah
        idiv ecx
        cmp dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 7D 16: jge 0x585622dd
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 38h], -1
        shl eax, 1
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 06: jmp 0x585622e3
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax + 34h], ecx
        ; Exact mapped bytes EB 4A: jmp 0x58562338
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 34h]
        sub ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 38h], -1
        shl eax, 1
        cdq
        mov ecx, 0ah
        idiv ecx
        cmp dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 7D 16: jge 0x58562329
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 38h], -1
        shl eax, 1
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 06: jmp 0x5856232f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 FC FF FF: call 0x58562000
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A8 01 00 00: jmp 0x585624f8
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 87 7C 01 00 00: ja 0x585624ef
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 85 24 25 56 58: jmp dword ptr [eax*4 + 0x58562524]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x25
        __asm _emit 0x56
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 34h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x5856239b
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 06: jmp 0x585623a1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [edx + 34h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x585623c7
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 0
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x585624ef
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 34h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 38h]
        ; Exact mapped bytes 7E 0B: jle 0x585623f1
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 38h]
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes EB 06: jmp 0x585623f7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 34h]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 7D 0E: jge 0x5856241c
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 28h]
        cmp ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 7C 14: jl 0x58562430
        __asm _emit 0x7c
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 0
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x585624ef
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        sub eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 38h], -1
        shl eax, 1
        cdq
        mov ecx, 0ah
        idiv ecx
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 16: jge 0x58562470
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 38h], -1
        shl eax, 1
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 06: jmp 0x58562476
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 34h], 64h
        ; Exact mapped bytes 7F 14: jg 0x5856249c
        __asm _emit 0x7f
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], 0
        ; Exact mapped bytes EB 51: jmp 0x585624ef
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 38h]
        ; Exact mapped bytes 7E 0B: jle 0x585624c3
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [ebp - 50h], edx
        ; Exact mapped bytes EB 06: jmp 0x585624c9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 34h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 34h], 64h
        ; Exact mapped bytes 7C 14: jl 0x585624ef
        __asm _emit 0x7c
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 FB FF FF: call 0x58562000
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
