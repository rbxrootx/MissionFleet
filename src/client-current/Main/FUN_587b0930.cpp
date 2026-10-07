// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 601 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b0930.

// Ghidra body range 0x587B0930..0x587B0B89; 601 mapped bytes.
extern "C" __declspec(naked) void FUN_587b0930_segment_00() {
    __asm {
        // 0x587B0930: push ecx
        __asm _emit 0x51
        // 0x587B0931: push ebx
        __asm _emit 0x53
        // 0x587B0932: push ebp
        __asm _emit 0x55
        // 0x587B0933: push esi
        __asm _emit 0x56
        // 0x587B0934: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B0938: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B093D: push edi
        __asm _emit 0x57
        // 0x587B093E: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B0942: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587B0944: jne 0x587b0954
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587B0946: mov edi, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B094C: mov ebx, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0952: jmp 0x587b096f
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x587B0954: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587B0957: jne 0x587b0967
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587B0959: mov edi, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B095F: mov ebx, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0965: jmp 0x587b096f
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587B0967: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B096B: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B096F: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0975: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587B0978: ja 0x587b0b7f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B097E: jmp dword ptr [eax*4 + 0x587b0b8c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x0B
        __asm _emit 0x7B
        __asm _emit 0x58
        // 0x587B0985: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B0987: mov dword ptr [ecx + 0xf4], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B098D: cmp dword ptr [ecx + 0xc8], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0993: je 0x587b0a04
        __asm _emit 0x74
        __asm _emit 0x6F
        // 0x587B0995: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B099B: cmp dword ptr [ecx + 0xc4], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B09A1: jle 0x587b09c8
        __asm _emit 0x7E
        __asm _emit 0x25
        // 0x587B09A3: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B09A5: jge 0x587b0b7f
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B09AB: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587B09AE: jne 0x587b09ed
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x587B09B0: mov dword ptr [ecx + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B09B6: pop edi
        __asm _emit 0x5F
        // 0x587B09B7: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B09B9: pop esi
        __asm _emit 0x5E
        // 0x587B09BA: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B09BC: pop ebp
        __asm _emit 0x5D
        // 0x587B09BD: mov dword ptr [ecx + 0x108], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B09C3: pop ebx
        __asm _emit 0x5B
        // 0x587B09C4: pop ecx
        __asm _emit 0x59
        // 0x587B09C5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B09C8: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587B09CA: jle 0x587b0b7f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B09D0: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587B09D3: jne 0x587b09ed
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587B09D5: pop edi
        __asm _emit 0x5F
        // 0x587B09D6: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B09D8: pop esi
        __asm _emit 0x5E
        // 0x587B09D9: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B09DB: pop ebp
        __asm _emit 0x5D
        // 0x587B09DC: mov dword ptr [ecx + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B09E2: mov dword ptr [ecx + 0x108], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B09E8: pop ebx
        __asm _emit 0x5B
        // 0x587B09E9: pop ecx
        __asm _emit 0x59
        // 0x587B09EA: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B09ED: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587B09F0: jne 0x587b09f8
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587B09F2: mov dword ptr [ecx + 0xf4], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B09F8: pop edi
        __asm _emit 0x5F
        // 0x587B09F9: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B09FB: pop esi
        __asm _emit 0x5E
        // 0x587B09FC: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B09FE: pop ebp
        __asm _emit 0x5D
        // 0x587B09FF: pop ebx
        __asm _emit 0x5B
        // 0x587B0A00: pop ecx
        __asm _emit 0x59
        // 0x587B0A01: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B0A04: mov eax, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A0A: add eax, 0x708
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A0F: cdq
        __asm _emit 0x99
        // 0x587B0A10: mov ebp, 0xe10
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A15: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587B0A17: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A1D: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587B0A1F: jle 0x587b0a4a
        __asm _emit 0x7E
        __asm _emit 0x29
        // 0x587B0A21: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B0A23: jle 0x587b0b7b
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A29: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587B0A2C: jne 0x587b0a73
        __asm _emit 0x75
        __asm _emit 0x45
        // 0x587B0A2E: mov dword ptr [ecx + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A34: pop edi
        __asm _emit 0x5F
        // 0x587B0A35: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B0A37: pop esi
        __asm _emit 0x5E
        // 0x587B0A38: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B0A3A: pop ebp
        __asm _emit 0x5D
        // 0x587B0A3B: mov dword ptr [ecx + 0x108], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A45: pop ebx
        __asm _emit 0x5B
        // 0x587B0A46: pop ecx
        __asm _emit 0x59
        // 0x587B0A47: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B0A4A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587B0A4C: jge 0x587b0b7b
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A52: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587B0A55: jne 0x587b0a73
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587B0A57: pop edi
        __asm _emit 0x5F
        // 0x587B0A58: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B0A5A: pop esi
        __asm _emit 0x5E
        // 0x587B0A5B: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B0A5D: pop ebp
        __asm _emit 0x5D
        // 0x587B0A5E: mov dword ptr [ecx + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A64: mov dword ptr [ecx + 0x108], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A6E: pop ebx
        __asm _emit 0x5B
        // 0x587B0A6F: pop ecx
        __asm _emit 0x59
        // 0x587B0A70: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B0A73: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587B0A76: jne 0x587b0a82
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587B0A78: mov dword ptr [ecx + 0xf4], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A82: pop edi
        __asm _emit 0x5F
        // 0x587B0A83: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B0A85: pop esi
        __asm _emit 0x5E
        // 0x587B0A86: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B0A88: pop ebp
        __asm _emit 0x5D
        // 0x587B0A89: pop ebx
        __asm _emit 0x5B
        // 0x587B0A8A: pop ecx
        __asm _emit 0x59
        // 0x587B0A8B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B0A8E: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A94: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B0A96: mov dword ptr [ecx + 0xf4], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0A9C: jge 0x587b0abd
        __asm _emit 0x7D
        __asm _emit 0x1F
        // 0x587B0A9E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B0AA0: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587B0AA3: jne 0x587b0ae4
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x587B0AA5: mov dword ptr [ecx + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0AAB: pop edi
        __asm _emit 0x5F
        // 0x587B0AAC: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B0AAE: pop esi
        __asm _emit 0x5E
        // 0x587B0AAF: mov dword ptr [ecx + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0AB5: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B0AB7: pop ebp
        __asm _emit 0x5D
        // 0x587B0AB8: pop ebx
        __asm _emit 0x5B
        // 0x587B0AB9: pop ecx
        __asm _emit 0x59
        // 0x587B0ABA: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B0ABD: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587B0ABF: jle 0x587b0b7f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0AC5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B0AC7: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587B0ACA: jne 0x587b0ae4
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587B0ACC: pop edi
        __asm _emit 0x5F
        // 0x587B0ACD: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B0ACF: pop esi
        __asm _emit 0x5E
        // 0x587B0AD0: mov dword ptr [ecx + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0AD6: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B0AD8: pop ebp
        __asm _emit 0x5D
        // 0x587B0AD9: mov dword ptr [ecx + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0ADF: pop ebx
        __asm _emit 0x5B
        // 0x587B0AE0: pop ecx
        __asm _emit 0x59
        // 0x587B0AE1: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B0AE4: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587B0AE6: jne 0x587b0aee
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587B0AE8: mov dword ptr [ecx + 0xf4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0AEE: pop edi
        __asm _emit 0x5F
        // 0x587B0AEF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B0AF1: pop esi
        __asm _emit 0x5E
        // 0x587B0AF2: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B0AF4: pop ebp
        __asm _emit 0x5D
        // 0x587B0AF5: pop ebx
        __asm _emit 0x5B
        // 0x587B0AF6: pop ecx
        __asm _emit 0x59
        // 0x587B0AF7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B0AFA: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B00: mov edx, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B06: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B0B08: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B0B0A: mov dword ptr [ecx + 0xf4], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B10: jl 0x587b0b29
        __asm _emit 0x7C
        __asm _emit 0x17
        // 0x587B0B12: cmp eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B18: jg 0x587b0b29
        __asm _emit 0x7F
        __asm _emit 0x0F
        // 0x587B0B1A: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B1F: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x587B0B21: mov dword ptr [ecx + 0xf4], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B27: jmp 0x587b0b2e
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587B0B29: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B2E: mov esi, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B34: mov ebx, 0xe10
        __asm _emit 0xBB
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B39: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x587B0B3B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587B0B3D: jl 0x587b0b52
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x587B0B3F: mov ebx, 0xe10
        __asm _emit 0xBB
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B44: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x587B0B46: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587B0B48: jg 0x587b0b52
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587B0B4A: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x587B0B4C: mov dword ptr [ecx + 0xf4], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B52: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x587B0B54: jge 0x587b0b7f
        __asm _emit 0x7D
        __asm _emit 0x29
        // 0x587B0B56: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B0B58: jl 0x587b0b61
        __asm _emit 0x7C
        __asm _emit 0x07
        // 0x587B0B5A: cmp eax, 0xe10
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B5F: jle 0x587b0b69
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587B0B61: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B0B63: jl 0x587b0b7f
        __asm _emit 0x7C
        __asm _emit 0x1A
        // 0x587B0B65: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587B0B67: jg 0x587b0b7f
        __asm _emit 0x7F
        __asm _emit 0x16
        // 0x587B0B69: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x587B0B6B: mov dword ptr [ecx + 0xf4], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0B71: pop edi
        __asm _emit 0x5F
        // 0x587B0B72: pop esi
        __asm _emit 0x5E
        // 0x587B0B73: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B0B75: pop ebp
        __asm _emit 0x5D
        // 0x587B0B76: pop ebx
        __asm _emit 0x5B
        // 0x587B0B77: pop ecx
        __asm _emit 0x59
        // 0x587B0B78: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587B0B7B: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B0B7F: pop edi
        __asm _emit 0x5F
        // 0x587B0B80: pop esi
        __asm _emit 0x5E
        // 0x587B0B81: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587B0B83: pop ebp
        __asm _emit 0x5D
        // 0x587B0B84: pop ebx
        __asm _emit 0x5B
        // 0x587B0B85: pop ecx
        __asm _emit 0x59
        // 0x587B0B86: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
