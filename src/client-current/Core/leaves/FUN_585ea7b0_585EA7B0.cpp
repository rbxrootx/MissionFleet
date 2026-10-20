// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EA7B0 .. +0x333 bytes.
extern "C" __declspec(naked) void FUN_585ea7b0_585EA7B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A5 02 00 00: je 0x585eaa75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 A0 FE FF: call 0x585d4880
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 65: jne 0x585ea846
        __asm _emit 0x75
        __asm _emit 0x65
        push 588ad6e8h
        ; Exact mapped bytes E8 05 78 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 48h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 5B 0F 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x5b
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 50h], edx
        push 588ad704h
        ; Exact mapped bytes E8 D5 77 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x77
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 9E AC 1D 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 C0 5C EE FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x5c
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8F 02 00 00: jmp 0x585eaad5
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 F5 6D EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, -5ch
        ; Exact mapped bytes 75 09: jne 0x585ea875
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 4
        ; Exact mapped bytes EB 56: jmp 0x585ea8cb
        __asm _emit 0xeb
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 CD 6D EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, -40h
        ; Exact mapped bytes 75 09: jne 0x585ea89d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 6
        ; Exact mapped bytes EB 2E: jmp 0x585ea8cb
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 A5 6D EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 1
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 71h
        ; Exact mapped bytes 75 09: jne 0x585ea8c4
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0ah
        ; Exact mapped bytes EB 07: jmp 0x585ea8cb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 3
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 77 6D EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 A1 68 26 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F 86 38 01 00 00: jbe 0x585eaa23
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 57 6D EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 44 10 FF: movsx eax, byte ptr [eax + edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 0F 85 19 01 00 00: jne 0x585eaa23
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        push 0
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 F9 24 26 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x24
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 589604e0h
        lea edx, [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 66 1F 26 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1f
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 15 6D EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6d
        __asm _emit 0xee
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 3F 68 26 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        sub eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 31h
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 E6 66 24 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 99 24 26 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 07 1F 26 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1f
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 40h]
        sub edx, 30h
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 AF 6C EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0xff
        add eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 30h
        push ecx
        ; Exact mapped bytes E8 DF 1E 26 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1e
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 61 F8 FF: call 0x58570b90
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x61
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x585ea9f2
        __asm _emit 0x75
        __asm _emit 0x25
        push 588ad720h
        ; Exact mapped bytes E8 19 76 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 59 0F 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x59
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        push 588ad748h
        ; Exact mapped bytes E8 F4 75 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        push 3
        push 2
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E4 D9 FD FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov eax, dword ptr [ebp - 5ch]
        push eax
        ; Exact mapped bytes E8 16 66 24 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 50: jmp 0x585eaa73
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 1F 6C EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 44 10 FF: movsx eax, byte ptr [eax + edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 74 1A: je 0x585eaa58
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 04 6C EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 44 10 FF: movsx eax, byte ptr [eax + edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x585eaa73
        __asm _emit 0x75
        __asm _emit 0x1b
        push 588ad770h
        ; Exact mapped bytes E8 8E 75 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        push 3
        push 2
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7E D9 FD FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 60: jmp 0x585eaad5
        __asm _emit 0xeb
        __asm _emit 0x60
        push 588ad798h
        ; Exact mapped bytes E8 71 75 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 58 0F 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x58
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 68h], eax
        push 588ad7bch
        ; Exact mapped bytes E8 41 75 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 0A AA 1D 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xaa
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 2C 5A EE FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x5a
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 71 65 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x65
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
