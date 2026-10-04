// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588996D0 .. +0x2C bytes.
// Source symbol alias: FUN_588996d0.
extern "C" __declspec(naked) void FUN_588996d0() {
    __asm {
        // 0x588996D0: push ecx
        __asm _emit 0x51
        // 0x588996D1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588996D5: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588996D9: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x588996DC: push eax
        __asm _emit 0x50
        // 0x588996DD: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588996E1: push edx
        __asm _emit 0x52
        // 0x588996E2: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588996E6: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x588996E9: push ecx
        __asm _emit 0x51
        // 0x588996EA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588996EE: push eax
        __asm _emit 0x50
        // 0x588996EF: push ecx
        __asm _emit 0x51
        // 0x588996F0: push edx
        __asm _emit 0x52
        // 0x588996F1: call 0x588995e0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588996F6: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588996F9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
