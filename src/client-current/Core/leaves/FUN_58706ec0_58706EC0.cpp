// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58706EC0 .. +0x3B5 bytes.
extern "C" __declspec(naked) void FUN_58706ec0_58706EC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 FC 02 00 00: jne 0x587071cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x58706f67
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 80 E6 FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x80
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 588b3d3ch
        ; Exact mapped bytes E8 F3 B0 E1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb0
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 58 DE FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x58
        __asm _emit 0xde
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 9D E6 FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x9d
        __asm _emit 0xe6
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 7F F7 FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7f
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x58706f54
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A E5 ED FF: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe5
        __asm _emit 0xed
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D E4 ED FF: call 0x585e5390
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 63 02 00 00: jmp 0x587071ca
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0cch]
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x58707015
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 7F E6 FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7f
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 588b3d58h
        ; Exact mapped bytes E8 5F B0 E1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb0
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DD 57 DE FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x57
        __asm _emit 0xde
        __asm _emit 0xff
        push 3
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 9C E6 FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0xe6
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 7F F7 FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7f
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 36: jne 0x58707002
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 F9 D7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D2 5F D8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5f
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 FE: mov word ptr [ebp - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfe
        movzx edx, word ptr [ebp - 2]
        push edx
        push 3
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C E4 ED FF: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xe4
        __asm _emit 0xed
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F E3 ED FF: call 0x585e5390
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 B5 01 00 00: jmp 0x587071ca
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x587070aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE 7E E6 FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x7e
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 588b3d74h
        ; Exact mapped bytes E8 B1 AF E1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xaf
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2F 57 DE FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x57
        __asm _emit 0xde
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 9B E6 FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x9b
        __asm _emit 0xe6
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 7E F7 FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x58707097
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 E4 ED FF: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe4
        __asm _emit 0xed
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA E2 ED FF: call 0x585e5390
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x587071ca
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0d4h]
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x5870713e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 7E E6 FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7e
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 588b3d9ch
        ; Exact mapped bytes E8 1C AF E1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xaf
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9A 56 DE FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x56
        __asm _emit 0xde
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 9B E6 FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x9b
        __asm _emit 0xe6
        __asm _emit 0xff
        push 4
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 7D F7 FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x5870712b
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 E3 ED FF: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe3
        __asm _emit 0xed
        __asm _emit 0xff
        push 4
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 E2 ED FF: call 0x585e5390
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe2
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x587071ca
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes 75 7E: jne 0x587071ca
        __asm _emit 0x75
        __asm _emit 0x7e
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 7D E6 FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7d
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 588b3dc8h
        ; Exact mapped bytes E8 8C AE E1 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xae
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0A 56 DE FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x56
        __asm _emit 0xde
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD 9A E6 FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9a
        __asm _emit 0xe6
        __asm _emit 0xff
        push 3
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 7D F7 FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x587071bc
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 E2 ED FF: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe2
        __asm _emit 0xed
        __asm _emit 0xff
        push 3
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 E1 ED FF: call 0x585e5390
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe1
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x5870726d
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x5870726d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0dch]
        ; Exact mapped bytes 75 0B: jne 0x587071f2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E1 0F 00 00: call 0x587081d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 7B: jmp 0x5870726d
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes 75 0B: jne 0x5870720b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E8 FB FF FF: call 0x58706df0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 62: jmp 0x5870726d
        __asm _emit 0xeb
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0cch]
        ; Exact mapped bytes 75 0B: jne 0x58707224
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CF FB FF FF: call 0x58706df0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 49: jmp 0x5870726d
        __asm _emit 0xeb
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0d0h]
        ; Exact mapped bytes 75 0B: jne 0x5870723d
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B6 FB FF FF: call 0x58706df0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 30: jmp 0x5870726d
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0d4h]
        ; Exact mapped bytes 75 0B: jne 0x58707256
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9D FB FF FF: call 0x58706df0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x5870726d
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes 75 09: jne 0x5870726d
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 84 FB FF FF: call 0x58706df0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
