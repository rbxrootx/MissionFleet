// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58875190 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_58875190() {
    __asm {
        // 0x58875190: push esi
        __asm _emit 0x56
        // 0x58875191: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58875195: cmp dword ptr [esi + 0x164], 0x1a
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1A
        // 0x5887519C: jle 0x588751ad
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5887519E: mov eax, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588751A4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588751A6: je 0x588751ad
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588751A8: mov eax, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x68
        // 0x588751AB: jmp 0x588751af
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588751AD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588751AF: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x588751B2: push edi
        __asm _emit 0x57
        // 0x588751B3: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588751B6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588751B8: je 0x588751e2
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588751BA: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588751BD: mov dword ptr [edx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x588751C0: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x588751C3: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588751C6: mov dword ptr [edx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x10
        // 0x588751C9: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x588751CB: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x588751CE: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x588751D0: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588751D3: mov dword ptr [edx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x588751D6: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588751D9: mov dword ptr [edx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x588751DC: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588751DF: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588751E2: cmp dword ptr [esi + 0x164], 0x1c
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        // 0x588751E9: jle 0x588751fa
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588751EB: mov eax, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588751F1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588751F3: je 0x588751fa
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588751F5: mov eax, dword ptr [eax + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x70
        // 0x588751F8: jmp 0x588751fc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588751FA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588751FC: mov edx, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x58
        // 0x588751FF: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58875202: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58875204: je 0x5887522e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58875206: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58875209: mov dword ptr [edx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x5887520C: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x5887520F: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58875212: mov dword ptr [edx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x10
        // 0x58875215: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x58875217: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x5887521A: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x5887521C: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5887521F: mov dword ptr [edx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x58875222: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58875225: mov dword ptr [edx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x58875228: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5887522B: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5887522E: cmp dword ptr [esi + 0x164], 0x1b
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1B
        // 0x58875235: jle 0x58875246
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x58875237: mov eax, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887523D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887523F: je 0x58875246
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58875241: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58875244: jmp 0x58875248
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58875246: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58875248: mov edx, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x54
        // 0x5887524B: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5887524E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58875250: je 0x5887527b
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58875252: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58875255: mov dword ptr [edx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x58875258: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x5887525B: mov dword ptr [edx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x10
        // 0x5887525E: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58875261: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58875264: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x58875267: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x58875269: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5887526C: mov dword ptr [edx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x5887526F: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58875272: mov dword ptr [edx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x58875275: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58875278: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5887527B: cmp dword ptr [esi + 0x164], 0x1d
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1D
        // 0x58875282: pop edi
        __asm _emit 0x5F
        // 0x58875283: jle 0x58875294
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x58875285: mov eax, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887528B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887528D: je 0x58875294
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5887528F: mov eax, dword ptr [eax + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x74
        // 0x58875292: jmp 0x58875296
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58875294: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58875296: mov ecx, dword ptr [ecx + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x5C
        // 0x58875299: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5887529C: pop esi
        __asm _emit 0x5E
        // 0x5887529D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887529F: je 0x588752ca
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588752A1: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588752A4: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588752A7: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588752AA: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588752AD: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588752B0: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588752B3: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588752B6: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588752B8: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588752BB: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588752BE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588752C1: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588752C4: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588752C7: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588752CA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
