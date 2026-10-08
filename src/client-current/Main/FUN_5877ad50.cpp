// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 105 bytes in 2 exact ranges.
// Source symbol alias: FUN_5877ad50.

// Ghidra body range 0x5877AD50..0x5877AD8E; 62 mapped bytes.
extern "C" __declspec(naked) void FUN_5877ad50_segment_00() {
    __asm {
        // 0x5877AD50: push esi
        __asm _emit 0x56
        // 0x5877AD51: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877AD53: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AD59: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5877AD5C: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5877AD5F: je 0x5877ad9f
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5877AD61: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5877AD64: cmp ecx, dword ptr [eax + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5877AD67: je 0x5877ad7e
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5877AD69: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5877AD6C: dec edx
        __asm _emit 0x4A
        // 0x5877AD6D: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5877AD6F: jne 0x5877ad75
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5877AD71: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5877AD73: jmp 0x5877ad78
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5877AD75: lea edx, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x5877AD78: dec dword ptr [eax + 8]
        __asm _emit 0xFF
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5877AD7B: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5877AD7E: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x5877AD81: mov ecx, dword ptr [eax + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x88
        // 0x5877AD84: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877AD86: je 0x5877ad91
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5877AD88: push ecx
        __asm _emit 0x51
        // 0x5877AD89: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x1E
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5877AD91..0x5877ADBC; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_5877ad50_segment_01() {
    __asm {
        // 0x5877AD91: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AD97: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5877AD9A: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5877AD9D: jne 0x5877ad61
        __asm _emit 0x75
        __asm _emit 0xC2
        // 0x5877AD9F: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ADA5: mov dword ptr [eax + 0xc], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ADAC: mov dword ptr [eax + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ADB3: mov dword ptr [eax + 8], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ADBA: pop esi
        __asm _emit 0x5E
        // 0x5877ADBB: ret
        __asm _emit 0xC3
    }
}
