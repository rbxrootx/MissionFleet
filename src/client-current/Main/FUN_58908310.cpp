// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908310 .. +0x29 bytes.
// Source symbol alias: FUN_58908310.
extern "C" __declspec(naked) void FUN_58908310() {
    __asm {
        // 0x58908310: push esi
        __asm _emit 0x56
        // 0x58908311: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58908313: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x58908316: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908318: je 0x58908334
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5890831A: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5890831E: shr al, 5
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x58908321: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58908323: je 0x58908334
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58908325: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58908328: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890832A: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5890832D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890832F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58908331: push esi
        __asm _emit 0x56
        // 0x58908332: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58908334: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58908337: pop esi
        __asm _emit 0x5E
        // 0x58908338: ret
        __asm _emit 0xC3
    }
}
