// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874DD90 .. +0x39 bytes.
// Source symbol alias: FUN_5874dd90.
extern "C" __declspec(naked) void FUN_5874dd90() {
    __asm {
        // 0x5874DD90: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874DD94: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874DD98: push esi
        __asm _emit 0x56
        // 0x5874DD99: push eax
        __asm _emit 0x50
        // 0x5874DD9A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874DD9E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874DDA0: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874DDA4: push ecx
        __asm _emit 0x51
        // 0x5874DDA5: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874DDA9: push edx
        __asm _emit 0x52
        // 0x5874DDAA: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874DDAE: push eax
        __asm _emit 0x50
        // 0x5874DDAF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874DDB3: push ecx
        __asm _emit 0x51
        // 0x5874DDB4: push edx
        __asm _emit 0x52
        // 0x5874DDB5: push eax
        __asm _emit 0x50
        // 0x5874DDB6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874DDB8: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874DDBD: mov dword ptr [esi], 0x5898d2fc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xFC
        __asm _emit 0xD2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874DDC3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874DDC5: pop esi
        __asm _emit 0x5E
        // 0x5874DDC6: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
