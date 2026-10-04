// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58786680 .. +0x35 bytes.
// Source symbol alias: FUN_58786680.
extern "C" __declspec(naked) void FUN_58786680() {
    __asm {
        // 0x58786680: push ebx
        __asm _emit 0x53
        // 0x58786681: push esi
        __asm _emit 0x56
        // 0x58786682: push edi
        __asm _emit 0x57
        // 0x58786683: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58786687: cmp byte ptr [edi + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5878668B: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5878668D: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x5878668F: jne 0x587866af
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58786691: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58786694: push eax
        __asm _emit 0x50
        // 0x58786695: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58786697: call 0x58786680
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878669C: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5878669E: push edi
        __asm _emit 0x57
        // 0x5878669F: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x65
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587866A4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587866A7: cmp byte ptr [esi + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587866AB: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x587866AD: je 0x58786691
        __asm _emit 0x74
        __asm _emit 0xE2
        // 0x587866AF: pop edi
        __asm _emit 0x5F
        // 0x587866B0: pop esi
        __asm _emit 0x5E
        // 0x587866B1: pop ebx
        __asm _emit 0x5B
        // 0x587866B2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
