// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D8E70 .. +0x78 bytes.
// Source symbol alias: FUN_587d8e70.
extern "C" __declspec(naked) void FUN_587d8e70() {
    __asm {
        // 0x587D8E70: mov dl, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587D8E74: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D8E76: push ebx
        __asm _emit 0x53
        // 0x587D8E77: cmp dl, 0xff
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587D8E7A: jne 0x587d8e81
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587D8E7C: mov bl, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x59
        __asm _emit 0x61
        // 0x587D8E7F: jmp 0x587d8e83
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D8E81: mov bl, dl
        __asm _emit 0x8A
        __asm _emit 0xDA
        // 0x587D8E83: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D8E89: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D8E8C: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D8E8E: je 0x587d8ee4
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x587D8E90: push esi
        __asm _emit 0x56
        // 0x587D8E91: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8E95: push edi
        __asm _emit 0x57
        // 0x587D8E96: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8E9A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8EA0: mov ecx, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8EA6: cmp byte ptr [ecx + 0x35c], bl
        __asm _emit 0x38
        __asm _emit 0x99
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8EAC: jne 0x587d8ed8
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x587D8EAE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587D8EB0: jne 0x587d8ebb
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587D8EB2: cmp dword ptr [edx + 0xec], 1
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587D8EB9: je 0x587d8ed8
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587D8EBB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587D8EBD: jne 0x587d8ed7
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587D8EBF: mov cx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587D8EC3: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x587D8EC7: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587D8ECB: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x587D8ECF: je 0x587d8ed8
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587D8ED1: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x587D8ED5: je 0x587d8ed8
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x587D8ED7: inc eax
        __asm _emit 0x40
        // 0x587D8ED8: mov edx, dword ptr [edx + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8EDE: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D8EE0: jne 0x587d8ea0
        __asm _emit 0x75
        __asm _emit 0xBE
        // 0x587D8EE2: pop edi
        __asm _emit 0x5F
        // 0x587D8EE3: pop esi
        __asm _emit 0x5E
        // 0x587D8EE4: pop ebx
        __asm _emit 0x5B
        // 0x587D8EE5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
