// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901DE0 .. +0x7F bytes.
// Source symbol alias: FUN_58901de0.
extern "C" __declspec(naked) void FUN_58901de0() {
    __asm {
        // 0x58901DE0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58901DE3: push esi
        __asm _emit 0x56
        // 0x58901DE4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58901DE6: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58901DE9: push edi
        __asm _emit 0x57
        // 0x58901DEA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58901DEC: jne 0x58901df2
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58901DEE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58901DF0: jmp 0x58901dfa
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58901DF2: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58901DF5: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58901DF7: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58901DFA: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58901DFD: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58901DFF: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58901E01: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x58901E04: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58901E06: jae 0x58901e39
        __asm _emit 0x73
        __asm _emit 0x31
        // 0x58901E08: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58901E0C: mov byte ptr [esp + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58901E11: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58901E15: push eax
        __asm _emit 0x50
        // 0x58901E16: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58901E1A: push ecx
        __asm _emit 0x51
        // 0x58901E1B: lea edx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58901E1E: push edx
        __asm _emit 0x52
        // 0x58901E1F: push eax
        __asm _emit 0x50
        // 0x58901E20: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58901E22: push edi
        __asm _emit 0x57
        // 0x58901E23: call 0x58901a80
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901E28: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58901E2B: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x58901E2E: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58901E31: pop edi
        __asm _emit 0x5F
        // 0x58901E32: pop esi
        __asm _emit 0x5E
        // 0x58901E33: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58901E36: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58901E39: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58901E3B: jbe 0x58901e42
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58901E3D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xAE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901E42: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58901E46: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58901E48: push ecx
        __asm _emit 0x51
        // 0x58901E49: push edi
        __asm _emit 0x57
        // 0x58901E4A: push eax
        __asm _emit 0x50
        // 0x58901E4B: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58901E4F: push edx
        __asm _emit 0x52
        // 0x58901E50: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58901E52: call 0x58901d30
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901E57: pop edi
        __asm _emit 0x5F
        // 0x58901E58: pop esi
        __asm _emit 0x5E
        // 0x58901E59: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58901E5C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
