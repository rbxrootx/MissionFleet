// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 37 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cada0.

// Ghidra body range 0x587CADA0..0x587CADC5; 37 mapped bytes.
extern "C" __declspec(naked) void FUN_587cada0_segment_00() {
    __asm {
        // 0x587CADA0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587CADA4: push esi
        __asm _emit 0x56
        // 0x587CADA5: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CADA9: push edi
        __asm _emit 0x57
        // 0x587CADAA: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CADAE: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587CADB1: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x587CADB3: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587CADB5: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587CADB8: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587CADBB: call 0x587cb2f0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CADC0: pop edi
        __asm _emit 0x5F
        // 0x587CADC1: pop esi
        __asm _emit 0x5E
        // 0x587CADC2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
