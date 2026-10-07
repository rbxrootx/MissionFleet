// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 56 bytes in 1 exact ranges.
// Source symbol alias: FUN_58976b70.

// Ghidra body range 0x58976B70..0x58976BA8; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_58976b70_segment_00() {
    __asm {
        // 0x58976B70: push esi
        __asm _emit 0x56
        // 0x58976B71: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58976B75: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58976B78: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58976B7A: je 0x58976ba6
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58976B7C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58976B7E: push esi
        __asm _emit 0x56
        // 0x58976B7F: call dword ptr [eax + 0x24]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58976B82: mov al, byte ptr [esi + 0x10]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58976B85: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58976B88: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58976B8A: je 0x58976b9f
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58976B8C: mov dword ptr [esi + 0x14], 0xc8
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58976B93: mov dword ptr [esi + 0x10c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58976B9D: pop esi
        __asm _emit 0x5E
        // 0x58976B9E: ret
        __asm _emit 0xC3
        // 0x58976B9F: mov dword ptr [esi + 0x14], 0x64
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58976BA6: pop esi
        __asm _emit 0x5E
        // 0x58976BA7: ret
        __asm _emit 0xC3
    }
}
