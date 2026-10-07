// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889ECD0 .. +0x4A bytes.
// Source symbol alias: FUN_5889ecd0.
extern "C" __declspec(naked) void FUN_5889ecd0() {
    __asm {
        // 0x5889ECD0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5889ECD3: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889ECD8: push esi
        __asm _emit 0x56
        // 0x5889ECD9: push eax
        __asm _emit 0x50
        // 0x5889ECDA: call 0x5897cbbc
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xDE
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889ECDF: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889ECE3: push ecx
        __asm _emit 0x51
        // 0x5889ECE4: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889ECE8: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5889ECEA: push edx
        __asm _emit 0x52
        // 0x5889ECEB: push esi
        __asm _emit 0x56
        // 0x5889ECEC: call 0x5897cbce
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xDE
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889ECF1: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889ECF5: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889ECF9: and eax, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0xFC
        // 0x5889ECFC: push ecx
        __asm _emit 0x51
        // 0x5889ECFD: push eax
        __asm _emit 0x50
        // 0x5889ECFE: push esi
        __asm _emit 0x56
        // 0x5889ECFF: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889ED03: call 0x5897cbc8
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xDE
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889ED08: mov edx, dword ptr [0x58a284c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889ED0E: push esi
        __asm _emit 0x56
        // 0x5889ED0F: push edx
        __asm _emit 0x52
        // 0x5889ED10: call 0x5897cbb0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xDE
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889ED15: pop esi
        __asm _emit 0x5E
        // 0x5889ED16: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5889ED19: ret
        __asm _emit 0xC3
    }
}
