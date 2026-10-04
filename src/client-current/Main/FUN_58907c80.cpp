// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907C80 .. +0x2F bytes.
// Source symbol alias: FUN_58907c80.
extern "C" __declspec(naked) void FUN_58907c80() {
    __asm {
        // 0x58907C80: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58907C84: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58907C88: push esi
        __asm _emit 0x56
        // 0x58907C89: push eax
        __asm _emit 0x50
        // 0x58907C8A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58907C8E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58907C90: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58907C94: push ecx
        __asm _emit 0x51
        // 0x58907C95: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58907C99: push edx
        __asm _emit 0x52
        // 0x58907C9A: push eax
        __asm _emit 0x50
        // 0x58907C9B: push ecx
        __asm _emit 0x51
        // 0x58907C9C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58907C9E: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xCD
        __asm _emit 0xE2
        __asm _emit 0xFF
        // 0x58907CA3: mov dword ptr [esi], 0x589a2988
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x88
        __asm _emit 0x29
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58907CA9: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58907CAB: pop esi
        __asm _emit 0x5E
        // 0x58907CAC: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
