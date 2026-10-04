// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890BF40 .. +0x2B bytes.
// Source symbol alias: FUN_5890bf40.
extern "C" __declspec(naked) void FUN_5890bf40() {
    __asm {
        // 0x5890BF40: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890BF44: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5890BF48: push esi
        __asm _emit 0x56
        // 0x5890BF49: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890BF4B: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890BF4F: push eax
        __asm _emit 0x50
        // 0x5890BF50: push ecx
        __asm _emit 0x51
        // 0x5890BF51: push edx
        __asm _emit 0x52
        // 0x5890BF52: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890BF54: mov dword ptr [esi], 0x589a2bb0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xB0
        __asm _emit 0x2B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890BF5A: call 0x5890e400
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BF5F: mov dword ptr [esi], 0x589a2bd8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD8
        __asm _emit 0x2B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890BF65: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890BF67: pop esi
        __asm _emit 0x5E
        // 0x5890BF68: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
