// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 102 bytes in 1 exact ranges.
// Source symbol alias: FUN_5878ab00.

// Ghidra body range 0x5878AB00..0x5878AB66; 102 mapped bytes.
extern "C" __declspec(naked) void FUN_5878ab00_segment_00() {
    __asm {
        // 0x5878AB00: push esi
        __asm _emit 0x56
        // 0x5878AB01: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878AB03: mov eax, 0x40000000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5878AB08: cmp dword ptr [esi + 0xa0], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AB0E: jne 0x5878ab64
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x5878AB10: cmp dword ptr [esi + 0x9c], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AB16: jne 0x5878ab64
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x5878AB18: inc dword ptr [esi + 0x98]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AB1E: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AB24: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AB2A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878AB2C: je 0x5878ab64
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5878AB2E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5878AB30: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x5878AB33: push edi
        __asm _emit 0x57
        // 0x5878AB34: mov edi, dword ptr [0x58a248d4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xD4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878AB3A: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5878AB3C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5878AB3F: push edi
        __asm _emit 0x57
        // 0x5878AB40: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5878AB42: cmp dword ptr [esi + 0x98], 0x50
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x50
        // 0x5878AB49: pop edi
        __asm _emit 0x5F
        // 0x5878AB4A: jl 0x5878ab64
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x5878AB4C: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AB52: mov dword ptr [esi + 0x9c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AB5C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5878AB5E: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5878AB61: pop esi
        __asm _emit 0x5E
        // 0x5878AB62: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x5878AB64: pop esi
        __asm _emit 0x5E
        // 0x5878AB65: ret
        __asm _emit 0xC3
    }
}
