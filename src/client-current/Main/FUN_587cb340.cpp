// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 59 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cb340.

// Ghidra body range 0x587CB340..0x587CB37B; 59 mapped bytes.
extern "C" __declspec(naked) void FUN_587cb340_segment_00() {
    __asm {
        // 0x587CB340: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587CB344: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB346: push esi
        __asm _emit 0x56
        // 0x587CB347: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CB34B: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x587CB34E: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587CB350: mov dword ptr [eax + 0x218], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB356: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CB35A: mov dword ptr [eax + 0x21c], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB360: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CB364: add edx, 0x22
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x22
        // 0x587CB367: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587CB36A: mov dword ptr [edx + ecx], esi
        __asm _emit 0x89
        __asm _emit 0x34
        __asm _emit 0x0A
        // 0x587CB36D: mov dword ptr [eax + 0x224], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB377: pop esi
        __asm _emit 0x5E
        // 0x587CB378: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
