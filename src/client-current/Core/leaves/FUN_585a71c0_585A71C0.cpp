// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A71C0 .. +0x448 bytes.
extern "C" __declspec(naked) void FUN_585a71c0_585A71C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0e24h], 0
        ; Exact mapped bytes 75 07: jne 0x585a71dd
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 24 04 00 00: jmp 0x585a7601
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 0E: je 0x585a720f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 88 22 0E 00 00: movsx ecx, word ptr [eax + 0xe22]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 7D 07: jge 0x585a7216
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EB 03 00 00: jmp 0x585a7601
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF B2 22 0E 00 00: movsx esi, word ptr [edx + 0xe22]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xb2
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 78 D7 ED FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd7
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, ax
        cmp esi, eax
        ; Exact mapped bytes 74 07: je 0x585a7236
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CB 03 00 00: jmp 0x585a7601
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 14: jne 0x585a7250
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0e24h], 0
        xor eax, eax
        ; Exact mapped bytes E9 B1 03 00 00: jmp 0x585a7601
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585a7262
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D 71 03 00 00: jge 0x585a75dd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BF 5D EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0e28h], eax
        ; Exact mapped bytes 0F 85 40 03 00 00: jne 0x585a75d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 0e28h], 0
        ; Exact mapped bytes 0F 84 2A 03 00 00: je 0x585a75d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0e28h]
        movzx edx, byte ptr [ecx]
        cmp edx, 0dh
        ; Exact mapped bytes 0F 85 EF 01 00 00: jne 0x585a74b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6A 5D EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0e28h], eax
        ; Exact mapped bytes 74 1D: je 0x585a7302
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 46 5D EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 A2 01 00 00: jne 0x585a74a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F7 5C EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x5c
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov ecx, 2
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 8]
        lea ecx, [esi + ecx*4 + 0ea8h]
        ; Exact mapped bytes 0F BF 14 11: movsx edx, word ptr [ecx + edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x11
        sub edx, eax
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x585a738b
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        test ecx, ecx
        ; Exact mapped bytes 7E 15: jle 0x585a7363
        __asm _emit 0x7e
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0e28h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 13: jmp 0x585a7376
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0e28h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        imul ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 1ch], 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6E 89 F0 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x89
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 8]
        lea ecx, [esi + ecx*8 + 0f28h]
        cmp dword ptr [ecx + edx], eax
        ; Exact mapped bytes 74 1F: je 0x585a73db
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 3D 89 F0 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x89
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x585a749b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 0f28h]
        mov edx, 4
        shl edx, 0
        cmp dword ptr [ecx + edx], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x585a7499
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 38h], ecx
        push 1
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 FF 5B EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5b
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 8]
        lea edx, [esi + edx*4 + 0ea8h]
        ; Exact mapped bytes 0F BF 0C 0A: movsx ecx, word ptr [edx + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x0a
        sub ecx, eax
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        test edx, edx
        ; Exact mapped bytes 74 5B: je 0x585a7499
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        test eax, eax
        ; Exact mapped bytes 7E 20: jle 0x585a7466
        __asm _emit 0x7e
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 0f28h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 1E: jmp 0x585a7484
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 0f28h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        imul ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x585a74a2
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 5F 01 00 00: jmp 0x585a7601
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x585a74ab
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x585a7601
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 22 01 00 00: jmp 0x585a75d2
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585a74c2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D 06 01 00 00: jge 0x585a75d2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 2B 88 F0 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx*8 + 0f28h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes 74 21: je 0x585a751b
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 FD 87 F0 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x585a75c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 0f28h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x585a75c7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C2 5A EE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5a
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx*4 + 0ea8h]
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 0C 51: movsx ecx, word ptr [ecx + edx*2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x51
        sub ecx, eax
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        test edx, edx
        ; Exact mapped bytes 74 51: je 0x585a75c7
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        test eax, eax
        ; Exact mapped bytes 7E 1B: jle 0x585a7599
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 0f28h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 19: jmp 0x585a75b2
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 0f28h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        imul ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 04: jmp 0x585a75cd
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 34: jmp 0x585a7601
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes E9 E7 FE FF FF: jmp 0x585a74b9
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x585a75d8
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 29: jmp 0x585a7601
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes E9 7C FC FF FF: jmp 0x585a7259
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 04: jne 0x585a75e7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1A: jmp 0x585a7601
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 15 F8 04 96 58: mov edx, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor edx, 55555555h
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 7E 04: jle 0x585a75fc
        __asm _emit 0x7e
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x585a7601
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
