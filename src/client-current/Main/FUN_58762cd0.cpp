// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58762CD0 .. +0x5D bytes.
// Source symbol alias: FUN_58762cd0.
extern "C" __declspec(naked) void FUN_58762cd0() {
    __asm {
        // 0x58762CD0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58762CD3: push ebx
        __asm _emit 0x53
        // 0x58762CD4: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58762CD8: push ebp
        __asm _emit 0x55
        // 0x58762CD9: push esi
        __asm _emit 0x56
        // 0x58762CDA: push edi
        __asm _emit 0x57
        // 0x58762CDB: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58762CDD: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58762CE0: push ebx
        __asm _emit 0x53
        // 0x58762CE1: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58762CE6: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58762CE9: mov ebp, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x58762CEC: mov edi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x58762CEF: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58762CF3: push ecx
        __asm _emit 0x51
        // 0x58762CF4: push ebx
        __asm _emit 0x53
        // 0x58762CF5: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58762CF8: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58762CFE: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58762D00: push eax
        __asm _emit 0x50
        // 0x58762D01: push ebx
        __asm _emit 0x53
        // 0x58762D02: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58762D04: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58762D06: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58762D0A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58762D0D: cdq
        __asm _emit 0x99
        // 0x58762D0E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58762D10: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58762D12: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58762D14: add ecx, 0x109
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762D1A: push ecx
        __asm _emit 0x51
        // 0x58762D1B: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58762D1E: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762D23: pop edi
        __asm _emit 0x5F
        // 0x58762D24: pop esi
        __asm _emit 0x5E
        // 0x58762D25: pop ebp
        __asm _emit 0x5D
        // 0x58762D26: pop ebx
        __asm _emit 0x5B
        // 0x58762D27: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58762D2A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
