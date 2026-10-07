// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 65 bytes in 1 exact ranges.
// Source symbol alias: FUN_5875f7c0.

// Ghidra body range 0x5875F7C0..0x5875F801; 65 mapped bytes.
extern "C" __declspec(naked) void FUN_5875f7c0_segment_00() {
    __asm {
        // 0x5875F7C0: mov eax, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x5875F7C3: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5875F7C7: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x5875F7CA: push esi
        __asm _emit 0x56
        // 0x5875F7CB: mov esi, 0x100
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F7D0: lea eax, [eax + ecx + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x20
        // 0x5875F7D4: lea ecx, [esi + 0x7ffffefe]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xFE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5875F7DA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875F7DC: je 0x5875f7f5
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5875F7DE: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5875F7E0: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5875F7E2: je 0x5875f7f5
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5875F7E4: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5875F7E6: inc eax
        __asm _emit 0x40
        // 0x5875F7E7: inc edx
        __asm _emit 0x42
        // 0x5875F7E8: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5875F7EB: jne 0x5875f7d4
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5875F7ED: dec eax
        __asm _emit 0x48
        // 0x5875F7EE: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F7F1: pop esi
        __asm _emit 0x5E
        // 0x5875F7F2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5875F7F5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5875F7F7: jne 0x5875f7fa
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5875F7F9: dec eax
        __asm _emit 0x48
        // 0x5875F7FA: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F7FD: pop esi
        __asm _emit 0x5E
        // 0x5875F7FE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
