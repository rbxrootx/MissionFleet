// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 339 bytes in 1 exact ranges.
// Source symbol alias: FUN_58839730.

// Ghidra body range 0x58839730..0x58839883; 339 mapped bytes.
extern "C" __declspec(naked) void FUN_58839730_segment_00() {
    __asm {
        // 0x58839730: push ecx
        __asm _emit 0x51
        // 0x58839731: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58839738: push ebx
        __asm _emit 0x53
        // 0x58839739: push ebp
        __asm _emit 0x55
        // 0x5883973A: push esi
        __asm _emit 0x56
        // 0x5883973B: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5883973D: mov ecx, dword ptr [ebp + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839743: push edi
        __asm _emit 0x57
        // 0x58839744: jne 0x588397c7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883974A: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xEA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883974F: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58839751: lea esi, [ebp + 0x1ec]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839757: mov dword ptr [esp + 0x10], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883975F: nop
        __asm _emit 0x90
        // 0x58839760: mov ecx, dword ptr [ebp + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839766: push ebx
        __asm _emit 0x53
        // 0x58839767: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883976C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5883976E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58839770: je 0x588397a9
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x58839772: mov ecx, dword ptr [ebp + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839778: push ebx
        __asm _emit 0x53
        // 0x58839779: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883977E: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58839781: je 0x588397a9
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58839783: mov eax, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x7C
        // 0x58839786: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xFC
        // 0x58839789: cmp eax, dword ptr [0x58a0b4a4]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883978F: jne 0x588397ac
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58839791: cmp word ptr [edi + 0x80], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58839799: jne 0x588397a2
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5883979B: mov eax, 4
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588397A0: jmp 0x588397ae
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588397A2: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588397A7: jmp 0x588397ae
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588397A9: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xFC
        // 0x588397AC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588397AE: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588397B1: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588397B3: inc ebx
        __asm _emit 0x43
        // 0x588397B4: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x588397B7: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x588397BC: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588397BF: jne 0x58839760
        __asm _emit 0x75
        __asm _emit 0x9F
        // 0x588397C1: pop edi
        __asm _emit 0x5F
        // 0x588397C2: pop esi
        __asm _emit 0x5E
        // 0x588397C3: pop ebp
        __asm _emit 0x5D
        // 0x588397C4: pop ebx
        __asm _emit 0x5B
        // 0x588397C5: pop ecx
        __asm _emit 0x59
        // 0x588397C6: ret
        __asm _emit 0xC3
        // 0x588397C7: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588397CC: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588397CE: lea edi, [ebp + 0x1ec]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588397D4: mov dword ptr [esp + 0x10], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588397DC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588397E0: mov ecx, dword ptr [ebp + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588397E6: push ebx
        __asm _emit 0x53
        // 0x588397E7: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588397EC: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588397EE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588397F0: je 0x58839861
        __asm _emit 0x74
        __asm _emit 0x6F
        // 0x588397F2: mov ecx, dword ptr [ebp + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588397F8: push ebx
        __asm _emit 0x53
        // 0x588397F9: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588397FE: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58839801: je 0x58839861
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x58839803: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839805: cmp dword ptr [esi + 0x7c], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58839808: jne 0x5883981e
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5883980A: cmp word ptr [esi + 0x80], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x58839812: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x58839815: jne 0x58839866
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x58839817: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883981C: jmp 0x58839866
        __asm _emit 0xEB
        __asm _emit 0x48
        // 0x5883981E: cmp word ptr [esi + 0x80], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58839826: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883982C: mov edx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0xFC
        // 0x5883982F: jne 0x58839849
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58839831: lea ecx, [eax + eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58839835: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x58839838: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883983E: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58839840: lea ecx, [eax + eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58839844: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x58839847: jmp 0x5883986e
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x58839849: lea ecx, [eax + eax + 5]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x5883984D: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x58839850: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839856: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58839858: lea ecx, [eax + eax + 5]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x5883985C: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x5883985F: jmp 0x5883986e
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58839861: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x58839864: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839866: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58839869: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5883986B: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5883986E: inc ebx
        __asm _emit 0x43
        // 0x5883986F: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x58839872: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x58839877: jne 0x588397e0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883987D: pop edi
        __asm _emit 0x5F
        // 0x5883987E: pop esi
        __asm _emit 0x5E
        // 0x5883987F: pop ebp
        __asm _emit 0x5D
        // 0x58839880: pop ebx
        __asm _emit 0x5B
        // 0x58839881: pop ecx
        __asm _emit 0x59
        // 0x58839882: ret
        __asm _emit 0xC3
    }
}
