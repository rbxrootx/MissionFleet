// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587F8720 .. +0x37 bytes.
// Source symbol alias: FUN_587f8720.
extern "C" __declspec(naked) void FUN_587f8720() {
    __asm {
        // 0x587F8720: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587F8722: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x45
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F8727: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F872A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F872C: je 0x587f8734
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587F872E: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8734: lea ecx, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587F8737: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F8739: je 0x587f8741
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587F873B: mov dword ptr [ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F8741: lea ecx, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587F8744: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F8746: je 0x587f874e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587F8748: mov dword ptr [ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F874E: mov byte ptr [eax + 0x2c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x587F8752: mov byte ptr [eax + 0x2d], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587F8756: ret
        __asm _emit 0xC3
    }
}
