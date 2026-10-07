// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 59 bytes in 1 exact ranges.
// Source symbol alias: FUN_58896300.

// Ghidra body range 0x58896300..0x5889633B; 59 mapped bytes.
extern "C" __declspec(naked) void FUN_58896300_segment_00() {
    __asm {
        // 0x58896300: push esi
        __asm _emit 0x56
        // 0x58896301: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58896303: mov ecx, dword ptr [esi + 0x58c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896309: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x8B
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5889630E: mov ecx, dword ptr [esi + 0x58c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896314: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58896317: jne 0x58896322
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58896319: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889631B: call 0x5875ee50
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x8B
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58896320: pop esi
        __asm _emit 0x5E
        // 0x58896321: ret
        __asm _emit 0xC3
        // 0x58896322: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x8A
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58896327: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5889632A: jne 0x58896339
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5889632C: mov ecx, dword ptr [esi + 0x58c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58896332: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58896334: call 0x5875ee50
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x8B
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58896339: pop esi
        __asm _emit 0x5E
        // 0x5889633A: ret
        __asm _emit 0xC3
    }
}
