// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58685830 .. +0x5BB bytes.
extern "C" __declspec(naked) void FUN_58685830_58685830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a4h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0f0h], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5868585b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 8D FD 00 00 00: jge 0x58685964
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a20h]
        mov dword ptr [ebp - 14h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0F 07 E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x07
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a20h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        imul eax, dword ptr [ebp - 8], 27h
        lea ecx, [edx + eax + 0fh]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 08 FE 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9e0h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        imul ecx, dword ptr [ebp - 8], 27h
        lea edx, [eax + ecx + 5]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E1 FD 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9c0h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        imul edx, dword ptr [ebp - 8], 27h
        lea eax, [ecx + edx + 5]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BA FD 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a00h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        imul eax, dword ptr [ebp - 8], 27h
        lea ecx, [edx + eax + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 93 FD 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a00h]
        mov dword ptr [ebp - 28h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 59 06 E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 978h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        imul ecx, dword ptr [ebp - 8], 27h
        lea edx, [eax + ecx + 5]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 52 FD 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EE FE FF FF: jmp 0x58685852
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x58685975
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 8D CB 00 00 00: jge 0x58685a4a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a20h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F7 05 E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a20h]
        mov dword ptr [ebp - 34h], ecx
        push 500h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 FA FC 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9e0h]
        mov dword ptr [ebp - 38h], ecx
        push 500h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 DD FC 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9c0h]
        mov dword ptr [ebp - 3ch], ecx
        push 500h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C0 FC 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a00h]
        mov dword ptr [ebp - 40h], ecx
        push 500h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A3 FC 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a00h]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 69 05 E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 978h]
        mov dword ptr [ebp - 48h], ecx
        push 500h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 6C FC 12 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 22 FF FF FF: jmp 0x5868596c
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58685a63
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 7A: jge 0x58685ae3
        __asm _emit 0x7d
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0a50h]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 5D 04 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [esi + edx*4 + 898h]
        mov dword ptr [ecx + eax*4 + 8a8h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 898h]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 8a8h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 82 EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 8a8h]
        xor edx, 55h
        ; Exact mapped bytes 74 07: je 0x58685ade
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x58685a5a
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a50h]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 DE 03 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a44h]
        mov dword ptr [ebp - 54h], edx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 78 56 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x56
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4ch]
        mov dword ptr [ebp - 5ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 0E E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0A 69 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x69
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A3 EE DF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xee
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 50 10: and dx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x10
        movzx eax, dx
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 38 56 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x56
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58685b71
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 20: jge 0x58685b97
        __asm _emit 0x7d
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB D1: jmp 0x58685b68
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a60h]
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 0E E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0e
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8B 68 E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 24 EE DF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xee
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 48 10: and cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x10
        movzx edx, cx
        sub edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 B6 55 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0x13
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC F5 FF FF: call 0x586851a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x58685cd7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a68h]
        mov dword ptr [ebp - 68h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 D2 02 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a68h]
        mov dword ptr [ebp - 6ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 B3 02 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a68h]
        mov dword ptr [ebp - 70h], ecx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 95 02 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8ch]
        mov dword ptr [ebp - 74h], eax
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 7F 02 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a98h]
        mov dword ptr [ebp - 78h], edx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 69 02 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a9ch]
        mov dword ptr [ebp - 7ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 53 02 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0aa0h]
        mov dword ptr [ebp - 80h], edx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 34 02 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0aa0h]
        mov dword ptr [ebp - 84h], edx
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 0F 02 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x58685de4
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a68h]
        mov dword ptr [ebp - 88h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 E4 01 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a68h]
        mov dword ptr [ebp - 8ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 BF 01 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a68h]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 9B 01 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8ch]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 7F 01 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a98h]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 63 01 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a9ch]
        mov dword ptr [ebp - 9ch], eax
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 47 01 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0aa0h]
        mov dword ptr [ebp - 0a0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 22 01 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0aa0h]
        mov dword ptr [ebp - 0a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 FD 00 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
