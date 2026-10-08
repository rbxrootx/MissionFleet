// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 50 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff630.

// Ghidra body range 0x588FF630..0x588FF662; 50 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff630_segment_00() {
    __asm {
        // 0x588FF630: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FF634: push esi
        __asm _emit 0x56
        // 0x588FF635: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FF637: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FF63B: push eax
        __asm _emit 0x50
        // 0x588FF63C: push ecx
        __asm _emit 0x51
        // 0x588FF63D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF63F: call 0x588ff0f0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF644: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF646: je 0x588ff65e
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588FF648: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FF64C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FF650: push edx
        __asm _emit 0x52
        // 0x588FF651: push ecx
        __asm _emit 0x51
        // 0x588FF652: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF658: push eax
        __asm _emit 0x50
        // 0x588FF659: call 0x588fa930
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xB2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF65E: pop esi
        __asm _emit 0x5E
        // 0x588FF65F: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
