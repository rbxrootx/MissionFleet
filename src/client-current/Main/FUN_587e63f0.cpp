// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 93 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e63f0.

// Ghidra body range 0x587E63F0..0x587E644D; 93 mapped bytes.
extern "C" __declspec(naked) void FUN_587e63f0_segment_00() {
    __asm {
        // 0x587E63F0: push esi
        __asm _emit 0x56
        // 0x587E63F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E63F3: mov eax, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E63F9: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E63FE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587E6402: mov ecx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E6408: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x95
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587E640D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587E640F: mov dword ptr [esi + 0x20d40], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E6415: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E641A: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x587E641D: mov dword ptr [eax + 0x54], 0x2ce
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6424: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E642A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587E642C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587E642F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587E6431: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E6437: call 0x58894820
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xE3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587E643C: mov esi, dword ptr [esi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E6442: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E6447: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587E644B: pop esi
        __asm _emit 0x5E
        // 0x587E644C: ret
        __asm _emit 0xC3
    }
}
