// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58823EB0 .. +0x81 bytes.
// Source symbol alias: FUN_58823eb0.
extern "C" __declspec(naked) void FUN_58823eb0() {
    __asm {
        // 0x58823EB0: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x58823EB5: push esi
        __asm _emit 0x56
        // 0x58823EB6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58823EB8: jne 0x58823f2b
        __asm _emit 0x75
        __asm _emit 0x71
        // 0x58823EBA: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58823EBE: cmp eax, dword ptr [esi + 0x80]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823EC4: jne 0x58823ed3
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58823EC6: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58823EC8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58823ECB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58823ECD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823ECF: pop esi
        __asm _emit 0x5E
        // 0x58823ED0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58823ED3: cmp eax, dword ptr [esi + 0x78]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58823ED6: jne 0x58823eed
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58823ED8: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58823EDB: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x49
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823EE0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58823EE2: call 0x58823210
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823EE7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823EE9: pop esi
        __asm _emit 0x5E
        // 0x58823EEA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58823EED: cmp eax, dword ptr [esi + 0x7c]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58823EF0: jne 0x58823efd
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58823EF2: call 0x58823110
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823EF7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823EF9: pop esi
        __asm _emit 0x5E
        // 0x58823EFA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58823EFD: cmp eax, dword ptr [esi + 0x9c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823F03: jne 0x58823f17
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58823F05: call 0x588231a0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823F0A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58823F0C: call 0x58823210
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823F11: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823F13: pop esi
        __asm _emit 0x5E
        // 0x58823F14: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58823F17: cmp eax, dword ptr [esi + 0xa0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823F1D: jne 0x58823f2b
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58823F1F: call 0x588231d0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823F24: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58823F26: call 0x58823210
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58823F2B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58823F2D: pop esi
        __asm _emit 0x5E
        // 0x58823F2E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
