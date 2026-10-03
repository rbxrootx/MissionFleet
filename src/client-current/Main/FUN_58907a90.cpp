// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907A90 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_58907a90() {
    __asm {
        // 0x58907A90: push esi
        __asm _emit 0x56
        // 0x58907A91: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58907A93: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58907A95: call 0x5896cae0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58907A9A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58907A9C: mov dword ptr [esi], 0x589a2960
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x60
        __asm _emit 0x29
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58907AA2: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58907AA5: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58907AA8: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58907AAB: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x58907AAE: cmp dword ptr [esp + 8], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58907AB2: je 0x58907ab7
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58907AB4: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58907AB7: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58907AB9: pop esi
        __asm _emit 0x5E
        // 0x58907ABA: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
