// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58831D50 .. +0xCB bytes.
// Source symbol alias: FUN_58831d50.
extern "C" __declspec(naked) void FUN_58831d50() {
    __asm {
        // 0x58831D50: sub esp, 0x804
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831D56: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58831D5B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58831D5D: mov dword ptr [esp + 0x800], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831D64: mov eax, dword ptr [esp + 0x810]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831D6B: push esi
        __asm _emit 0x56
        // 0x58831D6C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58831D6E: mov ecx, dword ptr [esp + 0x818]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831D75: cmp ecx, 0x800
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831D7B: jb 0x58831d8a
        __asm _emit 0x72
        __asm _emit 0x0D
        // 0x58831D7D: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831D82: push eax
        __asm _emit 0x50
        // 0x58831D83: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58831D87: push eax
        __asm _emit 0x50
        // 0x58831D88: jmp 0x58831d92
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58831D8A: inc ecx
        __asm _emit 0x41
        // 0x58831D8B: push ecx
        __asm _emit 0x51
        // 0x58831D8C: push eax
        __asm _emit 0x50
        // 0x58831D8D: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58831D91: push ecx
        __asm _emit 0x51
        // 0x58831D92: call dword ptr [0x5898c194]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58831D98: mov ecx, dword ptr [esp + 0x80c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831D9F: cmp dword ptr [esi + 0xc8], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831DA5: jne 0x58831e03
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x58831DA7: mov eax, dword ptr [esp + 0x810]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831DAE: cmp dword ptr [esi + 0xcc], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831DB4: jne 0x58831e03
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x58831DB6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58831DB8: jne 0x58831de0
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x58831DBA: push eax
        __asm _emit 0x50
        // 0x58831DBB: push ecx
        __asm _emit 0x51
        // 0x58831DBC: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831DC2: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x1A
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831DC7: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831DCD: push eax
        __asm _emit 0x50
        // 0x58831DCE: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xFF
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58831DD3: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831DD9: lea edx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58831DDD: push edx
        __asm _emit 0x52
        // 0x58831DDE: jmp 0x58831dfe
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x58831DE0: push eax
        __asm _emit 0x50
        // 0x58831DE1: push ecx
        __asm _emit 0x51
        // 0x58831DE2: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831DE8: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x1A
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831DED: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58831DF0: push eax
        __asm _emit 0x50
        // 0x58831DF1: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xFE
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58831DF6: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58831DF9: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58831DFD: push eax
        __asm _emit 0x50
        // 0x58831DFE: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xEC
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58831E03: mov ecx, dword ptr [esp + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831E0A: pop esi
        __asm _emit 0x5E
        // 0x58831E0B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58831E0D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xAD
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58831E12: add esp, 0x804
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831E18: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
