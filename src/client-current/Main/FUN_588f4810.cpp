// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 94 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f4810.

// Ghidra body range 0x588F4810..0x588F486E; 94 mapped bytes.
extern "C" __declspec(naked) void FUN_588f4810_segment_00() {
    __asm {
        // 0x588F4810: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F4814: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F4818: push esi
        __asm _emit 0x56
        // 0x588F4819: push eax
        __asm _emit 0x50
        // 0x588F481A: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F481E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F4820: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F4824: push ecx
        __asm _emit 0x51
        // 0x588F4825: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F4829: push edx
        __asm _emit 0x52
        // 0x588F482A: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F482E: push eax
        __asm _emit 0x50
        // 0x588F482F: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F4833: push ecx
        __asm _emit 0x51
        // 0x588F4834: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F4838: push edx
        __asm _emit 0x52
        // 0x588F4839: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F483D: push eax
        __asm _emit 0x50
        // 0x588F483E: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F4842: push ecx
        __asm _emit 0x51
        // 0x588F4843: push edx
        __asm _emit 0x52
        // 0x588F4844: push eax
        __asm _emit 0x50
        // 0x588F4845: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F4847: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xEA
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F484C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F484E: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588F4851: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588F4854: mov dword ptr [esi], 0x589a19a8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA8
        __asm _emit 0x19
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F485A: mov dword ptr [esi + 0x70], 0x4b
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0x4B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4861: mov dword ptr [esi + 0x78], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4868: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588F486A: pop esi
        __asm _emit 0x5E
        // 0x588F486B: ret 0x28
        __asm _emit 0xC2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
