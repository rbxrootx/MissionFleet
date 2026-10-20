// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040B3D0 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_0040b3d0_0040B3D0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 81 EC 98 00 00 00: sub esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D BD 68 FF FF FF: lea edi, [ebp - 0x98]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B9 26 00 00 00: mov ecx, 0x26
        __asm _emit 0xb9
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 CC CC CC CC: mov eax, 0xcccccccc
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 8B 89 10 01 00 00: mov ecx, dword ptr [ecx + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 94 66 FF FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 F8: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 8B 88 10 01 00 00: mov ecx, dword ptr [eax + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 40 62 FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 F4: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes C7 45 A8 00 00 00 00: mov dword ptr [ebp - 0x58], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x40b433
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
        ; Exact mapped bytes 83 7D F4 FF: cmp dword ptr [ebp - 0xc], -1
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x40b4d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 8B 89 10 01 00 00: mov ecx, dword ptr [ecx + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B 62 FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 F4: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 83 7D F4 FF: cmp dword ptr [ebp - 0xc], -1
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 74 70: je 0x40b4cc
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes 6A 24: push 0x24
        __asm _emit 0x6a
        __asm _emit 0x24
        ; Exact mapped bytes 8D 55 D0: lea edx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 F4: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 8B 89 10 01 00 00: mov ecx, dword ptr [ecx + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 92 64 FF FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 54: je 0x40b4cc
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 83 7D D0 00: cmp dword ptr [ebp - 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0x00
        ; Exact mapped bytes 75 4E: jne 0x40b4cc
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 55 18: mov edx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 45 AC: lea eax, [ebp - 0x54]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D D4: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 8B 88 78 0C 04 00: mov ecx, dword ptr [eax + 0x40c78]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 E3 64 FF FF: call 0x40197e
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 89 4D B8: mov dword ptr [ebp - 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb8
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 89 55 AC: mov dword ptr [ebp - 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 66 8B 45 14: mov ax, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 45 B4: mov word ptr [ebp - 0x4c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb4
        ; Exact mapped bytes 8B 4D 18: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 55 AC: lea edx, [ebp - 0x54]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 45 D4: lea eax, [ebp - 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8A 78 0C 04 00: mov ecx, dword ptr [edx + 0x40c78]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 19 62 FF FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x40b42a
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 81 C4 98 00 00 00: add esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 0A 99 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
