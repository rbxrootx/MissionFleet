// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 288 bytes in 4 exact ranges.
// Source symbol alias: FUN_58746a10.

// Ghidra body range 0x58746A10..0x58746AF6; 230 mapped bytes.
extern "C" __declspec(naked) void FUN_58746a10_segment_00() {
    __asm {
        // 0x58746A10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58746A12: push 0x5897e208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xE2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58746A17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746A1D: push eax
        __asm _emit 0x50
        // 0x58746A1E: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58746A21: push ebx
        __asm _emit 0x53
        // 0x58746A22: push ebp
        __asm _emit 0x55
        // 0x58746A23: push esi
        __asm _emit 0x56
        // 0x58746A24: push edi
        __asm _emit 0x57
        // 0x58746A25: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58746A2A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58746A2C: push eax
        __asm _emit 0x50
        // 0x58746A2D: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58746A31: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746A37: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746A3B: call 0x58748be0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746A40: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58746A43: push eax
        __asm _emit 0x50
        // 0x58746A44: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58746A48: call 0x58744340
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746A4D: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746A51: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746A55: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58746A57: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58746A5B: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58746A5D: jbe 0x58746a68
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58746A5F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x62
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746A64: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746A68: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58746A6C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58746A70: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58746A72: cmp dword ptr [esp + 0x24], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746A76: jbe 0x58746a7d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58746A78: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x61
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746A7D: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x58746A7F: je 0x58746a87
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58746A81: cmp ebx, dword ptr [esp + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58746A85: je 0x58746a8c
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58746A87: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x61
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746A8C: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58746A8E: je 0x58746b28
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746A94: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x58746A96: jne 0x58746ae0
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x58746A98: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x61
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746A9D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58746A9F: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58746AA2: jb 0x58746aa9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58746AA4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x61
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746AA9: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58746AAB: call 0x58743080
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746AB0: mov eax, dword ptr [eax + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746AB6: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58746AB8: je 0x58746ac2
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58746ABA: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746ABE: cmp eax, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x01
        // 0x58746AC0: je 0x58746ae8
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58746AC2: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x58746AC4: jne 0x58746ae4
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58746AC6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x61
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746ACB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58746ACD: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58746AD0: jb 0x58746ad7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58746AD2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x61
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746AD7: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746ADB: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58746ADE: jmp 0x58746a70
        __asm _emit 0xEB
        __asm _emit 0x90
        // 0x58746AE0: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58746AE2: jmp 0x58746a9f
        __asm _emit 0xEB
        __asm _emit 0xBB
        // 0x58746AE4: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58746AE6: jmp 0x58746acd
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x58746AE8: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746AEC: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58746AEE: je 0x58746af9
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58746AF0: push eax
        __asm _emit 0x50
        // 0x58746AF1: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x61
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58746AF9..0x58746B0F; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_58746a10_segment_01() {
    __asm {
        // 0x58746AF9: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58746AFD: push edx
        __asm _emit 0x52
        // 0x58746AFE: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746B02: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58746B06: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58746B0A: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x61
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58746B28..0x58746B36; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58746a10_segment_02() {
    __asm {
        // 0x58746B28: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746B2C: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58746B2E: je 0x58746b39
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58746B30: push eax
        __asm _emit 0x50
        // 0x58746B31: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x61
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58746B39..0x58746B4F; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_58746a10_segment_03() {
    __asm {
        // 0x58746B39: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58746B3D: push eax
        __asm _emit 0x50
        // 0x58746B3E: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746B42: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58746B46: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58746B4A: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x60
        __asm _emit 0x23
        __asm _emit 0x00
    }
}
