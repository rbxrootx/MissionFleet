// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043D5D0 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_0043d5d0_0043D5D0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 CC BD 58 00: push 0x58bdcc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0xbd
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EC 1C: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x1c
        ; Exact mapped bytes 89 4D D8: mov dword ptr [ebp - 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 D8: mov eax, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 83 38 00: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x43d694
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D D8: mov ecx, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 55 D8: mov edx, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 2B 02: sub eax, dword ptr [edx]
        __asm _emit 0x2b
        __asm _emit 0x02
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 89 45 DC: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 4D D8: mov ecx, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 89 55 E0: mov dword ptr [ebp - 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 83 7D E0 00: cmp dword ptr [ebp - 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 74 74: je 0x43d694
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes 8B 45 DC: mov eax, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes C1 E0 02: shl eax, 2
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x02
        ; Exact mapped bytes 89 45 E4: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 81 7D E4 80 00 00 00: cmp dword ptr [ebp - 0x1c], 0x80
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 0E: jbe 0x43d640
        __asm _emit 0x76
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 6E EE 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xee
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes EB 54: jmp 0x43d694
        __asm _emit 0xeb
        __asm _emit 0x54
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes C1 EA 03: shr edx, 3
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 8D 04 95 54 50 68 00: lea eax, [edx*4 + 0x685054]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0D: je 0x43d669
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 68 94 50 68 00: push 0x685094
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 9A 4F FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B 55 E0: mov edx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 89 0A: mov dword ptr [edx], ecx
        __asm _emit 0x89
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 89 02: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 10: je 0x43d694
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes C7 45 E8 94 50 68 00: mov dword ptr [ebp - 0x18], 0x685094
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 E8: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes C7 02 00 00 00 00: mov dword ptr [edx], 0
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
