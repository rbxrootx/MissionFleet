// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D7DC0 .. +0xEA bytes.
// Source symbol alias: FUN_587d7dc0.
extern "C" __declspec(naked) void FUN_587d7dc0() {
    __asm {
        // 0x587D7DC0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587D7DC4: push ebx
        __asm _emit 0x53
        // 0x587D7DC5: push esi
        __asm _emit 0x56
        // 0x587D7DC6: push edi
        __asm _emit 0x57
        // 0x587D7DC7: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587D7DC9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D7DCB: jne 0x587d7dd2
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587D7DCD: lea esi, [eax + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x0E
        // 0x587D7DD0: jmp 0x587d7deb
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x587D7DD2: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587D7DD5: jne 0x587d7ddc
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587D7DD7: lea esi, [eax + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587D7DDA: jmp 0x587d7deb
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x587D7DDC: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x587D7DDF: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587D7DE1: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587D7DE3: and eax, 0xfffffffd
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0xFD
        // 0x587D7DE6: add eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x11
        // 0x587D7DE9: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587D7DEB: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D7DF1: cmp dword ptr [ecx + 0x160], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7DF7: jle 0x587d7e13
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x587D7DF9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587D7DFB: jl 0x587d7e13
        __asm _emit 0x7C
        __asm _emit 0x16
        // 0x587D7DFD: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7E04: je 0x587d7e13
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587D7E06: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587D7E08: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587D7E0B: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7E11: jmp 0x587d7e15
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D7E13: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D7E15: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D7E19: mov ecx, dword ptr [ebx + edi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBB
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7E20: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7E22: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7E24: push eax
        __asm _emit 0x50
        // 0x587D7E25: call 0x587941e0
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xC3
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D7E2A: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D7E30: lea eax, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x587D7E33: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7E39: jle 0x587d7e53
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587D7E3B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D7E3D: jl 0x587d7e53
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x587D7E3F: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7E46: je 0x587d7e53
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D7E48: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587D7E4B: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7E51: jmp 0x587d7e55
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D7E53: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D7E55: mov ecx, dword ptr [ebx + edi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBB
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7E5C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D7E5E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7E60: push eax
        __asm _emit 0x50
        // 0x587D7E61: call 0x587940d0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xC2
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D7E66: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D7E6C: lea eax, [esi + 2]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x587D7E6F: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7E75: jle 0x587d7e8f
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587D7E77: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D7E79: jl 0x587d7e8f
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x587D7E7B: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7E82: je 0x587d7e8f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D7E84: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587D7E87: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7E8D: jmp 0x587d7e91
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D7E8F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D7E91: mov ecx, dword ptr [ebx + edi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBB
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D7E98: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7E9A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7E9C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D7E9E: push eax
        __asm _emit 0x50
        // 0x587D7E9F: call 0x58794110
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xC2
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D7EA4: pop edi
        __asm _emit 0x5F
        // 0x587D7EA5: pop esi
        __asm _emit 0x5E
        // 0x587D7EA6: pop ebx
        __asm _emit 0x5B
        // 0x587D7EA7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
