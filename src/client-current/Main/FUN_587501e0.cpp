// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587501E0 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_587501e0() {
    __asm {
        // 0x587501E0: push esi
        __asm _emit 0x56
        // 0x587501E1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587501E3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587501E7: push edi
        __asm _emit 0x57
        // 0x587501E8: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x587501EA: je 0x587502f1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587501F0: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x587501F3: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587501F7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587501F9: je 0x5875021f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587501FB: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x587501FE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58750200: je 0x58750218
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58750202: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58750204: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58750206: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58750209: push edi
        __asm _emit 0x57
        // 0x5875020A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5875020C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5875020F: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58750212: je 0x5875021f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58750214: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58750216: jne 0x58750202
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58750218: pop edi
        __asm _emit 0x5F
        // 0x58750219: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875021B: pop esi
        __asm _emit 0x5E
        // 0x5875021C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5875021F: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58750222: sub eax, 0x200
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750227: je 0x5875028c
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x58750229: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875022E: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58750230: je 0x58750262
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58750232: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58750234: jne 0x587502f1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875023A: cmp dword ptr [esi + 0xa0], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750240: jne 0x587502f1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750246: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58750249: push eax
        __asm _emit 0x50
        // 0x5875024A: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750250: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58750252: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58750255: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58750257: push esi
        __asm _emit 0x56
        // 0x58750258: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5875025A: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5875025D: pop edi
        __asm _emit 0x5F
        // 0x5875025E: pop esi
        __asm _emit 0x5E
        // 0x5875025F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58750262: cmp dword ptr [esi + 0xa0], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58750268: jne 0x587502f1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875026E: cmp dword ptr [esi + 0x9c], 4
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58750275: mov dword ptr [esi + 0xa4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875027B: je 0x587502f1
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x5875027D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875027F: call 0x5874fdd0
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58750284: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58750287: pop edi
        __asm _emit 0x5F
        // 0x58750288: pop esi
        __asm _emit 0x5E
        // 0x58750289: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5875028C: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58750292: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58750295: push ecx
        __asm _emit 0x51
        // 0x58750296: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x58750299: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x12
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5875029E: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587502A3: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587502A5: jne 0x587502ce
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587502A7: cmp dword ptr [esi + 0xa4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587502AE: mov dword ptr [esi + 0xa0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587502B4: jne 0x587502f1
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x587502B6: cmp dword ptr [esi + 0x9c], 2
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587502BD: je 0x587502f1
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x587502BF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587502C1: call 0x5874fef0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587502C6: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587502C9: pop edi
        __asm _emit 0x5F
        // 0x587502CA: pop esi
        __asm _emit 0x5E
        // 0x587502CB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587502CE: mov dword ptr [esi + 0xa0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587502D8: mov dword ptr [esi + 0xa4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587502E2: cmp dword ptr [esi + 0x9c], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587502E8: je 0x587502f1
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587502EA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587502EC: call 0x5874fcd0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587502F1: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587502F4: pop edi
        __asm _emit 0x5F
        // 0x587502F5: pop esi
        __asm _emit 0x5E
        // 0x587502F6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
