// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E67E0 .. +0x193 bytes.
// Source symbol alias: FUN_588e67e0.
extern "C" __declspec(naked) void FUN_588e67e0() {
    __asm {
        // 0x588E67E0: push esi
        __asm _emit 0x56
        // 0x588E67E1: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588E67E5: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x588E67E8: push edi
        __asm _emit 0x57
        // 0x588E67E9: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588E67EB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E67ED: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588E67EF: xor ecx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E67F5: xor edx, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588E67FB: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x588E67FE: shr edx, 0x14
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x14
        // 0x588E6801: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6807: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E680D: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6812: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588E6814: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6819: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x588E681B: jne 0x588e6824
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588E681D: pop edi
        __asm _emit 0x5F
        // 0x588E681E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E6820: pop esi
        __asm _emit 0x5E
        // 0x588E6821: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588E6824: cmp dword ptr [esp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E6829: push ebx
        __asm _emit 0x53
        // 0x588E682A: je 0x588e691f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6830: mov bl, byte ptr [esi + 3]
        __asm _emit 0x8A
        __asm _emit 0x5E
        __asm _emit 0x03
        // 0x588E6833: mov eax, dword ptr [edi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6839: cmp byte ptr [eax + 0x35c], bl
        __asm _emit 0x38
        __asm _emit 0x98
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E683F: je 0x588e68b9
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x588E6841: push esi
        __asm _emit 0x56
        // 0x588E6842: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588E6844: call 0x588e6770
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E6849: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E684B: je 0x588e68b9
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x588E684D: movzx ecx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCB
        // 0x588E6850: push ecx
        __asm _emit 0x51
        // 0x588E6851: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588E6853: call 0x588e6680
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E6858: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588E685B: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588E685E: jne 0x588e6922
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6864: cmp byte ptr [esi + 2], 3
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x02
        __asm _emit 0x03
        // 0x588E6868: je 0x588e68bc
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x588E686A: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6870: jne 0x588e6874
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588E6872: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588E6874: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x588E6877: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E6879: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588E687B: xor edx, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588E6881: xor ecx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E6887: shr edx, 0x14
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x14
        // 0x588E688A: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E688F: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x588E6892: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6898: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E689E: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E68A3: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588E68A5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E68A7: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E68AA: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x588E68AD: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588E68AF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E68B1: pop ebx
        __asm _emit 0x5B
        // 0x588E68B2: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x588E68B4: pop edi
        __asm _emit 0x5F
        // 0x588E68B5: pop esi
        __asm _emit 0x5E
        // 0x588E68B6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588E68B9: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588E68BC: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E68C2: jne 0x588e68c9
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588E68C4: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E68C9: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x588E68CC: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588E68CE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588E68D0: xor edx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E68D6: xor esi, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588E68DC: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588E68DF: shr esi, 0x14
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x14
        // 0x588E68E2: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E68E8: and esi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E68EE: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x588E68F0: imul ebx, dword ptr [0x58a242fc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x1D
        __asm _emit 0xFC
        __asm _emit 0x42
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E68F7: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588E68F9: imul eax, dword ptr [0x58a24300]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E6900: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6906: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E690C: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x588E690E: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588E6910: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588E6912: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6915: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E6917: pop ebx
        __asm _emit 0x5B
        // 0x588E6918: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x588E691A: pop edi
        __asm _emit 0x5F
        // 0x588E691B: pop esi
        __asm _emit 0x5E
        // 0x588E691C: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588E691F: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588E6922: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6928: jne 0x588e692f
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588E692A: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E692F: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x588E6932: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E6934: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588E6936: xor edx, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588E693C: xor ecx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E6942: shr edx, 0x14
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x14
        // 0x588E6945: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E694A: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x588E694D: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6953: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6958: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E695E: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588E6960: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E6962: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x588E6965: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588E6967: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588E6969: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E696B: pop ebx
        __asm _emit 0x5B
        // 0x588E696C: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x588E696E: pop edi
        __asm _emit 0x5F
        // 0x588E696F: pop esi
        __asm _emit 0x5E
        // 0x588E6970: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
