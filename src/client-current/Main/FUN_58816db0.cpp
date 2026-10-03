// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58816DB0 .. +0x125 bytes.
extern "C" __declspec(naked) void FUN_58816db0() {
    __asm {
        // 0x58816DB0: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58816DB5: push ebx
        __asm _emit 0x53
        // 0x58816DB6: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58816DB8: push esi
        __asm _emit 0x56
        // 0x58816DB9: mov esi, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816DBF: push edi
        __asm _emit 0x57
        // 0x58816DC0: mov edi, dword ptr [ebx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816DC6: mov ecx, 0x3c3
        __asm _emit 0xB9
        __asm _emit 0xC3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816DCB: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58816DCD: mov eax, dword ptr [ebx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816DD3: mov dword ptr [ebx + 0x194], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58816DDD: mov ecx, dword ptr [eax + 0xcd0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816DE3: mov dword ptr [ebx + 0x17c], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816DE9: movzx edx, word ptr [eax + 0x88]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816DF0: mov word ptr [ebx + 0x18c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816DF7: mov ecx, dword ptr [eax + 0xcd4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816DFD: mov dword ptr [ebx + 0x180], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E03: movzx edx, word ptr [eax + 0x8a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E0A: mov word ptr [ebx + 0x18e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x8E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E11: mov ecx, dword ptr [eax + 0xcdc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E17: mov dword ptr [ebx + 0x184], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E1D: movzx edx, word ptr [eax + 0x8e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E24: mov word ptr [ebx + 0x190], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E2B: mov ecx, dword ptr [eax + 0xcd8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E31: mov dword ptr [ebx + 0x188], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E37: movzx edx, word ptr [eax + 0x8c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E3E: mov word ptr [ebx + 0x192], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E45: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E4B: movzx ecx, word ptr [eax + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E52: push ecx
        __asm _emit 0x51
        // 0x58816E53: mov ecx, dword ptr [ebx + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E59: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58816E5E: mov edx, dword ptr [ebx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E64: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E6A: movzx ecx, word ptr [eax + 0x11e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E71: push ecx
        __asm _emit 0x51
        // 0x58816E72: mov ecx, dword ptr [ebx + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E78: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x04
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58816E7D: mov edx, dword ptr [ebx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E83: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E89: movzx ecx, word ptr [eax + 0x124]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E90: push ecx
        __asm _emit 0x51
        // 0x58816E91: mov ecx, dword ptr [ebx + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816E97: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58816E9C: mov edx, dword ptr [ebx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816EA2: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816EA8: movzx ecx, word ptr [eax + 0x122]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816EAF: push ecx
        __asm _emit 0x51
        // 0x58816EB0: mov ecx, dword ptr [ebx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816EB6: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x04
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58816EBB: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58816EBD: call 0x58815e10
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58816EC2: mov ebx, dword ptr [ebx + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816EC8: pop edi
        __asm _emit 0x5F
        // 0x58816EC9: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58816ECE: and word ptr [ebx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x53
        __asm _emit 0x24
        // 0x58816ED2: pop esi
        __asm _emit 0x5E
        // 0x58816ED3: pop ebx
        __asm _emit 0x5B
        // 0x58816ED4: ret
        __asm _emit 0xC3
    }
}
