// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 46 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e6450.

// Ghidra body range 0x587E6450..0x587E647E; 46 mapped bytes.
extern "C" __declspec(naked) void FUN_587e6450_segment_00() {
    __asm {
        // 0x587E6450: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6455: push esi
        __asm _emit 0x56
        // 0x587E6456: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E6458: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E645F: mov dword ptr [eax + 0x54], 0x300
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6466: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E646C: call 0x58894a60
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xE5
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587E6471: mov eax, dword ptr [esi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E6477: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587E647C: pop esi
        __asm _emit 0x5E
        // 0x587E647D: ret
        __asm _emit 0xC3
    }
}
