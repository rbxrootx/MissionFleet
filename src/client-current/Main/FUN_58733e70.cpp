// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1566 bytes in 3 exact ranges.
// Source symbol alias: FUN_58733e70.

// Ghidra body range 0x58733E70..0x5873413D; 717 mapped bytes.
extern "C" __declspec(naked) void FUN_58733e70_segment_00() {
    __asm {
        // 0x58733E70: sub esp, 0x60
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x60
        // 0x58733E73: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58733E78: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58733E7A: mov dword ptr [esp + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58733E7E: cmp dword ptr [esp + 0x68], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x02
        // 0x58733E83: push ebx
        __asm _emit 0x53
        // 0x58733E84: push ebp
        __asm _emit 0x55
        // 0x58733E85: push esi
        __asm _emit 0x56
        // 0x58733E86: push edi
        __asm _emit 0x57
        // 0x58733E87: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58733E89: jne 0x58734481
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733E8F: mov ebp, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x58733E93: cmp ebp, dword ptr [esi + 0xb4]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733E99: jne 0x58734008
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733E9F: movzx eax, word ptr [esi + 0x12c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733EA6: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733EAB: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58733EAF: je 0x58733fbe
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733EB5: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58733EB8: je 0x58733fbe
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733EBE: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58733EC2: jne 0x58733f81
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733EC8: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733ECD: cmp dword ptr [esi + 0x130], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733ED3: je 0x58734481
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733ED9: cmp word ptr [esi + 0x120], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733EE0: jb 0x58733f66
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733EE6: cmp word ptr [esi + 0x124], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733EED: jb 0x58733f66
        __asm _emit 0x72
        __asm _emit 0x77
        // 0x58733EEF: lea edi, [esi + 0x108]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733EF5: lea ecx, [esi + 0x110]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733EFB: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58733EFD: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58733EFF: nop
        __asm _emit 0x90
        // 0x58733F00: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58733F02: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x58733F04: jne 0x58733f20
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58733F06: cmp dl, bl
        __asm _emit 0x3A
        __asm _emit 0xD3
        // 0x58733F08: je 0x58733f1c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58733F0A: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58733F0D: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58733F10: jne 0x58733f20
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58733F12: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58733F15: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x58733F18: cmp dl, bl
        __asm _emit 0x3A
        __asm _emit 0xD3
        // 0x58733F1A: jne 0x58733f00
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58733F1C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733F1E: jmp 0x58733f25
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58733F20: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58733F22: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58733F25: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58733F27: je 0x58733f49
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58733F29: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58733F2B: call 0x58733120
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733F30: push ebx
        __asm _emit 0x53
        // 0x58733F31: push ebx
        __asm _emit 0x53
        // 0x58733F32: push ebx
        __asm _emit 0x53
        // 0x58733F33: push 0xbbb
        __asm _emit 0x68
        __asm _emit 0xBB
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733F38: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x7B
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58733F3D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58733F3F: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x0D
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58733F44: jmp 0x58734481
        __asm _emit 0xE9
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733F49: mov eax, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733F4F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58733F51: push ebx
        __asm _emit 0x53
        // 0x58733F52: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58733F54: lea edx, [esp + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58733F58: mov dword ptr [esp + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58733F5C: mov dword ptr [esp + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x58733F60: push edx
        __asm _emit 0x52
        // 0x58733F61: jmp 0x58734096
        __asm _emit 0xE9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733F66: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58733F68: push ebx
        __asm _emit 0x53
        // 0x58733F69: push ebx
        __asm _emit 0x53
        // 0x58733F6A: push ebx
        __asm _emit 0x53
        // 0x58733F6B: push 0xbba
        __asm _emit 0x68
        __asm _emit 0xBA
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733F70: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x7B
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58733F75: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58733F77: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58733F7C: jmp 0x58734481
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733F81: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58733F83: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58733F86: jne 0x58733fa5
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58733F88: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733F8D: mov word ptr [esi + 0x12c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733F94: call 0x587330c0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733F99: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58733F9B: call 0x587324a0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733FA0: jmp 0x58734481
        __asm _emit 0xE9
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733FA5: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x58733FA9: jne 0x58734481
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733FAF: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58733FB1: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58733FB4: mov dword ptr [esi + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x58
        // 0x58733FB7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58733FB9: jmp 0x58734481
        __asm _emit 0xE9
        __asm _emit 0xC3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733FBE: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733FC3: cmp dword ptr [esi + 0x130], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733FC9: je 0x58734481
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733FCF: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58733FD1: push ebx
        __asm _emit 0x53
        // 0x58733FD2: cmp word ptr [esi + 0x120], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733FD9: jb 0x58733f69
        __asm _emit 0x72
        __asm _emit 0x8E
        // 0x58733FDB: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733FE1: push edx
        __asm _emit 0x52
        // 0x58733FE2: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58733FE6: push edx
        __asm _emit 0x52
        // 0x58733FE7: push ebx
        __asm _emit 0x53
        // 0x58733FE8: push ebx
        __asm _emit 0x53
        // 0x58733FE9: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58733FED: mov dword ptr [esi + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733FF3: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733FF9: push 0x80016101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x58733FFE: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xCC
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58734003: jmp 0x58734481
        __asm _emit 0xE9
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734008: cmp ebp, dword ptr [esi + 0xb8]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873400E: jne 0x5873401c
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58734010: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58734012: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58734015: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58734017: jmp 0x58734481
        __asm _emit 0xE9
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873401C: cmp ebp, dword ptr [esi + 0xbc]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734022: jne 0x587340b3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734028: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873402D: cmp dword ptr [esi + 0x130], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734033: je 0x58734481
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734039: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5873403B: cmp word ptr [esi + 0x120], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58734043: jb 0x58733f68
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x1F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734049: lea edi, [esi + 0x108]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873404F: lea ecx, [esi + 0x110]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734055: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58734057: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58734059: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x5873405B: jne 0x58734077
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5873405D: cmp dl, bl
        __asm _emit 0x3A
        __asm _emit 0xD3
        // 0x5873405F: je 0x58734073
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58734061: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58734064: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58734067: jne 0x58734077
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58734069: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x5873406C: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x5873406F: cmp dl, bl
        __asm _emit 0x3A
        __asm _emit 0xD3
        // 0x58734071: jne 0x58734057
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58734073: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58734075: jmp 0x5873407c
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58734077: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58734079: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x5873407C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873407E: jne 0x58733f29
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734084: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58734086: push ebx
        __asm _emit 0x53
        // 0x58734087: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58734089: lea ecx, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5873408D: mov dword ptr [esp + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58734091: mov dword ptr [esp + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58734095: push ecx
        __asm _emit 0x51
        // 0x58734096: push ebx
        __asm _emit 0x53
        // 0x58734097: push ebx
        __asm _emit 0x53
        // 0x58734098: mov dword ptr [esi + 0x130], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873409E: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587340A4: push 0x80016102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587340A9: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xCB
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587340AE: jmp 0x58734481
        __asm _emit 0xE9
        __asm _emit 0xCE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587340B3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587340B5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587340B7: lea ecx, [esi + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587340BD: lea edx, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x587340C0: cmp ebp, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x29
        // 0x587340C2: je 0x587340d1
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587340C4: inc eax
        __asm _emit 0x40
        // 0x587340C5: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587340C7: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x587340CA: jl 0x587340c0
        __asm _emit 0x7C
        __asm _emit 0xF4
        // 0x587340CC: jmp 0x587342c4
        __asm _emit 0xE9
        __asm _emit 0xF3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587340D1: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587340D7: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x24
        // 0x587340DB: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x587340DD: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587340E0: je 0x5873416d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587340E6: movzx ecx, word ptr [esi + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587340ED: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587340F0: jae 0x587342a0
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587340F6: add al, 0x30
        __asm _emit 0x04
        __asm _emit 0x30
        // 0x587340F8: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x587340FB: mov byte ptr [edx + esi + 0x108], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734102: inc word ptr [esi + 0x120]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734109: movzx eax, word ptr [esi + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734110: mov byte ptr [eax + esi + 0x108], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734117: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58734119: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873411B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5873411D: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58734121: mov dword ptr [esp + 0x2d], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2D
        // 0x58734125: mov dword ptr [esp + 0x31], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x31
        // 0x58734129: mov word ptr [esp + 0x35], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x35
        // 0x5873412E: mov byte ptr [esp + 0x37], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x37
        // 0x58734132: cmp cx, word ptr [esi + 0x120]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734139: jae 0x5873415d
        __asm _emit 0x73
        __asm _emit 0x22
        // 0x5873413B: jmp 0x58734140
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58734140..0x587341D9; 153 mapped bytes.
extern "C" __declspec(naked) void FUN_58733e70_segment_01() {
    __asm {
        // 0x58734140: push 0x5898c978
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58734145: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58734147: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873414B: push edx
        __asm _emit 0x52
        // 0x5873414C: call 0x58731bd0
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734151: movzx eax, word ptr [esi + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734158: inc edi
        __asm _emit 0x47
        // 0x58734159: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5873415B: jl 0x58734140
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x5873415D: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58734161: push ecx
        __asm _emit 0x51
        // 0x58734162: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734168: jmp 0x5873429b
        __asm _emit 0xE9
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873416D: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734173: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x24
        // 0x58734177: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x58734179: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5873417C: je 0x5873420d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734182: movzx ecx, word ptr [esi + 0x122]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734189: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5873418C: jae 0x587342a0
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734192: add al, 0x30
        __asm _emit 0x04
        __asm _emit 0x30
        // 0x58734194: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x58734197: mov byte ptr [edx + esi + 0x110], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873419E: inc word ptr [esi + 0x122]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587341A5: movzx eax, word ptr [esi + 0x122]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587341AC: mov byte ptr [eax + esi + 0x110], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x30
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587341B3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587341B5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587341B7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587341B9: mov byte ptr [esp + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587341BD: mov dword ptr [esp + 0x15], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        // 0x587341C1: mov dword ptr [esp + 0x19], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x19
        // 0x587341C5: mov word ptr [esp + 0x1d], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1D
        // 0x587341CA: mov byte ptr [esp + 0x1f], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x587341CE: cmp cx, word ptr [esi + 0x122]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587341D5: jae 0x587341fd
        __asm _emit 0x73
        __asm _emit 0x26
        // 0x587341D7: jmp 0x587341e0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x587341E0..0x58734498; 696 mapped bytes.
extern "C" __declspec(naked) void FUN_58733e70_segment_02() {
    __asm {
        // 0x587341E0: push 0x5898c978
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587341E5: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587341E7: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587341EB: push edx
        __asm _emit 0x52
        // 0x587341EC: call 0x58731bd0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587341F1: movzx eax, word ptr [esi + 0x122]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587341F8: inc edi
        __asm _emit 0x47
        // 0x587341F9: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587341FB: jl 0x587341e0
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x587341FD: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58734201: push ecx
        __asm _emit 0x51
        // 0x58734202: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734208: jmp 0x5873429b
        __asm _emit 0xE9
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873420D: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734213: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x24
        // 0x58734217: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x58734219: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5873421C: je 0x587342a0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734222: movzx ecx, word ptr [esi + 0x124]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734229: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5873422C: jae 0x587342a0
        __asm _emit 0x73
        __asm _emit 0x72
        // 0x5873422E: add al, 0x30
        __asm _emit 0x04
        __asm _emit 0x30
        // 0x58734230: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x58734233: mov byte ptr [edx + esi + 0x118], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873423A: inc word ptr [esi + 0x124]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734241: movzx eax, word ptr [esi + 0x124]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734248: mov byte ptr [eax + esi + 0x118], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x30
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873424F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58734251: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58734253: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58734255: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58734259: mov dword ptr [esp + 0x21], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x21
        // 0x5873425D: mov dword ptr [esp + 0x25], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x25
        // 0x58734261: mov word ptr [esp + 0x29], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x29
        // 0x58734266: mov byte ptr [esp + 0x2b], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2B
        // 0x5873426A: cmp cx, word ptr [esi + 0x124]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734271: jae 0x58734290
        __asm _emit 0x73
        __asm _emit 0x1D
        // 0x58734273: push 0x5898c978
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58734278: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x5873427A: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873427E: push edx
        __asm _emit 0x52
        // 0x5873427F: call 0x58731bd0
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734284: movzx eax, word ptr [esi + 0x124]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873428B: inc edi
        __asm _emit 0x47
        // 0x5873428C: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5873428E: jl 0x58734273
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x58734290: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58734294: push ecx
        __asm _emit 0x51
        // 0x58734295: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873429B: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587342A0: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587342A6: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587342A9: mov ecx, 0x12c
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587342AE: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587342B1: push edx
        __asm _emit 0x52
        // 0x587342B2: push ecx
        __asm _emit 0x51
        // 0x587342B3: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587342B9: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587342BE: push eax
        __asm _emit 0x50
        // 0x587342BF: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587342C4: cmp ebp, dword ptr [esi + 0xe8]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587342CA: jne 0x58734481
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587342D0: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587342D6: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587342DA: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x587342DC: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587342DF: je 0x58734352
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x587342E1: movzx eax, word ptr [esi + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587342E8: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587342EB: jbe 0x5873445d
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587342F1: dec eax
        __asm _emit 0x48
        // 0x587342F2: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x587342F5: mov word ptr [esi + 0x120], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587342FC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587342FE: mov byte ptr [edx + esi + 0x108], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734305: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58734307: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873430B: mov dword ptr [esp + 0x39], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x39
        // 0x5873430F: mov dword ptr [esp + 0x3d], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3D
        // 0x58734313: mov word ptr [esp + 0x41], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x41
        // 0x58734318: mov byte ptr [esp + 0x43], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x43
        // 0x5873431C: cmp ax, word ptr [esi + 0x120]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734323: jae 0x58734342
        __asm _emit 0x73
        __asm _emit 0x1D
        // 0x58734325: push 0x5898c978
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873432A: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x5873432C: lea ecx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58734330: push ecx
        __asm _emit 0x51
        // 0x58734331: call 0x58731bd0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734336: movzx edx, word ptr [esi + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873433D: inc edi
        __asm _emit 0x47
        // 0x5873433E: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x58734340: jl 0x58734325
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x58734342: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734348: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873434C: push eax
        __asm _emit 0x50
        // 0x5873434D: jmp 0x58734458
        __asm _emit 0xE9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734352: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734358: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873435C: shr dl, 1
        __asm _emit 0xD0
        __asm _emit 0xEA
        // 0x5873435E: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58734361: je 0x587343dd
        __asm _emit 0x74
        __asm _emit 0x7A
        // 0x58734363: movzx eax, word ptr [esi + 0x122]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873436A: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873436D: jbe 0x5873445d
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734373: dec eax
        __asm _emit 0x48
        // 0x58734374: mov word ptr [esi + 0x122], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873437B: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5873437E: mov byte ptr [eax + esi + 0x110], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x30
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734385: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58734387: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58734389: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5873438B: mov byte ptr [esp + 0x50], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5873438F: mov dword ptr [esp + 0x51], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x51
        // 0x58734393: mov dword ptr [esp + 0x55], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x55
        // 0x58734397: mov word ptr [esp + 0x59], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x59
        // 0x5873439C: mov byte ptr [esp + 0x5b], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5B
        // 0x587343A0: cmp cx, word ptr [esi + 0x122]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587343A7: jae 0x587343cd
        __asm _emit 0x73
        __asm _emit 0x24
        // 0x587343A9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587343B0: push 0x5898c978
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587343B5: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587343B7: lea edx, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587343BB: push edx
        __asm _emit 0x52
        // 0x587343BC: call 0x58731bd0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587343C1: movzx eax, word ptr [esi + 0x122]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587343C8: inc edi
        __asm _emit 0x47
        // 0x587343C9: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587343CB: jl 0x587343b0
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x587343CD: lea ecx, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587343D1: push ecx
        __asm _emit 0x51
        // 0x587343D2: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587343D8: jmp 0x58734458
        __asm _emit 0xE9
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587343DD: mov edx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587343E3: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587343E7: shr al, 1
        __asm _emit 0xD0
        __asm _emit 0xE8
        // 0x587343E9: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587343EB: je 0x5873445d
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x587343ED: movzx eax, word ptr [esi + 0x124]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587343F4: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587343F7: jbe 0x5873445d
        __asm _emit 0x76
        __asm _emit 0x64
        // 0x587343F9: dec eax
        __asm _emit 0x48
        // 0x587343FA: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x587343FD: mov word ptr [esi + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734404: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58734406: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58734408: mov byte ptr [ecx + esi + 0x118], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x31
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873440F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58734411: mov byte ptr [esp + 0x44], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58734415: mov dword ptr [esp + 0x45], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x45
        // 0x58734419: mov dword ptr [esp + 0x49], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x49
        // 0x5873441D: mov word ptr [esp + 0x4d], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4D
        // 0x58734422: mov byte ptr [esp + 0x4f], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4F
        // 0x58734426: cmp dx, word ptr [esi + 0x124]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873442D: jae 0x5873444d
        __asm _emit 0x73
        __asm _emit 0x1E
        // 0x5873442F: nop
        __asm _emit 0x90
        // 0x58734430: push 0x5898c978
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58734435: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58734437: lea eax, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5873443B: push eax
        __asm _emit 0x50
        // 0x5873443C: call 0x58731bd0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734441: movzx ecx, word ptr [esi + 0x124]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734448: inc edi
        __asm _emit 0x47
        // 0x58734449: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x5873444B: jl 0x58734430
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x5873444D: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734453: lea edx, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58734457: push edx
        __asm _emit 0x52
        // 0x58734458: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873445D: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58734463: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58734466: mov ecx, 0x12c
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873446B: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5873446E: push edx
        __asm _emit 0x52
        // 0x5873446F: push ecx
        __asm _emit 0x51
        // 0x58734470: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734476: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873447B: push eax
        __asm _emit 0x50
        // 0x5873447C: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x2F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58734481: mov ecx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58734485: pop edi
        __asm _emit 0x5F
        // 0x58734486: pop esi
        __asm _emit 0x5E
        // 0x58734487: pop ebp
        __asm _emit 0x5D
        // 0x58734488: pop ebx
        __asm _emit 0x5B
        // 0x58734489: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5873448B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873448D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58734492: add esp, 0x60
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x60
        // 0x58734495: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
