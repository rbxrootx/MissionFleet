// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 64 bytes in 1 exact ranges.
// Source symbol alias: FUN_58860030.

// Ghidra body range 0x58860030..0x58860070; 64 mapped bytes.
extern "C" __declspec(naked) void FUN_58860030_segment_00() {
    __asm {
        // 0x58860030: push esi
        __asm _emit 0x56
        // 0x58860031: push edi
        __asm _emit 0x57
        // 0x58860032: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58860034: mov eax, dword ptr [edi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886003A: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58860040: lea esi, [edi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860046: push eax
        __asm _emit 0x50
        // 0x58860047: push esi
        __asm _emit 0x56
        // 0x58860048: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5886004D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5886004F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58860051: jle 0x5886006d
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58860053: imul eax, eax, 0x34
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x34
        // 0x58860056: cdq
        __asm _emit 0x99
        // 0x58860057: idiv dword ptr [edi + 0xb8]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886005D: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860060: jns 0x58860064
        __asm _emit 0x79
        __asm _emit 0x02
        // 0x58860062: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58860064: mov ecx, dword ptr [edi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886006A: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5886006D: pop edi
        __asm _emit 0x5F
        // 0x5886006E: pop esi
        __asm _emit 0x5E
        // 0x5886006F: ret
        __asm _emit 0xC3
    }
}
