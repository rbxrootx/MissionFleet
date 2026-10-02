// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EA6E0 .. +0x29D bytes.
extern "C" __declspec(naked) void FUN_586ea6e0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 60 CB 88 58: push 0x5888cb60
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xcb
        __asm _emit 0x88
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 81 EC A0 00 00 00: sub esp, 0xa0
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C5: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xc5
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 F4: lea eax, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D BC: mov dword ptr [ebp - 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xbc
        ; Exact mapped bytes C7 45 A4 00 00 00 00: mov dword ptr [ebp - 0x5c], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 00 80: push 0x80000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D0 8B 0C 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 B4: mov dword ptr [ebp - 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb4
        ; Exact mapped bytes 83 7D B4 FF: cmp dword ptr [ebp - 0x4c], -1
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xb4
        __asm _emit 0xff
        ; Exact mapped bytes 75 28: jne 0x586ea761
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 BC: mov edx, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes C7 84 8A 2C 01 00 00 00 00 00 00: mov dword ptr [edx + ecx*4 + 0x12c], 0
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 B4: mov eax, dword ptr [ebp - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 45 A4: mov eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes E9 06 02 00 00: jmp 0x586ea962
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x586ea95f
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 BC: mov edx, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes C7 84 8A 2C 01 00 00 01 00 00 00: mov dword ptr [edx + ecx*4 + 0x12c], 1
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 B4: mov eax, dword ptr [ebp - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 45 B0: mov dword ptr [ebp - 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 8B 4D B0: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 B5 68 14 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 45 A0: mov dword ptr [ebp - 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes 8B 55 A0: mov edx, dword ptr [ebp - 0x60]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa0
        ; Exact mapped bytes 89 55 B8: mov dword ptr [ebp - 0x48], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xb8
        ; Exact mapped bytes 8B 45 B0: mov eax, dword ptr [ebp - 0x50]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D B8: mov ecx, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 65 26 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x26
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 95 68 FF FF FF: lea edx, [ebp - 0x98]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 B0: mov eax, dword ptr [ebp - 0x50]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D B8: mov ecx, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 B4: mov edx, dword ptr [ebp - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xb4
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 45 B4: mov eax, dword ptr [ebp - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 68 8C 31 8B 58: push 0x588b318c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D B8: mov ecx, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 8D 54 FF FF FF: lea ecx, [ebp - 0xac]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 A9 D2 0A 00: call 0x58797a90
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D 54 FF FF FF: lea ecx, [ebp - 0xac]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 57 41 DE FF: call 0x584ce950
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x41
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 A8: mov dword ptr [ebp - 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 55 BC: mov edx, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 81 C2 38 01 00 00: add edx, 0x138
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 9C: mov dword ptr [ebp - 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x9c
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 9C: mov ecx, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes E8 DC EC FF FF: call 0x586e94f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 98: mov dword ptr [ebp - 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 98: mov ecx, dword ptr [ebp - 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x98
        ; Exact mapped bytes E8 AD 14 00 00: call 0x586ebcd0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 55 BC: mov edx, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 81 C2 38 01 00 00: add edx, 0x138
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 94: mov dword ptr [ebp - 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x94
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 94: mov ecx, dword ptr [ebp - 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x94
        ; Exact mapped bytes E8 B4 EC FF FF: call 0x586e94f0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 84: mov dword ptr [ebp - 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes 8D 8D 54 FF FF FF: lea ecx, [ebp - 0xac]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 96 D6 0A 00: call 0x58797ee0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E8 7D F2 DB FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 90: mov dword ptr [ebp - 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x90
        ; Exact mapped bytes 8B 4D 90: mov ecx, dword ptr [ebp - 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes 89 4D 8C: mov dword ptr [ebp - 0x74], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x8c
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 8C: mov edx, dword ptr [ebp - 0x74]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x8c
        ; Exact mapped bytes 89 55 88: mov dword ptr [ebp - 0x78], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x88
        ; Exact mapped bytes 8B 45 88: mov eax, dword ptr [ebp - 0x78]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 84: mov ecx, dword ptr [ebp - 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes E8 BE 12 E2 FF: call 0x5850bb30
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x12
        __asm _emit 0xe2
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 00: mov byte ptr [ebp - 4], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E8 B2 F4 DB FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf4
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C7 45 AC 01 00 00 00: mov dword ptr [ebp - 0x54], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586ea891
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 89 4D AC: mov dword ptr [ebp - 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 3B 55 A8: cmp edx, dword ptr [ebp - 0x58]
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 73 77: jae 0x586ea910
        __asm _emit 0x73
        __asm _emit 0x77
        ; Exact mapped bytes 8B 45 BC: mov eax, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 05 38 01 00 00: add eax, 0x138
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 80: mov dword ptr [ebp - 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 80: mov ecx, dword ptr [ebp - 0x80]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x80
        ; Exact mapped bytes E8 40 EC FF FF: call 0x586e94f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 70 FF FF FF: mov dword ptr [ebp - 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8D 54 FF FF FF: lea ecx, [ebp - 0xac]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 6F D6 0A 00: call 0x58797f30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D C0: lea ecx, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes E8 06 F2 DB FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 7C FF FF FF: mov dword ptr [ebp - 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 95 7C FF FF FF: mov edx, dword ptr [ebp - 0x84]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 95 78 FF FF FF: mov dword ptr [ebp - 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 02: mov byte ptr [ebp - 4], 2
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x02
        ; Exact mapped bytes 8B 85 78 FF FF FF: mov eax, dword ptr [ebp - 0x88]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 74 FF FF FF: mov dword ptr [ebp - 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 74 FF FF FF: mov ecx, dword ptr [ebp - 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 70 FF FF FF: mov ecx, dword ptr [ebp - 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 32 12 E2 FF: call 0x5850bb30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x12
        __asm _emit 0xe2
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 00: mov byte ptr [ebp - 4], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D C0: lea ecx, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes E8 26 F4 DB FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf4
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x586ea888
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 BC: mov eax, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 89 8C 90 1C 01 00 00: mov dword ptr [eax + edx*4 + 0x11c], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x90
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D B8 00: cmp dword ptr [ebp - 0x48], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xb8
        __asm _emit 0x00
        ; Exact mapped bytes 74 1F: je 0x586ea945
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 55 B8: mov edx, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xb8
        ; Exact mapped bytes 89 95 6C FF FF FF: mov dword ptr [ebp - 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 6C FF FF FF: mov eax, dword ptr [ebp - 0x94]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 10 67 14 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x67
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes C7 45 B8 00 00 00 00: mov dword ptr [ebp - 0x48], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 A4 01 00 00 00: mov dword ptr [ebp - 0x5c], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8D 54 FF FF FF: lea ecx, [ebp - 0xac]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 92 D2 0A 00: call 0x58797bf0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 45 A4: mov eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 D9 66 14 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
