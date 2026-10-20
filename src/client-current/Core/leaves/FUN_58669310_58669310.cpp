// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58669310 .. +0x518 bytes.
extern "C" __declspec(naked) void FUN_58669310_58669310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 80 FF FF: call 0x586613d0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 0fh
        ; Exact mapped bytes 75 43: jne 0x5866936f
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 EE 00 00 00: movsx edx, word ptr [ecx + 0xee]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 12ch
        ; Exact mapped bytes 7D 1A: jge 0x58669358
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 EE 00 00 00: mov cx, word ptr [eax + 0xee]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A EE 00 00 00: mov word ptr [edx + 0xee], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x5866936d
        __asm _emit 0xeb
        __asm _emit 0x15
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 EE 00 00 00: mov word ptr [ecx + 0xee], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 04 00 00: call 0x58669830
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0C: jmp 0x5866937b
        __asm _emit 0xeb
        __asm _emit 0x0c
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 EE 00 00 00: mov word ptr [eax + 0xee], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 02: shr dx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 0F 84 91 04 00 00: je 0x58669826
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 74 42: je 0x586693ee
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 74 2B: je 0x586693ee
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 BE 03 00 00: jne 0x5866979c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 0F 84 AE 03 00 00: je 0x5866979c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes 75 12: jne 0x5866940e
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x58669523
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 50h]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 54h]
        sub ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x5866948a
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x5866948a
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x58669477
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x58669477
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x58669453
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5866946f
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x58669462
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x58669469
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x58669482
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x58669499
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x586694fd
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x586694fd
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x586694ea
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x586694ea
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x586694c6
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x586694e2
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x586694d5
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 07: jmp 0x586694dc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 0B: jmp 0x586694f5
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 0F: jmp 0x5866950c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE BC 14 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xbc
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 74 7C: je 0x586695ad
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 7E 38: jle 0x58669577
        __asm _emit 0x7e
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        sub edx, dword ptr [ecx + 2ch]
        cmp edx, 20h
        ; Exact mapped bytes 7F 12: jg 0x58669562
        __asm _emit 0x7f
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 C0 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc0
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x58669575
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C C0 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc0
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x586695ad
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 2ch]
        sub eax, dword ptr [edx + 5ch]
        cmp eax, 20h
        ; Exact mapped bytes 7F 12: jg 0x5866959a
        __asm _emit 0x7f
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 C0 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc0
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x586695ad
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        sub ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 C0 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 74 7C: je 0x58669637
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 7E 38: jle 0x58669601
        __asm _emit 0x7e
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        sub ecx, dword ptr [eax + 28h]
        cmp ecx, 20h
        ; Exact mapped bytes 7F 12: jg 0x586695ec
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 BF 14 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x586695ff
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        add edx, 20h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 BF 14 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x58669637
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 58h]
        cmp edx, 20h
        ; Exact mapped bytes 7F 12: jg 0x58669624
        __asm _emit 0x7f
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F BF 14 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x58669637
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        sub eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A BF 14 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 50h]
        ; Exact mapped bytes 0F 85 53 01 00 00: jne 0x5866979c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x5866979c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 58h]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 0F 85 2F 01 00 00: jne 0x5866979c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 0F 85 1D 01 00 00: jne 0x5866979c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 75 40: jne 0x586696d6
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 04 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x5866979c
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 75 62: jne 0x5866974f
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffdh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 4D: jmp 0x5866979c
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 75 36: jne 0x5866979c
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        push 0ee4ah
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x586697bd
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x586697bd
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5A: je 0x58669826
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x586697e0
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB E6: jmp 0x586697c6
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 28 BE E2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58669804
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x58669826
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x58669824
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 04 BE E2 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB A0: jmp 0x586697c6
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
