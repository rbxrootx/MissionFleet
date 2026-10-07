// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 117 bytes in 1 exact ranges.
// Source symbol alias: FUN_58777420.

// Ghidra body range 0x58777420..0x58777495; 117 mapped bytes.
extern "C" __declspec(naked) void FUN_58777420_segment_00() {
    __asm {
        // 0x58777420: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58777422: push 0x5898a298
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xA2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58777427: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877742D: push eax
        __asm _emit 0x50
        // 0x5877742E: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x58777431: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58777436: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58777438: push eax
        __asm _emit 0x50
        // 0x58777439: lea eax, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5877743D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777443: push 0x1b
        __asm _emit 0x6A
        __asm _emit 0x1B
        // 0x58777445: push 0x589964c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x64
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877744A: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877744E: mov dword ptr [esp + 0x24], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777456: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877745E: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58777463: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xDB
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58777468: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5877746C: push eax
        __asm _emit 0x50
        // 0x5877746D: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58777471: mov dword ptr [esp + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777479: call 0x58735360
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xDE
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877747E: push 0x589ac270
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xC2
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58777483: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58777487: push ecx
        __asm _emit 0x51
        // 0x58777488: mov dword ptr [esp + 0x28], 0x5898cec4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xC4
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58777490: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
