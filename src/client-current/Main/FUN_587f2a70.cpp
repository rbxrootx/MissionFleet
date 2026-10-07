// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 95 bytes in 1 exact ranges.
// Source symbol alias: FUN_587f2a70.

// Ghidra body range 0x587F2A70..0x587F2ACF; 95 mapped bytes.
extern "C" __declspec(naked) void FUN_587f2a70_segment_00() {
    __asm {
        // 0x587F2A70: sub esp, 0x404
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2A76: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F2A7B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F2A7D: mov dword ptr [esp + 0x400], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2A84: mov eax, dword ptr [esp + 0x408]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2A8B: push esi
        __asm _emit 0x56
        // 0x587F2A8C: push eax
        __asm _emit 0x50
        // 0x587F2A8D: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F2A91: push eax
        __asm _emit 0x50
        // 0x587F2A92: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587F2A94: mov byte ptr [esp + 0xc], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587F2A99: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587F2A9E: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F2AA4: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587F2AA8: push ecx
        __asm _emit 0x51
        // 0x587F2AA9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F2AAB: push 0x8020000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x08
        // 0x587F2AB0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F2AB2: call 0x587e8c00
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x61
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F2AB7: mov ecx, dword ptr [esp + 0x404]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2ABE: pop esi
        __asm _emit 0x5E
        // 0x587F2ABF: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F2AC1: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xA1
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F2AC6: add esp, 0x404
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2ACC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
