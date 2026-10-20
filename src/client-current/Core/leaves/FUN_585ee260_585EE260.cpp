// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EE260 .. +0x473 bytes.
extern "C" __declspec(naked) void FUN_585ee260_585EE260() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 49ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 478h], ecx
        push 400h
        push 0
        lea eax, [ebp - 434h]
        push eax
        ; Exact mapped bytes E8 84 EB 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 478h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 B0 33 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x33
        __asm _emit 0xee
        __asm _emit 0xff
        push eax
        push 400h
        lea edx, [ebp - 434h]
        push edx
        ; Exact mapped bytes E8 CE 5E 1C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x5e
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 434h]
        push eax
        ; Exact mapped bytes E8 BF 2E 26 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x2e
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 46ch], eax
        mov dword ptr [ebp - 470h], 0
        mov ecx, dword ptr [ebp - 478h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 6B 33 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x33
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, 1
        shl edx, 1
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        cmp eax, 68h
        ; Exact mapped bytes 75 0C: jne 0x585ee301
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 468h], 9
        ; Exact mapped bytes EB 0A: jmp 0x585ee30b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 468h], 3
        mov ecx, dword ptr [ebp - 478h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 34 33 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x33
        __asm _emit 0xee
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 5E 2E 26 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x2e
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        cmp eax, dword ptr [ebp - 468h]
        ; Exact mapped bytes 0F 86 96 03 00 00: jbe 0x585ee6c7
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 478h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 0E 33 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x33
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 468h]
        ; Exact mapped bytes 0F BE 54 08 FF: movsx edx, byte ptr [eax + ecx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0xff
        cmp edx, 20h
        ; Exact mapped bytes 0F 85 71 03 00 00: jne 0x585ee6c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 AD EA 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xea
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        push 0
        lea ecx, [ebp - 464h]
        push ecx
        ; Exact mapped bytes E8 9A EA 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xea
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 77: je 0x585ee3f9
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 468h]
        ; Exact mapped bytes 0F BE 8C 05 CC FB FF FF: movsx ecx, byte ptr [ebp + eax - 0x434]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, 20h
        ; Exact mapped bytes 75 22: jne 0x585ee3b7
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 468h]
        add edx, 1
        mov dword ptr [ebp - 468h], edx
        mov eax, dword ptr [ebp - 470h]
        add eax, 1
        mov dword ptr [ebp - 470h], eax
        ; Exact mapped bytes EB 44: jmp 0x585ee3f9
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes EB 40: jmp 0x585ee3f7
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 470h]
        mov edx, dword ptr [ebp - 468h]
        mov al, byte ptr [ebp + edx - 434h]
        mov byte ptr [ebp + ecx - 1ch], al
        mov ecx, dword ptr [ebp - 470h]
        add ecx, 1
        mov dword ptr [ebp - 470h], ecx
        mov edx, dword ptr [ebp - 468h]
        add edx, 1
        mov dword ptr [ebp - 468h], edx
        cmp dword ptr [ebp - 470h], 0eh
        ; Exact mapped bytes 7E 02: jle 0x585ee3f7
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x585ee3f9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 80: jmp 0x585ee379
        __asm _emit 0xeb
        __asm _emit 0x80
        cmp dword ptr [ebp - 470h], 0eh
        ; Exact mapped bytes 0F 8D AF 02 00 00: jge 0x585ee6b5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 46ch]
        sub eax, dword ptr [ebp - 468h]
        mov dword ptr [ebp - 46ch], eax
        mov ecx, dword ptr [ebp - 46ch]
        add ecx, 31h
        mov dword ptr [ebp - 46ch], ecx
        mov edx, dword ptr [ebp - 46ch]
        push edx
        ; Exact mapped bytes E8 0F 2C 24 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 488h], eax
        mov eax, dword ptr [ebp - 488h]
        mov dword ptr [ebp - 480h], eax
        mov ecx, dword ptr [ebp - 46ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 480h]
        push edx
        ; Exact mapped bytes E8 B3 E9 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 589604e0h
        lea eax, [ebp - 464h]
        push eax
        ; Exact mapped bytes E8 1D E4 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe4
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        lea ecx, [ebp - 1ch]
        push ecx
        lea edx, [ebp - 44ch]
        push edx
        ; Exact mapped bytes E8 08 E4 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe4
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        lea eax, [ebp - 464h]
        push eax
        mov ecx, dword ptr [ebp - 480h]
        push ecx
        ; Exact mapped bytes E8 F0 E3 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe3
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 46ch]
        sub edx, 30h
        push edx
        mov eax, dword ptr [ebp - 468h]
        lea ecx, [ebp + eax - 434h]
        push ecx
        mov edx, dword ptr [ebp - 480h]
        add edx, 30h
        push edx
        ; Exact mapped bytes E8 C6 E3 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe3
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 484h], 0
        mov dword ptr [ebp - 474h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585ee4f2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 474h]
        add eax, 1
        mov dword ptr [ebp - 474h], eax
        cmp dword ptr [ebp - 474h], 4
        ; Exact mapped bytes 0F 8D CB 00 00 00: jge 0x585ee5ca
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 44ch]
        push ecx
        mov edx, dword ptr [ebp - 474h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 4D FE FF: call 0x585d32d0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 C2 26 26 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x26
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x585ee5c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 DA E8 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 4D FE FF: call 0x585d32d0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 18h
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 2E 5C 1C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x5c
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 474h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 4D FE FF: call 0x585d32d0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 48ch], eax
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 4D FE FF: call 0x585d32d0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 490h], eax
        mov eax, dword ptr [ebp - 48ch]
        push eax
        push 18h
        mov ecx, dword ptr [ebp - 490h]
        push ecx
        ; Exact mapped bytes E8 EB 5B 1C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5b
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 34h]
        push edx
        push 18h
        mov eax, dword ptr [ebp - 474h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 4D FE FF: call 0x585d32d0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 CA 5B 1C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x5b
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 484h], 1
        ; Exact mapped bytes EB 05: jmp 0x585ee5ca
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 19 FF FF FF: jmp 0x585ee4e3
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 484h], 0
        ; Exact mapped bytes 75 71: jne 0x585ee644
        __asm _emit 0x75
        __asm _emit 0x71
        mov dword ptr [ebp - 47ch], 3
        ; Exact mapped bytes EB 0F: jmp 0x585ee5ee
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 47ch]
        sub ecx, 1
        mov dword ptr [ebp - 47ch], ecx
        cmp dword ptr [ebp - 47ch], 0
        ; Exact mapped bytes 7C 4D: jl 0x585ee644
        __asm _emit 0x7c
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 47ch]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 4C FE FF: call 0x585d32d0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 494h], eax
        mov eax, dword ptr [ebp - 47ch]
        add eax, 1
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 4C FE FF: call 0x585d32d0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 498h], eax
        push 18h
        mov ecx, dword ptr [ebp - 494h]
        push ecx
        mov edx, dword ptr [ebp - 498h]
        push edx
        ; Exact mapped bytes E8 51 E2 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe2
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 9B: jmp 0x585ee5df
        __asm _emit 0xeb
        __asm _emit 0x9b
        lea eax, [ebp - 44ch]
        push eax
        push 18h
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 4C FE FF: call 0x585d32d0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 20 5B 1C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x5b
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp - 46ch]
        push ecx
        mov edx, dword ptr [ebp - 480h]
        push edx
        push 0
        push 1
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 23 F8 FF: call 0x58570990
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x23
        __asm _emit 0xf8
        __asm _emit 0xff
        lea eax, [ebp - 1ch]
        push eax
        push 1
        push 1
        mov ecx, dword ptr [ebp - 478h]
        ; Exact mapped bytes E8 5B 9D FD FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 480h]
        mov dword ptr [ebp - 49ch], ecx
        push 1
        mov edx, dword ptr [ebp - 49ch]
        push edx
        ; Exact mapped bytes E8 84 29 24 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 12: jmp 0x585ee6c7
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 478h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 3A 1E EE FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1e
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 7F 29 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x29
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
    }
}
