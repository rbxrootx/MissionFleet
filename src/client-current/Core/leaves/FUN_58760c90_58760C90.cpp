// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58760C90 .. +0x277 bytes.
extern "C" __declspec(naked) void FUN_58760c90_58760C90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 40000000h
        ; Exact mapped bytes 0F 85 6B 01 00 00: jne 0x58760e11
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5eech], 50000h
        ; Exact mapped bytes 75 4E: jne 0x58760d03
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 64 D7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x64
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 6
        ; Exact mapped bytes 75 37: jne 0x58760d03
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 08 E1 FF: call 0x585715a0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x08
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7A 96 D6 FF: call 0x584ca360
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x58760d03
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12b0h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E0 51 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x51
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58760d1a
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12b0h]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C7 51 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x51
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        push 0ah
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 3D D2 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 87 B0 05 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 5C D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 23: je 0x58760d80
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10c0h], 0
        ; Exact mapped bytes 74 17: je 0x58760d80
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e7ch]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 31 E0 D5 FF: call 0x584bedb0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe0
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5eech], 40000h
        ; Exact mapped bytes 75 17: jne 0x58760da6
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1158h]
        mov dword ptr [ebp - 28h], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3B 51 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5eech], 40000h
        ; Exact mapped bytes 75 57: jne 0x58760e0c
        __asm _emit 0x75
        __asm _emit 0x57
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58760dc7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 1174h]
        ; Exact mapped bytes 73 37: jae 0x58760e0c
        __asm _emit 0x73
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1178h]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F1 50 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x50
        __asm _emit 0xd2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1188h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D7 50 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x50
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B2: jmp 0x58760dbe
        __asm _emit 0xeb
        __asm _emit 0xb2
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x58760f01
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x58760f01
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12b0h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AF 50 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x50
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 5B D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x5b
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 23: je 0x58760e65
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10c0h], 0
        ; Exact mapped bytes 74 17: je 0x58760e65
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e7ch]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 4C DF D5 FF: call 0x584bedb0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdf
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 63 D7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x63
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 6
        ; Exact mapped bytes 75 17: jne 0x58760e93
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1170h]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 4E 50 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x50
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1158h]
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 37 50 D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x50
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58760ebc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 1174h]
        ; Exact mapped bytes 73 37: jae 0x58760f01
        __asm _emit 0x73
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1178h]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 FC 4F D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1188h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E2 4F D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B2: jmp 0x58760eb3
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
