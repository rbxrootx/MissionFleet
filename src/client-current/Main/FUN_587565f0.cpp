// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 113 bytes in 1 exact ranges.
// Source symbol alias: FUN_587565f0.

// Ghidra body range 0x587565F0..0x58756661; 113 mapped bytes.
extern "C" __declspec(naked) void FUN_587565f0_segment_00() {
    __asm {
        // 0x587565F0: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587565F5: push esi
        __asm _emit 0x56
        // 0x587565F6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587565F8: je 0x5875662e
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x587565FA: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587565FF: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58756603: mov eax, dword ptr [esi + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756609: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875660D: mov ecx, dword ptr [esi + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756613: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756618: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xC6
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875661D: mov eax, dword ptr [esi + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756623: mov dword ptr [eax + 0x6c], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5875662A: pop esi
        __asm _emit 0x5E
        // 0x5875662B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5875662E: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756633: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58756637: mov eax, dword ptr [esi + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875663D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5875663F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58756643: mov ecx, dword ptr [esi + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756649: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875664B: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xC6
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58756650: mov eax, dword ptr [esi + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756656: mov dword ptr [eax + 0x6c], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875665D: pop esi
        __asm _emit 0x5E
        // 0x5875665E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
