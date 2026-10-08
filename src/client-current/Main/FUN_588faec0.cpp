// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 104 bytes in 1 exact ranges.
// Source symbol alias: FUN_588faec0.

// Ghidra body range 0x588FAEC0..0x588FAF28; 104 mapped bytes.
extern "C" __declspec(naked) void FUN_588faec0_segment_00() {
    __asm {
        // 0x588FAEC0: push esi
        __asm _emit 0x56
        // 0x588FAEC1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FAEC3: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x588FAEC6: inc eax
        __asm _emit 0x40
        // 0x588FAEC7: cmp dword ptr [esi + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x588FAECA: ja 0x588faed3
        __asm _emit 0x77
        __asm _emit 0x07
        // 0x588FAECC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FAECE: call 0x588fad60
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FAED3: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x588FAED6: push edi
        __asm _emit 0x57
        // 0x588FAED7: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588FAEDA: add edi, dword ptr [esi + 0x1c]
        __asm _emit 0x03
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x588FAEDD: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588FAEDF: ja 0x588faee3
        __asm _emit 0x77
        __asm _emit 0x02
        // 0x588FAEE1: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x588FAEE3: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588FAEE6: cmp dword ptr [ecx + edi*4], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB9
        __asm _emit 0x00
        // 0x588FAEEA: jne 0x588faefc
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588FAEEC: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588FAEEE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x1D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FAEF3: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x588FAEF6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FAEF9: mov dword ptr [edx + edi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588FAEFC: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588FAEFF: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x588FAF02: pop edi
        __asm _emit 0x5F
        // 0x588FAF03: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FAF05: je 0x588faf21
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588FAF07: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FAF0B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FAF0D: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588FAF0F: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588FAF12: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FAF15: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588FAF18: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588FAF1B: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x588FAF1E: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588FAF21: inc dword ptr [esi + 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x588FAF24: pop esi
        __asm _emit 0x5E
        // 0x588FAF25: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
