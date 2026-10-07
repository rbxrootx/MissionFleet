// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 103 bytes in 2 exact ranges.
// Source symbol alias: FUN_58886c50.

// Ghidra body range 0x58886C50..0x58886CA1; 81 mapped bytes.
extern "C" __declspec(naked) void FUN_58886c50_segment_00() {
    __asm {
        // 0x58886C50: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58886C52: push 0x58986b68
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x6B
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58886C57: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886C5D: push eax
        __asm _emit 0x50
        // 0x58886C5E: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x58886C61: push esi
        __asm _emit 0x56
        // 0x58886C62: push edi
        __asm _emit 0x57
        // 0x58886C63: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58886C68: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58886C6A: push eax
        __asm _emit 0x50
        // 0x58886C6B: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58886C6F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886C75: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58886C77: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58886C79: push edi
        __asm _emit 0x57
        // 0x58886C7A: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58886C7E: call 0x588867d0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886C83: push eax
        __asm _emit 0x50
        // 0x58886C84: lea ecx, [esi + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886C8A: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58886C8E: call 0x58886910
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886C93: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58886C97: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58886C99: je 0x58886ca4
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58886C9B: push eax
        __asm _emit 0x50
        // 0x58886C9C: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x5F
        __asm _emit 0x0F
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58886CA4..0x58886CBA; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_58886c50_segment_01() {
    __asm {
        // 0x58886CA4: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58886CA8: push eax
        __asm _emit 0x50
        // 0x58886CA9: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58886CAD: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58886CB1: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58886CB5: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x5F
        __asm _emit 0x0F
        __asm _emit 0x00
    }
}
