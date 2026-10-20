// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586514C0 .. +0xA1A bytes.
extern "C" __declspec(naked) void FUN_586514c0_586514C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 74 1B: je 0x586514fe
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 0F 85 D8 09 00 00: jne 0x58651ed6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 234h]
        mov dword ptr [ebp - 28h], ecx
        push 588af414h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 47 4B E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4b
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 CD 01 00 00: jne 0x58651734
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 94h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 2ch], ecx
        push 72h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8E 35 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x35
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 8F 49 E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x49
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 94h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 38h], ecx
        push 71h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 54 35 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x35
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 55 49 E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x49
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 13ch]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 4F E2 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe2
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 158h]
        mov dword ptr [ebp - 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D9 48 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x48
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C3 48 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x48
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 2d8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 50h], ecx
        push 5ah
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D7 34 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x34
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D8 48 E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x48
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 5ch], eax
        push 59h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 A6 34 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x34
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 A7 48 E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x48
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 68h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 0E 3F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 6ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 F5 3E 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x3e
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586516ce
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7D 5B: jge 0x5865172f
        __asm _emit 0x7d
        __asm _emit 0x5b
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586516e6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 23: jge 0x5865170f
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 17ch]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 70h], eax
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 D4 47 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x47
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x586516dd
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        mov dword ptr [ebp - 74h], eax
        push 588af415h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 74 49 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x49
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 96: jmp 0x586516c5
        __asm _emit 0xeb
        __asm _emit 0x96
        ; Exact mapped bytes E9 E4 00 00 00: jmp 0x58651818
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 80h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 78h], eax
        push 70h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 C1 33 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x33
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 C2 47 E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x47
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 84h], eax
        push 6fh
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 7E 33 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x33
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 76 47 E3 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x47
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 6A E0 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe0
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 94h], edx
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 EE 46 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x46
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 158h]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 D2 46 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x46
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 2d8h], 1
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 3
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x586518e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 9ch], edx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 FC DF E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 0a0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 E0 DF E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xdf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 0a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 C4 DF E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xdf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        mov dword ptr [ebp - 0a8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 A8 DF E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xdf
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 1F: jne 0x586518c1
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 134h]
        mov dword ptr [ebp - 0ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 82 DF E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xdf
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x586518de
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 134h]
        mov dword ptr [ebp - 0b0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 63 DF E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xdf
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x5865198f
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 0b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 41 DF E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xdf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 0b8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 25 DF E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xdf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 09 DF E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xdf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        mov dword ptr [ebp - 0c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 ED DE E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xde
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 134h]
        mov dword ptr [ebp - 0c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 D1 DE E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xde
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 234h]
        mov dword ptr [ebp - 0c8h], eax
        push 588af416h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 12 47 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x47
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1dch]
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 78 E6 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x78
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 F3 FD FF: call 0x58630d40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        mov dword ptr [ebp - 0cch], ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 BC 97 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes E8 D6 EE 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xee
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 214h]
        ; Exact mapped bytes E8 C8 EE 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xee
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 218h]
        ; Exact mapped bytes E8 BA EE 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58651a19
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 74 43: je 0x58651a62
        __asm _emit 0x74
        __asm _emit 0x43
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58651a31
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 29: jge 0x58651a60
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 1e8h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0d4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 E3 DD E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xdd
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58651a28
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB AE: jmp 0x58651a10
        __asm _emit 0xeb
        __asm _emit 0xae
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58651a74
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1dch]
        ; Exact mapped bytes E8 25 3D E4 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D 7E 02 00 00: jge 0x58651d12
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 78 E6 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x78
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 9C 70 01 00: call 0x58668b50
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 31 73 FF FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 75 3B: jne 0x58651b01
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 210h]
        mov dword ptr [ebp - 0e0h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 03 7A E6 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7a
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        push 777777h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 22 EA 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xea
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x58651b3a
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 0e8h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C8 79 E6 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x79
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        push 0ffffffh
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 E7 E9 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AE 72 FF FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 6
        ; Exact mapped bytes 0F 87 44 01 00 00: ja 0x58651c96
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 24 85 DC 1E 65 58: jmp dword ptr [eax*4 + 0x58651edc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x1e
        __asm _emit 0x65
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 0f0h], edx
        push 588af418h
        ; Exact mapped bytes E8 7B 04 ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        push 777777h
        push 0
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 89 E9 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x58651c96
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 0f8h], edx
        push 588af438h
        ; Exact mapped bytes E8 3A 04 ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x04
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 48 E9 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x58651c96
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 100h], edx
        push 588af45ch
        ; Exact mapped bytes E8 F9 03 ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 07 E9 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 7A: jmp 0x58651c96
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 108h], edx
        push 588af480h
        ; Exact mapped bytes E8 BB 03 ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 C9 E8 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3C: jmp 0x58651c96
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 110h], edx
        push 588af4a4h
        ; Exact mapped bytes E8 7D 03 ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 8B E8 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 52 71 FF FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 75 29: jne 0x58651cce
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 218h]
        mov dword ptr [ebp - 114h], eax
        push 0ffffffh
        push -1
        push 588af417h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 55 E8 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3F: jmp 0x58651d0d
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 218h]
        mov dword ptr [ebp - 11ch], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8B 79 F3 FF: call 0x58589670
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 1C E8 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E9 59 FD FF FF: jmp 0x58651a6b
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1dch]
        mov dword ptr [ebp - 120h], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 57 94 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x94
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 21ch
        ; Exact mapped bytes E8 F8 64 E3 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x64
        __asm _emit 0xe3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x58651e42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 21ch
        mov dword ptr [ebp - 124h], ecx
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 12 63 E3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 12: jmp 0x58651d83
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0
        lea eax, [ebp - 148h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 FE 5C E3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5c
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 21ch
        mov dword ptr [ebp - 128h], ecx
        lea edx, [ebp - 14ch]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 EC 63 E3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 23 5C E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5c
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x58651e42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 130h], edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 71 5C E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 12ch], eax
        push 83add7h
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 30 E7 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe7
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 214h]
        mov dword ptr [ebp - 134h], eax
        push 0ffffffh
        push -1
        push 588af45ah
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 0A E7 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe7
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 218h]
        mov dword ptr [ebp - 138h], edx
        push 0ffffffh
        push -1
        push 588af45bh
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 E4 E6 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe6
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x58651d71
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A6 F2 FF FF: call 0x586510f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1dch]
        mov dword ptr [ebp - 140h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 21ch
        ; Exact mapped bytes E8 D1 63 E3 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 09 93 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x93
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2e0h], 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 2d9h], 1
        push 58960530h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 AE F2 FF: call 0x5857cd60
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xae
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 76 1D: jbe 0x58651ed6
        __asm _emit 0x76
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ech]
        mov dword ptr [ebp - 144h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 BB 40 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x40
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
