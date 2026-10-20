// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FB120 .. +0x4FA bytes.
extern "C" __declspec(naked) void FUN_584fb120_584FB120() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 1B 03 00 00: jne 0x584fb44e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x584fb238
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffff0000h
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x584fb233
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b8h], -1
        ; Exact mapped bytes 75 09: jne 0x584fb169
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0ffffffffh
        ; Exact mapped bytes EB 15: jmp 0x584fb17e
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 EA 0B: shr dx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 74 1E: je 0x584fb1a8
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes E8 61 C0 FD FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 34h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CE DB FD FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x584fb233
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        and eax, 10000000h
        ; Exact mapped bytes 74 5B: je 0x584fb213
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x584fb213
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B BF FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 BE FD FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 BF FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 92 BE FD FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 30 65 21 00: call 0x58711740
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x65
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 20: jmp 0x584fb233
        __asm _emit 0xeb
        __asm _emit 0x20
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        push eax
        push 8001020dh
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 17 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x17
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 11 02 00 00: jmp 0x584fb449
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 214h]
        ; Exact mapped bytes 75 67: jne 0x584fb2ad
        __asm _emit 0x75
        __asm _emit 0x67
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffff0000h
        ; Exact mapped bytes 75 58: jne 0x584fb2a8
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 BD FD FF: call 0x584d6f90
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 75 16: jne 0x584fb278
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 15 4C 06 96 58: mov edx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 30: jmp 0x584fb2a8
        __asm _emit 0xeb
        __asm _emit 0x30
        push 1
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB DA FD FF: call 0x584d8d50
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 39 00 00: call 0x584febb0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 9C 01 00 00: jmp 0x584fb449
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 20ch]
        ; Exact mapped bytes 75 31: jne 0x584fb2ec
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffff0000h
        ; Exact mapped bytes 75 22: jne 0x584fb2e7
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 BE FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 BE FD FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 FA 13 1A 00: call 0x5869c6e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x13
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x584fb449
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 218h]
        ; Exact mapped bytes 75 05: jne 0x584fb2ff
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 4A 01 00 00: jmp 0x584fb449
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 21ch]
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x584fb3cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffff0000h
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x584fb3c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 96 F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x584fb3c9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 BD FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 96 AA F8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xaa
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB BD FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 24 14 00 00: call 0x584fc780
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A5 14 23 00: call 0x5872c810
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x14
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA BD FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 03 14 00 00: call 0x584fc780
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 95 F8 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CE 96 F8 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 2A 14 23 00: call 0x5872c7d0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x14
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F BD FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C8 13 00 00: call 0x584fc780
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 7E: jmp 0x584fb449
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 248h]
        ; Exact mapped bytes 75 70: jne 0x584fb449
        __asm _emit 0x75
        __asm _emit 0x70
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 0C 06 96 58: cmp edx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 62: jne 0x584fb449
        __asm _emit 0x75
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b8h], -1
        ; Exact mapped bytes 75 56: jne 0x584fb449
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 A4 F9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa4
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 44: jne 0x584fb449
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 BD FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 13 00 00: call 0x584fc760
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE BC FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 27 13 00 00: call 0x584fc760
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C8 2F 1B 00: call 0x586ae410
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2f
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C4 01 00 00: jmp 0x584fb612
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 0F 85 6E 01 00 00: jne 0x584fb5c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 210h]
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x584fb4f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 40000000h
        ; Exact mapped bytes 75 3F: jne 0x584fb4c2
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 5E: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x584fb4c2
        __asm _emit 0x74
        __asm _emit 0x2d
        push 588a32d4h
        ; Exact mapped bytes E8 51 6B 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        push 32h
        push 0c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 9B FD FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2B: jmp 0x584fb4ed
        __asm _emit 0xeb
        __asm _emit 0x2b
        push 588a32fch
        ; Exact mapped bytes E8 24 6B 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        push 32h
        push 0c8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 9B FD FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x584fb5c4
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 214h]
        ; Exact mapped bytes 75 30: jne 0x584fb530
        __asm _emit 0x75
        __asm _emit 0x30
        push 588a3320h
        ; Exact mapped bytes E8 E6 6A 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        push edx
        push 32h
        push 0c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 9A FD FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x584fb5c4
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 20ch]
        ; Exact mapped bytes 75 2D: jne 0x584fb56b
        __asm _emit 0x75
        __asm _emit 0x2d
        push 588a3344h
        ; Exact mapped bytes E8 A8 6A 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 9A FD FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 59: jmp 0x584fb5c4
        __asm _emit 0xeb
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 218h]
        ; Exact mapped bytes 75 02: jne 0x584fb57b
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 49: jmp 0x584fb5c4
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 21ch]
        ; Exact mapped bytes 75 02: jne 0x584fb58b
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 39: jmp 0x584fb5c4
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 248h]
        ; Exact mapped bytes 75 2B: jne 0x584fb5c4
        __asm _emit 0x75
        __asm _emit 0x2b
        push 588a3364h
        ; Exact mapped bytes E8 4D 6A 02 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        push edx
        push 32h
        push 0c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 9A FD FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4C: jmp 0x584fb612
        __asm _emit 0xeb
        __asm _emit 0x4c
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 12: jne 0x584fb5de
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 8A FD FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 34: jmp 0x584fb612
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp + 0ch], 0ch
        ; Exact mapped bytes 75 02: jne 0x584fb5e6
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x584fb612
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp + 0ch], 0fh
        ; Exact mapped bytes 75 26: jne 0x584fb612
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 20: jne 0x584fb612
        __asm _emit 0x75
        __asm _emit 0x20
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        push eax
        push 4
        push 80011034h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 13 33 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x13
        __asm _emit 0x33
        __asm _emit 0x00
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
