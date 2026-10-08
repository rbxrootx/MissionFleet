// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 119 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9380.

// Ghidra body range 0x587B9380..0x587B93F7; 119 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9380_segment_00() {
    __asm {
        // 0x587B9380: push ecx
        __asm _emit 0x51
        // 0x587B9381: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9385: push ebx
        __asm _emit 0x53
        // 0x587B9386: push ebp
        __asm _emit 0x55
        // 0x587B9387: push esi
        __asm _emit 0x56
        // 0x587B9388: push edi
        __asm _emit 0x57
        // 0x587B9389: push eax
        __asm _emit 0x50
        // 0x587B938A: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B938E: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B9394: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587B9396: add ebx, 0x83a
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x3A
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B939C: push ebx
        __asm _emit 0x53
        // 0x587B939D: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x81
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B93A2: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B93A6: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587B93A8: mov ecx, 0x20e
        __asm _emit 0xB9
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B93AD: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x587B93AF: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587B93B1: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B93B5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B93B8: push ecx
        __asm _emit 0x51
        // 0x587B93B9: lea edx, [ebp + 0x839]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x39
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B93BF: push edx
        __asm _emit 0x52
        // 0x587B93C0: movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xA4
        // 0x587B93C1: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B93C7: mov eax, dword ptr [0x58a0b4a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B93CC: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B93D2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B93D4: push ebx
        __asm _emit 0x53
        // 0x587B93D5: push ebp
        __asm _emit 0x55
        // 0x587B93D6: push eax
        __asm _emit 0x50
        // 0x587B93D7: push ecx
        __asm _emit 0x51
        // 0x587B93D8: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B93DC: push 0x80010f11
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B93E1: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x78
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B93E6: push ebp
        __asm _emit 0x55
        // 0x587B93E7: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x3A
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B93EC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B93EF: pop edi
        __asm _emit 0x5F
        // 0x587B93F0: pop esi
        __asm _emit 0x5E
        // 0x587B93F1: pop ebp
        __asm _emit 0x5D
        // 0x587B93F2: pop ebx
        __asm _emit 0x5B
        // 0x587B93F3: pop ecx
        __asm _emit 0x59
        // 0x587B93F4: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
