// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 90 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975820.

// Ghidra body range 0x58975820..0x5897587A; 90 mapped bytes.
extern "C" __declspec(naked) void FUN_58975820_segment_00() {
    __asm {
        // 0x58975820: push esi
        __asm _emit 0x56
        // 0x58975821: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58975825: push 0x589a3614
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x36
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5897582A: push 0x589a3600
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x36
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5897582F: lea eax, [esi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58975832: push eax
        __asm _emit 0x50
        // 0x58975833: push esi
        __asm _emit 0x56
        // 0x58975834: call 0x58975880
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975839: push 0x589a3654
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x36
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5897583E: lea ecx, [esi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58975841: push 0x589a3640
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x36
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58975846: push ecx
        __asm _emit 0x51
        // 0x58975847: push esi
        __asm _emit 0x56
        // 0x58975848: call 0x58975880
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897584D: push 0x589a3634
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x36
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58975852: lea edx, [esi + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x58975855: push 0x589a3620
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x36
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5897585A: push edx
        __asm _emit 0x52
        // 0x5897585B: push esi
        __asm _emit 0x56
        // 0x5897585C: call 0x58975880
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975861: push 0x589a370c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x37
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58975866: lea eax, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58975869: push 0x589a36f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x36
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5897586E: push eax
        __asm _emit 0x50
        // 0x5897586F: push esi
        __asm _emit 0x56
        // 0x58975870: call 0x58975880
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975875: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x58975878: pop esi
        __asm _emit 0x5E
        // 0x58975879: ret
        __asm _emit 0xC3
    }
}
