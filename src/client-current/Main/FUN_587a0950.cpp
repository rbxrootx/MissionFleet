// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A0950 .. +0x89 bytes.
// Source symbol alias: FUN_587a0950.
extern "C" __declspec(naked) void FUN_587a0950() {
    __asm {
        // 0x587A0950: push esi
        __asm _emit 0x56
        // 0x587A0951: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A0953: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x587A0956: jne 0x587a095d
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587A0958: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xC3
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A095D: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A0960: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0964: je 0x587a0978
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587A0966: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587A0969: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A096C: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0970: je 0x587a09d7
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x587A0972: pop esi
        __asm _emit 0x5E
        // 0x587A0973: jmp 0x5897cc72
        __asm _emit 0xE9
        __asm _emit 0xFA
        __asm _emit 0xC2
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A0978: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587A097A: cmp byte ptr [ecx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A097E: jne 0x587a09a0
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x587A0980: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587A0983: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0987: jne 0x587a099b
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587A0989: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0990: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A0992: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587A0995: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0999: je 0x587a0990
        __asm _emit 0x74
        __asm _emit 0xF5
        // 0x587A099B: mov dword ptr [esi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A099E: pop esi
        __asm _emit 0x5E
        // 0x587A099F: ret
        __asm _emit 0xC3
        // 0x587A09A0: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A09A3: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A09A7: jne 0x587a09c5
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587A09A9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A09B0: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A09B3: cmp ecx, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x08
        // 0x587A09B5: jne 0x587a09c5
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587A09B7: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A09BA: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587A09BC: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A09BF: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A09C3: je 0x587a09b0
        __asm _emit 0x74
        __asm _emit 0xEB
        // 0x587A09C5: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A09C8: cmp byte ptr [ecx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A09CC: je 0x587a09d4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A09CE: pop esi
        __asm _emit 0x5E
        // 0x587A09CF: jmp 0x5897cc72
        __asm _emit 0xE9
        __asm _emit 0x9E
        __asm _emit 0xC2
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A09D4: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A09D7: pop esi
        __asm _emit 0x5E
        // 0x587A09D8: ret
        __asm _emit 0xC3
    }
}
