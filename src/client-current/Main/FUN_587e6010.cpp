// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E6010 .. +0x1BC bytes.
extern "C" __declspec(naked) void FUN_587e6010() {
    __asm {
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 83 F8 0C: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 75 70: jne 0x587e608c
        __asm _emit 0x75
        __asm _emit 0x70
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1F: jne 0x587e6043
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 39 86 90 0B 01 00: cmp dword ptr [esi + 0x10b90], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 96 01 00 00: je 0x587e61c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 90 0B 01 00: mov ecx, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 7A 01 00 00: jne 0x587e61c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 90 0B 01 00 00: cmp dword ptr [esi + 0x10b90], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 6D 01 00 00: je 0x587e61c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 90 0B 01 00: mov eax, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A3 80 47 A2 58: mov dword ptr [0x58a24780], eax
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8E 90 0B 01 00: mov ecx, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes A1 D4 48 A2 58: mov eax, dword ptr [0x58a248d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 52 0C: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E 90 0B 01 00: mov ecx, dword ptr [esi + 0x10b90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 31 01 00 00: jne 0x587e61c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 18 0E 02 00: mov ecx, dword ptr [esi + 0x20e18]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x587e6133
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 08 0E 02 00: mov eax, dword ptr [esi + 0x20e08]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 81 78 04 D4 FE FF FF: cmp dword ptr [eax + 4], 0xfffffed4
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BF 05 00 00 00: mov edi, 5
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 24: jle 0x587e60e5
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 83 B8 60 01 00 00 09: cmp dword ptr [eax + 0x160], 9
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        ; Exact mapped bytes BF D4 FE FF FF: mov edi, 0xfffffed4
        __asm _emit 0xbf
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 7E 35: jle 0x587e6104
        __asm _emit 0x7e
        __asm _emit 0x35
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2C: je 0x587e6104
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 40 02 00 00: add eax, 0x240
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x587e6106
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 83 B8 60 01 00 00 08: cmp dword ptr [eax + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 7E 16: jle 0x587e6104
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587e6104
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 00 02 00 00: add eax, 0x200
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587e6106
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 14 E8 F4 FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 08 0E 02 00: mov ecx, dword ptr [esi + 0x20e08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 94 02 FD FF: call 0x587b63b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 10 0E 02 00: mov ecx, dword ptr [esi + 0x20e10]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 84 02 FD FF: call 0x587b63b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 1C 0E 02 00: mov ecx, dword ptr [esi + 0x20e1c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x587e61c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 0C 0E 02 00: mov edx, dword ptr [esi + 0x20e0c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 81 7A 04 D4 FE FF FF: cmp dword ptr [edx + 4], 0xfffffed4
        __asm _emit 0x81
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BF 05 00 00 00: mov edi, 5
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 24: jle 0x587e617e
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 83 B8 60 01 00 00 09: cmp dword ptr [eax + 0x160], 9
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        ; Exact mapped bytes BF D4 FE FF FF: mov edi, 0xfffffed4
        __asm _emit 0xbf
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 7E 35: jle 0x587e619d
        __asm _emit 0x7e
        __asm _emit 0x35
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2C: je 0x587e619d
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 40 02 00 00: add eax, 0x240
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x587e619f
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 83 B8 60 01 00 00 08: cmp dword ptr [eax + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 7E 16: jle 0x587e619d
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587e619d
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 00 02 00 00: add eax, 0x200
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587e619f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7B E7 F4 FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe7
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 0C 0E 02 00: mov ecx, dword ptr [esi + 0x20e0c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 FB 01 FD FF: call 0x587b63b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 14 0E 02 00: mov ecx, dword ptr [esi + 0x20e14]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 EB 01 FD FF: call 0x587b63b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
