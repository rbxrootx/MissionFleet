// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 90 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cc990.

// Ghidra body range 0x587CC990..0x587CC9EA; 90 mapped bytes.
extern "C" __declspec(naked) void FUN_587cc990_segment_00() {
    __asm {
        // 0x587CC990: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CC995: push esi
        __asm _emit 0x56
        // 0x587CC996: mov esi, dword ptr [eax + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC99C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587CC99E: je 0x587cc9de
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x587CC9A0: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC9A5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CC9A7: push 0x5898cde8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CC9AC: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CC9B2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CC9B5: push eax
        __asm _emit 0x50
        // 0x587CC9B6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CC9B8: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xE1
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587CC9BD: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CC9C1: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CC9C7: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CC9CC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CC9CE: push ecx
        __asm _emit 0x51
        // 0x587CC9CF: mov ecx, dword ptr [edx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC9D5: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xE1
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587CC9DA: pop esi
        __asm _emit 0x5E
        // 0x587CC9DB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587CC9DE: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CC9E4: pop esi
        __asm _emit 0x5E
        // 0x587CC9E5: jmp 0x587f2a70
        __asm _emit 0xE9
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
    }
}
