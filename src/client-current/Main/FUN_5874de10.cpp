// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874DE10 .. +0x39 bytes.
// Source symbol alias: FUN_5874de10.
extern "C" __declspec(naked) void FUN_5874de10() {
    __asm {
        // 0x5874DE10: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874DE14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874DE18: push esi
        __asm _emit 0x56
        // 0x5874DE19: push eax
        __asm _emit 0x50
        // 0x5874DE1A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874DE1E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874DE20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874DE24: push ecx
        __asm _emit 0x51
        // 0x5874DE25: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874DE29: push edx
        __asm _emit 0x52
        // 0x5874DE2A: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874DE2E: push eax
        __asm _emit 0x50
        // 0x5874DE2F: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874DE33: push ecx
        __asm _emit 0x51
        // 0x5874DE34: push edx
        __asm _emit 0x52
        // 0x5874DE35: push eax
        __asm _emit 0x50
        // 0x5874DE36: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874DE38: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874DE3D: mov dword ptr [esi], 0x5898d338
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0xD3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874DE43: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874DE45: pop esi
        __asm _emit 0x5E
        // 0x5874DE46: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
