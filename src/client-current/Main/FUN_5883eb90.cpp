// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 321 bytes in 1 exact ranges.
// Source symbol alias: FUN_5883eb90.

// Ghidra body range 0x5883EB90..0x5883ECD1; 321 mapped bytes.
extern "C" __declspec(naked) void FUN_5883eb90_segment_00() {
    __asm {
        // 0x5883EB90: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5883EB93: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5883EB97: push esi
        __asm _emit 0x56
        // 0x5883EB98: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5883EB9A: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5883EB9C: push edi
        __asm _emit 0x57
        // 0x5883EB9D: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5883EBA1: lea edi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x5883EBA4: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5883EBA6: inc eax
        __asm _emit 0x40
        // 0x5883EBA7: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5883EBA9: jne 0x5883eba4
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5883EBAB: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5883EBAD: je 0x5883ecc9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EBB3: push ebx
        __asm _emit 0x53
        // 0x5883EBB4: push ebp
        __asm _emit 0x55
        // 0x5883EBB5: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EBBA: sub ebp, ecx
        __asm _emit 0x2B
        __asm _emit 0xE9
        // 0x5883EBBC: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883EBC0: cmp byte ptr [esi + ecx], 0x26
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x0E
        __asm _emit 0x26
        // 0x5883EBC4: lea eax, [esi + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0E
        // 0x5883EBC7: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5883EBCB: jne 0x5883ecac
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EBD1: mov dl, byte ptr [esi + ecx + 1]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x0E
        __asm _emit 0x01
        // 0x5883EBD5: cmp dl, 0x6c
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x6C
        // 0x5883EBD8: jne 0x5883ebf2
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5883EBDA: cmp byte ptr [esi + ecx + 2], 0x74
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x74
        // 0x5883EBDF: jne 0x5883ebf2
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5883EBE1: cmp byte ptr [esi + ecx + 3], 0x3b
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x03
        __asm _emit 0x3B
        // 0x5883EBE6: jne 0x5883ebf2
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5883EBE8: mov byte ptr [eax], 0x3c
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x3C
        // 0x5883EBEB: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EBF0: jmp 0x5883ec6a
        __asm _emit 0xEB
        __asm _emit 0x78
        // 0x5883EBF2: cmp dl, 0x61
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x61
        // 0x5883EBF5: jne 0x5883ec1d
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x5883EBF7: cmp byte ptr [esi + ecx + 2], 0x70
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x70
        // 0x5883EBFC: jne 0x5883ec1d
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x5883EBFE: cmp byte ptr [esi + ecx + 3], 0x6f
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x03
        __asm _emit 0x6F
        // 0x5883EC03: jne 0x5883ec1d
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5883EC05: cmp byte ptr [esi + ecx + 4], 0x73
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x04
        __asm _emit 0x73
        // 0x5883EC0A: jne 0x5883ec1d
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5883EC0C: cmp byte ptr [esi + ecx + 5], 0x3b
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x05
        __asm _emit 0x3B
        // 0x5883EC11: jne 0x5883ec1d
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5883EC13: mov byte ptr [eax], 0x2c
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x5883EC16: mov edi, 5
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EC1B: jmp 0x5883ec6a
        __asm _emit 0xEB
        __asm _emit 0x4D
        // 0x5883EC1D: cmp dl, 0x71
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x71
        // 0x5883EC20: jne 0x5883ec48
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x5883EC22: cmp byte ptr [esi + ecx + 2], 0x75
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x75
        // 0x5883EC27: jne 0x5883ec48
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x5883EC29: cmp byte ptr [esi + ecx + 3], 0x6f
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x03
        __asm _emit 0x6F
        // 0x5883EC2E: jne 0x5883ec48
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5883EC30: cmp byte ptr [esi + ecx + 4], 0x74
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x04
        __asm _emit 0x74
        // 0x5883EC35: jne 0x5883ec48
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5883EC37: cmp byte ptr [esi + ecx + 5], 0x3b
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x05
        __asm _emit 0x3B
        // 0x5883EC3C: jne 0x5883ec48
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5883EC3E: mov byte ptr [eax], 0x27
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x27
        // 0x5883EC41: mov edi, 5
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EC46: jmp 0x5883ec6a
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x5883EC48: cmp dl, 0x23
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x23
        // 0x5883EC4B: jne 0x5883ecac
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x5883EC4D: cmp byte ptr [esi + ecx + 2], 0x33
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x33
        // 0x5883EC52: jne 0x5883ecac
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x5883EC54: cmp byte ptr [esi + ecx + 3], 0x34
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x03
        __asm _emit 0x34
        // 0x5883EC59: jne 0x5883ecac
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x5883EC5B: cmp byte ptr [esi + ecx + 4], 0x3b
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x04
        __asm _emit 0x3B
        // 0x5883EC60: jne 0x5883ecac
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x5883EC62: mov byte ptr [eax], 0x22
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x22
        // 0x5883EC65: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EC6A: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x5883EC6C: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5883EC6E: lea ebx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x5883EC71: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5883EC73: inc eax
        __asm _emit 0x40
        // 0x5883EC74: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5883EC76: jne 0x5883ec71
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5883EC78: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x5883EC7A: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5883EC7C: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5883EC7E: jae 0x5883eca4
        __asm _emit 0x73
        __asm _emit 0x24
        // 0x5883EC80: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5883EC84: inc esi
        __asm _emit 0x46
        // 0x5883EC85: mov al, byte ptr [esi + edi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x5883EC88: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        // 0x5883EC8A: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5883EC8C: inc ebp
        __asm _emit 0x45
        // 0x5883EC8D: inc esi
        __asm _emit 0x46
        // 0x5883EC8E: lea ebx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x5883EC91: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5883EC93: inc eax
        __asm _emit 0x40
        // 0x5883EC94: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5883EC96: jne 0x5883ec91
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5883EC98: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x5883EC9A: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5883EC9C: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5883EC9E: jb 0x5883ec85
        __asm _emit 0x72
        __asm _emit 0xE5
        // 0x5883ECA0: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883ECA4: mov byte ptr [ecx + ebp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x5883ECA8: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883ECAC: inc esi
        __asm _emit 0x46
        // 0x5883ECAD: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5883ECAF: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883ECB3: lea edi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x5883ECB6: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5883ECB8: inc eax
        __asm _emit 0x40
        // 0x5883ECB9: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5883ECBB: jne 0x5883ecb6
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5883ECBD: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5883ECBF: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5883ECC1: jb 0x5883ebc0
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xF9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883ECC7: pop ebp
        __asm _emit 0x5D
        // 0x5883ECC8: pop ebx
        __asm _emit 0x5B
        // 0x5883ECC9: pop edi
        __asm _emit 0x5F
        // 0x5883ECCA: pop esi
        __asm _emit 0x5E
        // 0x5883ECCB: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5883ECCE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
