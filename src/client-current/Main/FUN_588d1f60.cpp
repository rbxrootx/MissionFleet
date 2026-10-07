// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 47 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d1f60.
// Recovered behavior: forward five stack arguments to the base constructor,
// install the CRoomTypeTrade vtable, return this, and callee-clean 0x14 bytes.
// This exact instruction stream is not a recovered high-level C++ implementation;
// the supporting evidence and unresolved argument meanings are in the subsystem notes.

// Ghidra body range 0x588D1F60..0x588D1F8F; 47 mapped bytes.
extern "C" __declspec(naked) void FUN_588d1f60_segment_00() {
    __asm {
        // 0x588D1F60: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D1F64: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588D1F68: push esi
        __asm _emit 0x56
        // 0x588D1F69: push eax
        __asm _emit 0x50
        // 0x588D1F6A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D1F6E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D1F70: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D1F74: push ecx
        __asm _emit 0x51
        // 0x588D1F75: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D1F79: push edx
        __asm _emit 0x52
        // 0x588D1F7A: push eax
        __asm _emit 0x50
        // 0x588D1F7B: push ecx
        __asm _emit 0x51
        // 0x588D1F7C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D1F7E: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D1F83: mov dword ptr [esi], 0x589a0ee8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D1F89: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588D1F8B: pop esi
        __asm _emit 0x5E
        // 0x588D1F8C: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
