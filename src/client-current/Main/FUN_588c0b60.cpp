// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C0B60 .. +0x34 bytes.
// Source symbol alias: FUN_588c0b60.
extern "C" __declspec(naked) void FUN_588c0b60() {
    __asm {
        // 0x588C0B60: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588C0B64: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588C0B68: push esi
        __asm _emit 0x56
        // 0x588C0B69: push eax
        __asm _emit 0x50
        // 0x588C0B6A: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588C0B6E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C0B70: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588C0B74: push ecx
        __asm _emit 0x51
        // 0x588C0B75: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588C0B79: push edx
        __asm _emit 0x52
        // 0x588C0B7A: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588C0B7E: push eax
        __asm _emit 0x50
        // 0x588C0B7F: push ecx
        __asm _emit 0x51
        // 0x588C0B80: push edx
        __asm _emit 0x52
        // 0x588C0B81: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588C0B83: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C0B88: mov dword ptr [esi], 0x589a0aa0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA0
        __asm _emit 0x0A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588C0B8E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588C0B90: pop esi
        __asm _emit 0x5E
        // 0x588C0B91: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
