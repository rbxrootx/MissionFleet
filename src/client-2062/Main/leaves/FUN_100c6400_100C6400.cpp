// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C6400 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_100c6400_100C6400() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x100c654c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 0ch]
        mov eax, dword ptr [edi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 0F 85 05 01 00 00: jne 0x100c6525
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        sub eax, 20h
        ; Exact mapped bytes 74 75: je 0x100c649d
        __asm _emit 0x74
        __asm _emit 0x75
        dec eax
        ; Exact mapped bytes 74 3C: je 0x100c6467
        __asm _emit 0x74
        __asm _emit 0x3c
        dec eax
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x100c6525
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 21a44h]
        cmp eax, 1
        ; Exact mapped bytes 0F 8E DE 00 00 00: jle 0x100c6525
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        push eax
        ; Exact mapped bytes E8 52 A4 FA FF: call 0x100708a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 21a44h]
        push ecx
        mov ecx, dword ptr [esi + 30h]
        ; Exact mapped bytes E8 0E 0E 00 00: call 0x100c7270
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x100c6525
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 21a44h]
        cmp eax, 8
        ; Exact mapped bytes 0F 8D A9 00 00 00: jge 0x100c6525
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        push eax
        ; Exact mapped bytes E8 1D A4 FA FF: call 0x100708a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 30h]
        mov eax, dword ptr [edx + 21a44h]
        push eax
        ; Exact mapped bytes E8 D8 0D 00 00: call 0x100c7270
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x100c6525
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 8ch]
        mov eax, dword ptr [ecx + 21a40h]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x100c64eb
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, 1
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 90h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 94h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 98h]
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3F A4 FA FF: call 0x10070920
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 30h]
        ; Exact mapped bytes E8 67 0C 00 00: call 0x100c7150
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x100c6525
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov dword ptr [edx + 50h], 5
        mov ecx, dword ptr [esi + 90h]
        mov eax, 1
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 94h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 98h]
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 93 A3 FA FF: call 0x100708b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 30h]
        ; Exact mapped bytes E8 4B 0B 00 00: call 0x100c7070
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x100c654c
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100c6545
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x100c654c
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x100c652f
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
