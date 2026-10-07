// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 111 bytes in 1 exact ranges.
// Source symbol alias: FUN_5878f920.

// Ghidra body range 0x5878F920..0x5878F98F; 111 mapped bytes.
extern "C" __declspec(naked) void FUN_5878f920_segment_00() {
    __asm {
        // 0x5878F920: push esi
        __asm _emit 0x56
        // 0x5878F921: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878F923: mov eax, dword ptr [esi + 0x12140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878F929: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878F92E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5878F932: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5878F936: mov eax, 0xeeff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878F93B: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5878F93E: mov ecx, 0xe00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878F943: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5878F946: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5878F94A: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x5878F94F: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878F954: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5878F958: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5878F95A: mov dword ptr [esi + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878F961: call 0x5878d2c0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878F966: mov eax, dword ptr [esi + 0x1211c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878F96C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878F96E: je 0x5878f986
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5878F970: mov ecx, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x28
        // 0x5878F973: mov dword ptr [eax + 0x84], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878F979: mov ecx, dword ptr [esi + 0x1211c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878F97F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5878F981: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5878F984: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5878F986: mov dword ptr [esi + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878F98D: pop esi
        __asm _emit 0x5E
        // 0x5878F98E: ret
        __asm _emit 0xC3
    }
}
