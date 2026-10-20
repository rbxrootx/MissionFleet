// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E9670 .. +0x206 bytes.
extern "C" __declspec(naked) void FUN_584e9670_584E9670() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 14h], 0ah
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 18h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx + 64h], 0
        ; Exact mapped bytes 74 29: je 0x584e96f8
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx + 64h]
        ; Exact mapped bytes E8 4D C0 FA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xc0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D6 06 FE FF: call 0x584c9dc0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, ax
        mov eax, 168h
        cdq
        idiv ecx
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584e970a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 84 5B 01 00 00: je 0x584e986f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 64h], 0
        ; Exact mapped bytes 0F 84 45 01 00 00: je 0x584e986a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 5ch], 0
        ; Exact mapped bytes 0F 84 34 01 00 00: je 0x584e986a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF B2 F9 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 64h]
        ; Exact mapped bytes E8 A5 B2 F9 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 85 A7 FF FF: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 1ch], eax
        mov edx, 10eh
        sub edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 0C: jge 0x584e97a4
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 168h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cdq
        idiv dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 79 60 FB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x60
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 5ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 60 60 FB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 5ch]
        ; Exact mapped bytes E8 E1 C7 FD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 83 3D D8 4E 8F 58 00: cmp dword ptr [0x588f4ed8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0x4e
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 39: je 0x584e9836
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 14h]
        cmp ecx, 0fah
        ; Exact mapped bytes 7E 0C: jle 0x584e9817
        __asm _emit 0x7e
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 D8 4E 8F 58 00 00 00 00: mov dword ptr [0x588f4ed8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x4e
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x584e9834
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 5ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0D BD 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbd
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 34: jmp 0x584e986a
        __asm _emit 0xeb
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 14h]
        cmp eax, 64h
        ; Exact mapped bytes 7D 0C: jge 0x584e984d
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 D8 4E 8F 58 01 00 00 00: mov dword ptr [0x588f4ed8], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x4e
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x584e986a
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 5ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D7 BC 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xbc
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 92 FE FF FF: jmp 0x584e9701
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
