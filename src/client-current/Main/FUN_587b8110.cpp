// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B8110 .. +0x8E bytes.
// Source symbol alias: FUN_587b8110.
extern "C" __declspec(naked) void FUN_587b8110() {
    __asm {
        // 0x587B8110: push ebx
        __asm _emit 0x53
        // 0x587B8111: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B8115: push esi
        __asm _emit 0x56
        // 0x587B8116: push edi
        __asm _emit 0x57
        // 0x587B8117: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B811B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B811D: lea eax, [edi - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xD0
        // 0x587B8120: push eax
        __asm _emit 0x50
        // 0x587B8121: lea ecx, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x587B8124: push ecx
        __asm _emit 0x51
        // 0x587B8125: mov ecx, dword ptr [0x58a24578]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B812B: call 0x587a2d40
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xAC
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B8130: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B8132: je 0x587b813c
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587B8134: pop edi
        __asm _emit 0x5F
        // 0x587B8135: pop esi
        __asm _emit 0x5E
        // 0x587B8136: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B8138: pop ebx
        __asm _emit 0x5B
        // 0x587B8139: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B813C: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B8140: push edx
        __asm _emit 0x52
        // 0x587B8141: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B8143: call 0x587b7bd0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B8148: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B814A: je 0x587b8193
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x587B814C: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B8151: movzx ecx, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B8156: shl eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x587B8159: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x587B815B: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B8161: cmp ecx, dword ptr [0x58a245a8]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B8167: je 0x587b8175
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587B8169: cmp ecx, dword ptr [0x58a2459c]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B816F: je 0x587b8175
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587B8171: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587B8173: jmp 0x587b8181
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587B8175: mov ecx, dword ptr [esi + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B817B: or ecx, 0x10000
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B8181: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B8183: push edi
        __asm _emit 0x57
        // 0x587B8184: push ebx
        __asm _emit 0x53
        // 0x587B8185: push ecx
        __asm _emit 0x51
        // 0x587B8186: push eax
        __asm _emit 0x50
        // 0x587B8187: push 0x80020a00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587B818C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B818E: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x8A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B8193: pop edi
        __asm _emit 0x5F
        // 0x587B8194: pop esi
        __asm _emit 0x5E
        // 0x587B8195: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B819A: pop ebx
        __asm _emit 0x5B
        // 0x587B819B: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
