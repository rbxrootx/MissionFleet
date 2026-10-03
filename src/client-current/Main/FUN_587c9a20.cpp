// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C9A20 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_587c9a20() {
    __asm {
        // 0x587C9A20: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C9A24: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C9A28: push esi
        __asm _emit 0x56
        // 0x587C9A29: push eax
        __asm _emit 0x50
        // 0x587C9A2A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C9A2E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C9A30: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587C9A34: push ecx
        __asm _emit 0x51
        // 0x587C9A35: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C9A39: push edx
        __asm _emit 0x52
        // 0x587C9A3A: push eax
        __asm _emit 0x50
        // 0x587C9A3B: push ecx
        __asm _emit 0x51
        // 0x587C9A3C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C9A3E: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xD6
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C9A43: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C9A47: mov dword ptr [esi], 0x5899b014
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x14
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C9A4D: mov dword ptr [esi + 0xfc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C9A53: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587C9A55: pop esi
        __asm _emit 0x5E
        // 0x587C9A56: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
