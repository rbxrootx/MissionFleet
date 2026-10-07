// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 78 bytes in 1 exact ranges.
// Source symbol alias: FUN_589752f0.

// Ghidra body range 0x589752F0..0x5897533E; 78 mapped bytes.
extern "C" __declspec(naked) void FUN_589752f0_segment_00() {
    __asm {
        // 0x589752F0: mov dl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589752F4: push esi
        __asm _emit 0x56
        // 0x589752F5: push edi
        __asm _emit 0x57
        // 0x589752F6: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589752FA: mov esi, 4
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589752FF: lea ecx, [edi + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x48
        // 0x58975302: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58975304: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58975306: je 0x5897530e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58975308: mov byte ptr [eax + 0x80], dl
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897530E: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58975311: dec esi
        __asm _emit 0x4E
        // 0x58975312: jne 0x58975302
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x58975314: lea eax, [edi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x68
        // 0x58975317: mov esi, 4
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897531C: mov ecx, dword ptr [eax - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xF0
        // 0x5897531F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58975321: je 0x58975329
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58975323: mov byte ptr [ecx + 0x111], dl
        __asm _emit 0x88
        __asm _emit 0x91
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975329: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5897532B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5897532D: je 0x58975335
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5897532F: mov byte ptr [ecx + 0x111], dl
        __asm _emit 0x88
        __asm _emit 0x91
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975335: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58975338: dec esi
        __asm _emit 0x4E
        // 0x58975339: jne 0x5897531c
        __asm _emit 0x75
        __asm _emit 0xE1
        // 0x5897533B: pop edi
        __asm _emit 0x5F
        // 0x5897533C: pop esi
        __asm _emit 0x5E
        // 0x5897533D: ret
        __asm _emit 0xC3
    }
}
