// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 180 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b2460.

// Ghidra body range 0x587B2460..0x587B2514; 180 mapped bytes.
extern "C" __declspec(naked) void FUN_587b2460_segment_00() {
    __asm {
        // 0x587B2460: push esi
        __asm _emit 0x56
        // 0x587B2461: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B2463: xor dword ptr [esi + 0x31c], 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xB6
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B246D: xor dword ptr [esi + 0x3d0], 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xB6
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B2477: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B247D: lea eax, [esi + 0x104]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2483: mov dword ptr [eax], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B2489: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B248F: cmp ecx, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587B2492: jne 0x587b24a5
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587B2494: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B249A: push 0xaaaaaaaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B249F: push eax
        __asm _emit 0x50
        // 0x587B24A0: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xF1
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B24A5: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B24A9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587B24AB: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B24AD: jne 0x587b24c5
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587B24AF: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B24B5: sub dword ptr [esi + 0x31c], eax
        __asm _emit 0x29
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B24BB: jns 0x587b24de
        __asm _emit 0x79
        __asm _emit 0x21
        // 0x587B24BD: mov dword ptr [esi + 0x31c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B24C3: jmp 0x587b24de
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x587B24C5: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587B24C8: jne 0x587b24de
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587B24CA: mov edx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B24D0: sub dword ptr [esi + 0x3d0], edx
        __asm _emit 0x29
        __asm _emit 0x96
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B24D6: jns 0x587b24de
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x587B24D8: mov dword ptr [esi + 0x3d0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B24DE: mov eax, dword ptr [esi + 0x31c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B24E4: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B24E6: jne 0x587b24f0
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587B24E8: cmp dword ptr [esi + 0x3d0], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B24EE: je 0x587b24f5
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587B24F0: mov ecx, 0x40000000
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B24F5: xor dword ptr [esi + 0x3d0], 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xB6
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B24FF: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B2504: mov dword ptr [esi + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B250A: mov dword ptr [esi + 0x31c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2510: pop esi
        __asm _emit 0x5E
        // 0x587B2511: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
