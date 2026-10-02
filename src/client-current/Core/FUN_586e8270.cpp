// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E8270 .. +0xD08 bytes.
extern "C" __declspec(naked) void FUN_586e8270() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 0F CB 88 58: push 0x5888cb0f
        __asm _emit 0x68
        __asm _emit 0x0f
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
        ; Exact mapped bytes 81 EC B8 01 00 00: sub esp, 0x1b8
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xb8
        __asm _emit 0x01
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
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
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
        ; Exact mapped bytes 89 4D AC: mov dword ptr [ebp - 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 0F B7 45 1C: movzx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 14: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes E8 40 34 E8 FF: call 0x5856b700
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x34
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes C7 00 94 31 8B 58: mov dword ptr [eax], 0x588b3194
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 81 C1 38 01 00 00: add ecx, 0x138
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F2 F1 D9 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf1
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 68 98 01 00 00: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 18 8D 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes C6 45 FC 02: mov byte ptr [ebp - 4], 2
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x02
        ; Exact mapped bytes 83 7D A4 00: cmp dword ptr [ebp - 0x5c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xa4
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x586e8312
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 30 8B 58: push 0x588b3080
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x30
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D A4: mov ecx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes E8 A3 80 09 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 A0: mov dword ptr [ebp - 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes EB 07: jmp 0x586e8319
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 A0 00 00 00 00: mov dword ptr [ebp - 0x60], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A0: mov ecx, dword ptr [ebp - 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes 89 8D 9C FE FF FF: mov dword ptr [ebp - 0x164], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 85 9C FE FF FF: mov eax, dword ptr [ebp - 0x164]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 82 84 00 00 00: mov dword ptr [edx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 C8 8C 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x8c
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 45 9C: mov dword ptr [ebp - 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes C6 45 FC 03: mov byte ptr [ebp - 4], 3
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x03
        ; Exact mapped bytes 83 7D 9C 00: cmp dword ptr [ebp - 0x64], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x9c
        __asm _emit 0x00
        ; Exact mapped bytes 74 47: je 0x586e8393
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 91 84 00 00 00: mov edx, dword ptr [ecx + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 54 FE FF FF: mov dword ptr [ebp - 0x1ac], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 54 FE FF FF: mov ecx, dword ptr [ebp - 0x1ac]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 B8 C7 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc7
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 50 FE FF FF: mov dword ptr [ebp - 0x1b0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 45 1C: movzx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 50 FE FF FF: mov eax, dword ptr [ebp - 0x1b0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 9C: mov ecx, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes E8 92 9F D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x9f
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 98: mov dword ptr [ebp - 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes EB 07: jmp 0x586e839a
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 98 00 00 00 00: mov dword ptr [ebp - 0x68], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 98: mov edx, dword ptr [ebp - 0x68]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x98
        ; Exact mapped bytes 89 95 4C FE FF FF: mov dword ptr [ebp - 0x1b4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C8 00: imul ecx, eax, 0
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 85 4C FE FF FF: mov eax, dword ptr [ebp - 0x1b4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 84 0A 88 00 00 00: mov dword ptr [edx + ecx + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B D1 00: imul edx, ecx, 0
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 8C 10 88 00 00 00: mov ecx, dword ptr [eax + edx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 44 FF FF FF: mov dword ptr [ebp - 0xbc], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 44 FF FF FF: mov ecx, dword ptr [ebp - 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 C9 D1 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C2 00: imul eax, edx, 0
        __asm _emit 0x6b
        __asm _emit 0xc2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 94 01 88 00 00 00: mov edx, dword ptr [ecx + eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 40 FF FF FF: mov dword ptr [ebp - 0xc0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 40 FF FF FF: mov ecx, dword ptr [ebp - 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 34 DA D9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xda
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C8 00: imul ecx, eax, 0
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 84 0A 88 00 00 00: mov eax, dword ptr [edx + ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 3C FF FF FF: mov dword ptr [ebp - 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 3C FF FF FF: mov ecx, dword ptr [ebp - 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 0F D1 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xd1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 CB 8B 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 45 94: mov dword ptr [ebp - 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes C6 45 FC 04: mov byte ptr [ebp - 4], 4
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x04
        ; Exact mapped bytes 83 7D 94 00: cmp dword ptr [ebp - 0x6c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x94
        __asm _emit 0x00
        ; Exact mapped bytes 74 4D: je 0x586e8496
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 91 84 00 00 00: mov edx, dword ptr [ecx + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 38 FF FF FF: mov dword ptr [ebp - 0xc8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 8D 38 FF FF FF: mov ecx, dword ptr [ebp - 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 BB C6 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc6
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 34 FF FF FF: mov dword ptr [ebp - 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 45 1C: movzx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 68: add ecx, 0x68
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 34 FF FF FF: mov eax, dword ptr [ebp - 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 94: mov ecx, dword ptr [ebp - 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x94
        ; Exact mapped bytes E8 8F 9E D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x9e
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 90: mov dword ptr [ebp - 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x90
        ; Exact mapped bytes EB 07: jmp 0x586e849d
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 90 00 00 00 00: mov dword ptr [ebp - 0x70], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 90: mov edx, dword ptr [ebp - 0x70]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x90
        ; Exact mapped bytes 89 95 30 FF FF FF: mov dword ptr [ebp - 0xd0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 00: shl eax, 0
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 95 30 FF FF FF: mov edx, dword ptr [ebp - 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 94 01 88 00 00 00: mov dword ptr [ecx + eax + 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 00: shl eax, 0
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 94 01 88 00 00 00: mov edx, dword ptr [ecx + eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 2C FF FF FF: mov dword ptr [ebp - 0xd4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 2C FF FF FF: mov ecx, dword ptr [ebp - 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 59 D0 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd0
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 00: shl eax, 0
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 94 01 88 00 00 00: mov edx, dword ptr [ecx + eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 28 FF FF FF: mov dword ptr [ebp - 0xd8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 28 FF FF FF: mov ecx, dword ptr [ebp - 0xd8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 94 D8 D9 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd8
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 F0 8A 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 45 8C: mov dword ptr [ebp - 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x8c
        ; Exact mapped bytes C6 45 FC 05: mov byte ptr [ebp - 4], 5
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x05
        ; Exact mapped bytes 83 7D 8C 00: cmp dword ptr [ebp - 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x8c
        __asm _emit 0x00
        ; Exact mapped bytes 74 47: je 0x586e856b
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 88 84 00 00 00: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 24 FF FF FF: mov dword ptr [ebp - 0xdc], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 8B 8D 24 FF FF FF: mov ecx, dword ptr [ebp - 0xdc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 E0 C5 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc5
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 20 FF FF FF: mov dword ptr [ebp - 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 55 1C: movzx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 20 FF FF FF: mov edx, dword ptr [ebp - 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 8C: mov ecx, dword ptr [ebp - 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x8c
        ; Exact mapped bytes E8 BA 9D D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x9d
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 88: mov dword ptr [ebp - 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes EB 07: jmp 0x586e8572
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 88 00 00 00 00: mov dword ptr [ebp - 0x78], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 88: mov ecx, dword ptr [ebp - 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x88
        ; Exact mapped bytes 89 8D 1C FF FF FF: mov dword ptr [ebp - 0xe4], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C2 00: imul eax, edx, 0
        __asm _emit 0x6b
        __asm _emit 0xc2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 95 1C FF FF FF: mov edx, dword ptr [ebp - 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 94 01 90 00 00 00: mov dword ptr [ecx + eax + 0x90], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C8 00: imul ecx, eax, 0
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 84 0A 90 00 00 00: mov eax, dword ptr [edx + ecx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 18 FF FF FF: mov dword ptr [ebp - 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FF FE FF FF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 18 FF FF FF: mov ecx, dword ptr [ebp - 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F1 CF 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B D1 00: imul edx, ecx, 0
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 8C 10 90 00 00 00: mov ecx, dword ptr [eax + edx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 14 FF FF FF: mov dword ptr [ebp - 0xec], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 14 FF FF FF: mov ecx, dword ptr [ebp - 0xec]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 5C D8 D9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd8
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C2 00: imul eax, edx, 0
        __asm _emit 0x6b
        __asm _emit 0xc2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 94 01 90 00 00 00: mov edx, dword ptr [ecx + eax + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 10 FF FF FF: mov dword ptr [ebp - 0xf0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 10 FF FF FF: mov ecx, dword ptr [ebp - 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 37 CF 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 F3 89 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 45 84: mov dword ptr [ebp - 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes C6 45 FC 06: mov byte ptr [ebp - 4], 6
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x06
        ; Exact mapped bytes 83 7D 84 00: cmp dword ptr [ebp - 0x7c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x84
        __asm _emit 0x00
        ; Exact mapped bytes 74 47: je 0x586e8668
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 88 84 00 00 00: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 0C FF FF FF: mov dword ptr [ebp - 0xf4], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 8B 8D 0C FF FF FF: mov ecx, dword ptr [ebp - 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 E3 C4 D9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc4
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 08 FF FF FF: mov dword ptr [ebp - 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 55 1C: movzx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 08 FF FF FF: mov edx, dword ptr [ebp - 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 84: mov ecx, dword ptr [ebp - 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes E8 BD 9C D9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9c
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 80: mov dword ptr [ebp - 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes EB 07: jmp 0x586e866f
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 80 00 00 00 00: mov dword ptr [ebp - 0x80], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 80: mov ecx, dword ptr [ebp - 0x80]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x80
        ; Exact mapped bytes 89 8D 04 FF FF FF: mov dword ptr [ebp - 0xfc], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 8D 04 FF FF FF: mov ecx, dword ptr [ebp - 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 8C 10 90 00 00 00: mov dword ptr [eax + edx + 0x90], ecx
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 8C 10 90 00 00 00: mov ecx, dword ptr [eax + edx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 00 FF FF FF: mov dword ptr [ebp - 0x100], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 00 FF FF FF: mov ecx, dword ptr [ebp - 0x100]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F4 CE 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 8C 10 90 00 00 00: mov ecx, dword ptr [eax + edx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D FC FE FF FF: mov dword ptr [ebp - 0x104], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D FC FE FF FF: mov ecx, dword ptr [ebp - 0x104]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 5F D7 D9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd7
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E2 00: shl edx, 0
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 8C 10 90 00 00 00: mov ecx, dword ptr [eax + edx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D F8 FE FF FF: mov dword ptr [ebp - 0x108], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D F8 FE FF FF: mov ecx, dword ptr [ebp - 0x108]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 3A CE 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 81 C2 BC 02 00 00: add edx, 0x2bc
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 48 FF FF FF: mov dword ptr [ebp - 0xb8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 83 C0 7B: add eax, 0x7b
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x7b
        ; Exact mapped bytes 89 85 4C FF FF FF: mov dword ptr [ebp - 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 45 A8 02 00 00 00: mov dword ptr [ebp - 0x58], 2
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586e8733
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 83 E9 01: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 89 4D A8: mov dword ptr [ebp - 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 83 7D A8 00: cmp dword ptr [ebp - 0x58], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xa8
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 67 01 00 00: jl 0x586e88a4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 82 84 00 00 00: mov eax, dword ptr [edx + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 F4 FE FF FF: mov dword ptr [ebp - 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D F4 FE FF FF: mov ecx, dword ptr [ebp - 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 75 C3 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xc3
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 6E 9F EE FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9f
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 83 C0 0A: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 95 48 FF FF FF: mov edx, dword ptr [ebp - 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 89 95 48 FF FF FF: mov dword ptr [ebp - 0xb8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 87 88 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 85 7C FF FF FF: mov dword ptr [ebp - 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 07: mov byte ptr [ebp - 4], 7
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x07
        ; Exact mapped bytes 83 BD 7C FF FF FF 00: cmp dword ptr [ebp - 0x84], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 74 7A: je 0x586e880d
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 88 84 00 00 00: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D F0 FE FF FF: mov dword ptr [ebp - 0x110], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D F0 FE FF FF: mov ecx, dword ptr [ebp - 0x110]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 1F C3 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc3
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 EC FE FF FF: mov dword ptr [ebp - 0x114], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 E8 FE FF FF: mov dword ptr [ebp - 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 8D E4 FE FF FF: mov dword ptr [ebp - 0x11c], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 55 1C: movzx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 4C FF FF FF: mov eax, dword ptr [ebp - 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 48 FF FF FF: mov ecx, dword ptr [ebp - 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 EC FE FF FF: mov edx, dword ptr [ebp - 0x114]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D E8 FE FF FF: mov ecx, dword ptr [ebp - 0x118]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 E4 FE FF FF: mov edx, dword ptr [ebp - 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 7C FF FF FF: mov ecx, dword ptr [ebp - 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 DB 34 DE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x34
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 78 FF FF FF: mov dword ptr [ebp - 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x586e8817
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 78 FF FF FF 00 00 00 00: mov dword ptr [ebp - 0x88], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 78 FF FF FF: mov eax, dword ptr [ebp - 0x88]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 E0 FE FF FF: mov dword ptr [ebp - 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 85 E0 FE FF FF: mov eax, dword ptr [ebp - 0x120]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 84 8A 98 00 00 00: mov dword ptr [edx + ecx*4 + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 84 8A 98 00 00 00: mov eax, dword ptr [edx + ecx*4 + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 DC FE FF FF: mov dword ptr [ebp - 0x124], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D DC FE FF FF: mov ecx, dword ptr [ebp - 0x124]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 53 CD 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 84 8A 98 00 00 00: mov eax, dword ptr [edx + ecx*4 + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 D8 FE FF FF: mov dword ptr [ebp - 0x128], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D D8 FE FF FF: mov ecx, dword ptr [ebp - 0x128]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 C3 CC 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes C7 84 8A 1C 01 00 00 00 00 00 00: mov dword ptr [edx + ecx*4 + 0x11c], 0
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes C7 84 81 2C 01 00 00 00 00 00 00: mov dword ptr [ecx + eax*4 + 0x12c], 0
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 86 FE FF FF: jmp 0x586e872a
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes C7 82 28 01 00 00 00 00 00 00: mov dword ptr [edx + 0x128], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes C7 80 18 01 00 00 00 00 00 00: mov dword ptr [eax + 0x118], 0
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 4D D0: mov dword ptr [ebp - 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 89 4D D4: mov dword ptr [ebp - 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 89 4D D8: mov dword ptr [ebp - 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 89 4D DC: mov dword ptr [ebp - 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 89 4D E0: mov dword ptr [ebp - 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 89 4D E4: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 89 4D E8: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 89 4D EC: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes C7 45 A8 00 00 00 00: mov dword ptr [ebp - 0x58], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586e88ea
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 89 55 A8: mov dword ptr [ebp - 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 83 7D A8 0F: cmp dword ptr [ebp - 0x58], 0xf
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xa8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 8D 21 01 00 00: jge 0x586e8a15
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes E8 09 87 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 85 74 FF FF FF: mov dword ptr [ebp - 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 08: mov byte ptr [ebp - 4], 8
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x08
        ; Exact mapped bytes 83 BD 74 FF FF FF 00: cmp dword ptr [ebp - 0x8c], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 74 66: je 0x586e8977
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FF FF 00 00: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B 45 A8 14: imul eax, dword ptr [ebp - 0x58], 0x14
        __asm _emit 0x6b
        __asm _emit 0x45
        __asm _emit 0xa8
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 8D 94 01 C0 00 00 00: lea edx, [ecx + eax + 0xc0]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 05 BB 02 00 00: add eax, 0x2bb
        __asm _emit 0x05
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6B 4D A8 14: imul ecx, dword ptr [ebp - 0x58], 0x14
        __asm _emit 0x6b
        __asm _emit 0x4d
        __asm _emit 0xa8
        __asm _emit 0x14
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 8D 84 0A AC 00 00 00: lea eax, [edx + ecx + 0xac]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 83 C1 6E: add ecx, 0x6e
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x6e
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 00: shl eax, 0
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 94 01 90 00 00 00: mov edx, dword ptr [ecx + eax + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 74 FF FF FF: mov ecx, dword ptr [ebp - 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 41 9A D9 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x9a
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 70 FF FF FF: mov dword ptr [ebp - 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x586e8981
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 70 FF FF FF 00 00 00 00: mov dword ptr [ebp - 0x90], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 70 FF FF FF: mov eax, dword ptr [ebp - 0x90]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 D4 FE FF FF: mov dword ptr [ebp - 0x12c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 85 D4 FE FF FF: mov eax, dword ptr [ebp - 0x12c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 84 8A A4 00 00 00: mov dword ptr [edx + ecx*4 + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 84 8A A4 00 00 00: mov eax, dword ptr [edx + ecx*4 + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 D0 FE FF FF: mov dword ptr [ebp - 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D D0 FE FF FF: mov ecx, dword ptr [ebp - 0x130]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 DA D6 D9 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xd6
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 8C 90 A4 00 00 00: mov ecx, dword ptr [eax + edx*4 + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D CC FE FF FF: mov dword ptr [ebp - 0x134], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D CC FE FF FF: mov ecx, dword ptr [ebp - 0x134]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 5A CB 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcb
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 8C 90 A4 00 00 00: mov ecx, dword ptr [eax + edx*4 + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D C8 FE FF FF: mov dword ptr [ebp - 0x138], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 55 1C: movsx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 81 C2 90 01 00 00: add edx, 0x190
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D C8 FE FF FF: mov ecx, dword ptr [ebp - 0x138]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 71 D4 D9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes E9 CC FE FF FF: jmp 0x586e88e1
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E5 85 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 85 6C FF FF FF: mov dword ptr [ebp - 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 09: mov byte ptr [ebp - 4], 9
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x09
        ; Exact mapped bytes 83 BD 6C FF FF FF 00: cmp dword ptr [ebp - 0x94], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 74 6E: je 0x586e8aa3
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 6A 1E: push 0x1e
        __asm _emit 0x6a
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E C0 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 C4 FE FF FF: mov dword ptr [ebp - 0x13c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 C0 FE FF FF: mov dword ptr [ebp - 0x140], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 8D BC FE FF FF: mov dword ptr [ebp - 0x144], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 55 1C: movzx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 05 A0 00 00 00: add eax, 0xa0
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 81 C1 C6 02 00 00: add ecx, 0x2c6
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 C4 FE FF FF: mov edx, dword ptr [ebp - 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D C0 FE FF FF: mov ecx, dword ptr [ebp - 0x140]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 BC FE FF FF: mov edx, dword ptr [ebp - 0x144]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 6C FF FF FF: mov ecx, dword ptr [ebp - 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 45 32 DE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x32
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 68 FF FF FF: mov dword ptr [ebp - 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x586e8aad
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 68 FF FF FF 00 00 00 00: mov dword ptr [ebp - 0x98], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 68 FF FF FF: mov eax, dword ptr [ebp - 0x98]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 B8 FE FF FF: mov dword ptr [ebp - 0x148], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 95 B8 FE FF FF: mov edx, dword ptr [ebp - 0x148]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 91 E0 00 00 00: mov dword ptr [ecx + 0xe0], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 88 E0 00 00 00: mov ecx, dword ptr [eax + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D B4 FE FF FF: mov dword ptr [ebp - 0x14c], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D B4 FE FF FF: mov ecx, dword ptr [ebp - 0x14c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 C5 CA 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xca
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 82 E0 00 00 00: mov eax, dword ptr [edx + 0xe0]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 B0 FE FF FF: mov dword ptr [ebp - 0x150], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D B0 FE FF FF: mov ecx, dword ptr [ebp - 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 39 CA 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xca
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F2 84 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 85 64 FF FF FF: mov dword ptr [ebp - 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 0A: mov byte ptr [ebp - 4], 0xa
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x0a
        ; Exact mapped bytes 83 BD 64 FF FF FF 00: cmp dword ptr [ebp - 0x9c], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 74 70: je 0x586e8b98
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes 6A 1F: push 0x1f
        __asm _emit 0x6a
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B BF D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xbf
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 AC FE FF FF: mov dword ptr [ebp - 0x154], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 8D A8 FE FF FF: mov dword ptr [ebp - 0x158], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 95 A4 FE FF FF: mov dword ptr [ebp - 0x15c], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 45 1C: movzx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 81 C1 C9 01 00 00: add ecx, 0x1c9
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 81 C2 C6 02 00 00: add edx, 0x2c6
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 AC FE FF FF: mov eax, dword ptr [ebp - 0x154]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 A8 FE FF FF: mov edx, dword ptr [ebp - 0x158]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 A4 FE FF FF: mov eax, dword ptr [ebp - 0x15c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 64 FF FF FF: mov ecx, dword ptr [ebp - 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 50 31 DE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x31
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 60 FF FF FF: mov dword ptr [ebp - 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x586e8ba2
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 60 FF FF FF 00 00 00 00: mov dword ptr [ebp - 0xa0], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 60 FF FF FF: mov ecx, dword ptr [ebp - 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 8D A0 FE FF FF: mov dword ptr [ebp - 0x160], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 85 A0 FE FF FF: mov eax, dword ptr [ebp - 0x160]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 82 E4 00 00 00: mov dword ptr [edx + 0xe4], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 91 E4 00 00 00: mov edx, dword ptr [ecx + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 70 FE FF FF: mov dword ptr [ebp - 0x190], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 70 FE FF FF: mov ecx, dword ptr [ebp - 0x190]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 D0 C9 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 88 E4 00 00 00: mov ecx, dword ptr [eax + 0xe4]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 98 FE FF FF: mov dword ptr [ebp - 0x168], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 98 FE FF FF: mov ecx, dword ptr [ebp - 0x168]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 44 C9 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc9
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FD 83 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 85 5C FF FF FF: mov dword ptr [ebp - 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 0B: mov byte ptr [ebp - 4], 0xb
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x0b
        ; Exact mapped bytes 83 BD 5C FF FF FF 00: cmp dword ptr [ebp - 0xa4], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 74 6E: je 0x586e8c8b
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 BE D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xbe
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 94 FE FF FF: mov dword ptr [ebp - 0x16c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 95 90 FE FF FF: mov dword ptr [ebp - 0x170], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 8C FE FF FF: mov dword ptr [ebp - 0x174], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 4D 1C: movzx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 81 C2 AA 00 00 00: add edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 05 C7 02 00 00: add eax, 0x2c7
        __asm _emit 0x05
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 94 FE FF FF: mov ecx, dword ptr [ebp - 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 90 FE FF FF: mov eax, dword ptr [ebp - 0x170]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 8C FE FF FF: mov ecx, dword ptr [ebp - 0x174]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 5C FF FF FF: mov ecx, dword ptr [ebp - 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 5D 30 DE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x30
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 58 FF FF FF: mov dword ptr [ebp - 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x586e8c95
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 58 FF FF FF 00 00 00 00: mov dword ptr [ebp - 0xa8], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 58 FF FF FF: mov edx, dword ptr [ebp - 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 95 88 FE FF FF: mov dword ptr [ebp - 0x178], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 8D 88 FE FF FF: mov ecx, dword ptr [ebp - 0x178]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 88 E8 00 00 00: mov dword ptr [eax + 0xe8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 82 E8 00 00 00: mov eax, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 84 FE FF FF: mov dword ptr [ebp - 0x17c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 DD C8 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc8
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 91 E8 00 00 00: mov edx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 80 FE FF FF: mov dword ptr [ebp - 0x180], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 80 FE FF FF: mov ecx, dword ptr [ebp - 0x180]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 51 C8 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc8
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes F3 0F 10 05 B0 31 8B 58: movss xmm0, dword ptr [0x588b31b0]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x31
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 80 EC 00 00 00: movss dword ptr [eax + 0xec], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes C6 81 F0 00 00 00 00: mov byte ptr [ecx + 0xf0], 0
        __asm _emit 0xc6
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 8A E8 00 00 00: mov ecx, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A6 DC D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdc
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 89 81 F4 00 00 00: mov dword ptr [ecx + 0xf4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 82 E8 00 00 00: mov eax, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 7C FE FF FF: mov dword ptr [ebp - 0x184], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 89 E8 00 00 00: mov ecx, dword ptr [ecx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 80 DC D9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xdc
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8D 55 C0: lea edx, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xc0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 7C FE FF FF: mov ecx, dword ptr [ebp - 0x184]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 BF B9 DD FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb9
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 03 70 08: add esi, dword ptr [eax + 8]
        __asm _emit 0x03
        __asm _emit 0x70
        __asm _emit 0x08
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 89 B0 FC 00 00 00: mov dword ptr [eax + 0xfc], esi
        __asm _emit 0x89
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes C7 81 F8 00 00 00 04 01 00 00: mov dword ptr [ecx + 0xf8], 0x104
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 82 E8 00 00 00: mov eax, dword ptr [edx + 0xe8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 78 FE FF FF: mov dword ptr [ebp - 0x188], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4D B0: lea ecx, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 78 FE FF FF: mov ecx, dword ptr [ebp - 0x188]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 88 B9 DD FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb9
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 50 0C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 81 C2 0E 02 00 00: add edx, 0x20e
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 89 90 00 01 00 00: mov dword ptr [eax + 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes C7 81 0C 01 00 00 00 00 00 00: mov dword ptr [ecx + 0x10c], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes C7 82 10 01 00 00 00 00 00 00: mov dword ptr [edx + 0x110], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 46 82 14 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x82
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 85 54 FF FF FF: mov dword ptr [ebp - 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 0C: mov byte ptr [ebp - 4], 0xc
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x0c
        ; Exact mapped bytes 83 BD 54 FF FF FF 00: cmp dword ptr [ebp - 0xac], 0
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 74 6E: je 0x586e8e42
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 6A 25: push 0x25
        __asm _emit 0x6a
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF BC D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xbc
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 74 FE FF FF: mov dword ptr [ebp - 0x18c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 48 FE FF FF: mov dword ptr [ebp - 0x1b8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 8D 6C FE FF FF: mov dword ptr [ebp - 0x194], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 55 1C: movzx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 05 EF 01 00 00: add eax, 0x1ef
        __asm _emit 0x05
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 81 C1 8A 02 00 00: add ecx, 0x28a
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 74 FE FF FF: mov edx, dword ptr [ebp - 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 48 FE FF FF: mov ecx, dword ptr [ebp - 0x1b8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 6C FE FF FF: mov edx, dword ptr [ebp - 0x194]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 54 FF FF FF: mov ecx, dword ptr [ebp - 0xac]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 A6 2E DE FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2e
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 50 FF FF FF: mov dword ptr [ebp - 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x586e8e4c
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 50 FF FF FF 00 00 00 00: mov dword ptr [ebp - 0xb0], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 50 FF FF FF: mov eax, dword ptr [ebp - 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 68 FE FF FF: mov dword ptr [ebp - 0x198], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 95 68 FE FF FF: mov edx, dword ptr [ebp - 0x198]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 91 14 01 00 00: mov dword ptr [ecx + 0x114], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 88 14 01 00 00: mov ecx, dword ptr [eax + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 64 FE FF FF: mov dword ptr [ebp - 0x19c], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 64 FE FF FF: mov ecx, dword ptr [ebp - 0x19c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 26 C7 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 82 14 01 00 00: mov eax, dword ptr [edx + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 60 FE FF FF: mov dword ptr [ebp - 0x1a0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 60 FE FF FF: mov ecx, dword ptr [ebp - 0x1a0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 9A C6 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc6
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes C7 81 44 01 00 00 00 00 00 00: mov dword ptr [ecx + 0x144], 0
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes E8 D3 D0 D9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd0
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes B9 FF E0 00 00: mov ecx, 0xe0ff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 05 00 00: mov edx, 0x500
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 81 C2 38 01 00 00: add edx, 0x138
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 5C FE FF FF: mov dword ptr [ebp - 0x1a4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 8B 8D 5C FE FF FF: mov ecx, dword ptr [ebp - 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 99 2D 00 00: call 0x586ebc90
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C7 45 A8 00 00 00 00: mov dword ptr [ebp - 0x58], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x586e8f0a
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 89 45 A8: mov dword ptr [ebp - 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 83 7D A8 03: cmp dword ptr [ebp - 0x58], 3
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xa8
        __asm _emit 0x03
        ; Exact mapped bytes 7D 42: jge 0x586e8f52
        __asm _emit 0x7d
        __asm _emit 0x42
        ; Exact mapped bytes 8D 8D 3C FE FF FF: lea ecx, [ebp - 0x1c4]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 C5 00 00 00: call 0x586e8fe0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 45 FC 0D: mov byte ptr [ebp - 4], 0xd
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 81 C1 38 01 00 00: add ecx, 0x138
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 58 FE FF FF: mov dword ptr [ebp - 0x1a8], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 95 3C FE FF FF: lea edx, [ebp - 0x1c4]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 58 FE FF FF: mov ecx, dword ptr [ebp - 0x1a8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 30 2D 00 00: call 0x586ebc70
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8D 8D 3C FE FF FF: lea ecx, [ebp - 0x1c4]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 81 8D E3 FF: call 0x58521cd0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB AF: jmp 0x586e8f01
        __asm _emit 0xeb
        __asm _emit 0xaf
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
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
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 DE 80 14 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x80
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
