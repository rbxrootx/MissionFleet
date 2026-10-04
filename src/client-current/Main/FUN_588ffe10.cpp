// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FFE10 .. +0x1C1 bytes.
// Source symbol alias: FUN_588ffe10.
extern "C" __declspec(naked) void FUN_588ffe10() {
    __asm {
        // 0x588FFE10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FFE12: push 0x5898a5af
        __asm _emit 0x68
        __asm _emit 0xAF
        __asm _emit 0xA5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FFE17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFE1D: push eax
        __asm _emit 0x50
        // 0x588FFE1E: push ecx
        __asm _emit 0x51
        // 0x588FFE1F: push ebx
        __asm _emit 0x53
        // 0x588FFE20: push ebp
        __asm _emit 0x55
        // 0x588FFE21: push esi
        __asm _emit 0x56
        // 0x588FFE22: push edi
        __asm _emit 0x57
        // 0x588FFE23: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FFE28: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FFE2A: push eax
        __asm _emit 0x50
        // 0x588FFE2B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FFE2F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFE35: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FFE37: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FFE3B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FFE3F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FFE43: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FFE47: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FFE4B: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FFE4F: push eax
        __asm _emit 0x50
        // 0x588FFE50: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FFE54: push ecx
        __asm _emit 0x51
        // 0x588FFE55: push edx
        __asm _emit 0x52
        // 0x588FFE56: push edi
        __asm _emit 0x57
        // 0x588FFE57: push ebp
        __asm _emit 0x55
        // 0x588FFE58: push eax
        __asm _emit 0x50
        // 0x588FFE59: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FFE5B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFE60: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FFE66: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FFE6B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FFE6D: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588FFE70: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588FFE73: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFE7A: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588FFE7D: lea ecx, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588FFE80: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FFE84: mov dword ptr [esi], 0x589a23c4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC4
        __asm _emit 0x23
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FFE8A: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x588FFE8D: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FFE92: push 0x1c
        __asm _emit 0x6A
        __asm _emit 0x1C
        // 0x588FFE94: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588FFE99: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x588FFE9C: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFEA2: mov dword ptr [esi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFEA8: mov dword ptr [esi + 0x88], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFEB2: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFEB8: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFEBE: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFEC4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xCD
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFEC9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FFECC: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FFED0: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588FFED5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FFED7: je 0x588ffef4
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588FFED9: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FFEDD: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FFEE1: push ecx
        __asm _emit 0x51
        // 0x588FFEE2: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FFEE6: push edx
        __asm _emit 0x52
        // 0x588FFEE7: push ecx
        __asm _emit 0x51
        // 0x588FFEE8: push edi
        __asm _emit 0x57
        // 0x588FFEE9: push ebp
        __asm _emit 0x55
        // 0x588FFEEA: push esi
        __asm _emit 0x56
        // 0x588FFEEB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FFEED: call 0x588f84e0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FFEF2: jmp 0x588ffef6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FFEF4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FFEF6: push 0x68
        __asm _emit 0x6A
        __asm _emit 0x68
        // 0x588FFEF8: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588FFEFD: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588FFF00: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xCD
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFF05: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FFF08: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FFF0C: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588FFF11: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FFF13: je 0x588fff36
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588FFF15: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FFF19: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FFF1D: add edx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFF23: push edx
        __asm _emit 0x52
        // 0x588FFF24: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FFF28: push ecx
        __asm _emit 0x51
        // 0x588FFF29: push edx
        __asm _emit 0x52
        // 0x588FFF2A: push edi
        __asm _emit 0x57
        // 0x588FFF2B: push ebp
        __asm _emit 0x55
        // 0x588FFF2C: push esi
        __asm _emit 0x56
        // 0x588FFF2D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FFF2F: call 0x588fb570
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xB6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FFF34: jmp 0x588fff38
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FFF36: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FFF38: push 0xcc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFF3D: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588FFF42: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588FFF45: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xCD
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFF4A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FFF4D: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FFF51: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588FFF56: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FFF58: je 0x588fff80
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588FFF5A: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588FFF5E: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FFF62: push ecx
        __asm _emit 0x51
        // 0x588FFF63: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FFF67: add edx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFF6D: push edx
        __asm _emit 0x52
        // 0x588FFF6E: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FFF72: push ecx
        __asm _emit 0x51
        // 0x588FFF73: push edx
        __asm _emit 0x52
        // 0x588FFF74: push edi
        __asm _emit 0x57
        // 0x588FFF75: push ebp
        __asm _emit 0x55
        // 0x588FFF76: push esi
        __asm _emit 0x56
        // 0x588FFF77: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FFF79: call 0x588fa1c0
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xA2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FFF7E: jmp 0x588fff82
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FFF80: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FFF82: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x588FFF84: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588FFF89: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFF8F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xCC
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFF94: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FFF97: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FFF9B: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588FFFA0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FFFA2: je 0x588fffb3
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588FFFA4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FFFA6: call 0x588fac00
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xAC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FFFAB: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFFB1: jmp 0x588fffb9
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588FFFB3: mov dword ptr [esi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFFB9: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588FFFBB: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FFFBF: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFFC6: pop ecx
        __asm _emit 0x59
        // 0x588FFFC7: pop edi
        __asm _emit 0x5F
        // 0x588FFFC8: pop esi
        __asm _emit 0x5E
        // 0x588FFFC9: pop ebp
        __asm _emit 0x5D
        // 0x588FFFCA: pop ebx
        __asm _emit 0x5B
        // 0x588FFFCB: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FFFCE: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
