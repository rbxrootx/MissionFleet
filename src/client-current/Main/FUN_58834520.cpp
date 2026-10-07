// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58834520 .. +0xF6 bytes.
// Source symbol alias: FUN_58834520.
extern "C" __declspec(naked) void FUN_58834520() {
    __asm {
        // 0x58834520: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x06
        // 0x58834528: push esi
        __asm _emit 0x56
        // 0x58834529: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883452B: jne 0x58834614
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834531: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58834536: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883453C: push edi
        __asm _emit 0x57
        // 0x5883453D: push eax
        __asm _emit 0x50
        // 0x5883453E: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834543: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58834549: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5883454B: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5883454E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58834550: push edi
        __asm _emit 0x57
        // 0x58834551: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58834553: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834559: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883455F: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58834561: je 0x58834569
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58834563: cmp dword ptr [ecx + 8], -1
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x58834567: jne 0x58834597
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x58834569: mov ecx, dword ptr [esi + 0x294]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883456F: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x58834572: mov edx, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834578: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5883457B: mov eax, dword ptr [esi + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834581: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x58834584: mov ecx, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883458A: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883458F: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xD7
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58834594: pop edi
        __asm _emit 0x5F
        // 0x58834595: pop esi
        __asm _emit 0x5E
        // 0x58834596: ret
        __asm _emit 0xC3
        // 0x58834597: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58834599: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883459B: je 0x588345c4
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5883459D: cmp dword ptr [eax + 8], edi
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588345A0: jne 0x588345c4
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x588345A2: mov ecx, dword ptr [esi + 0x294]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588345A8: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588345AD: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588345B0: mov edx, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588345B6: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588345B9: mov eax, dword ptr [esi + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588345BF: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x588345C2: jmp 0x588345e3
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588345C4: mov ecx, dword ptr [esi + 0x294]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588345CA: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588345CD: mov edx, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588345D3: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588345D6: mov eax, dword ptr [esi + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588345DC: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588345E3: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588345E9: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588345EF: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588345F1: je 0x58834605
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588345F3: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588345F6: mov ecx, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588345FC: push eax
        __asm _emit 0x50
        // 0x588345FD: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xD6
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58834602: pop edi
        __asm _emit 0x5F
        // 0x58834603: pop esi
        __asm _emit 0x5E
        // 0x58834604: ret
        __asm _emit 0xC3
        // 0x58834605: mov ecx, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883460B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883460D: push eax
        __asm _emit 0x50
        // 0x5883460E: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xD6
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58834613: pop edi
        __asm _emit 0x5F
        // 0x58834614: pop esi
        __asm _emit 0x5E
        // 0x58834615: ret
        __asm _emit 0xC3
    }
}
