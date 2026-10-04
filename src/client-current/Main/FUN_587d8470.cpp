// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D8470 .. +0x97 bytes.
// Source symbol alias: FUN_587d8470.
extern "C" __declspec(naked) void FUN_587d8470() {
    __asm {
        // 0x587D8470: push esi
        __asm _emit 0x56
        // 0x587D8471: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D8473: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8479: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D847B: je 0x587d84b7
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x587D847D: cmp dword ptr [eax + 0xccc], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8484: je 0x587d84b7
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x587D8486: cmp dword ptr [eax + 0xcc8], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D848D: je 0x587d84b7
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587D848F: mov eax, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x4C
        // 0x587D8492: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587D8497: mov ecx, dword ptr [esi + 0x5d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D849D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587D849F: je 0x587d84bf
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587D84A1: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587D84A4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D84A6: mov eax, dword ptr [esi + 0x5f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D84AC: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D84B1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D84B5: jmp 0x587d84cf
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x587D84B7: mov ecx, dword ptr [esi + 0x5d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D84BD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587D84BF: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587D84C2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D84C4: mov eax, dword ptr [esi + 0x5f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D84CA: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587D84CF: mov ecx, dword ptr [esi + 0x5d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D84D5: call 0x5874fcc0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x77
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587D84DA: mov ecx, dword ptr [esi + 0x59c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D84E0: call 0x5874fcc0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x77
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587D84E5: mov ecx, dword ptr [esi + 0x5a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D84EB: call 0x5874fcc0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x77
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587D84F0: mov ecx, dword ptr [esi + 0x5a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D84F6: call 0x5874fcc0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x77
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587D84FB: mov ecx, dword ptr [esi + 0x5a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8501: pop esi
        __asm _emit 0x5E
        // 0x587D8502: jmp 0x5874fcc0
        __asm _emit 0xE9
        __asm _emit 0xB9
        __asm _emit 0x77
        __asm _emit 0xF7
        __asm _emit 0xFF
    }
}
