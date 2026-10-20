// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866DB40 .. +0x266 bytes.
extern "C" __declspec(naked) void FUN_5866db40_5866DB40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588896d3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 50h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 58h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 54h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + 54h]
        cdq
        mov ecx, 5
        idiv ecx
        imul edx, eax, 3
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 60h], edx
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + 54h]
        cdq
        mov ecx, 5
        idiv ecx
        shl eax, 1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 64h], eax
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax + 54h]
        cdq
        mov ecx, 5
        idiv ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 68h], eax
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 0F 85 E0 00 00 00: jne 0x5866dca8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 35 34 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 6C: je 0x5866dc4e
        __asm _emit 0x74
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 51 70: mov dx, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x70
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 B8 E4 E1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe4
        __asm _emit 0xe1
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 B7 8D E1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0xff
        add eax, 11h
        mov dword ptr [ebp - 2ch], eax
        push 207h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 6F E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x6f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        movzx edx, word ptr [ebp - 0eh]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 07 5E E9 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x5e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5866dc55
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 38h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 2F 79 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x79
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 0C 81 E1 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 99 81 E1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x5866dd7f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 48 33 1C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x33
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 6C: je 0x5866dd3b
        __asm _emit 0x74
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 51 70: mov dx, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x70
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 CB E3 E1 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe3
        __asm _emit 0xe1
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 CA 8C E1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x8c
        __asm _emit 0xe1
        __asm _emit 0xff
        add eax, 11h
        mov dword ptr [ebp - 48h], eax
        push 9aah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 6E E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        movzx edx, word ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1A 5D E9 FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5866dd42
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 54h], ecx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 35 80 E1 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 C2 80 E1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 FC D3 14 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd3
        __asm _emit 0x14
        __asm _emit 0x00
        nop
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
