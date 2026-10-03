// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5878A280 .. +0x43 bytes.
// Source symbol alias: FUN_5878a280.
extern "C" __declspec(naked) void FUN_5878a280() {
    __asm {
        // 0x5878A280: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5878A284: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878A288: push esi
        __asm _emit 0x56
        // 0x5878A289: push eax
        __asm _emit 0x50
        // 0x5878A28A: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A28E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878A290: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5878A294: push ecx
        __asm _emit 0x51
        // 0x5878A295: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A299: push edx
        __asm _emit 0x52
        // 0x5878A29A: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A29E: push eax
        __asm _emit 0x50
        // 0x5878A29F: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A2A3: push ecx
        __asm _emit 0x51
        // 0x5878A2A4: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A2A8: push edx
        __asm _emit 0x52
        // 0x5878A2A9: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A2AD: push eax
        __asm _emit 0x50
        // 0x5878A2AE: push ecx
        __asm _emit 0x51
        // 0x5878A2AF: push edx
        __asm _emit 0x52
        // 0x5878A2B0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5878A2B2: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xDD
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5878A2B7: mov dword ptr [esi], 0x58996b9c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x9C
        __asm _emit 0x6B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5878A2BD: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5878A2BF: pop esi
        __asm _emit 0x5E
        // 0x5878A2C0: ret 0x24
        __asm _emit 0xC2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
