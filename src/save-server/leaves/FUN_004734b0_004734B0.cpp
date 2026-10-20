// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004734B0 .. +0x536 bytes.
extern "C" __declspec(naked) void FUN_004734b0_004734B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        ; Exact mapped bytes A1 7C 89 68 00: mov eax, dword ptr [0x68897c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        imul eax, eax, 14h
        ; Exact mapped bytes 8B 0D 80 89 68 00: mov ecx, dword ptr [0x688980]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, eax
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 17h
        and edx, 0fffffff0h
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        sar eax, 4
        sub eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 20h
        ; Exact mapped bytes 7D 14: jge 0x4734fc
        __asm _emit 0x7d
        __asm _emit 0x14
        or edx, 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        shr edx, cl
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 34h], 0ffffffffh
        ; Exact mapped bytes EB 15: jmp 0x473511
        __asm _emit 0xeb
        __asm _emit 0x15
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 20h
        or eax, 0ffffffffh
        shr eax, cl
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 8B 0D 70 89 68 00: mov ecx, dword ptr [0x688970]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 73 24: jae 0x473546
        __asm _emit 0x73
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 24h]
        and ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 34h]
        and eax, dword ptr [edx + 4]
        or ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x47353b
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x473546
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 14h
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB D4: jmp 0x47351a
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x47362d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 80 89 68 00: mov eax, dword ptr [0x688980]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 3B 0D 70 89 68 00: cmp ecx, dword ptr [0x688970]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 73 24: jae 0x473589
        __asm _emit 0x73
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 24h]
        and eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 34h]
        and edx, dword ptr [ecx + 4]
        or eax, edx
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x47357e
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x473589
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 18h]
        add eax, 14h
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB D1: jmp 0x47355a
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 3B 0D 70 89 68 00: cmp ecx, dword ptr [0x688970]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x47362d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 73 16: jae 0x4735b6
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 02: je 0x4735ab
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x4735b6
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 14h
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB E2: jmp 0x473598
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 75 49: jne 0x473607
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes A1 80 89 68 00: mov eax, dword ptr [0x688980]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 3B 0D 70 89 68 00: cmp ecx, dword ptr [0x688970]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 73 16: jae 0x4735e7
        __asm _emit 0x73
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 02: je 0x4735dc
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x4735e7
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 18h]
        add eax, 14h
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB DF: jmp 0x4735c6
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 3B 0D 70 89 68 00: cmp ecx, dword ptr [0x688970]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x473607
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 F9 03 00 00: call 0x4739f0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 07: jne 0x473607
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DA 03 00 00: jmp 0x4739e1
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 F0 04 00 00: call 0x473b00
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        cmp dword ptr [ecx], -1
        ; Exact mapped bytes 75 07: jne 0x47362d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B4 03 00 00: jmp 0x4739e1
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 89 15 70 89 68 00: mov dword ptr [0x688970], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], -1
        ; Exact mapped bytes 74 23: je 0x473670
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 24h]
        and eax, dword ptr [edx + ecx*4 + 44h]
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 38h]
        mov esi, dword ptr [ebp - 34h]
        and esi, dword ptr [edx + ecx*4 + 0c4h]
        or eax, esi
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x4736a5
        __asm _emit 0x75
        __asm _emit 0x35
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 24h]
        and edx, dword ptr [ecx + eax*4 + 44h]
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 38h]
        mov esi, dword ptr [ebp - 34h]
        and esi, dword ptr [ecx + eax*4 + 0c4h]
        or edx, esi
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x4736a5
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB D2: jmp 0x473677
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 30h]
        imul eax, eax, 204h
        mov ecx, dword ptr [ebp - 38h]
        lea edx, [ecx + eax + 144h]
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 24h]
        and edx, dword ptr [ecx + eax*4 + 44h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 1A: jne 0x4736f2
        __asm _emit 0x75
        __asm _emit 0x1a
        mov dword ptr [ebp - 20h], 20h
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 34h]
        and edx, dword ptr [ecx + eax*4 + 0c4h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7C 13: jl 0x47370b
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 1ch]
        shl eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB E7: jmp 0x4736f2
        __asm _emit 0xeb
        __asm _emit 0xe7
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*8 + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        sub eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        sar ecx, 4
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 3fh
        ; Exact mapped bytes 7E 07: jle 0x47373c
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 3fh
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 84 18 02 00 00: je 0x473960
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F 85 D0 00 00 00: jne 0x47382a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 20h
        ; Exact mapped bytes 7D 5F: jge 0x4737bf
        __asm _emit 0x7d
        __asm _emit 0x5f
        mov eax, 80000000h
        mov ecx, dword ptr [ebp - 20h]
        shr eax, cl
        not eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx*4 + 44h]
        and ecx, eax
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + edx*4 + 44h], ecx
        mov ecx, dword ptr [ebp - 38h]
        add ecx, dword ptr [ebp - 20h]
        mov dl, byte ptr [ecx + 4]
        sub dl, 1
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [ebp - 20h]
        mov byte ptr [eax + 4], dl
        mov ecx, dword ptr [ebp - 38h]
        add ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 51 04: movsx edx, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 18: jne 0x4737bd
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, 80000000h
        mov ecx, dword ptr [ebp - 20h]
        shr eax, cl
        not eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        and edx, eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 6B: jmp 0x47382a
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 20h
        mov edx, 80000000h
        shr edx, cl
        not edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ecx + eax*4 + 0c4h]
        and eax, edx
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [edx + ecx*4 + 0c4h], eax
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [ebp - 20h]
        mov cl, byte ptr [eax + 4]
        sub cl, 1
        mov edx, dword ptr [ebp - 38h]
        add edx, dword ptr [ebp - 20h]
        mov byte ptr [edx + 4], cl
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 48 04: movsx ecx, byte ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 75 1D: jne 0x47382a
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 20h
        mov edx, 80000000h
        shr edx, cl
        not edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4]
        and ecx, edx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x473960
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x473960
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 7D 5A: jge 0x4738fa
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 48 04: movsx ecx, byte ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 38h]
        add edx, dword ptr [ebp - 14h]
        mov al, byte ptr [edx + 4]
        add al, 1
        mov edx, dword ptr [ebp - 38h]
        add edx, dword ptr [ebp - 14h]
        mov byte ptr [edx + 4], al
        test ecx, ecx
        ; Exact mapped bytes 75 16: jne 0x4738d8
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, 80000000h
        mov ecx, dword ptr [ebp - 14h]
        shr eax, cl
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        or edx, eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], edx
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 14h]
        shr edx, cl
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ecx + eax*4 + 44h]
        or eax, edx
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [edx + ecx*4 + 44h], eax
        ; Exact mapped bytes EB 66: jmp 0x473960
        __asm _emit 0xeb
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 48 04: movsx ecx, byte ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 38h]
        add edx, dword ptr [ebp - 14h]
        mov al, byte ptr [edx + 4]
        add al, 1
        mov edx, dword ptr [ebp - 38h]
        add edx, dword ptr [ebp - 14h]
        mov byte ptr [edx + 4], al
        test ecx, ecx
        ; Exact mapped bytes 75 1B: jne 0x473937
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 20h
        mov eax, 80000000h
        shr eax, cl
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4]
        or edx, eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 20h
        mov edx, 80000000h
        shr edx, cl
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ecx + eax*4 + 0c4h]
        or eax, edx
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [edx + ecx*4 + 0c4h], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x47397a
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 28h]
        mov dword ptr [edx - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        add eax, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        test ecx, ecx
        ; Exact mapped bytes 75 20: jne 0x4739d3
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 3B 05 78 89 68 00: cmp eax, dword ptr [0x688978]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x4739d3
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 3B 0D 6C 89 68 00: cmp ecx, dword ptr [0x68896c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x4739d3
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 78 89 68 00 00 00 00 00: mov dword ptr [0x688978], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 10h]
        add eax, 4
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
