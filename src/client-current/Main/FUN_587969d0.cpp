// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 140 bytes in 1 exact ranges.
// Source symbol alias: FUN_587969d0.

// Ghidra body range 0x587969D0..0x58796A5C; 140 mapped bytes.
extern "C" __declspec(naked) void FUN_587969d0_segment_00() {
    __asm {
        // 0x587969D0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587969D2: push 0x58980578
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587969D7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587969DD: push eax
        __asm _emit 0x50
        // 0x587969DE: push ecx
        __asm _emit 0x51
        // 0x587969DF: push esi
        __asm _emit 0x56
        // 0x587969E0: push edi
        __asm _emit 0x57
        // 0x587969E1: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587969E6: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587969E8: push eax
        __asm _emit 0x50
        // 0x587969E9: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587969ED: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587969F3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587969F5: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587969F9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587969FB: call 0x58909f50
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x35
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796A00: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58796A04: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796A0C: mov dword ptr [esi], 0x58997ec0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC0
        __asm _emit 0x7E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796A12: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58796A14: je 0x58796a32
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58796A16: push edi
        __asm _emit 0x57
        // 0x58796A17: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796A19: call 0x589091f0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x27
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796A1E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58796A20: jne 0x58796a46
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x58796A22: mov ecx, dword ptr [0x58a247f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58796A28: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58796A2A: push edi
        __asm _emit 0x57
        // 0x58796A2B: call 0x587750b0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xE6
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58796A30: jmp 0x58796a46
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58796A32: mov dword ptr [esi + 0x90], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796A3C: mov dword ptr [esi + 0x94], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796A46: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58796A48: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58796A4C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796A53: pop ecx
        __asm _emit 0x59
        // 0x58796A54: pop edi
        __asm _emit 0x5F
        // 0x58796A55: pop esi
        __asm _emit 0x5E
        // 0x58796A56: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58796A59: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
