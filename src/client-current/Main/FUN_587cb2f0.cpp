// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 79 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cb2f0.

// Ghidra body range 0x587CB2F0..0x587CB33F; 79 mapped bytes.
extern "C" __declspec(naked) void FUN_587cb2f0_segment_00() {
    __asm {
        // 0x587CB2F0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587CB2F4: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CB2F8: push esi
        __asm _emit 0x56
        // 0x587CB2F9: mov esi, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB2FF: mov dword ptr [ecx + 0x1d4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB305: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CB309: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587CB30B: mov dword ptr [ecx + 0x1d8], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB311: mov dword ptr [ecx + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB317: jle 0x587cb327
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x587CB319: mov dword ptr [ecx + 0xcc], 0xffffff6a
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CB323: pop esi
        __asm _emit 0x5E
        // 0x587CB324: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587CB327: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CB329: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587CB32B: setge dl
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC2
        // 0x587CB32E: pop esi
        __asm _emit 0x5E
        // 0x587CB32F: dec edx
        __asm _emit 0x4A
        // 0x587CB330: and edx, 0x96
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB336: mov dword ptr [ecx + 0xcc], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB33C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
