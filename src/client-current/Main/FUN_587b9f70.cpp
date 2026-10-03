// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9F70 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_587b9f70() {
    __asm {
        // 0x587B9F70: push esi
        __asm _emit 0x56
        // 0x587B9F71: push edi
        __asm _emit 0x57
        // 0x587B9F72: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587B9F74: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587B9F76: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x75
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9F7B: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B9F7F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B9F82: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587B9F84: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B9F88: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587B9F8A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9F8E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9F90: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587B9F92: push esi
        __asm _emit 0x56
        // 0x587B9F93: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x587B9F95: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B9F99: push eax
        __asm _emit 0x50
        // 0x587B9F9A: push ecx
        __asm _emit 0x51
        // 0x587B9F9B: push 0x80013123
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9FA0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587B9FA2: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587B9FA5: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x6C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9FAA: push esi
        __asm _emit 0x56
        // 0x587B9FAB: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x2E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B9FB0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B9FB3: pop edi
        __asm _emit 0x5F
        // 0x587B9FB4: pop esi
        __asm _emit 0x5E
        // 0x587B9FB5: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
