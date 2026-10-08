// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 261 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b7700.

// Ghidra body range 0x587B7700..0x587B7805; 261 mapped bytes.
extern "C" __declspec(naked) void FUN_587b7700_segment_00() {
    __asm {
        // 0x587B7700: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B7705: push ebx
        __asm _emit 0x53
        // 0x587B7706: push ebp
        __asm _emit 0x55
        // 0x587B7707: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFE
        // 0x587B770A: push esi
        __asm _emit 0x56
        // 0x587B770B: push edi
        __asm _emit 0x57
        // 0x587B770C: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587B770F: ja 0x587b77a6
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7715: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B7719: jmp dword ptr [eax*4 + 0x587b7808]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x78
        __asm _emit 0x7B
        __asm _emit 0x58
        // 0x587B7720: mov eax, dword ptr [ecx + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7726: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587B7729: je 0x587b77a6
        __asm _emit 0x74
        __asm _emit 0x7B
        // 0x587B772B: or eax, 0x20000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B7730: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B7732: jmp 0x587b77d6
        __asm _emit 0xE9
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7737: mov eax, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B773D: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587B7740: je 0x587b77a6
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x587B7742: or eax, 0x40000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B7747: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B7749: jmp 0x587b77d6
        __asm _emit 0xE9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B774E: mov eax, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7754: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587B7757: je 0x587b77a6
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x587B7759: or eax, 0x30000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587B775E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B7760: jmp 0x587b77d6
        __asm _emit 0xEB
        __asm _emit 0x74
        // 0x587B7762: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587B7764: lea edi, [ecx + 0x130]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B776A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7770: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x587B7772: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587B7774: mov bl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x18
        // 0x587B7776: cmp bl, byte ptr [edx]
        __asm _emit 0x3A
        __asm _emit 0x1A
        // 0x587B7778: jne 0x587b7794
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587B777A: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x587B777C: je 0x587b7790
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587B777E: mov bl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x587B7781: cmp bl, byte ptr [edx + 1]
        __asm _emit 0x3A
        __asm _emit 0x5A
        __asm _emit 0x01
        // 0x587B7784: jne 0x587b7794
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587B7786: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587B7789: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x587B778C: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x587B778E: jne 0x587b7774
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x587B7790: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B7792: jmp 0x587b7799
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587B7794: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587B7796: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x587B7799: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B779B: je 0x587b77cc
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587B779D: inc esi
        __asm _emit 0x46
        // 0x587B779E: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x18
        // 0x587B77A1: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x587B77A4: jl 0x587b7770
        __asm _emit 0x7C
        __asm _emit 0xCA
        // 0x587B77A6: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587B77AB: push 0x5899a17c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0xA1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B77B0: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B77B6: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B77BC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B77BF: push eax
        __asm _emit 0x50
        // 0x587B77C0: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587B77C5: pop edi
        __asm _emit 0x5F
        // 0x587B77C6: pop esi
        __asm _emit 0x5E
        // 0x587B77C7: pop ebp
        __asm _emit 0x5D
        // 0x587B77C8: pop ebx
        __asm _emit 0x5B
        // 0x587B77C9: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B77CC: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x587B77CF: jge 0x587b77a6
        __asm _emit 0x7D
        __asm _emit 0xD5
        // 0x587B77D1: mov edi, 0x50000
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587B77D6: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587B77D8: jne 0x587b77de
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587B77DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B77DC: jmp 0x587b77ed
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x587B77DE: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B77E0: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x587B77E3: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587B77E5: inc eax
        __asm _emit 0x40
        // 0x587B77E6: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587B77E8: jne 0x587b77e3
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587B77EA: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587B77EC: inc eax
        __asm _emit 0x40
        // 0x587B77ED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B77EF: push eax
        __asm _emit 0x50
        // 0x587B77F0: push ebp
        __asm _emit 0x55
        // 0x587B77F1: push edi
        __asm _emit 0x57
        // 0x587B77F2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B77F4: push 0x8001b115
        __asm _emit 0x68
        __asm _emit 0x15
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B77F9: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x94
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B77FE: pop edi
        __asm _emit 0x5F
        // 0x587B77FF: pop esi
        __asm _emit 0x5E
        // 0x587B7800: pop ebp
        __asm _emit 0x5D
        // 0x587B7801: pop ebx
        __asm _emit 0x5B
        // 0x587B7802: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
