// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 241 bytes in 1 exact ranges.
// Source symbol alias: FUN_588da350.

// Ghidra body range 0x588DA350..0x588DA441; 241 mapped bytes.
extern "C" __declspec(naked) void FUN_588da350_segment_00() {
    __asm {
        // 0x588DA350: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588DA353: push ebx
        __asm _emit 0x53
        // 0x588DA354: push ebp
        __asm _emit 0x55
        // 0x588DA355: push esi
        __asm _emit 0x56
        // 0x588DA356: push edi
        __asm _emit 0x57
        // 0x588DA357: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DA35B: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA363: mov ebx, 0xb40
        __asm _emit 0xBB
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA368: lea edi, [ecx + 0xe0c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA36E: lea ebp, [ecx + 0xf10]
        __asm _emit 0x8D
        __asm _emit 0xA9
        __asm _emit 0x10
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA374: mov dword ptr [esp + 0x14], 0x20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA37C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588DA380: cmp dword ptr [edi - 0xc90], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x70
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588DA387: je 0x588da41d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA38D: mov eax, dword ptr [ebx + ecx + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA394: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588DA396: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588DA398: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA39A: je 0x588da3e7
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x588DA39C: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588DA39F: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588DA3A3: jne 0x588da3e7
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x588DA3A5: movzx eax, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x07
        // 0x588DA3A8: movzx ecx, word ptr [edi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4F
        __asm _emit 0x02
        // 0x588DA3AC: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA3B1: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA3B7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA3B9: je 0x588da3ce
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588DA3BB: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xFC
        // 0x588DA3BE: movzx edx, word ptr [edx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA3C5: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA3CB: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x588DA3CE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DA3D0: je 0x588da407
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588DA3D2: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588DA3D5: movzx esi, word ptr [eax + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB0
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA3DC: and esi, 0xff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA3E2: imul esi, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF1
        // 0x588DA3E5: jmp 0x588da407
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x588DA3E7: mov eax, dword ptr [ebx + ecx + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA3EE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA3F0: je 0x588da407
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588DA3F2: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588DA3F5: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588DA3F9: jne 0x588da407
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588DA3FB: movzx eax, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x07
        // 0x588DA3FE: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA403: je 0x588da407
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x588DA405: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588DA407: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DA40B: push esi
        __asm _emit 0x56
        // 0x588DA40C: push edx
        __asm _emit 0x52
        // 0x588DA40D: push ecx
        __asm _emit 0x51
        // 0x588DA40E: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DA414: call 0x58853f90
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x9B
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588DA419: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DA41D: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA422: add dword ptr [esp + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DA426: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588DA429: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588DA42C: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x588DA42F: sub dword ptr [esp + 0x14], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DA433: jne 0x588da380
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DA439: pop edi
        __asm _emit 0x5F
        // 0x588DA43A: pop esi
        __asm _emit 0x5E
        // 0x588DA43B: pop ebp
        __asm _emit 0x5D
        // 0x588DA43C: pop ebx
        __asm _emit 0x5B
        // 0x588DA43D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588DA440: ret
        __asm _emit 0xC3
    }
}
