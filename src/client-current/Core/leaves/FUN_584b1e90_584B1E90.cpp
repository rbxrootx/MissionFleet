// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B1E90 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_584b1e90_584B1E90() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 80 E4 87 58: push 0x5887e480
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xe4
        __asm _emit 0x87
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
        ; Exact mapped bytes 83 EC 0C: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C5: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xc5
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
        ; Exact mapped bytes A1 10 67 96 58: mov eax, dword ptr [0x58966710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 64 8B 0D 2C 00 00 00: mov ecx, dword ptr fs:[0x2c]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 81: mov edx, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x81
        ; Exact mapped bytes A1 EC BE 90 58: mov eax, dword ptr [0x5890beec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 3B 82 04 00 00 00: cmp eax, dword ptr [edx + 4]
        __asm _emit 0x3b
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 6F: jle 0x584b1f40
        __asm _emit 0x7e
        __asm _emit 0x6f
        ; Exact mapped bytes 68 EC BE 90 58: push 0x5890beec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 FB 37 00: call 0x58831a7d
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0x37
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 3D EC BE 90 58 FF: cmp dword ptr [0x5890beec], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes 75 59: jne 0x584b1f40
        __asm _emit 0x75
        __asm _emit 0x59
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes E8 0F F1 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf1
        __asm _emit 0x37
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 83 7D F0 00: cmp dword ptr [ebp - 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf0
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x584b1f12
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 E3 F6 FF FF: call 0x584b15f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes EB 07: jmp 0x584b1f19
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 EC 00 00 00 00: mov dword ptr [ebp - 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 89 4D E8: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes C6 45 FC 00: mov byte ptr [ebp - 4], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 E8: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 89 15 E8 BE 90 58: mov dword ptr [0x5890bee8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 EC BE 90 58: push 0x5890beec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF FA 37 00: call 0x58831a2c
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfa
        __asm _emit 0x37
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B 45 24: mov eax, dword ptr [ebp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B7 4D 20: movzx ecx, word ptr [ebp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4d
        __asm _emit 0x20
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 1C: mov edx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D E8 BE 90 58: mov ecx, dword ptr [0x5890bee8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 F6 FF FF: call 0x584b1660
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf6
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
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
