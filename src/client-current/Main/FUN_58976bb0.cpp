// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 31 bytes in 1 exact ranges.
// Source symbol alias: FUN_58976bb0.

// Ghidra body range 0x58976BB0..0x58976BCF; 31 mapped bytes.
extern "C" __declspec(naked) void FUN_58976bb0_segment_00() {
    __asm {
        // 0x58976BB0: push esi
        __asm _emit 0x56
        // 0x58976BB1: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58976BB5: push edi
        __asm _emit 0x57
        // 0x58976BB6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58976BB8: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58976BBB: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58976BBD: je 0x58976bc6
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58976BBF: push esi
        __asm _emit 0x56
        // 0x58976BC0: call dword ptr [eax + 0x28]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x28
        // 0x58976BC3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58976BC6: mov dword ptr [esi + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58976BC9: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58976BCC: pop edi
        __asm _emit 0x5F
        // 0x58976BCD: pop esi
        __asm _emit 0x5E
        // 0x58976BCE: ret
        __asm _emit 0xC3
    }
}
