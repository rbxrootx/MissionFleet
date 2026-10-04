// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58731590 .. +0x2A bytes.
// Source symbol alias: FUN_58731590.
extern "C" __declspec(naked) void FUN_58731590() {
    __asm {
        // 0x58731590: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58731595: push esi
        __asm _emit 0x56
        // 0x58731596: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58731598: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5873159B: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5873159F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587315A1: je 0x587315a9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587315A3: push esi
        __asm _emit 0x56
        // 0x587315A4: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x19
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587315A9: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587315AC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587315AE: je 0x587315b6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587315B0: push esi
        __asm _emit 0x56
        // 0x587315B1: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x19
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587315B6: pop esi
        __asm _emit 0x5E
        // 0x587315B7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
