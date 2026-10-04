// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873EFE0 .. +0x36 bytes.
// Source symbol alias: FUN_5873efe0.
extern "C" __declspec(naked) void FUN_5873efe0() {
    __asm {
        // 0x5873EFE0: push ecx
        __asm _emit 0x51
        // 0x5873EFE1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873EFE5: push esi
        __asm _emit 0x56
        // 0x5873EFE6: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873EFEA: push edi
        __asm _emit 0x57
        // 0x5873EFEB: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873EFEF: mov byte ptr [esp + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5873EFF4: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5873EFF8: push eax
        __asm _emit 0x50
        // 0x5873EFF9: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873EFFD: push edx
        __asm _emit 0x52
        // 0x5873EFFE: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x5873F001: push ecx
        __asm _emit 0x51
        // 0x5873F002: push eax
        __asm _emit 0x50
        // 0x5873F003: push esi
        __asm _emit 0x56
        // 0x5873F004: push edi
        __asm _emit 0x57
        // 0x5873F005: call 0x58901a80
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x2A
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873F00A: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5873F00D: lea eax, [edi + esi*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xF7
        // 0x5873F010: pop edi
        __asm _emit 0x5F
        // 0x5873F011: pop esi
        __asm _emit 0x5E
        // 0x5873F012: pop ecx
        __asm _emit 0x59
        // 0x5873F013: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
