// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 76 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975050.

// Ghidra body range 0x58975050..0x5897509C; 76 mapped bytes.
extern "C" __declspec(naked) void FUN_58975050_segment_00() {
    __asm {
        // 0x58975050: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58975054: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58975056: mov dword ptr [eax], 0x589750a0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x50
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897505C: mov dword ptr [eax + 4], 0x58975100
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x51
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975063: mov dword ptr [eax + 8], 0x589750c0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0xC0
        __asm _emit 0x50
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897506A: mov dword ptr [eax + 0xc], 0x58975140
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x0C
        __asm _emit 0x40
        __asm _emit 0x51
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975071: mov dword ptr [eax + 0x10], 0x589751f0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0xF0
        __asm _emit 0x51
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975078: mov dword ptr [eax + 0x68], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x68
        // 0x5897507B: mov dword ptr [eax + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5897507E: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58975081: mov dword ptr [eax + 0x70], 0x589a320c
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x70
        __asm _emit 0x0C
        __asm _emit 0x32
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58975088: mov dword ptr [eax + 0x74], 0x7b
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897508F: mov dword ptr [eax + 0x78], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x78
        // 0x58975092: mov dword ptr [eax + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x7C
        // 0x58975095: mov dword ptr [eax + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897509B: ret
        __asm _emit 0xC3
    }
}
