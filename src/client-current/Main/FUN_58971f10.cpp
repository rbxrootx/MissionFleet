// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 129 bytes in 1 exact ranges.
// Source symbol alias: FUN_58971f10.

// Ghidra body range 0x58971F10..0x58971F91; 129 mapped bytes.
extern "C" __declspec(naked) void FUN_58971f10_segment_00() {
    __asm {
        // 0x58971F10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58971F12: push 0x5898ad78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xAD
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58971F17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58971F1D: push eax
        __asm _emit 0x50
        // 0x58971F1E: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58971F25: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58971F28: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58971F2C: push ebx
        __asm _emit 0x53
        // 0x58971F2D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58971F2F: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58971F33: mov dword ptr [esp + 4], 0x589a2fbc
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xBC
        __asm _emit 0x2F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58971F3B: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x58971F3E: mov byte ptr [esp + 0xc], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58971F42: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58971F46: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58971F4A: push edx
        __asm _emit 0x52
        // 0x58971F4B: push eax
        __asm _emit 0x50
        // 0x58971F4C: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58971F54: call 0x58972270
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58971F59: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x58971F5B: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58971F5F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58971F61: mov dword ptr [esp + 4], 0x589a2fbc
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xBC
        __asm _emit 0x2F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58971F69: je 0x58971f7d
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58971F6B: mov cl, byte ptr [esp + 0xc]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58971F6F: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58971F71: je 0x58971f7d
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58971F73: push eax
        __asm _emit 0x50
        // 0x58971F74: call dword ptr [0x5898c250]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58971F7A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58971F7D: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58971F81: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x58971F83: pop ebx
        __asm _emit 0x5B
        // 0x58971F84: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58971F8B: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58971F8E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
