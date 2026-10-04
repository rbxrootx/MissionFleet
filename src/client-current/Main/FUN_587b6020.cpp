// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B6020 .. +0x41 bytes.
// Source symbol alias: FUN_587b6020.
extern "C" __declspec(naked) void FUN_587b6020() {
    __asm {
        // 0x587B6020: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B6024: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587B6026: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B602A: mov dword ptr [eax + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x587B602D: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x587B6030: mov dword ptr [eax + 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x70
        // 0x587B6033: mov dword ptr [eax + 0x5c], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x5C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B603A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B603C: je 0x587b605e
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587B603E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587B6041: push esi
        __asm _emit 0x56
        // 0x587B6042: mov esi, 0x12c
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6047: sub esi, dword ptr [eax + 8]
        __asm _emit 0x2B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x587B604A: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B604F: push eax
        __asm _emit 0x50
        // 0x587B6050: sub edx, 0x190
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6056: push esi
        __asm _emit 0x56
        // 0x587B6057: push edx
        __asm _emit 0x52
        // 0x587B6058: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B605D: pop esi
        __asm _emit 0x5E
        // 0x587B605E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
