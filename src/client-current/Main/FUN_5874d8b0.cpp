// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874D8B0 .. +0x39 bytes.
// Source symbol alias: FUN_5874d8b0.
extern "C" __declspec(naked) void FUN_5874d8b0() {
    __asm {
        // 0x5874D8B0: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874D8B4: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874D8B8: push esi
        __asm _emit 0x56
        // 0x5874D8B9: push eax
        __asm _emit 0x50
        // 0x5874D8BA: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D8BE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874D8C0: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874D8C4: push ecx
        __asm _emit 0x51
        // 0x5874D8C5: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D8C9: push edx
        __asm _emit 0x52
        // 0x5874D8CA: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D8CE: push eax
        __asm _emit 0x50
        // 0x5874D8CF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D8D3: push ecx
        __asm _emit 0x51
        // 0x5874D8D4: push edx
        __asm _emit 0x52
        // 0x5874D8D5: push eax
        __asm _emit 0x50
        // 0x5874D8D6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874D8D8: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874D8DD: mov dword ptr [esi], 0x5898d284
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x84
        __asm _emit 0xD2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874D8E3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874D8E5: pop esi
        __asm _emit 0x5E
        // 0x5874D8E6: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
