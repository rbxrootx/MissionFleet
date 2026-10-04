// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908870 .. +0x36 bytes.
// Source symbol alias: FUN_58908870.
extern "C" __declspec(naked) void FUN_58908870() {
    __asm {
        // 0x58908870: push esi
        __asm _emit 0x56
        // 0x58908871: mov esi, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x7C
        // 0x58908874: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58908876: je 0x589088a4
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x58908878: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x5890887B: sub eax, dword ptr [ecx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x5890887E: cdq
        __asm _emit 0x99
        // 0x5890887F: idiv dword ptr [ecx + 0x5c]
        __asm _emit 0xF7
        __asm _emit 0x79
        __asm _emit 0x5C
        // 0x58908882: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x58908884: dec eax
        __asm _emit 0x48
        // 0x58908885: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908887: jle 0x5890889e
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x58908889: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908890: mov esi, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x10
        // 0x58908893: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58908895: je 0x5890889e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58908897: dec eax
        __asm _emit 0x48
        // 0x58908898: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5890889A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890889C: jg 0x58908890
        __asm _emit 0x7F
        __asm _emit 0xF2
        // 0x5890889E: mov dword ptr [ecx + 0x80], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589088A4: pop esi
        __asm _emit 0x5E
        // 0x589088A5: ret
        __asm _emit 0xC3
    }
}
