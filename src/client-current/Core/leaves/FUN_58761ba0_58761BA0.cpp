// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58761BA0 .. +0x2DC bytes.
extern "C" __declspec(naked) void FUN_58761ba0_58761BA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 5eech], 50000h
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 E7 00 00: call 0x58770390
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0C: jmp 0x58761bd5
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        movzx eax, word ptr [ebp - 4]
        cmp eax, 20h
        ; Exact mapped bytes 7D 37: jge 0x58761c15
        __asm _emit 0x7d
        __asm _emit 0x37
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 24: je 0x58761c13
        __asm _emit 0x74
        __asm _emit 0x24
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [ecx + eax*4 + 17ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB B4: jmp 0x58761bc9
        __asm _emit 0xeb
        __asm _emit 0xb4
        ; Exact mapped bytes 83 3D 10 06 96 58 00: cmp dword ptr [0x58960610], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 30: je 0x58761c4e
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 4D D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4d
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 16: je 0x58761c4e
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 93 30 05 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 28 BD 00 00: call 0x5876d980
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FE BD 00 00: call 0x5876da60
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 74 BE 00 00: call 0x5876dae0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0C: jmp 0x58761c81
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 2F: jge 0x58761cbf
        __asm _emit 0x7d
        __asm _emit 0x2f
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 1C: je 0x58761cbd
        __asm _emit 0x74
        __asm _emit 0x1c
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A4 03 DD FF: call 0x58532060
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B6: jmp 0x58761c75
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 5e7ch], 0
        ; Exact mapped bytes 74 4F: je 0x58761d1a
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5e7ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 93 C9 D5 FF: call 0x584be680
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 5e7ch]
        mov dword ptr [ebp - 18h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8D 42 D2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x42
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5e7ch]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 97 D0 D5 FF: call 0x584bedb0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd0
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 5e80h], 0
        ; Exact mapped bytes 74 4F: je 0x58761d75
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5e80h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 38 C9 D5 FF: call 0x584be680
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 5e80h]
        mov dword ptr [ebp - 24h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 32 42 D2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x42
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5e80h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3C D0 D5 FF: call 0x584bedb0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd0
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 74 75 94 58 00: cmp dword ptr [0x58947574], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x58761e49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 4C D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x4c
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x58761e49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 5e7ch], 0
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x58761e49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 5e80h], 0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x58761e49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 42 FC FF FF: call 0x58761a00
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 5e7ch]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DC CF D5 FF: call 0x584bedb0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xcf
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5e7ch]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 76 CE D5 FF: call 0x584bec60
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xce
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5e80h]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B0 CF D5 FF: call 0x584bedb0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xcf
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 5e80h]
        mov dword ptr [ebp - 38h], eax
        push 2
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 4A CE D5 FF: call 0x584bec60
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xce
        __asm _emit 0xd5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF ED DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xed
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A2 25 DF FF: call 0x585543d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x25
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 ED DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xed
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 4A 22 DF FF: call 0x58554090
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x22
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2F: jmp 0x58761e78
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 10c0h], 0
        ; Exact mapped bytes 74 23: je 0x58761e78
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 5e7ch], 0
        ; Exact mapped bytes 74 17: je 0x58761e78
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5e7ch]
        mov dword ptr [ebp - 44h], ecx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E9 CD D5 FF: call 0x584bec60
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
