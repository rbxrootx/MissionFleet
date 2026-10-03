// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5896C7D0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_5896c7d0() {
    __asm {
        // 0x5896C7D0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5896C7D4: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5896C7D8: push esi
        __asm _emit 0x56
        // 0x5896C7D9: push eax
        __asm _emit 0x50
        // 0x5896C7DA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5896C7DE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5896C7E0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5896C7E4: push ecx
        __asm _emit 0x51
        // 0x5896C7E5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5896C7E9: push edx
        __asm _emit 0x52
        // 0x5896C7EA: push eax
        __asm _emit 0x50
        // 0x5896C7EB: push ecx
        __asm _emit 0x51
        // 0x5896C7EC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5896C7EE: call 0x58909010
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xC8
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5896C7F3: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C7F8: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5896C7FB: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5896C7FE: mov dword ptr [esi], 0x589a2e60
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x60
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5896C804: mov dword ptr [esi + 0x60], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C80B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5896C80D: pop esi
        __asm _emit 0x5E
        // 0x5896C80E: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
