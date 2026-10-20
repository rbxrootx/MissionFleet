// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58757540 .. +0x4F1C bytes.
extern "C" __declspec(naked) void FUN_58757540_58757540() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888fceah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 790h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], ecx
        push 1f4h
        mov eax, dword ptr [ebp + 28h]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 AC C4 E2 FF: call 0x58583a40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx], 588b541ch
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 5b8h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 5b8h]
        ; Exact mapped bytes E8 67 78 FF FF: call 0x5874ee30
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        push 5875c4d0h
        push 587574f0h
        push 8
        push 10h
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 11f4h
        push ecx
        ; Exact mapped bytes E8 9B A6 0D 00: call 0x58831c85
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa6
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 12b4h
        ; Exact mapped bytes E8 D4 FE D2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xd2
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 12b0h], 0
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 28h]
        mov dword ptr [eax + 50h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 10c4h], 0
        mov dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58757635
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 7ch]
        add eax, 1
        mov dword ptr [ebp - 7ch], eax
        cmp dword ptr [ebp - 7ch], 40h
        ; Exact mapped bytes 7D 24: jge 0x5875765f
        __asm _emit 0x7d
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + ecx*4 + 6244h], 0
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + eax*4 + 6224h], 0
        ; Exact mapped bytes EB CD: jmp 0x5875762c
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov dword ptr [ebp - 70h], 0
        ; Exact mapped bytes EB 09: jmp 0x58757671
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 70h]
        add edx, 1
        mov dword ptr [ebp - 70h], edx
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 D1 AC FF FF: call 0x58752350
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 0F 8D 8F 00 00 00: jge 0x58757717
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 770h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 770h]
        ; Exact mapped bytes E8 6B 84 D5 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 69: je 0x58757712
        __asm _emit 0x74
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 260h], edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 49 84 D5 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A2 85 D5 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        mov edx, dword ptr [ebp - 44h]
        cmp ecx, dword ptr [edx + 10c4h]
        ; Exact mapped bytes 7E 33: jle 0x58757712
        __asm _emit 0x7e
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 264h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 14 84 D5 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D 85 D5 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx edx, al
        xor edx, 55h
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 10c4h], edx
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x58757668
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov byte ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 60h], 0ffffffffh
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 64h], 0ffffffffh
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 68h], 1
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 6ch], 1
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + 5]
        imul edx, ecx, 64h
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 5ebch], edx
        ; Exact mapped bytes 0F BF 4D 2C: movsx ecx, word ptr [ebp + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x2c
        add ecx, 64h
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 66 89 8A 0A 41 00 00: mov word ptr [edx + 0x410a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875777f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 80h]
        add eax, 1
        mov dword ptr [ebp - 80h], eax
        cmp dword ptr [ebp - 80h], 8
        ; Exact mapped bytes 7D 22: jge 0x587577a7
        __asm _emit 0x7d
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BF 91 0A 41 00 00: movsx edx, word ptr [ecx + 0x410a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 80h], 14h
        lea ecx, [edx + eax + 64h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes 66 89 8C 50 F8 40 00 00: mov word ptr [eax + edx*2 + 0x40f8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0xf8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB CF: jmp 0x58757776
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov ecx, 2
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BF 8C 10 F8 40 00 00: movsx ecx, word ptr [eax + edx + 0x40f8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, 64h
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 66 89 8A 08 41 00 00: mov word ptr [edx + 0x4108], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [eax + 119ch], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [eax + 11a0h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 28: mov dx, word ptr [ecx + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x28
        ; Exact mapped bytes 66 89 90 A4 11 00 00: mov word ptr [eax + 0x11a4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 2ch]
        mov dword ptr [eax + 11a8h], edx
        mov eax, dword ptr [ebp - 44h]
        cmp dword ptr [eax + 11a0h], 0
        ; Exact mapped bytes 74 18: je 0x58757829
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        add ecx, 30h
        push ecx
        mov edx, dword ptr [ebp - 44h]
        add edx, 11ach
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 4F 19 01 00: call 0x58769180
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 78h], 0
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 8D D1 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 30 40 00 00: je 0x5875b88b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 77 D1 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, 2
        imul ecx, edx, 0
        movzx edx, word ptr [eax + ecx + 18h]
        mov dword ptr [ebp - 268h], edx
        mov eax, dword ptr [ebp - 44h]
        add eax, 5f30h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 5f2ch
        push ecx
        mov edx, dword ptr [ebp - 268h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes 8B 0D 80 75 94 58: mov ecx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB F0 FF FF: call 0x58756950
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF F8 D7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf8
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 0ah
        ; Exact mapped bytes 74 4C: je 0x58757909
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 26ch], edx
        mov esi, 2
        shl esi, 2
        push 0
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 AF A9 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa9
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx esi, word ptr [eax + esi + 8]
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 FC DE D3 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xde
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx eax, word ptr [eax + 9ch]
        lea ecx, [eax + esi*2]
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 348h], ecx
        ; Exact mapped bytes EB 54: jmp 0x5875795d
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 270h], eax
        mov esi, 2
        shl esi, 2
        push 0
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 64 A9 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa9
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx esi, word ptr [eax + esi + 8]
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 B1 DE D3 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xde
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 9ch]
        imul eax, ecx, 7
        cdq
        mov ecx, 0ah
        idiv ecx
        lea edx, [eax + esi*2]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 348h], edx
        mov dword ptr [ebp - 88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58757978
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 88h]
        add ecx, 1
        mov dword ptr [ebp - 88h], ecx
        cmp dword ptr [ebp - 88h], 4
        ; Exact mapped bytes 7D 12: jge 0x58757993
        __asm _emit 0x7d
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 44h]
        add edx, dword ptr [ebp - 88h]
        mov byte ptr [edx + 12c0h], 0
        ; Exact mapped bytes EB D6: jmp 0x58757969
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 617ch], 0
        mov dword ptr [ebp - 48h], 5
        ; Exact mapped bytes EB 09: jmp 0x587579b2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 20h
        ; Exact mapped bytes 0F 8D 8D 01 00 00: jge 0x58757b49
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 274h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 86 B1 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb1
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 2]
        cmp ecx, 0bh
        ; Exact mapped bytes 0F 8C 5D 01 00 00: jl 0x58757b44
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 278h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 8B A8 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 2]
        add ecx, 11h
        mov dword ptr [ebp - 1d4h], ecx
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 27ch], edx
        mov eax, dword ptr [ebp - 1d4h]
        push eax
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 0D 56 D3 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x56
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x58757b44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        mov dword ptr [ebp - 284h], ecx
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 280h], edx
        mov eax, dword ptr [ebp - 1d4h]
        push eax
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 D5 55 D3 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x55
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx esi, word ptr [eax + 6]
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 12 A8 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa8
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 3]
        cmp edx, esi
        ; Exact mapped bytes 74 27: je 0x58757aad
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 288h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 ED A7 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa7
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x58757b44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 28ch], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 C5 A7 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa7
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 617ch]
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 290h]
        mov dword ptr [eax + edx*4 + 6180h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 617ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 617ch], eax
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 294h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 43 B0 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb0
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 2]
        mov edx, dword ptr [ebp - 44h]
        lea eax, [edx + ecx + 12b5h]
        mov dword ptr [ebp - 258h], eax
        mov ecx, dword ptr [ebp - 258h]
        mov dl, byte ptr [ecx]
        add dl, 1
        mov eax, dword ptr [ebp - 258h]
        mov byte ptr [eax], dl
        ; Exact mapped bytes E9 60 FE FF FF: jmp 0x587579a9
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 1280h], 0
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x58757b68
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 48h]
        add edx, 1
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp - 48h], 20h
        ; Exact mapped bytes 0F 8D 97 00 00 00: jge 0x58757c09
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 60 CE D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xce
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 48h]
        mov eax, dword ptr [eax + 270h]
        shr eax, cl
        and eax, 1
        ; Exact mapped bytes 74 15: je 0x58757baa
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1280h]
        add edx, 1
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 1280h], edx
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 28 CE D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xce
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [eax + 268h]
        shr edx, cl
        and edx, 1
        mov eax, dword ptr [ebp - 44h]
        add eax, dword ptr [ebp - 48h]
        mov byte ptr [eax + 1fch], dl
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 FB CD D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcd
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [eax + 26ch]
        shr edx, cl
        and edx, 1
        mov eax, dword ptr [ebp - 44h]
        add eax, dword ptr [ebp - 48h]
        mov byte ptr [eax + 21ch], dl
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x58757b5f
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 C9 CD D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xcd
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 0A: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov eax, dword ptr [ebp - 44h]
        add edx, dword ptr [eax + 1280h]
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 1284h], edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D0 54 01 00: call 0x5876d110
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 78 B0 00 00: call 0x58762cc0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        add edx, 3f78h
        push edx
        push 24h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 24 4F 01 00: call 0x5876cb80
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 84 68 00 00: call 0x5875e4f0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 10ch
        ; Exact mapped bytes E8 8D 93 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 21: je 0x58757cae
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 2A 46 D5 FF: call 0x584ac2d0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x46
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58757cb8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 298h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 298h]
        mov dword ptr [ecx + 5e84h], edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 21 49 01 00: call 0x5876c600
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 07 76 01 00: call 0x5876f2f0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 6D 76 01 00: call 0x5876f360
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 FC 68 01 00: call 0x5876e600
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x58757d17
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 24h
        ; Exact mapped bytes 7D 13: jge 0x58757d30
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + edx*4 + 0b4h], 0
        ; Exact mapped bytes EB DE: jmp 0x58757d0e
        __asm _emit 0xeb
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 68 22 01 00: call 0x58769fa0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 174h], 0
        mov dword ptr [ebp - 0b4h], 0
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 83 CC D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xcc
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 74 1E: je 0x58757d8b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 65 CC D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcc
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 75 2E: jne 0x58757db9
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 47 CC D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xcc
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, word ptr [eax + 380h]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 59 05 68 54 8B 58: mulsd xmm0, qword ptr [0x588b5468]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C8: cvttsd2si ecx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 174h], ecx
        mov dword ptr [ebp - 48h], 5
        ; Exact mapped bytes EB 09: jmp 0x58757dcb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 48h]
        add eax, 1
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 20h
        ; Exact mapped bytes 0F 8D 32 02 00 00: jge 0x58758007
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 FD CB D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xcb
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 35ch]
        test ecx, ecx
        ; Exact mapped bytes 74 7C: je 0x58757e6a
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 29ch], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 54 AD D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xad
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx esi, byte ptr [eax + 3]
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 C2 CB D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcb
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 35ch]
        cmp ecx, esi
        ; Exact mapped bytes 75 3C: jne 0x58757e65
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 2a4h], edx
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 2a0h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 0B AD D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xad
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 2F A4 FF FF: call 0x58752290
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58757e6a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x58757dc2
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 2a8h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 D8 AC D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xac
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 2]
        cmp ecx, 10h
        ; Exact mapped bytes 0F 85 6D 01 00 00: jne 0x58758002
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 05 80 54 8B 58: movsd xmm0, qword ptr [0x588b5480]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 56 A1 10 00: call 0x58862000
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 9D 7C F8 FF FF: fstp qword ptr [ebp - 0x784]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 2ach], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 BF A3 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 3
        movzx eax, word ptr [eax + edx + 8]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 11 A1 10 00: call 0x58862000
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 9D 84 F8 FF FF: fstp qword ptr [ebp - 0x77c]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 85 84 F8 FF FF: movsd xmm0, qword ptr [ebp - 0x77c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5E 85 7C F8 FF FF: divsd xmm0, qword ptr [ebp - 0x784]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 0D C0 50 89 58: movsd xmm1, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 76 30: jbe 0x58757f46
        __asm _emit 0x76
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 BC CA D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 380h]
        ; Exact mapped bytes F2 0F 2A C1: cvtsi2sd xmm0, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 59 05 68 54 8B 58: mulsd xmm0, qword ptr [0x588b5468]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 174h], edx
        ; Exact mapped bytes EB 42: jmp 0x58757f88
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 8C CA D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 380h]
        ; Exact mapped bytes F2 0F 2A C1: cvtsi2sd xmm0, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 59 05 68 54 8B 58: mulsd xmm0, qword ptr [0x588b5468]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 8D 84 F8 FF FF: movsd xmm1, qword ptr [ebp - 0x77c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5E 8D 7C F8 FF FF: divsd xmm1, qword ptr [ebp - 0x784]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 174h], edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes F2 0F 2A 81 74 01 00 00: cvtsi2sd xmm0, dword ptr [ecx + 0x174]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes F2 0F 11 85 74 F8 FF FF: movsd qword ptr [ebp - 0x78c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 37 CA D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, word ptr [eax + 380h]
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        ; Exact mapped bytes F2 0F 59 05 00 95 8A 58: mulsd xmm0, qword ptr [0x588a9500]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 8D 74 F8 FF FF: movsd xmm1, qword ptr [ebp - 0x78c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 76 2E: jbe 0x58757ff8
        __asm _emit 0x76
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 08 CA D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, word ptr [eax + 380h]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 59 05 00 95 8A 58: mulsd xmm0, qword ptr [0x588a9500]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C8: cvttsd2si ecx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 174h], ecx
        mov dword ptr [ebp - 0b4h], 1
        ; Exact mapped bytes E9 BB FD FF FF: jmp 0x58757dc2
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 C4 C9 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc9
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 75 2D: jne 0x58758059
        __asm _emit 0x75
        __asm _emit 0x2d
        cmp dword ptr [ebp - 0b4h], 1
        ; Exact mapped bytes 74 16: je 0x5875804b
        __asm _emit 0x74
        __asm _emit 0x16
        mov dword ptr [ebp - 60h], 12ch
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 174h], 0
        ; Exact mapped bytes EB 0C: jmp 0x58758057
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 60h], ecx
        ; Exact mapped bytes EB 47: jmp 0x587580a0
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 79 C9 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc9
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 7
        ; Exact mapped bytes 75 29: jne 0x587580a0
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 5B C9 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc9
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 0bh
        ; Exact mapped bytes 75 07: jne 0x587580a0
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 9c4h
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 F1 D7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf1
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 0ah
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x58758155
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 97 77 D4 FF: call 0x5849f860
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x77
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 14ch], edx
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 7E 77 D4 FF: call 0x5849f860
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x77
        __asm _emit 0xd4
        __asm _emit 0xff
        imul eax, dword ptr [eax], 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 150h], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 5C 77 D4 FF: call 0x5849f860
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x77
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cdq
        mov ecx, 64h
        idiv ecx
        shl eax, 1
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 148h], eax
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [eax + 15ch], ecx
        imul eax, dword ptr [ebp - 60h], 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 160h], eax
        mov eax, dword ptr [ebp - 60h]
        cdq
        mov ecx, 64h
        idiv ecx
        shl eax, 1
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 158h], eax
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x58758224
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 FD 76 D4 FF: call 0x5849f860
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x76
        __asm _emit 0xd4
        __asm _emit 0xff
        imul eax, dword ptr [eax], 7
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 14ch], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 DB 76 D4 FF: call 0x5849f860
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x76
        __asm _emit 0xd4
        __asm _emit 0xff
        imul eax, dword ptr [eax], 7
        cdq
        mov ecx, 0ah
        idiv ecx
        imul eax, eax, 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 150h], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 AE 76 D4 FF: call 0x5849f860
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x76
        __asm _emit 0xd4
        __asm _emit 0xff
        imul eax, dword ptr [eax], 7
        cdq
        mov ecx, 0ah
        idiv ecx
        cdq
        mov ecx, 64h
        idiv ecx
        shl eax, 1
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 148h], eax
        imul eax, dword ptr [ebp - 60h], 7
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 15ch], eax
        imul eax, dword ptr [ebp - 60h], 7
        cdq
        mov ecx, 0ah
        idiv ecx
        imul eax, eax, 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 160h], eax
        imul eax, dword ptr [ebp - 60h], 7
        cdq
        mov ecx, 0ah
        idiv ecx
        cdq
        mov ecx, 64h
        idiv ecx
        shl eax, 1
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 158h], eax
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [eax + 148h]
        imul edx, dword ptr [ecx + 148h]
        push edx
        ; Exact mapped bytes E8 05 8E 0D 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2b0h], eax
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 2b0h]
        mov dword ptr [eax + 144h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [edx + 148h]
        imul ecx, dword ptr [eax + 148h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 144h]
        push eax
        ; Exact mapped bytes E8 96 4B 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        push 2
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 148h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 148h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 144h]
        push eax
        ; Exact mapped bytes E8 BE C2 D8 FF: call 0x584e4560
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc2
        __asm _emit 0xd8
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ecx + 158h]
        imul eax, dword ptr [edx + 158h]
        push eax
        ; Exact mapped bytes E8 84 8D 0D 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2b4h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 2b4h]
        mov dword ptr [ecx + 154h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [eax + 158h]
        imul edx, dword ptr [ecx + 158h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 154h]
        push ecx
        ; Exact mapped bytes E8 15 4B 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        push 2
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 158h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 158h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 154h]
        push ecx
        ; Exact mapped bytes E8 3D C2 D8 FF: call 0x584e4560
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc2
        __asm _emit 0xd8
        __asm _emit 0xff
        add esp, 10h
        push 88h
        ; Exact mapped bytes E8 D4 8C 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 47: je 0x5875838d
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 82 A9 D2 FF: call 0x58482cd0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa9
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 2b8h], edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E2 C3 D6 FF: call 0x584c4740
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 2bch], eax
        mov ecx, dword ptr [ebp - 2b8h]
        push ecx
        mov edx, dword ptr [ebp - 2bch]
        push edx
        push 1
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 0B EC D5 FF: call 0x584b6f90
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xec
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58758397
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 2c0h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 2c0h]
        mov dword ptr [edx + 88h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F E6 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 2c4h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 FE C8 05 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 06 41 01 00: call 0x5876c4f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 12 8C 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x58758491
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 66 8B 82 0A 41 00 00: mov ax, word ptr [edx + 0x410a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 66 FF FF FF: mov word ptr [ebp - 0x9a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 2cch], ecx
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 5f2ch], 0
        ; Exact mapped bytes 74 24: je 0x58758456
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5f2ch]
        mov dword ptr [ebp - 2c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 82 C6 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58758460
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        movzx edx, word ptr [ebp - 9ah]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 2cch]
        push ecx
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 87 E3 D2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe3
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875849b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 2d0h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 2d0h]
        mov dword ptr [edx + 5f34h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 5f34h]
        mov dword ptr [ebp - 2d4h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5eb8h]
        push ecx
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 62 73 D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x73
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 2d8h], eax
        push 0
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 56 70 D4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x70
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875850d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 C5 C4 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc4
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0A: mov dx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 07: and dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        movzx eax, dx
        cmp dword ptr [ebp - 48h], eax
        ; Exact mapped bytes 0F 8D 2A 01 00 00: jge 0x58758659
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 CE 8A 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x587585de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 66 8B 84 4A F8 40 00 00: mov ax, word ptr [edx + ecx*2 + 0x40f8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0xf8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 64 FF FF FF: mov word ptr [ebp - 0x9c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 2e0h], ecx
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 5f2ch], 0
        ; Exact mapped bytes 74 29: je 0x587585a3
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5f2ch]
        mov dword ptr [ebp - 2dch], ecx
        mov edx, dword ptr [ebp - 48h]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 35 C5 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc5
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587585ad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        movzx eax, word ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 2e0h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 3A E2 D2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xe2
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587585e8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 2e4h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 2e4h]
        mov dword ptr [ecx + eax*4 + 5f38h], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax*4 + 5f38h]
        mov dword ptr [ebp - 2e8h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5eb8h]
        push ecx
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 0D 72 D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x72
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + edx*4 + 5f38h]
        mov dword ptr [ebp - 2ech], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 FD 6E D4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6e
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AB FE FF FF: jmp 0x58758504
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 A7 5E 01 00: call 0x5876e510
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        push 33h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 1D 7D 01 00: call 0x58770390
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x58758686
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 20h
        ; Exact mapped bytes 7D 34: jge 0x587586c0
        __asm _emit 0x7d
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 44h]
        cmp dword ptr [eax + edx*4 + 17ch], 0
        ; Exact mapped bytes 74 22: je 0x587586be
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [edx + ecx*4 + 17ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB BD: jmp 0x5875867d
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D8 4F 01 00: call 0x5876d6a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        push 1b7h
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 C4 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc4
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 12c4h], eax
        push 7ch
        ; Exact mapped bytes E8 1C 89 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x5875879c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BF 82 0A 41 00 00: movsx eax, word ptr [edx + 0x410a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 2
        ; Exact mapped bytes 66 89 85 62 FF FF FF: mov word ptr [ebp - 0x9e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 2f4h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 2f8h], ecx
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 5f30h], 0
        ; Exact mapped bytes 74 24: je 0x5875875e
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5f30h]
        mov dword ptr [ebp - 2f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 7A C3 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc3
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58758768
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        movzx edx, word ptr [ebp - 9eh]
        push edx
        mov eax, dword ptr [ebp - 2f4h]
        push eax
        mov ecx, dword ptr [ebp - 2f8h]
        push ecx
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 FC 74 DA FF: call 0x584ffc90
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x74
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587587a6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov ecx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 2fch], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 2fch]
        mov dword ptr [edx + 12d0h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 12d0h]
        mov dword ptr [ebp - 300h], edx
        push 4
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 2F C3 D6 FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 12d0h]
        mov dword ptr [ebp - 304h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 5eb8h]
        push eax
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 FB 76 DA FF: call 0x584fff00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x76
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 12d0h]
        mov dword ptr [ebp - 308h], edx
        push 101h
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 8C CD 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xcd
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 12d0h]
        mov dword ptr [ebp - 30ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 00 D6 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd6
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 BC 87 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x587588fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BF 82 0A 41 00 00: movsx eax, word ptr [edx + 0x410a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 3
        ; Exact mapped bytes 66 89 85 60 FF FF FF: mov word ptr [ebp - 0xa0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 314h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 318h], ecx
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 5f30h], 0
        ; Exact mapped bytes 74 24: je 0x587588be
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5f30h]
        mov dword ptr [ebp - 310h], ecx
        push 1
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 1A C2 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc2
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587588c8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        movzx edx, word ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ebp - 314h]
        push eax
        mov ecx, dword ptr [ebp - 318h]
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 1C DF D2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xdf
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x58758906
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 31ch], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 31ch]
        mov dword ptr [edx + 12cch], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 12cch]
        mov dword ptr [ebp - 320h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5eb8h]
        push ecx
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 F7 6E D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 12cch]
        mov dword ptr [ebp - 324h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 48 CC 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 12cch]
        mov dword ptr [ebp - 328h], edx
        push 0
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 BC D4 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd4
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        cmp dword ptr [eax + 5f30h], 0
        ; Exact mapped bytes 74 0C: je 0x5875899c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes EB 0A: jmp 0x587589a6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 1
        mov cl, byte ptr [ebp - 0f0h]
        mov byte ptr [ebp - 61h], cl
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 12cch]
        mov dword ptr [ebp - 32ch], eax
        movzx ecx, byte ptr [ebp - 61h]
        push ecx
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 82 6B D4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6b
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 2E 86 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x86
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 1F: je 0x58758a0b
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 0D DE D2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xde
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58758a15
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov eax, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 330h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 330h]
        mov dword ptr [ecx + 12c8h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 12c8h]
        mov dword ptr [ebp - 334h], ecx
        push 0
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 00 6B D4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 12c8h]
        mov dword ptr [ebp - 338h], eax
        push 101h
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 41 CB 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xcb
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 12c8h]
        mov dword ptr [ebp - 33ch], edx
        push 0
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 B5 D3 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd3
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 5ef8h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 178h], 0
        push 58h
        ; Exact mapped bytes E8 58 85 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 2F: je 0x58758af1
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BF 82 0A 41 00 00: movsx eax, word ptr [edx + 0x410a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0ah
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 27 DD D2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xdd
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58758afb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 340h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 340h]
        mov dword ptr [edx + 178h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 178h]
        mov dword ptr [ebp - 344h], edx
        push 0
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 1A 6A D4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 178h]
        mov dword ptr [ebp - 348h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 5B CA 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 178h]
        mov dword ptr [ebp - 34ch], eax
        push 0
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 CF D2 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd2
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 8B 84 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 76: je 0x58758c05
        __asm _emit 0x74
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BF 91 0A 41 00 00: movsx edx, word ptr [ecx + 0x410a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, 32h
        ; Exact mapped bytes 66 89 95 5E FF FF FF: mov word ptr [ebp - 0xa2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 350h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 354h], eax
        push 0cfh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 BF D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xbf
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 358h], eax
        movzx ecx, word ptr [ebp - 0a2h]
        push ecx
        mov edx, dword ptr [ebp - 350h]
        push edx
        mov eax, dword ptr [ebp - 354h]
        push eax
        mov ecx, dword ptr [ebp - 358h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 13 DC D2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xdc
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58758c0f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov eax, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 35ch], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 35ch]
        mov dword ptr [ecx + 5f58h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5f58h]
        mov dword ptr [ebp - 360h], ecx
        mov edx, dword ptr [ebp - 44h]
        add edx, 4
        push edx
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 E1 67 D4 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5f58h]
        mov dword ptr [ebp - 364h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 42 C9 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc9
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 5f58h]
        mov dword ptr [ebp - 368h], eax
        push 0
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 B6 D1 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 5f58h]
        mov dword ptr [ebp - 36ch], edx
        push 0
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 3A D2 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd2
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 56 83 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 73: je 0x58758d37
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BF 88 0A 41 00 00: movsx ecx, word ptr [eax + 0x410a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 32h
        ; Exact mapped bytes 66 89 8D 5C FF FF FF: mov word ptr [ebp - 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 370h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 374h], edx
        push 7
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 BD D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xbd
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 378h], eax
        movzx eax, word ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 370h]
        push ecx
        mov edx, dword ptr [ebp - 374h]
        push edx
        mov eax, dword ptr [ebp - 378h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 E1 DA D2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xda
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58758d41
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 37ch], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 37ch]
        mov dword ptr [eax + 5f5ch], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 5f5ch]
        mov dword ptr [ebp - 380h], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 AF 66 D4 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x66
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 5f5ch]
        mov dword ptr [ebp - 384h], eax
        push 101h
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 10 C8 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 5f5ch]
        mov dword ptr [ebp - 388h], edx
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 84 D0 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5f5ch]
        mov dword ptr [ebp - 38ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 08 D1 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd1
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 24 82 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x82
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 76: je 0x58758e6c
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BF 82 0A 41 00 00: movsx eax, word ptr [edx + 0x410a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 32h
        ; Exact mapped bytes 66 89 85 5A FF FF FF: mov word ptr [ebp - 0xa6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 390h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 394h], ecx
        push 0dfh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E BC D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xbc
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 398h], eax
        movzx edx, word ptr [ebp - 0a6h]
        push edx
        mov eax, dword ptr [ebp - 390h]
        push eax
        mov ecx, dword ptr [ebp - 394h]
        push ecx
        mov edx, dword ptr [ebp - 398h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 AC D9 D2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd9
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58758e76
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov ecx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 39ch], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 39ch]
        mov dword ptr [edx + 5f60h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 5f60h]
        mov dword ptr [ebp - 3a0h], edx
        mov eax, dword ptr [ebp - 44h]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 7A 65 D4 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x65
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 5f60h]
        mov dword ptr [ebp - 3a4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 DB C6 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5f60h]
        mov dword ptr [ebp - 3a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 4F CF D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xcf
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 5f60h]
        mov dword ptr [ebp - 3ach], eax
        push 0
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 D3 CF D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcf
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 EF 80 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 34: je 0x58758f5f
        __asm _emit 0x74
        __asm _emit 0x34
        push 10101h
        push 0
        push 0e0h
        push 1eh
        push 28h
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 59 94 D2 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x94
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58758f69
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov eax, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 3b0h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 3b0h]
        mov dword ptr [ecx + 115ch], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 115ch]
        mov dword ptr [ebp - 3b4h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 8]
        add eax, 19h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 50h
        push edx
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 6A C6 05 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 115ch]
        mov dword ptr [ebp - 3b8h], ecx
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BF 82 0A 41 00 00: movsx eax, word ptr [edx + 0x410a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 A2 CE D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xce
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 115ch]
        mov dword ptr [ebp - 3bch], edx
        push 0
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 96 CF D2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xcf
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 02 80 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 33: je 0x5875904b
        __asm _emit 0x74
        __asm _emit 0x33
        push 10101h
        push 0
        push 0e0h
        push 1eh
        push 28h
        push 0
        push 0
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 6D 93 D2 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x93
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58759055
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov edx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 3c0h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 3c0h]
        mov dword ptr [eax + 1160h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1160h]
        mov dword ptr [ebp - 3c4h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        add edx, 19h
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 24h
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 7E C5 05 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1160h]
        mov dword ptr [ebp - 3c8h], eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BF 91 0A 41 00 00: movsx edx, word ptr [ecx + 0x410a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 64h
        push edx
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 B6 CD D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xcd
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1160h]
        mov dword ptr [ebp - 3cch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 AA CE D2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xce
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 80 75 94 58: mov ecx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 7F 00 00: call 0x587610f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 5f2ch], eax
        ; Exact mapped bytes 75 58: jne 0x58759155
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 5f34h]
        mov dword ptr [ebp - 3d0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 94 C4 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 5f34h]
        mov dword ptr [ebp - 3d4h], eax
        push 1
        mov ecx, dword ptr [ebp - 3d4h]
        ; Exact mapped bytes E8 18 64 D4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x64
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 12cch]
        mov dword ptr [ebp - 3d8h], edx
        push 1
        mov ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes E8 FC 63 D4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x63
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        push 3c0h
        ; Exact mapped bytes E8 A5 7E 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x7e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 21: je 0x58759196
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 D2 4F D6 FF: call 0x584be160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4f
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587591a0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 3dch], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 3dch]
        mov dword ptr [edx + 5e7ch], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 5e7ch]
        mov dword ptr [ebp - 3e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 65 CC D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xcc
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 3c0h
        ; Exact mapped bytes E8 1E 7E 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x7e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 21: je 0x5875921d
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 4B 4F D6 FF: call 0x584be160
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4f
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58759227
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov ecx, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 3e4h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 3e4h]
        mov dword ptr [edx + 5e80h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 5e80h]
        mov dword ptr [ebp - 3e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 2E CD D2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xcd
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 70 B7 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb7
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 1ffh
        ; Exact mapped bytes 66 23 48 06: and cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x06
        movzx edx, cx
        mov dword ptr [ebp - 13ch], edx
        mov eax, dword ptr [ebp - 13ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 1138h], eax
        mov eax, dword ptr [ebp - 13ch]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 1eh
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 113ch], eax
        push 70h
        ; Exact mapped bytes E8 50 7D 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x7d
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 51: je 0x5875931b
        __asm _emit 0x74
        __asm _emit 0x51
        push 10101h
        push 0
        push 83add7h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        add eax, 46h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 50h
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 46h
        push ecx
        ; Exact mapped bytes 8B 15 44 20 96 58: mov edx, dword ptr [0x58962044]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 9D 90 D2 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x90
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58759325
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 3ech], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 3ech]
        mov dword ptr [edx + 1148h], eax
        push 70h
        ; Exact mapped bytes E8 B9 7C 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 50: je 0x587593b1
        __asm _emit 0x74
        __asm _emit 0x50
        push 10101h
        push 0
        push 0e0e0e0h
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 46h
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 8]
        sub eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 46h
        push edx
        ; Exact mapped bytes A1 44 20 96 58: mov eax, dword ptr [0x58962044]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 07 90 D2 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x90
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587593bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov edx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 3f0h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 3f0h]
        mov dword ptr [ecx + eax + 1150h], edx
        push 70h
        ; Exact mapped bytes E8 1A 7C 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x7c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 51: je 0x58759451
        __asm _emit 0x74
        __asm _emit 0x51
        push 10101h
        push 0
        push 0e0e0e0h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        add eax, 46h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 3eh
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 46h
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 67 8F D2 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875945b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov ecx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 3f4h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 3f4h]
        mov dword ptr [ecx + eax + 1150h], edx
        push 70h
        ; Exact mapped bytes E8 7A 7B 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7b
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 51: je 0x587594f1
        __asm _emit 0x74
        __asm _emit 0x51
        push 10101h
        push 0
        push 83add7h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        add eax, 46h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 3eh
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 46h
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 C7 8E D2 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x587594fb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov ecx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 3f8h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 3f8h]
        mov dword ptr [edx + 114ch], eax
        mov ecx, dword ptr [ebp - 44h]
        cmp dword ptr [ecx + 11a0h], 0
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x587595fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 160h], 3
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 11a0h], 1
        ; Exact mapped bytes 75 0A: jne 0x5875954a
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 8
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 400h], edx
        mov eax, dword ptr [ebp - 44h]
        add eax, 11ach
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 160h]
        add eax, dword ptr [edx + 4]
        lea ecx, [ecx + eax - 46h]
        mov dword ptr [ebp - 3fch], ecx
        mov edx, dword ptr [ebp - 3fch]
        push edx
        mov ecx, dword ptr [ebp - 400h]
        ; Exact mapped bytes E8 14 C1 05 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc1
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1148h]
        mov dword ptr [ebp - 404h], ecx
        mov edx, dword ptr [ebp - 44h]
        add edx, 11ach
        push edx
        mov ecx, dword ptr [ebp - 404h]
        ; Exact mapped bytes E8 E0 CA D2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1148h]
        mov dword ptr [ebp - 408h], ecx
        push 1
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 04 C9 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc9
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1148h]
        mov dword ptr [ebp - 40ch], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 85 C8 D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5875961b
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1148h]
        mov dword ptr [ebp - 410h], edx
        push 0
        mov ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes E8 C6 C8 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc8
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 418h], edx
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 1F B4 D2 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb4
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 414h], eax
        mov eax, dword ptr [ebp - 414h]
        push eax
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 44 CA D2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + edx + 1150h]
        mov dword ptr [ebp - 41ch], ecx
        push 3e8h
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 FC C7 D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc7
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + edx + 1150h]
        mov dword ptr [ebp - 420h], ecx
        push 3e8h
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 D4 C7 D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc7
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 424h], edx
        push 1
        mov ecx, dword ptr [ebp - 424h]
        ; Exact mapped bytes E8 0F C8 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc8
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 428h], edx
        push 1
        mov ecx, dword ptr [ebp - 428h]
        ; Exact mapped bytes E8 EA C7 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc7
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 06 79 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x79
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 62: je 0x58759776
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 40h
        mov dword ptr [ebp - 42ch], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        sub eax, 4ah
        mov dword ptr [ebp - 430h], eax
        push 6b7h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE B3 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb3
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 434h], eax
        push 40h
        mov ecx, dword ptr [ebp - 42ch]
        push ecx
        mov edx, dword ptr [ebp - 430h]
        push edx
        mov eax, dword ptr [ebp - 434h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 B2 8B D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x8b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58759780
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov edx, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 438h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 438h]
        mov dword ptr [eax + 1164h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1164h]
        mov dword ptr [ebp - 43ch], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 43ch]
        ; Exact mapped bytes E8 C2 C6 D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc6
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 3E 78 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 16ch], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes 74 62: je 0x5875983e
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 50h
        mov dword ptr [ebp - 440h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 4ah
        mov dword ptr [ebp - 444h], ecx
        push 6b7h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 B3 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb3
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 448h], eax
        push 40h
        mov edx, dword ptr [ebp - 440h]
        push edx
        mov eax, dword ptr [ebp - 444h]
        push eax
        mov ecx, dword ptr [ebp - 448h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 EA 8A D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58759848
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov eax, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 44ch], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 44ch]
        mov dword ptr [ecx + 1168h], edx
        push 70h
        ; Exact mapped bytes E8 96 77 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 174h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 74 54: je 0x587598d8
        __asm _emit 0x74
        __asm _emit 0x54
        push 10101h
        push 0
        push 7f7fffh
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 54h
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        add eax, 46h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 60h
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 46h
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 E0 8A D2 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587598e2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov ecx, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 450h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 450h]
        mov dword ptr [edx + 116ch], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1168h]
        mov dword ptr [ebp - 454h], edx
        push 0
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 C3 C5 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc5
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 116ch]
        mov dword ptr [ebp - 458h], ecx
        push 0
        mov ecx, dword ptr [ebp - 458h]
        ; Exact mapped bytes E8 A7 C5 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc5
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 C3 76 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x76
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 74 59: je 0x587599b0
        __asm _emit 0x74
        __asm _emit 0x59
        push 10101h
        push 0
        push 71c4dfh
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 8]
        add eax, 19h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 4]
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0ah
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        sub eax, 0c8h
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 08 8A D2 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587599ba
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov eax, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 45ch], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 45ch]
        mov dword ptr [ecx + 1158h], edx
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 F9 AF D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x58759adb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 D3 AF D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, 33ch
        mov dword ptr [ebp - 460h], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 BA AF D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        push eax
        ; Exact mapped bytes E8 69 88 DC FF: call 0x585222a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 464h], eax
        push 588b5290h
        ; Exact mapped bytes E8 A6 85 DC FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 468h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ecx + 1158h]
        ; Exact mapped bytes E8 7F 07 D5 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 46ch], eax
        mov edx, dword ptr [ebp - 460h]
        push edx
        mov eax, dword ptr [ebp - 464h]
        push eax
        mov ecx, dword ptr [ebp - 468h]
        push ecx
        push 588b52a0h
        push 80h
        mov edx, dword ptr [ebp - 46ch]
        push edx
        ; Exact mapped bytes E8 5E 73 D5 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x73
        __asm _emit 0xd5
        __asm _emit 0xff
        add esp, 18h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1158h]
        mov dword ptr [ebp - 470h], ecx
        push 0
        push 66ccffh
        mov ecx, dword ptr [ebp - 470h]
        ; Exact mapped bytes E8 CA 79 F1 FF: call 0x58671480
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x79
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1158h]
        mov dword ptr [ebp - 474h], eax
        push 6699h
        mov ecx, dword ptr [ebp - 474h]
        ; Exact mapped bytes E8 3B C4 D2 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc4
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EE 02 00 00: jmp 0x58759dc9
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 F7 AE D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xae
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 6
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x58759bdd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 D1 AE D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xae
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, 33ch
        mov dword ptr [ebp - 478h], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 B8 AE D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xae
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        push ecx
        ; Exact mapped bytes E8 67 87 DC FF: call 0x585222a0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 47ch], eax
        push 588b52ach
        ; Exact mapped bytes E8 A4 84 DC FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 480h], eax
        mov edx, dword ptr [ebp - 44h]
        mov ecx, dword ptr [edx + 1158h]
        ; Exact mapped bytes E8 7D 06 D5 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 484h], eax
        mov eax, dword ptr [ebp - 478h]
        push eax
        mov ecx, dword ptr [ebp - 47ch]
        push ecx
        mov edx, dword ptr [ebp - 480h]
        push edx
        push 588b52b8h
        push 80h
        mov eax, dword ptr [ebp - 484h]
        push eax
        ; Exact mapped bytes E8 5C 72 D5 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x72
        __asm _emit 0xd5
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1158h]
        mov dword ptr [ebp - 488h], edx
        push 0
        push 0ffff00h
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 C8 78 F1 FF: call 0x58671480
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x78
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1158h]
        mov dword ptr [ebp - 48ch], ecx
        push 998877h
        mov ecx, dword ptr [ebp - 48ch]
        ; Exact mapped bytes E8 39 C3 D2 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc3
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EC 01 00 00: jmp 0x58759dc9
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 F5 AD D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xad
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 5
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x58759cdf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 CF AD D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xad
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, 33ch
        mov dword ptr [ebp - 490h], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 B6 AD D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xad
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        push edx
        ; Exact mapped bytes E8 65 86 DC FF: call 0x585222a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 494h], eax
        push 588b52c4h
        ; Exact mapped bytes E8 A2 83 DC FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x83
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 498h], eax
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1158h]
        ; Exact mapped bytes E8 7B 05 D5 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 49ch], eax
        mov ecx, dword ptr [ebp - 490h]
        push ecx
        mov edx, dword ptr [ebp - 494h]
        push edx
        mov eax, dword ptr [ebp - 498h]
        push eax
        push 588b52d4h
        push 80h
        mov ecx, dword ptr [ebp - 49ch]
        push ecx
        ; Exact mapped bytes E8 5A 71 D5 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0xff
        add esp, 18h
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1158h]
        mov dword ptr [ebp - 4a0h], eax
        push 0
        push 0ff00h
        mov ecx, dword ptr [ebp - 4a0h]
        ; Exact mapped bytes E8 C6 77 F1 FF: call 0x58671480
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x77
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1158h]
        mov dword ptr [ebp - 4a4h], edx
        push 578b2eh
        mov ecx, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes E8 37 C2 D2 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc2
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x58759dc9
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 F3 AC D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x58759dc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 CD AC D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 6
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x58759dc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 A7 AC D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 3
        ; Exact mapped bytes 74 7C: je 0x58759dc9
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 85 AC D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, 33ch
        mov dword ptr [ebp - 4a8h], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 6C AC D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        push ecx
        ; Exact mapped bytes E8 1B 85 DC FF: call 0x585222a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4ach], eax
        mov edx, dword ptr [ebp - 44h]
        mov ecx, dword ptr [edx + 1158h]
        ; Exact mapped bytes E8 44 04 D5 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 4b0h], eax
        mov eax, dword ptr [ebp - 4a8h]
        push eax
        mov ecx, dword ptr [ebp - 4ach]
        push ecx
        push 588b52e0h
        push 80h
        mov edx, dword ptr [ebp - 4b0h]
        push edx
        ; Exact mapped bytes E8 2A 70 D5 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x70
        __asm _emit 0xd5
        __asm _emit 0xff
        add esp, 14h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1158h]
        mov dword ptr [ebp - 4b4h], ecx
        push 6
        mov ecx, dword ptr [ebp - 4b4h]
        ; Exact mapped bytes E8 9B FF D5 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1158h]
        mov dword ptr [ebp - 4b8h], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 4b8h]
        ; Exact mapped bytes E8 7C C0 D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc0
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1158h]
        mov dword ptr [ebp - 4bch], edx
        push 0
        mov ecx, dword ptr [ebp - 4bch]
        ; Exact mapped bytes E8 C0 C0 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc0
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 DC 71 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x71
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 184h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 74 54: je 0x58759e92
        __asm _emit 0x74
        __asm _emit 0x54
        push 10101h
        push 0
        push 71c4dfh
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 25h
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        add eax, 63h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        add edx, 16h
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 63h
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 26 85 D2 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58759e9c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov ecx, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 4c0h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 4c0h]
        mov dword ptr [edx + 1170h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 4c4h], edx
        push 588b52e8h
        ; Exact mapped bytes E8 1C 81 DC FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4c8h], eax
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1170h]
        ; Exact mapped bytes E8 F5 02 D5 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 4cch], eax
        mov ecx, dword ptr [ebp - 4c4h]
        push ecx
        mov edx, dword ptr [ebp - 4c8h]
        push edx
        push 80h
        mov eax, dword ptr [ebp - 4cch]
        push eax
        ; Exact mapped bytes E8 E0 6E D5 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6e
        __asm _emit 0xd5
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1170h]
        mov dword ptr [ebp - 4d0h], edx
        push 6
        mov ecx, dword ptr [ebp - 4d0h]
        ; Exact mapped bytes E8 51 FE D5 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1170h]
        mov dword ptr [ebp - 4d4h], ecx
        push 3e8h
        mov ecx, dword ptr [ebp - 4d4h]
        ; Exact mapped bytes E8 32 BF D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xbf
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1170h]
        mov dword ptr [ebp - 4d8h], eax
        push 0
        mov ecx, dword ptr [ebp - 4d8h]
        ; Exact mapped bytes E8 76 BF D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xbf
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 68 AA D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xaa
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 270h]
        mov dword ptr [ebp - 4e0h], ecx
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x58759f96
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 48h]
        add edx, 1
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp - 48h], 4
        ; Exact mapped bytes 7D 0D: jge 0x58759fa9
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp + eax*4 - 20h], 0
        ; Exact mapped bytes EB E4: jmp 0x58759f8d
        __asm _emit 0xeb
        __asm _emit 0xe4
        mov dword ptr [ebp - 48h], 5
        ; Exact mapped bytes EB 09: jmp 0x58759fbb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 20h
        ; Exact mapped bytes 0F 8D BB 01 00 00: jge 0x5875a180
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 4dch], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4dch]
        ; Exact mapped bytes E8 AD 82 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x82
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 48 02: movzx cx, byte ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 4D 88: mov word ptr [ebp - 0x78], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x88
        movzx edx, word ptr [ebp - 78h]
        cmp edx, 0bh
        ; Exact mapped bytes 0F 8C 82 01 00 00: jl 0x5875a17b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 78h]
        add eax, 11h
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 4e0h]
        mov ecx, dword ptr [ebp - 68h]
        shl edx, cl
        and edx, 80000000h
        ; Exact mapped bytes 0F 84 61 01 00 00: je 0x5875a17b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 4e4h], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 4e4h]
        ; Exact mapped bytes E8 09 30 D3 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x30
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x5875a17b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 4e8h], edx
        push 0
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 4e8h]
        ; Exact mapped bytes E8 B1 2F D3 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x2f
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        ; Exact mapped bytes 0F 8E 10 01 00 00: jle 0x5875a17b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 4ech], edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 4ech]
        ; Exact mapped bytes E8 B7 2F D3 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x2f
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        mov dword ptr [ebp - 4f0h], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4f0h]
        ; Exact mapped bytes E8 B3 8A D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8a
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 3C: je 0x5875a0ef
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 4f8h], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        mov dword ptr [ebp - 4f4h], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4f4h]
        ; Exact mapped bytes E8 81 8A D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8a
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4f8h]
        ; Exact mapped bytes E8 A5 81 FF FF: call 0x58752290
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x5875a11e
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 4fch], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4fch]
        ; Exact mapped bytes E8 54 8A D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8a
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 3]
        mov eax, dword ptr [ebp - 18ch]
        movzx ecx, word ptr [eax + 6]
        cmp edx, ecx
        ; Exact mapped bytes 75 5D: jne 0x5875a17b
        __asm _emit 0x75
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 500h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 500h]
        ; Exact mapped bytes E8 24 8A D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8a
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 1]
        xor ecx, 55h
        and ecx, 7fh
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 18ch]
        cmp ecx, dword ptr [edx + eax + 28h]
        ; Exact mapped bytes 72 21: jb 0x5875a17b
        __asm _emit 0x72
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 68h]
        sub eax, 1ch
        ; Exact mapped bytes 78 19: js 0x5875a17b
        __asm _emit 0x78
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 68h]
        sub ecx, 1ch
        cmp ecx, 4
        ; Exact mapped bytes 7D 0E: jge 0x5875a17b
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp + edx*4 - 90h], 1
        ; Exact mapped bytes E9 32 FE FF FF: jmp 0x58759fb2
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ecx + eax + 1150h]
        ; Exact mapped bytes E8 29 A8 D2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa8
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        mov edx, dword ptr [ebp - 190h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 50ch], ecx
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 A4 A8 D2 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xa8
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, 0ch
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 504h], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 86 A8 D2 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 508h], eax
        lea edx, [ebp - 794h]
        push edx
        mov eax, dword ptr [ebp - 504h]
        push eax
        mov ecx, dword ptr [ebp - 508h]
        push ecx
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes FF 95 F4 FA FF FF: call dword ptr [ebp - 0x50c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        sub eax, 8
        mov dword ptr [ebp - 194h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 44h]
        mov ecx, dword ptr [edx + ecx + 1150h]
        ; Exact mapped bytes E8 96 C7 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc7
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 794h]
        lea edx, [eax + ecx + 2]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 74h]
        cmp eax, dword ptr [ebp - 194h]
        ; Exact mapped bytes 73 09: jae 0x5875a24b
        __asm _emit 0x73
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 1174h], 0
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875a26a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 48h]
        add eax, 1
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 4
        ; Exact mapped bytes 0F 8D 3D 02 00 00: jge 0x5875a4b1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        cmp dword ptr [ebp + ecx*4 - 20h], 1
        ; Exact mapped bytes 0F 85 2A 02 00 00: jne 0x5875a4ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 7B 6D 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6d
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 198h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 198h], 0
        ; Exact mapped bytes 74 50: je 0x5875a2ef
        __asm _emit 0x74
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 8]
        sub eax, 50h
        mov dword ptr [ebp - 510h], eax
        push 9ah
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 A8 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa8
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 514h], eax
        push 40h
        mov ecx, dword ptr [ebp - 510h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 514h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 39 80 D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x80
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875a2f9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov edx, dword ptr [ebp - 19ch]
        mov dword ptr [ebp - 518h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1174h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 518h]
        mov dword ptr [edx + ecx*4 + 1178h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1174h]
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + edx*4 + 1178h]
        mov dword ptr [ebp - 51ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 51ch]
        ; Exact mapped bytes E8 65 B2 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb2
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1174h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax*4 + 1178h]
        mov dword ptr [ebp - 520h], edx
        push 3e8h
        mov ecx, dword ptr [ebp - 520h]
        ; Exact mapped bytes E8 0C BB D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xbb
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1174h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + ecx*4 + 1178h]
        mov dword ptr [ebp - 524h], eax
        push 0
        mov ecx, dword ptr [ebp - 524h]
        ; Exact mapped bytes E8 46 BB D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xbb
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 62 6C 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x6c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a0h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes 74 54: je 0x5875a40c
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 50h
        mov dword ptr [ebp - 528h], edx
        mov eax, dword ptr [ebp - 48h]
        add eax, 9bh
        push eax
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 A7 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa7
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 52ch], eax
        push 40h
        mov ecx, dword ptr [ebp - 528h]
        push ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 52ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 1C 7F D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x7f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875a416
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov edx, dword ptr [ebp - 1a4h]
        mov dword ptr [ebp - 530h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1174h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 530h]
        mov dword ptr [edx + ecx*4 + 1188h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1174h]
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + edx*4 + 1188h]
        mov dword ptr [ebp - 534h], ecx
        push 3e8h
        mov ecx, dword ptr [ebp - 534h]
        ; Exact mapped bytes E8 18 BA D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1174h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax*4 + 1188h]
        mov dword ptr [ebp - 538h], edx
        push 0
        mov ecx, dword ptr [ebp - 538h]
        ; Exact mapped bytes E8 52 BA D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xba
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 74h]
        add eax, 14h
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1174h]
        add edx, 1
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 1174h], edx
        ; Exact mapped bytes E9 B0 FD FF FF: jmp 0x5875a261
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 4C 6B 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a8h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes 74 32: je 0x5875a500
        __asm _emit 0x74
        __asm _emit 0x32
        push 3e8h
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 4dh
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 63h
        push ecx
        push 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 28 7E D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875a50a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov eax, dword ptr [ebp - 1ach]
        mov dword ptr [ebp - 53ch], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 53ch]
        mov dword ptr [ecx + 1110h], edx
        push 54h
        ; Exact mapped bytes E8 D4 6A 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x6a
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b0h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes 74 32: je 0x5875a578
        __asm _emit 0x74
        __asm _emit 0x32
        push 3e8h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 4dh
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        sub eax, 63h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 B0 7D D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x7d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875a582
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov edx, dword ptr [ebp - 1b4h]
        mov dword ptr [ebp - 540h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 540h]
        mov dword ptr [eax + 1114h], ecx
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 11a8h], 0
        ; Exact mapped bytes 0F 85 E4 00 00 00: jne 0x5875a695
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1110h]
        mov dword ptr [ebp - 548h], ecx
        push 5ah
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 A5 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa5
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 544h], eax
        mov edx, dword ptr [ebp - 544h]
        push edx
        mov ecx, dword ptr [ebp - 548h]
        ; Exact mapped bytes E8 4B B9 D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb9
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1114h]
        mov dword ptr [ebp - 550h], ecx
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F A5 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa5
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 54ch], eax
        mov edx, dword ptr [ebp - 54ch]
        push edx
        mov ecx, dword ptr [ebp - 550h]
        ; Exact mapped bytes E8 17 B9 D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb9
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1110h]
        mov dword ptr [ebp - 554h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 554h]
        ; Exact mapped bytes E8 78 AF 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1114h]
        mov dword ptr [ebp - 558h], eax
        push 101h
        mov ecx, dword ptr [ebp - 558h]
        ; Exact mapped bytes E8 59 AF 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1110h]
        mov dword ptr [ebp - 55ch], edx
        push 0
        mov ecx, dword ptr [ebp - 55ch]
        ; Exact mapped bytes E8 CD B7 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb7
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1114h]
        mov dword ptr [ebp - 560h], ecx
        push 0
        mov ecx, dword ptr [ebp - 560h]
        ; Exact mapped bytes E8 B1 B7 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb7
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EA 02 00 00: jmp 0x5875a97f
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 119ch], 80h
        ; Exact mapped bytes 0F 87 91 00 00 00: ja 0x5875a739
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 AA A3 D2 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa3
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 7A: jne 0x5875a739
        __asm _emit 0x75
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1114h]
        mov dword ptr [ebp - 568h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 11a8h]
        push eax
        ; Exact mapped bytes 8B 0D E0 07 96 58: mov ecx, dword ptr [0x589607e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D A4 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 564h], eax
        mov ecx, dword ptr [ebp - 564h]
        push ecx
        mov ecx, dword ptr [ebp - 568h]
        ; Exact mapped bytes E8 35 B8 D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1110h]
        mov dword ptr [ebp - 56ch], eax
        push 0
        mov ecx, dword ptr [ebp - 56ch]
        ; Exact mapped bytes E8 C9 B7 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb7
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1114h]
        mov dword ptr [ebp - 570h], edx
        push 0
        mov ecx, dword ptr [ebp - 570h]
        ; Exact mapped bytes E8 0D B7 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb7
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 46 02 00 00: jmp 0x5875a97f
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B8 06 96 58 00: cmp dword ptr [0x589606b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 75 01 00 00: je 0x5875a8bb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 11a8h]
        sub ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 A0 D6 FF: call 0x584c4810
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa0
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x5875a80f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1114h]
        mov dword ptr [ebp - 578h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 11a8h]
        sub edx, 1
        push edx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 2F D6 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x2f
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 574h], eax
        mov eax, dword ptr [ebp - 574h]
        push eax
        mov ecx, dword ptr [ebp - 578h]
        ; Exact mapped bytes E8 8B B7 D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb7
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1114h]
        mov dword ptr [ebp - 57ch], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 5eh
        push ecx
        mov ecx, dword ptr [ebp - 57ch]
        ; Exact mapped bytes E8 E7 AE 05 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1114h]
        mov dword ptr [ebp - 580h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 53h
        push edx
        mov ecx, dword ptr [ebp - 580h]
        ; Exact mapped bytes E8 43 AF 05 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1110h]
        mov dword ptr [ebp - 584h], ecx
        push 0
        mov ecx, dword ptr [ebp - 584h]
        ; Exact mapped bytes E8 D7 B6 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb6
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x5875a8b6
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1110h]
        mov dword ptr [ebp - 58ch], eax
        push 5ah
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 A2 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa2
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 588h], eax
        mov ecx, dword ptr [ebp - 588h]
        push ecx
        mov ecx, dword ptr [ebp - 58ch]
        ; Exact mapped bytes E8 ED B6 D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1114h]
        mov dword ptr [ebp - 594h], eax
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 A2 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa2
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 590h], eax
        mov ecx, dword ptr [ebp - 590h]
        push ecx
        mov ecx, dword ptr [ebp - 594h]
        ; Exact mapped bytes E8 B9 B6 D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1110h]
        mov dword ptr [ebp - 598h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 598h]
        ; Exact mapped bytes E8 1A AD 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1114h]
        mov dword ptr [ebp - 59ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 59ch]
        ; Exact mapped bytes E8 FB AC 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x5875a962
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1110h]
        mov dword ptr [ebp - 5a4h], ecx
        push 5ah
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 A2 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 5a0h], eax
        mov edx, dword ptr [ebp - 5a0h]
        push edx
        mov ecx, dword ptr [ebp - 5a4h]
        ; Exact mapped bytes E8 41 B6 D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1114h]
        mov dword ptr [ebp - 5ach], ecx
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 A2 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa2
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 5a8h], eax
        mov edx, dword ptr [ebp - 5a8h]
        push edx
        mov ecx, dword ptr [ebp - 5ach]
        ; Exact mapped bytes E8 0D B6 D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1110h]
        mov dword ptr [ebp - 5b0h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 5b0h]
        ; Exact mapped bytes E8 6E AC 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1114h]
        mov dword ptr [ebp - 5b4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes E8 4F AC 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1114h]
        mov dword ptr [ebp - 6a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 6a0h]
        ; Exact mapped bytes E8 C2 B4 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb4
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 7E 66 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x66
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b8h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 1b8h], 0
        ; Exact mapped bytes 74 62: je 0x5875a9fe
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 3eh
        mov dword ptr [ebp - 5bch], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        sub eax, 61h
        mov dword ptr [ebp - 5c0h], eax
        push 0
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 A1 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 5c4h], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 5bch]
        push ecx
        mov edx, dword ptr [ebp - 5c0h]
        push edx
        mov eax, dword ptr [ebp - 5c4h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 2A 79 D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x79
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875aa08
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov edx, dword ptr [ebp - 1bch]
        mov dword ptr [ebp - 5c8h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 5c8h]
        mov dword ptr [eax + 1118h], ecx
        push 58h
        ; Exact mapped bytes E8 D6 65 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x65
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 1c0h], 0
        ; Exact mapped bytes 74 62: je 0x5875aaa6
        __asm _emit 0x74
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 8]
        sub eax, 3eh
        mov dword ptr [ebp - 5cch], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 61h
        mov dword ptr [ebp - 5d0h], edx
        push 0
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 A0 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa0
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 5d4h], eax
        push 3e8h
        mov eax, dword ptr [ebp - 5cch]
        push eax
        mov ecx, dword ptr [ebp - 5d0h]
        push ecx
        mov edx, dword ptr [ebp - 5d4h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 72 BD D2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xbd
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875aab0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov ecx, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 5d8h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 5d8h]
        mov dword ptr [edx + 111ch], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1118h]
        mov dword ptr [ebp - 5dch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 5dch]
        ; Exact mapped bytes E8 C2 AA 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1118h]
        mov dword ptr [ebp - 5e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 5e0h]
        ; Exact mapped bytes E8 36 B3 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb3
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 111ch]
        mov dword ptr [ebp - 5e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 5e4h]
        ; Exact mapped bytes E8 1A B3 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb3
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 111ch]
        mov dword ptr [ebp - 5e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 5e8h]
        ; Exact mapped bytes E8 0E 4A D4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 BA 64 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 1c8h], 0
        ; Exact mapped bytes 74 32: je 0x5875ab92
        __asm _emit 0x74
        __asm _emit 0x32
        push 3e8h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 52h
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        sub eax, 75h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 96 77 D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x77
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875ab9c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov edx, dword ptr [ebp - 1cch]
        mov dword ptr [ebp - 5ech], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 5ech]
        mov dword ptr [eax + 1140h], ecx
        push 54h
        ; Exact mapped bytes E8 42 64 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d0h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 1d0h], 0
        ; Exact mapped bytes 74 32: je 0x5875ac0a
        __asm _emit 0x74
        __asm _emit 0x32
        push 3e8h
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 8]
        sub eax, 52h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 75h
        push edx
        push 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 1E 77 D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x77
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875ac14
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 218h], 0
        mov ecx, dword ptr [ebp - 218h]
        mov dword ptr [ebp - 5f0h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 5f0h]
        mov dword ptr [edx + 1144h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1140h]
        mov dword ptr [ebp - 5f4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 5f4h]
        ; Exact mapped bytes E8 5E A9 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa9
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 1140h]
        mov dword ptr [ebp - 5f8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 5f8h]
        ; Exact mapped bytes E8 D2 B1 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1144h]
        mov dword ptr [ebp - 5fch], eax
        push 0
        mov ecx, dword ptr [ebp - 5fch]
        ; Exact mapped bytes E8 B6 B1 D2 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1144h]
        mov dword ptr [ebp - 600h], edx
        push 0
        mov ecx, dword ptr [ebp - 600h]
        ; Exact mapped bytes E8 AA 48 D4 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x48
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 84h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5875acc8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 84h]
        add eax, 1
        mov dword ptr [ebp - 84h], eax
        cmp dword ptr [ebp - 84h], 20h
        ; Exact mapped bytes 7D 5A: jge 0x5875ad2b
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        mov dword ptr [ebp - 604h], ecx
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 604h]
        ; Exact mapped bytes E8 6E 7E D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7e
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 1]
        xor eax, 55h
        cmp eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 7E 2B: jle 0x5875ad29
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        mov dword ptr [ebp - 608h], ecx
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 608h]
        ; Exact mapped bytes E8 41 7E D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7e
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 1]
        xor eax, 55h
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 8E: jmp 0x5875acb9
        __asm _emit 0xeb
        __asm _emit 0x8e
        cmp dword ptr [ebp - 5ch], 11h
        ; Exact mapped bytes 7D 22: jge 0x5875ad53
        __asm _emit 0x7d
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 111ch]
        mov dword ptr [ebp - 60ch], edx
        push 0
        mov ecx, dword ptr [ebp - 60ch]
        ; Exact mapped bytes E8 F3 4A D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x5875aed5
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 18h
        ; Exact mapped bytes 7D 22: jge 0x5875ad7b
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 111ch]
        mov dword ptr [ebp - 610h], ecx
        push 1
        mov ecx, dword ptr [ebp - 610h]
        ; Exact mapped bytes E8 CB 4A D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x5875aed5
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 1fh
        ; Exact mapped bytes 7D 22: jge 0x5875ada3
        __asm _emit 0x7d
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 111ch]
        mov dword ptr [ebp - 614h], eax
        push 2
        mov ecx, dword ptr [ebp - 614h]
        ; Exact mapped bytes E8 A3 4A D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x5875aed5
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 26h
        ; Exact mapped bytes 7D 22: jge 0x5875adcb
        __asm _emit 0x7d
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 111ch]
        mov dword ptr [ebp - 618h], edx
        push 3
        mov ecx, dword ptr [ebp - 618h]
        ; Exact mapped bytes E8 7B 4A D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x4a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0A 01 00 00: jmp 0x5875aed5
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 2fh
        ; Exact mapped bytes 7D 22: jge 0x5875adf3
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 111ch]
        mov dword ptr [ebp - 61ch], ecx
        push 4
        mov ecx, dword ptr [ebp - 61ch]
        ; Exact mapped bytes E8 53 4A D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x5875aed5
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 38h
        ; Exact mapped bytes 7D 22: jge 0x5875ae1b
        __asm _emit 0x7d
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 111ch]
        mov dword ptr [ebp - 620h], eax
        push 5
        mov ecx, dword ptr [ebp - 620h]
        ; Exact mapped bytes E8 2B 4A D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x5875aed5
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 41h
        ; Exact mapped bytes 7D 22: jge 0x5875ae43
        __asm _emit 0x7d
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 111ch]
        mov dword ptr [ebp - 624h], edx
        push 6
        mov ecx, dword ptr [ebp - 624h]
        ; Exact mapped bytes E8 03 4A D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x4a
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x5875aed5
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 4ch
        ; Exact mapped bytes 7D 1F: jge 0x5875ae68
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 111ch]
        mov dword ptr [ebp - 628h], ecx
        push 7
        mov ecx, dword ptr [ebp - 628h]
        ; Exact mapped bytes E8 DB 49 D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x49
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6D: jmp 0x5875aed5
        __asm _emit 0xeb
        __asm _emit 0x6d
        cmp dword ptr [ebp - 5ch], 57h
        ; Exact mapped bytes 7D 1F: jge 0x5875ae8d
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 111ch]
        mov dword ptr [ebp - 62ch], eax
        push 8
        mov ecx, dword ptr [ebp - 62ch]
        ; Exact mapped bytes E8 B6 49 D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x49
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 48: jmp 0x5875aed5
        __asm _emit 0xeb
        __asm _emit 0x48
        cmp dword ptr [ebp - 5ch], 62h
        ; Exact mapped bytes 7D 1F: jge 0x5875aeb2
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 111ch]
        mov dword ptr [ebp - 630h], edx
        push 9
        mov ecx, dword ptr [ebp - 630h]
        ; Exact mapped bytes E8 91 49 D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x49
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x5875aed5
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp dword ptr [ebp - 5ch], 7dh
        ; Exact mapped bytes 7F 1D: jg 0x5875aed5
        __asm _emit 0x7f
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 111ch]
        mov dword ptr [ebp - 634h], ecx
        push 0ah
        mov ecx, dword ptr [ebp - 634h]
        ; Exact mapped bytes E8 6C 49 D4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x49
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 638h], edx
        push 0
        mov ecx, dword ptr [ebp - 638h]
        ; Exact mapped bytes E8 6F 7C D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7c
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 1]
        xor eax, 55h
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 64h
        ; Exact mapped bytes 7C 74: jl 0x5875af75
        __asm _emit 0x7c
        __asm _emit 0x74
        cmp dword ptr [ebp - 6ch], 6eh
        ; Exact mapped bytes 7D 6E: jge 0x5875af75
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1140h]
        mov dword ptr [ebp - 640h], edx
        push 14h
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 9B D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x9b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 63ch], eax
        mov eax, dword ptr [ebp - 63ch]
        push eax
        mov ecx, dword ptr [ebp - 640h]
        ; Exact mapped bytes E8 F5 AF D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1144h]
        mov dword ptr [ebp - 648h], edx
        push 15h
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 9B D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 644h], eax
        mov eax, dword ptr [ebp - 644h]
        push eax
        mov ecx, dword ptr [ebp - 648h]
        ; Exact mapped bytes E8 C1 AF D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x5875b0d5
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 6ch], 6eh
        ; Exact mapped bytes 7C 74: jl 0x5875afef
        __asm _emit 0x7c
        __asm _emit 0x74
        cmp dword ptr [ebp - 6ch], 78h
        ; Exact mapped bytes 7D 6E: jge 0x5875afef
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1140h]
        mov dword ptr [ebp - 650h], edx
        push 16h
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 9B D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x9b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 64ch], eax
        mov eax, dword ptr [ebp - 64ch]
        push eax
        mov ecx, dword ptr [ebp - 650h]
        ; Exact mapped bytes E8 7B AF D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1144h]
        mov dword ptr [ebp - 658h], edx
        push 17h
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 9B D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 654h], eax
        mov eax, dword ptr [ebp - 654h]
        push eax
        mov ecx, dword ptr [ebp - 658h]
        ; Exact mapped bytes E8 47 AF D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x5875b0d5
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 6ch], 78h
        ; Exact mapped bytes 7C 71: jl 0x5875b066
        __asm _emit 0x7c
        __asm _emit 0x71
        cmp dword ptr [ebp - 6ch], 7dh
        ; Exact mapped bytes 7D 6B: jge 0x5875b066
        __asm _emit 0x7d
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1140h]
        mov dword ptr [ebp - 660h], edx
        push 18h
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 9B D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x9b
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 65ch], eax
        mov eax, dword ptr [ebp - 65ch]
        push eax
        mov ecx, dword ptr [ebp - 660h]
        ; Exact mapped bytes E8 01 AF D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1144h]
        mov dword ptr [ebp - 668h], edx
        push 19h
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 9A D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 664h], eax
        mov eax, dword ptr [ebp - 664h]
        push eax
        mov ecx, dword ptr [ebp - 668h]
        ; Exact mapped bytes E8 CD AE D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xae
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6F: jmp 0x5875b0d5
        __asm _emit 0xeb
        __asm _emit 0x6f
        cmp dword ptr [ebp - 6ch], 7dh
        ; Exact mapped bytes 7C 69: jl 0x5875b0d5
        __asm _emit 0x7c
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1140h]
        mov dword ptr [ebp - 670h], edx
        push 20h
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 9A D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x9a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 66ch], eax
        mov eax, dword ptr [ebp - 66ch]
        push eax
        mov ecx, dword ptr [ebp - 670h]
        ; Exact mapped bytes E8 90 AE D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xae
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 1144h]
        mov dword ptr [ebp - 678h], edx
        push 21h
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 9A D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x9a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 674h], eax
        mov eax, dword ptr [ebp - 674h]
        push eax
        mov ecx, dword ptr [ebp - 678h]
        ; Exact mapped bytes E8 5C AE D2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xae
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875b0e7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 6
        ; Exact mapped bytes 0F 8D BE 01 00 00: jge 0x5875b2af
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 0C 5F 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5f
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 74 37: je 0x5875b145
        __asm _emit 0x74
        __asm _emit 0x37
        push 3e8h
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 8]
        sub eax, 78h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 4]
        imul eax, dword ptr [ebp - 48h], 2fh
        lea ecx, [edx + eax - 55h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 E3 71 D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875b14f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1dch], 0
        mov eax, dword ptr [ebp - 1dch]
        mov dword ptr [ebp - 67ch], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 67ch]
        mov dword ptr [edx + ecx*4 + 6370h], eax
        push 0fch
        ; Exact mapped bytes E8 88 5E 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e0h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 1e0h], 0
        ; Exact mapped bytes 74 64: je 0x5875b1f6
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 73h
        mov dword ptr [ebp - 680h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        imul edx, dword ptr [ebp - 48h], 2fh
        lea eax, [ecx + edx - 41h]
        mov dword ptr [ebp - 684h], eax
        push 22h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 99 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x99
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 688h], eax
        mov ecx, dword ptr [ebp - 680h]
        push ecx
        mov edx, dword ptr [ebp - 684h]
        push edx
        push 3
        mov eax, dword ptr [ebp - 688h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 82 F7 05 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 1e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875b200
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e4h], 0
        mov edx, dword ptr [ebp - 1e4h]
        mov dword ptr [ebp - 68ch], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 68ch]
        mov dword ptr [ecx + eax*4 + 6388h], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax*4 + 6388h]
        mov dword ptr [ebp - 690h], edx
        push 3e8h
        mov ecx, dword ptr [ebp - 690h]
        ; Exact mapped bytes E8 3A AC D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax*4 + 6388h]
        mov dword ptr [ebp - 694h], edx
        push 101h
        mov ecx, dword ptr [ebp - 694h]
        ; Exact mapped bytes E8 47 A3 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax*4 + 6370h]
        mov dword ptr [ebp - 698h], edx
        push 0
        mov ecx, dword ptr [ebp - 698h]
        ; Exact mapped bytes E8 57 AC D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax*4 + 6388h]
        mov dword ptr [ebp - 69ch], edx
        push 0
        mov ecx, dword ptr [ebp - 69ch]
        ; Exact mapped bytes E8 37 AC D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2F FE FF FF: jmp 0x5875b0de
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 110h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 3F 2B 01 00: call 0x5876de00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 11c0h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 11c4h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 11c8h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 11cch], 0
        mov eax, dword ptr [ebp - 44h]
        mov byte ptr [eax + 11d0h], 0
        push 54h
        ; Exact mapped bytes E8 FE 5C 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e8h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 74 65: je 0x5875b381
        __asm _emit 0x74
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 53h
        mov dword ptr [ebp - 774h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 5ch
        mov dword ptr [ebp - 6a4h], ecx
        push 70bh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 97 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x97
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 6a8h], eax
        push 3e8h
        mov edx, dword ptr [ebp - 774h]
        push edx
        mov eax, dword ptr [ebp - 6a4h]
        push eax
        mov ecx, dword ptr [ebp - 6a8h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 A7 6F D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875b38b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ech], 0
        mov eax, dword ptr [ebp - 1ech]
        mov dword ptr [ebp - 6ach], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 6ach]
        mov dword ptr [ecx + 1120h], edx
        push 54h
        ; Exact mapped bytes E8 53 5C 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f0h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 1f0h], 0
        ; Exact mapped bytes 74 65: je 0x5875b42c
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 53h
        mov dword ptr [ebp - 6b0h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        sub eax, 5ch
        mov dword ptr [ebp - 6b4h], eax
        push 70ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 97 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x97
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 6b8h], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 6b0h]
        push ecx
        mov edx, dword ptr [ebp - 6b4h]
        push edx
        mov eax, dword ptr [ebp - 6b8h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 FC 6E D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x6e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875b436
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f4h], 0
        mov edx, dword ptr [ebp - 1f4h]
        mov dword ptr [ebp - 6bch], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 6bch]
        mov dword ptr [eax + 1124h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1124h]
        mov dword ptr [ebp - 6c0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 6c0h]
        ; Exact mapped bytes E8 3C A1 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 88 5B 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5b
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f8h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 1f8h], 0
        ; Exact mapped bytes 74 65: je 0x5875b4f7
        __asm _emit 0x74
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 53h
        mov dword ptr [ebp - 6c4h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 5ch
        mov dword ptr [ebp - 6c8h], ecx
        push 9dch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 96 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 6cch], eax
        push 3e8h
        mov edx, dword ptr [ebp - 6c4h]
        push edx
        mov eax, dword ptr [ebp - 6c8h]
        push eax
        mov ecx, dword ptr [ebp - 6cch]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 31 6E D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x6e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875b501
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1fch], 0
        mov eax, dword ptr [ebp - 1fch]
        mov dword ptr [ebp - 6d0h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 6d0h]
        mov dword ptr [ecx + 1128h], edx
        push 54h
        ; Exact mapped bytes E8 DD 5A 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5a
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 200h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 200h], 0
        ; Exact mapped bytes 74 65: je 0x5875b5a2
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 53h
        mov dword ptr [ebp - 6d4h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        sub eax, 5ch
        mov dword ptr [ebp - 6d8h], eax
        push 9ddh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 95 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 6dch], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 6d4h]
        push ecx
        mov edx, dword ptr [ebp - 6d8h]
        push edx
        mov eax, dword ptr [ebp - 6dch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 86 6D D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875b5ac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 204h], 0
        mov edx, dword ptr [ebp - 204h]
        mov dword ptr [ebp - 6e0h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 6e0h]
        mov dword ptr [eax + 112ch], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 112ch]
        mov dword ptr [ebp - 6e4h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 6e4h]
        ; Exact mapped bytes E8 C6 9F 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 12 5A 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5a
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 208h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 208h], 0
        ; Exact mapped bytes 74 32: je 0x5875b63a
        __asm _emit 0x74
        __asm _emit 0x32
        push 3e8h
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 64h
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 3ch
        push ecx
        push 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 EE 6C D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x6c
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875b644
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20ch], 0
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [ebp - 6e8h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 6e8h]
        mov dword ptr [ecx + 1130h], edx
        push 54h
        ; Exact mapped bytes E8 9A 59 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 210h], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 210h], 0
        ; Exact mapped bytes 74 32: je 0x5875b6b2
        __asm _emit 0x74
        __asm _emit 0x32
        push 3e8h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 64h
        push ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        sub eax, 3ch
        push eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 76 6C D2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x6c
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875b6bc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 214h], 0
        mov edx, dword ptr [ebp - 214h]
        mov dword ptr [ebp - 6ech], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 6ech]
        mov dword ptr [eax + 1134h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 1134h]
        mov dword ptr [ebp - 6f0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 6f0h]
        ; Exact mapped bytes E8 B6 9E 05 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 12b4h
        mov dword ptr [ebp - 6f4h], ecx
        push 20h
        mov ecx, dword ptr [ebp - 6f4h]
        ; Exact mapped bytes E8 CA E9 D5 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 5ec8h], 1
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 5ecch], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 5f24h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 2]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 69 B1 E9 FF: call 0x585f68c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb1
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 10ch], 0
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x5875b80a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10ch]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 56 3C 01 00: call 0x5876f3d0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 6fch], edx
        mov eax, dword ptr [ebp - 44h]
        mov esi, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ecx + 114ch]
        ; Exact mapped bytes E8 3A EA D4 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xea
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        imul edx, eax, 6
        lea eax, [esi + edx - 43h]
        mov dword ptr [ebp - 6f8h], eax
        mov ecx, dword ptr [ebp - 6f8h]
        push ecx
        mov ecx, dword ptr [ebp - 6fch]
        ; Exact mapped bytes E8 E4 9E 05 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 114ch]
        mov dword ptr [ebp - 700h], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 700h]
        ; Exact mapped bytes E8 95 A6 D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 114ch]
        mov dword ptr [ebp - 704h], edx
        push 1
        mov ecx, dword ptr [ebp - 704h]
        ; Exact mapped bytes E8 D9 A6 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa6
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5875b827
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 114ch]
        mov dword ptr [ebp - 708h], ecx
        push 0
        mov ecx, dword ptr [ebp - 708h]
        ; Exact mapped bytes E8 BA A6 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa6
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        add edx, 6
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 9A 19 01 00: call 0x5876d1d0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 6174h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 6178h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 344h], 0ffffffffh
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 5f20h], 0
        push 18h
        push 0
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 10f4h
        push ecx
        ; Exact mapped bytes E8 93 15 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x15
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 A8 C6 D2 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc6
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 7C: jmp 0x5875b907
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 5eb8h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 88h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 348h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 1280h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 174h], 0
        mov dword ptr [ebp - 79ch], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 5ec8h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 5ecch], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 5f24h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 110ch], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 6200h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 6204h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 6208h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 620ch], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 6210h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 6358h], 0
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [eax + 635ch], edx
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 6360h], 55555555h
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 6364h], 55555555h
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 63a0h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 64a4h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 64a8h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 64ach], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 6214h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 6218h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 621ch], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C A0 D3 FF: call 0x58495a30
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa0
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x5875ba13
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD B7 D7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb7
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 D9 09 00 00: jne 0x5875c3ec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 95 15 D3 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x15
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x5875ba3a
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 B7 D7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb7
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 0fh
        ; Exact mapped bytes 0F 85 B0 09 00 00: jne 0x5875c3ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 C8 6F FF FF: call 0x58752a10
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C7 04 00 00: je 0x5875bf17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 8ch], 0
        mov dword ptr [ebp - 224h], 0
        mov dword ptr [ebp - 228h], 0
        mov dword ptr [ebp - 22ch], 0
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875ba91
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 54h]
        add edx, 1
        mov dword ptr [ebp - 54h], edx
        cmp dword ptr [ebp - 54h], 20h
        ; Exact mapped bytes 0F 8D 16 02 00 00: jge 0x5875bcb1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 70ch], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 70ch]
        ; Exact mapped bytes E8 A8 70 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x70
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 2]
        mov dword ptr [ebp - 798h], edx
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 710h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 710h]
        ; Exact mapped bytes E8 81 70 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 2]
        cmp edx, 9
        ; Exact mapped bytes 0F 85 C0 01 00 00: jne 0x5875bcac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 714h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 714h]
        ; Exact mapped bytes E8 57 70 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x70
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 8
        mov esi, eax
        lea edi, [ebp - 40h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 718h], edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 718h]
        ; Exact mapped bytes E8 2D 70 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x70
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        and ecx, 3ffh
        xor ecx, 55h
        mov dword ptr [ebp - 25ch], ecx
        ; Exact mapped bytes F2 0F 2A 85 A4 FD FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x25c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 25ch]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 70 02 8B 58: mulsd xmm0, qword ptr [0x588b0270]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov dword ptr [ebp - 224h], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        mov dword ptr [ebp - 71ch], ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 71ch]
        ; Exact mapped bytes E8 D1 6F D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x6f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes F2 0F 2A 85 E4 FD FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x21c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 21ch]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 70 54 8B 58: mulsd xmm0, qword ptr [0x588b5470]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x54
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 228h], edx
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 720h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 720h]
        ; Exact mapped bytes E8 74 6F D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [eax + 14h]
        shr edx, 14h
        and edx, 3ffh
        xor edx, 55h
        mov dword ptr [ebp - 220h], edx
        ; Exact mapped bytes F2 0F 2A 85 E0 FD FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x220]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 220h]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 A8 93 8A 58: mulsd xmm0, qword ptr [0x588a93a8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x93
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C8: cvttsd2si ecx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov dword ptr [ebp - 22ch], ecx
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 728h], edx
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 724h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 724h]
        ; Exact mapped bytes E8 07 6F D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov esi, dword ptr [eax + 4]
        xor esi, 55h
        mov edi, dword ptr [ebp - 224h]
        add edi, dword ptr [ebp - 228h]
        add edi, dword ptr [ebp - 22ch]
        mov edx, 2
        imul ebx, edx, 3
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 728h]
        ; Exact mapped bytes E8 D8 6E D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x6e
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, word ptr [eax + ebx + 8]
        xor eax, 55h
        imul eax, edi
        xor edx, edx
        div esi
        add eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        ; Exact mapped bytes E9 D7 FD FF FF: jmp 0x5875ba88
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 0F 8E 54 02 00 00: jle 0x5875bf12
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp - 90h]
        sub eax, 1
        mov dword ptr [ebp - 90h], eax
        cmp dword ptr [ebp - 90h], 8
        ; Exact mapped bytes 0F 87 AC 00 00 00: ja 0x5875bd92
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 24 8D 5C C4 75 58: jmp dword ptr [ecx*4 + 0x5875c45c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x58
        imul eax, dword ptr [ebp - 50h], 64h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5875bda1
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 50h], 51h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x5875bda1
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 50h], 48h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 75: jmp 0x5875bda1
        __asm _emit 0xeb
        __asm _emit 0x75
        imul eax, dword ptr [ebp - 50h], 42h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 64: jmp 0x5875bda1
        __asm _emit 0xeb
        __asm _emit 0x64
        imul eax, dword ptr [ebp - 50h], 3eh
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 53: jmp 0x5875bda1
        __asm _emit 0xeb
        __asm _emit 0x53
        imul eax, dword ptr [ebp - 50h], 3ah
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 42: jmp 0x5875bda1
        __asm _emit 0xeb
        __asm _emit 0x42
        imul eax, dword ptr [ebp - 50h], 38h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 31: jmp 0x5875bda1
        __asm _emit 0xeb
        __asm _emit 0x31
        imul eax, dword ptr [ebp - 50h], 36h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 20: jmp 0x5875bda1
        __asm _emit 0xeb
        __asm _emit 0x20
        imul eax, dword ptr [ebp - 50h], 34h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 0F: jmp 0x5875bda1
        __asm _emit 0xeb
        __asm _emit 0x0f
        imul eax, dword ptr [ebp - 50h], 32h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 0F 8E 58 01 00 00: jle 0x5875bf12
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 6214h], 1
        mov dword ptr [ebp - 76ch], 0
        mov dword ptr [ebp - 768h], 0
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875bded
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 54h]
        add eax, 1
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 8
        ; Exact mapped bytes 0F 8D 01 01 00 00: jge 0x5875bef8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 110h
        ; Exact mapped bytes E8 03 52 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 230h], eax
        mov byte ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 230h], 0
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x5875bec6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 ED 98 D3 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x98
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        add ecx, 1
        mov dword ptr [ebp - 72ch], ecx
        mov eax, dword ptr [ebp - 54h]
        cdq
        sub eax, edx
        sar eax, 1
        imul edx, eax, 14h
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        lea edx, [ecx + edx - 46h]
        mov dword ptr [ebp - 730h], edx
        mov eax, dword ptr [ebp - 54h]
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5875be59
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        imul ecx, eax, 32h
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 4]
        lea ecx, [eax + ecx - 19h]
        mov dword ptr [ebp - 734h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 AB D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xab
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 738h], eax
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 72ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 768h]
        push edx
        mov eax, dword ptr [ebp - 76ch]
        push eax
        mov ecx, dword ptr [ebp - 730h]
        push ecx
        mov edx, dword ptr [ebp - 734h]
        push edx
        mov eax, dword ptr [ebp - 738h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 12 B2 DB FF: call 0x585170d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb2
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875bed0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 234h], 0
        mov edx, dword ptr [ebp - 234h]
        mov dword ptr [ebp - 73ch], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 73ch]
        mov dword ptr [ecx + eax*4 + 6224h], edx
        ; Exact mapped bytes E9 EC FE FF FF: jmp 0x5875bde4
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 6344h], 7dh
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 6348h], 0
        ; Exact mapped bytes E9 D3 04 00 00: jmp 0x5875c3ea
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 BB 8A D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 8
        ; Exact mapped bytes 74 5A: je 0x5875bf8f
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 9D 8A D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 35eh]
        cmp ecx, 0bbah
        ; Exact mapped bytes 74 3D: je 0x5875bf8f
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 80 8A D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, word ptr [eax + 35eh]
        cmp edx, 0bcbh
        ; Exact mapped bytes 74 20: je 0x5875bf8f
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 63 8A D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx eax, word ptr [eax + 35eh]
        cmp eax, 0bbdh
        ; Exact mapped bytes 0F 85 5B 04 00 00: jne 0x5875c3ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 1
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 44h]
        movzx ecx, byte ptr [eax + edx + 12c0h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 40 04 00 00: jle 0x5875c3ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 740h], edx
        push 1fh
        mov ecx, dword ptr [ebp - 740h]
        ; Exact mapped bytes E8 7A 10 D3 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 1C 04 00 00: je 0x5875c3ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 84 68 FF FF: call 0x58752860
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 06 04 00 00: je 0x5875c3ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 94h], 0
        mov dword ptr [ebp - 244h], 0
        mov dword ptr [ebp - 248h], 0
        mov dword ptr [ebp - 24ch], 0
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875c025
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        add eax, 1
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 20h
        ; Exact mapped bytes 0F 8D D7 01 00 00: jge 0x5875c206
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        mov dword ptr [ebp - 744h], ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 744h]
        ; Exact mapped bytes E8 13 6B D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x6b
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 2]
        cmp eax, 0ah
        ; Exact mapped bytes 0F 85 A7 01 00 00: jne 0x5875c201
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        mov dword ptr [ebp - 748h], ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 748h]
        ; Exact mapped bytes E8 E8 6A D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        and eax, 3ffh
        xor eax, 55h
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes F2 0F 2A 85 C8 FD FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x238]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 238h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 70 02 8B 58: mulsd xmm0, qword ptr [0x588b0270]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 244h], edx
        mov eax, dword ptr [ebp - 44h]
        add eax, 34ch
        mov dword ptr [ebp - 74ch], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 74ch]
        ; Exact mapped bytes E8 8E 6A D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [eax + 14h]
        shr edx, 0ah
        and edx, 3ffh
        xor edx, 55h
        mov dword ptr [ebp - 23ch], edx
        ; Exact mapped bytes F2 0F 2A 85 C4 FD FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x23c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 23ch]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 70 54 8B 58: mulsd xmm0, qword ptr [0x588b5470]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x54
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C8: cvttsd2si ecx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov dword ptr [ebp - 248h], ecx
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 750h], edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 750h]
        ; Exact mapped bytes E8 2F 6A D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        mov dword ptr [ebp - 240h], ecx
        ; Exact mapped bytes F2 0F 2A 85 C0 FD FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x240]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 240h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 A8 93 8A 58: mulsd xmm0, qword ptr [0x588a93a8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x93
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov dword ptr [ebp - 24ch], eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        mov dword ptr [ebp - 758h], ecx
        mov edx, dword ptr [ebp - 44h]
        add edx, 34ch
        mov dword ptr [ebp - 754h], edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 754h]
        ; Exact mapped bytes E8 C1 69 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x69
        __asm _emit 0xd4
        __asm _emit 0xff
        mov esi, dword ptr [eax + 4]
        xor esi, 55h
        mov edi, dword ptr [ebp - 244h]
        add edi, dword ptr [ebp - 248h]
        add edi, dword ptr [ebp - 24ch]
        mov ecx, 2
        imul ebx, ecx, 3
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 758h]
        ; Exact mapped bytes E8 92 69 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x69
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, word ptr [eax + ebx + 8]
        xor eax, 55h
        imul eax, edi
        xor edx, edx
        div esi
        add eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 4ch], eax
        imul eax, dword ptr [ebp - 4ch], 0dh
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 94h]
        add edx, 1
        mov dword ptr [ebp - 94h], edx
        ; Exact mapped bytes E9 16 FE FF FF: jmp 0x5875c01c
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 0F 8E D7 01 00 00: jle 0x5875c3ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 98h]
        sub ecx, 1
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 8
        ; Exact mapped bytes 0F 87 AC 00 00 00: ja 0x5875c2e7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 24 95 80 C4 75 58: jmp dword ptr [edx*4 + 0x5875c480]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x58
        imul eax, dword ptr [ebp - 4ch], 64h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5875c2f6
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 4ch], 51h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x5875c2f6
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 4ch], 48h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 75: jmp 0x5875c2f6
        __asm _emit 0xeb
        __asm _emit 0x75
        imul eax, dword ptr [ebp - 4ch], 42h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 64: jmp 0x5875c2f6
        __asm _emit 0xeb
        __asm _emit 0x64
        imul eax, dword ptr [ebp - 4ch], 3eh
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 53: jmp 0x5875c2f6
        __asm _emit 0xeb
        __asm _emit 0x53
        imul eax, dword ptr [ebp - 4ch], 3ah
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 42: jmp 0x5875c2f6
        __asm _emit 0xeb
        __asm _emit 0x42
        imul eax, dword ptr [ebp - 4ch], 38h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 31: jmp 0x5875c2f6
        __asm _emit 0xeb
        __asm _emit 0x31
        imul eax, dword ptr [ebp - 4ch], 36h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 20: jmp 0x5875c2f6
        __asm _emit 0xeb
        __asm _emit 0x20
        imul eax, dword ptr [ebp - 4ch], 34h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x5875c2f6
        __asm _emit 0xeb
        __asm _emit 0x0f
        imul eax, dword ptr [ebp - 4ch], 32h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 6218h], 1
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875c333
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        add eax, 1
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 40h
        ; Exact mapped bytes 0F 8D AD 00 00 00: jge 0x5875c3ea
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a4h
        ; Exact mapped bytes E8 BD 4C 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 250h], eax
        mov byte ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 250h], 0
        ; Exact mapped bytes 74 37: je 0x5875c394
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 A6 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 75ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 75ch]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 04 51 DB FF: call 0x58511490
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x51
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c39e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 254h], 0
        mov ecx, dword ptr [ebp - 254h]
        mov dword ptr [ebp - 760h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 760h]
        mov dword ptr [eax + edx*4 + 6244h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + edx*4 + 6244h]
        mov dword ptr [ebp - 764h], ecx
        push 1f5h
        mov ecx, dword ptr [ebp - 764h]
        ; Exact mapped bytes E8 9C 9A D2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9a
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x5875c32a
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2E: jmp 0x5875c41a
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 5C 00 00: call 0x58762060
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x5875c41a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 34ch
        ; Exact mapped bytes E8 07 66 FF FF: call 0x58752a10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5875c41a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [edx + 6214h], 1
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [eax + 6220h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 1198h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 FA 4B 0D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x4b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
