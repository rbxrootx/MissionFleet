// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DDB30 .. +0x731 bytes.
extern "C" __declspec(naked) void FUN_586ddb30_586DDB30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 110h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 8], 7eh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 188h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 648h]
        mov dword ptr [ebp - 14h], eax
        push 2
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 64 6F DA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x6f
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E5 90 DA FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 188h]
        mov dword ptr [ebp - 20h], eax
        push 0c8h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AC 79 0D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x79
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 648h]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1A 6F DA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6f
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9B 90 DA FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 648h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E9 6E DA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 6A 90 DA FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [ebp - 3ch], eax
        push 5ah
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 34 79 0D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x79
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 78 5D 90 58 00: cmp dword ptr [0x58905d78], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x586ddc25
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes C7 05 78 5D 90 58 00 00 00 00: mov dword ptr [0x58905d78], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 38 06 00 00: jmp 0x586de25d
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 160h]
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 7C DB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7c
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 320h
        sub eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 5D 7A 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 164h]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 7C DB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7c
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 320h
        sub eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 2F 7A 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 17ch]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 7C DB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7c
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 1f4h
        sub eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 01 7A 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x7a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 154h]
        mov dword ptr [ebp - 5ch], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 7C DB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x7c
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 27ah
        sub eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 D3 79 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x79
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 150h]
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 7B DB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x7b
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 1cbh
        sub eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 A5 79 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x79
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        mov dword ptr [ebp - 6ch], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE 7B DB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7b
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 320h
        sub eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 77 79 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x79
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 85 69 02 00 00: jne 0x586ddfad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 188h]
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 7B DB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x7b
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 12ch
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 C1 79 0D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x79
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18ch]
        mov dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 7B DB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7b
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 3ch
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 98 79 0D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x79
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 84h], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 7A DB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7a
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 3ch
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 69 79 0D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x79
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4c8h]
        mov dword ptr [ebp - 88h], edx
        push 0d3h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 CA 78 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4b8h]
        mov dword ptr [ebp - 8ch], ecx
        push 114h
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 AB 78 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4bch]
        mov dword ptr [ebp - 90h], eax
        push 114h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 8C 78 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4a8h]
        mov dword ptr [ebp - 94h], edx
        push 114h
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 6D 78 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c4h]
        mov dword ptr [ebp - 98h], ecx
        push 157h
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 4E 78 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4c4h]
        mov dword ptr [ebp - 9ch], eax
        push 1a3h
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 1F 90 DD FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x90
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4b0h]
        mov dword ptr [ebp - 0a0h], edx
        push 2fch
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 10 78 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4b4h]
        mov dword ptr [ebp - 0a4h], ecx
        push 2fch
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 F1 77 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4a4h]
        mov dword ptr [ebp - 0a8h], eax
        push 2fch
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 D2 77 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 0ach], edx
        push 19dh
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 B3 77 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 498h]
        mov dword ptr [ebp - 0b0h], eax
        push 2b2h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 8B 77 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 498h]
        mov dword ptr [ebp - 0b4h], eax
        push 2e4h
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 63 77 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4cch]
        mov dword ptr [ebp - 0b8h], edx
        push 82h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 44 77 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586ddf7f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 74 23: je 0x586ddfa8
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 4d0h]
        mov dword ptr [ebp - 0bch], eax
        push 69h
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 0B 77 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CE: jmp 0x586ddf76
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes E9 B0 02 00 00: jmp 0x586de25d
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 188h]
        mov dword ptr [ebp - 0c4h], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 78 DB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 0c3h
        mov dword ptr [ebp - 0c0h], eax
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 4C 77 0D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18ch]
        mov dword ptr [ebp - 0cch], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 78 DB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 0c3h
        mov dword ptr [ebp - 0c8h], eax
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 15 77 0D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x77
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 0d4h], edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 78 DB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 0c3h
        mov dword ptr [ebp - 0d0h], eax
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 DE 76 0D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x76
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4c8h]
        mov dword ptr [ebp - 0d8h], edx
        push 0ach
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 3F 76 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x76
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4b8h]
        mov dword ptr [ebp - 0dch], ecx
        push 0eeh
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 20 76 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x76
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4bch]
        mov dword ptr [ebp - 0e0h], eax
        push 0eeh
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 01 76 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x76
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4a8h]
        mov dword ptr [ebp - 0e4h], edx
        push 0eeh
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 E2 75 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c4h]
        mov dword ptr [ebp - 0e8h], ecx
        push 104h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 C3 75 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4c4h]
        mov dword ptr [ebp - 0ech], eax
        push 30ch
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 94 8D DD FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x8d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4b0h]
        mov dword ptr [ebp - 0f0h], edx
        push 3c5h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 85 75 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4b4h]
        mov dword ptr [ebp - 0f4h], ecx
        push 3c5h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 66 75 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4a4h]
        mov dword ptr [ebp - 0f8h], eax
        push 3c5h
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 47 75 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 0fch], edx
        push 140h
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 28 75 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 498h]
        mov dword ptr [ebp - 100h], eax
        push 370h
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 00 75 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 498h]
        mov dword ptr [ebp - 104h], eax
        push 3a2h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 D8 74 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x74
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4f8h]
        mov dword ptr [ebp - 108h], edx
        push 12ch
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 B9 74 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x74
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 194h]
        ; Exact mapped bytes E8 1B AC 06 00: call 0x58748e20
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4cch]
        mov dword ptr [ebp - 10ch], edx
        push 57h
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 8F 74 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x74
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586de234
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 6
        ; Exact mapped bytes 74 23: je 0x586de25d
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 4d0h]
        mov dword ptr [ebp - 110h], eax
        push 36h
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 56 74 0D 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x74
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CE: jmp 0x586de22b
        __asm _emit 0xeb
        __asm _emit 0xce
        mov esp, ebp
        pop ebp
        ret
    }
}
