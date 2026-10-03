// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890BD30 .. +0x57 bytes.
// Source symbol alias: FUN_5890bd30.
extern "C" __declspec(naked) void FUN_5890bd30() {
    __asm {
        // 0x5890BD30: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890BD34: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890BD38: push esi
        __asm _emit 0x56
        // 0x5890BD39: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890BD3B: push eax
        __asm _emit 0x50
        // 0x5890BD3C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890BD40: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890BD42: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890BD46: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890BD48: inc ecx
        __asm _emit 0x41
        // 0x5890BD49: push ecx
        __asm _emit 0x51
        // 0x5890BD4A: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890BD4E: inc edx
        __asm _emit 0x42
        // 0x5890BD4F: push edx
        __asm _emit 0x52
        // 0x5890BD50: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890BD54: inc eax
        __asm _emit 0x40
        // 0x5890BD55: push eax
        __asm _emit 0x50
        // 0x5890BD56: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890BD5A: inc ecx
        __asm _emit 0x41
        // 0x5890BD5B: push ecx
        __asm _emit 0x51
        // 0x5890BD5C: push edx
        __asm _emit 0x52
        // 0x5890BD5D: push eax
        __asm _emit 0x50
        // 0x5890BD5E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890BD60: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890BD65: mov dword ptr [esi], 0x589a2b6c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x6C
        __asm _emit 0x2B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890BD6B: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890BD71: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BD77: mov dword ptr [esi + 0x90], 0x5dc
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BD81: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890BD83: pop esi
        __asm _emit 0x5E
        // 0x5890BD84: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
