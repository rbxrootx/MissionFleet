// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586147A0 .. +0x648 bytes.
extern "C" __declspec(naked) void FUN_586147a0_586147A0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 E1 6B 88 58: push 0x58886be1
        __asm _emit 0x68
        __asm _emit 0xe1
        __asm _emit 0x6b
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
        ; Exact mapped bytes 81 EC D0 00 00 00: sub esp, 0xd0
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xd0
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
        ; Exact mapped bytes 89 4D AC: mov dword ptr [ebp - 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes C7 45 A4 00 00 00 00: mov dword ptr [ebp - 0x5c], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 88 A8 00 00 00: mov word ptr [eax + 0xa8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 89 82 A4 00 00 00: mov dword ptr [edx + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 A8 00 00 00 00: mov dword ptr [ebp - 0x58], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x58614801
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 89 4D A8: mov dword ptr [ebp - 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 83 7D A8 06: cmp dword ptr [ebp - 0x58], 6
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xa8
        __asm _emit 0x06
        ; Exact mapped bytes 7D 12: jge 0x58614819
        __asm _emit 0x7d
        __asm _emit 0x12
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 4C 90 74: mov ecx, dword ptr [eax + edx*4 + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x90
        __asm _emit 0x74
        ; Exact mapped bytes E8 AA C0 1A 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc0
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB DF: jmp 0x586147f8
        __asm _emit 0xeb
        __asm _emit 0xdf
        ; Exact mapped bytes C7 85 24 FF FF FF 00 00 00 00: mov dword ptr [ebp - 0xdc], 0
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 4C 10 74: mov ecx, dword ptr [eax + edx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x74
        ; Exact mapped bytes 89 4D 90: mov dword ptr [ebp - 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes 68 90 E0 8A 58: push 0x588ae090
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 D7 F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd7
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 45 94: mov dword ptr [ebp - 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 94: mov edx, dword ptr [ebp - 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x94
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D 90: mov ecx, dword ptr [ebp - 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes E8 C8 BC 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xbc
        __asm _emit 0x1a
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
        ; Exact mapped bytes 8B 54 01 74: mov edx, dword ptr [ecx + eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x74
        ; Exact mapped bytes 89 55 8C: mov dword ptr [ebp - 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x8c
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 AC E0 8A 58: push 0x588ae0ac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D 8C: mov ecx, dword ptr [ebp - 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x8c
        ; Exact mapped bytes E8 A2 BC 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xbc
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E0: shl eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 54 01 74: mov edx, dword ptr [ecx + eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x74
        ; Exact mapped bytes 89 55 88: mov dword ptr [ebp - 0x78], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x88
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 B0 E0 8A 58: push 0x588ae0b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D 88: mov ecx, dword ptr [ebp - 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x88
        ; Exact mapped bytes E8 7D BC 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xbc
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C8 03: imul ecx, eax, 3
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x03
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 44 0A 74: mov eax, dword ptr [edx + ecx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x74
        ; Exact mapped bytes 89 45 84: mov dword ptr [ebp - 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 B4 E0 8A 58: push 0x588ae0b4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D 84: mov ecx, dword ptr [ebp - 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x84
        ; Exact mapped bytes E8 57 BC 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xbc
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 02: shl ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x02
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 44 0A 74: mov eax, dword ptr [edx + ecx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x74
        ; Exact mapped bytes 89 45 80: mov dword ptr [ebp - 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 B8 E0 8A 58: push 0x588ae0b8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D 80: mov ecx, dword ptr [ebp - 0x80]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x80
        ; Exact mapped bytes E8 31 BC 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xbc
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B D1 05: imul edx, ecx, 5
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 4C 10 74: mov ecx, dword ptr [eax + edx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x74
        ; Exact mapped bytes 89 8D 7C FF FF FF: mov dword ptr [ebp - 0x84], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 BC E0 8A 58: push 0x588ae0bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 7C FF FF FF: mov ecx, dword ptr [ebp - 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 05 BC 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x1a
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
        ; Exact mapped bytes 8B 54 01 74: mov edx, dword ptr [ecx + eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x74
        ; Exact mapped bytes 89 95 78 FF FF FF: mov dword ptr [ebp - 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 78 FF FF FF: mov ecx, dword ptr [ebp - 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 21 CB 1A 00: call 0x587c1460
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcb
        __asm _emit 0x1a
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
        ; Exact mapped bytes 8B 54 01 74: mov edx, dword ptr [ecx + eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x74
        ; Exact mapped bytes 89 95 74 FF FF FF: mov dword ptr [ebp - 0x8c], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 74 FF FF FF: mov ecx, dword ptr [ebp - 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 FD CA 1A 00: call 0x587c1460
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xca
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E0: shl eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 54 01 74: mov edx, dword ptr [ecx + eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x74
        ; Exact mapped bytes 89 95 70 FF FF FF: mov dword ptr [ebp - 0x90], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 70 FF FF FF: mov ecx, dword ptr [ebp - 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 DA CA 1A 00: call 0x587c1460
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xca
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C8 03: imul ecx, eax, 3
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x03
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 44 0A 74: mov eax, dword ptr [edx + ecx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x74
        ; Exact mapped bytes 89 85 6C FF FF FF: mov dword ptr [ebp - 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 6C FF FF FF: mov ecx, dword ptr [ebp - 0x94]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 B6 CA 1A 00: call 0x587c1460
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xca
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 02: shl ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x02
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 44 0A 74: mov eax, dword ptr [edx + ecx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x74
        ; Exact mapped bytes 89 85 68 FF FF FF: mov dword ptr [ebp - 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 68 FF FF FF: mov ecx, dword ptr [ebp - 0x98]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 92 CA 1A 00: call 0x587c1460
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xca
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes B9 04 00 00 00: mov ecx, 4
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B D1 05: imul edx, ecx, 5
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 4C 10 74: mov ecx, dword ptr [eax + edx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x74
        ; Exact mapped bytes 89 8D 28 FF FF FF: mov dword ptr [ebp - 0xd8], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 6E CA 1A 00: call 0x587c1460
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xca
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A4: mov edx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa4
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 89 55 A4: mov dword ptr [ebp - 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa4
        ; Exact mapped bytes C7 45 A8 00 00 00 00: mov dword ptr [ebp - 0x58], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x58614a0d
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
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 3B 4D 0C: cmp ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 8D 70 03 00 00: jge 0x58614d89
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B 55 A8 14: imul edx, dword ptr [ebp - 0x58], 0x14
        __asm _emit 0x6b
        __asm _emit 0x55
        __asm _emit 0xa8
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0C 10: mov ecx, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 1F EE FF: call 0x584f69c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1f
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 60 FF FF FF: mov dword ptr [ebp - 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 10 67 96 58: mov edx, dword ptr [0x58966710]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 2C 00 00 00: mov eax, dword ptr fs:[0x2c]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0C 90: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x90
        ; Exact mapped bytes 8B 15 14 5D 96 58: mov edx, dword ptr [0x58965d14]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 3B 91 04 00 00 00: cmp edx, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 4F: jle 0x58614aa1
        __asm _emit 0x7e
        __asm _emit 0x4f
        ; Exact mapped bytes 68 14 5D 96 58: push 0x58965d14
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 D0 21 00: call 0x58831a7d
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd0
        __asm _emit 0x21
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 3D 14 5D 96 58 FF: cmp dword ptr [0x58965d14], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 75 39: jne 0x58614aa1
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 9C 00 00 00: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B C5 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc5
        __asm _emit 0x21
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
        ; Exact mapped bytes 8B 85 64 FF FF FF: mov eax, dword ptr [ebp - 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A3 10 5D 96 58: mov dword ptr [0x58965d10], eax
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 14 5D 96 58: push 0x58965d14
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E CF 21 00: call 0x58831a2c
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xcf
        __asm _emit 0x21
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 68 9C 00 00 00: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9c
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
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 15 10 5D 96 58: mov edx, dword ptr [0x58965d10]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 D7 7D 23 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x7d
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 3D 10 5D 96 58 00: cmp dword ptr [0x58965d10], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BB 02 00 00: je 0x58614d84
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 44 0A 74: mov eax, dword ptr [edx + ecx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x74
        ; Exact mapped bytes 89 85 5C FF FF FF: mov dword ptr [ebp - 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 5D 96 58: mov ecx, dword ptr [0x58965d10]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 15 10 5D 96 58: mov edx, dword ptr [0x58965d10]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C2 78: add edx, 0x78
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x78
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8D 5C FF FF FF: mov ecx, dword ptr [ebp - 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 21 BA 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xba
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 5D 96 58: mov eax, dword ptr [0x58965d10]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 24: mov ecx, dword ptr [eax + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 89 8D 58 FF FF FF: mov dword ptr [ebp - 0xa8], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C0 E0 8A 58: push 0x588ae0c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 D4 F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd4
        __asm _emit 0xf0
        __asm _emit 0xff
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
        ; Exact mapped bytes 8B 95 58 FF FF FF: mov edx, dword ptr [ebp - 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 54 FF FF FF: mov eax, dword ptr [ebp - 0xac]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D B0: lea ecx, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
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
        ; Exact mapped bytes 8B 4C 10 74: mov ecx, dword ptr [eax + edx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x74
        ; Exact mapped bytes 89 8D 50 FF FF FF: mov dword ptr [ebp - 0xb0], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 10 5D 96 58: mov edx, dword ptr [0x58965d10]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 24: mov eax, dword ptr [edx + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D B0: lea ecx, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 50 FF FF FF: mov ecx, dword ptr [ebp - 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 B2 B9 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb9
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 6B 55 A8 14: imul edx, dword ptr [ebp - 0x58], 0x14
        __asm _emit 0x6b
        __asm _emit 0x55
        __asm _emit 0xa8
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4C 10 08: mov ecx, dword ptr [eax + edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 D0 E0 8A 58: push 0x588ae0d0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8D 55 B0: lea edx, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xb0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 E0: shl eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 54 01 74: mov edx, dword ptr [ecx + eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x74
        ; Exact mapped bytes 89 95 4C FF FF FF: mov dword ptr [ebp - 0xb4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
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
        ; Exact mapped bytes 8B 54 01 08: mov edx, dword ptr [ecx + eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 45 B0: lea eax, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 4C FF FF FF: mov ecx, dword ptr [ebp - 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 60 B9 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb9
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 0F B7 91 A8 00 00 00: movzx edx, word ptr [ecx + 0xa8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x91
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 98: mov dword ptr [ebp - 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x98
        ; Exact mapped bytes 83 7D 98 03: cmp dword ptr [ebp - 0x68], 3
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x98
        __asm _emit 0x03
        ; Exact mapped bytes 0F 87 A6 00 00 00: ja 0x58614c7e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 98: mov eax, dword ptr [ebp - 0x68]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes FF 24 85 E8 4D 61 58: jmp dword ptr [eax*4 + 0x58614de8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x61
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 10 5D 96 58: mov ecx, dword ptr [0x58965d10]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F B6 91 99 00 00 00: movzx edx, byte ptr [ecx + 0x99]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 48 FF FF FF: mov dword ptr [ebp - 0xb8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 10 5D 96 58: mov eax, dword ptr [0x58965d10]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F B6 88 98 00 00 00: movzx ecx, byte ptr [eax + 0x98]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x98
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
        ; Exact mapped bytes 68 D8 E0 8A 58: push 0x588ae0d8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF D3 F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd3
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 85 40 FF FF FF: mov dword ptr [ebp - 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 95 48 FF FF FF: mov edx, dword ptr [ebp - 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 44 FF FF FF: mov eax, dword ptr [ebp - 0xbc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 40 FF FF FF: mov ecx, dword ptr [ebp - 0xc0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 55 B0: lea edx, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xb0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes EB 40: jmp 0x58614c7e
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes A1 10 5D 96 58: mov eax, dword ptr [0x58965d10]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F B6 88 9B 00 00 00: movzx ecx, byte ptr [eax + 0x9b]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 F0 E0 8A 58: push 0x588ae0f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8D 55 B0: lea edx, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xb0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes EB 1F: jmp 0x58614c7e
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes A1 10 5D 96 58: mov eax, dword ptr [0x58965d10]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F B6 88 9A 00 00 00: movzx ecx, byte ptr [eax + 0x9a]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 F4 E0 8A 58: push 0x588ae0f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8D 55 B0: lea edx, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xb0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C8 03: imul ecx, eax, 3
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x03
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 44 0A 74: mov eax, dword ptr [edx + ecx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x74
        ; Exact mapped bytes 89 85 3C FF FF FF: mov dword ptr [ebp - 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D B0: lea ecx, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 3C FF FF FF: mov ecx, dword ptr [ebp - 0xc4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 77 B8 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb8
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 6B 55 A8 14: imul edx, dword ptr [ebp - 0x58], 0x14
        __asm _emit 0x6b
        __asm _emit 0x55
        __asm _emit 0xa8
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4C 10 04: mov ecx, dword ptr [eax + edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 F8 E0 8A 58: push 0x588ae0f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xe0
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8D 55 B0: lea edx, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xb0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 04 00 00 00: mov eax, 4
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 02: shl eax, 2
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 54 01 74: mov edx, dword ptr [ecx + eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x74
        ; Exact mapped bytes 89 95 38 FF FF FF: mov dword ptr [ebp - 0xc8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 B0: lea eax, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 38 FF FF FF: mov ecx, dword ptr [ebp - 0xc8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 2E B8 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb8
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 E1 8A 58: push 0x588ae100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4D B0: lea ecx, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C2 05: imul eax, edx, 5
        __asm _emit 0x6b
        __asm _emit 0xc2
        __asm _emit 0x05
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 54 01 74: mov edx, dword ptr [ecx + eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x74
        ; Exact mapped bytes 89 95 34 FF FF FF: mov dword ptr [ebp - 0xcc], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 77 77 77 00: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 B0: lea eax, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 34 FF FF FF: mov ecx, dword ptr [ebp - 0xcc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F1 B7 1A 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb7
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 91 A4 00 00 00: mov edx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 15 10 5D 96 58: cmp edx, dword ptr [0x58965d10]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 3A: jne 0x58614d7b
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes C7 45 A0 00 00 00 00: mov dword ptr [ebp - 0x60], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x58614d53
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 45 A0: mov eax, dword ptr [ebp - 0x60]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 89 45 A0: mov dword ptr [ebp - 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes 83 7D A0 06: cmp dword ptr [ebp - 0x60], 6
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xa0
        __asm _emit 0x06
        ; Exact mapped bytes 7D 22: jge 0x58614d7b
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes 8B 4D A0: mov ecx, dword ptr [ebp - 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 8B 44 8A 74: mov eax, dword ptr [edx + ecx*4 + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x8a
        __asm _emit 0x74
        ; Exact mapped bytes 89 85 30 FF FF FF: mov dword ptr [ebp - 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A4: mov ecx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 30 FF FF FF: mov ecx, dword ptr [ebp - 0xd0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 18 C8 1A 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc8
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB CF: jmp 0x58614d4a
        __asm _emit 0xeb
        __asm _emit 0xcf
        ; Exact mapped bytes 8B 55 A4: mov edx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa4
        ; Exact mapped bytes 83 C2 01: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 89 55 A4: mov dword ptr [ebp - 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa4
        ; Exact mapped bytes E9 7B FC FF FF: jmp 0x58614a04
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 83 B8 A4 00 00 00 00: cmp dword ptr [eax + 0xa4], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 38: jne 0x58614dcd
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes C7 45 9C 00 00 00 00: mov dword ptr [ebp - 0x64], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x58614da7
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 4D 9C: mov ecx, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 89 4D 9C: mov dword ptr [ebp - 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes 83 7D 9C 06: cmp dword ptr [ebp - 0x64], 6
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x9c
        __asm _emit 0x06
        ; Exact mapped bytes 7D 20: jge 0x58614dcd
        __asm _emit 0x7d
        __asm _emit 0x20
        ; Exact mapped bytes 8B 55 9C: mov edx, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x9c
        ; Exact mapped bytes 8B 45 AC: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 8B 4C 90 74: mov ecx, dword ptr [eax + edx*4 + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x90
        __asm _emit 0x74
        ; Exact mapped bytes 89 8D 2C FF FF FF: mov dword ptr [ebp - 0xd4], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
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
        ; Exact mapped bytes E8 C6 C7 1A 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc7
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes EB D1: jmp 0x58614d9e
        __asm _emit 0xeb
        __asm _emit 0xd1
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
        ; Exact mapped bytes E8 6E C2 21 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc2
        __asm _emit 0x21
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
