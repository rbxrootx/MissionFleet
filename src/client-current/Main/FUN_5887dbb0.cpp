// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 61 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887dbb0.

// Ghidra body range 0x5887DBB0..0x5887DBED; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_5887dbb0_segment_00() {
    __asm {
        // 0x5887DBB0: push ecx
        __asm _emit 0x51
        // 0x5887DBB1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887DBB5: push esi
        __asm _emit 0x56
        // 0x5887DBB6: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887DBBA: push edi
        __asm _emit 0x57
        // 0x5887DBBB: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887DBBF: mov byte ptr [esp + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887DBC4: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5887DBC8: push eax
        __asm _emit 0x50
        // 0x5887DBC9: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5887DBCD: push edx
        __asm _emit 0x52
        // 0x5887DBCE: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x5887DBD1: push ecx
        __asm _emit 0x51
        // 0x5887DBD2: push eax
        __asm _emit 0x50
        // 0x5887DBD3: push esi
        __asm _emit 0x56
        // 0x5887DBD4: push edi
        __asm _emit 0x57
        // 0x5887DBD5: call 0x5887cb30
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887DBDA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887DBDC: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5887DBDF: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5887DBE2: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x5887DBE4: lea eax, [edi + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x4F
        // 0x5887DBE7: pop edi
        __asm _emit 0x5F
        // 0x5887DBE8: pop esi
        __asm _emit 0x5E
        // 0x5887DBE9: pop ecx
        __asm _emit 0x59
        // 0x5887DBEA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
