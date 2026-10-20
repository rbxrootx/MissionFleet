// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58640E00 .. +0x2B7 bytes.
extern "C" __declspec(naked) void FUN_58640e00_58640E00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC B0 E4 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb0
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x58640e24
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0F B3 E4 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb3
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 85 02 00 00: je 0x586410b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 5B E4 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5b
        __asm _emit 0xe4
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 84 6C 02 00 00: je 0x586410ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 36 B0 E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb0
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 08: mov ax, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, 2
        ; Exact mapped bytes 74 0D: je 0x58640e68
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        cmp edx, 3
        ; Exact mapped bytes 0F 85 1F 01 00 00: jne 0x58640f87
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x58640f87
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 01 B0 E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb0
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F A8 E7 FF: call 0x584bb6f0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa8
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x58640f67
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD AF E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xaf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C0 AF E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xaf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 AF E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xaf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA A5 E7 FF: call 0x584bb4e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 83add7h
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 22 F6 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf6
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 6ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 68 AF E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xaf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 30h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5A AF E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xaf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4C AF E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xaf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 A6 E7 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 83add7h
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 BC F5 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf5
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x58640f82
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 11 AF E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xaf
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF BD F3 FF: call 0x5857cd60
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xbd
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 27 01 00 00: jmp 0x586410ae
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        cmp eax, 5
        ; Exact mapped bytes 74 0D: je 0x58640f9d
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 11 01 00 00: jne 0x586410ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DB AE E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 A7 E7 FF: call 0x584bb6f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa7
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x58641093
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 98h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A4 AE E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 97 AE E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 44h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 89 AE E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 A4 E7 FF: call 0x584bb4e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 83add7h
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F9 F4 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf4
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 98h]
        mov dword ptr [ebp - 68h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3C AE E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 60h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E AE E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 AE E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xae
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 A5 E7 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 83add7h
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 90 F4 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x586410ae
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E5 AD E4 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xad
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 BC F3 FF: call 0x5857cd60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xbc
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 66 FD FF FF: jmp 0x58640e19
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
