// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 317 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ffb50.

// Ghidra body range 0x588FFB50..0x588FFC8D; 317 mapped bytes.
extern "C" __declspec(naked) void FUN_588ffb50_segment_00() {
    __asm {
        // 0x588FFB50: push esi
        __asm _emit 0x56
        // 0x588FFB51: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FFB53: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FFB56: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FFB59: push edi
        __asm _emit 0x57
        // 0x588FFB5A: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FFB5D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FFB5F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FFB61: jbe 0x588ffc88
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFB67: push ebx
        __asm _emit 0x53
        // 0x588FFB68: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FFB6C: push ebp
        __asm _emit 0x55
        // 0x588FFB6D: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FFB71: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FFB74: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FFB77: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FFB7A: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FFB7C: jb 0x588ffb83
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FFB7E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFB83: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FFB86: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588FFB89: mov ecx, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x60
        // 0x588FFB8C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FFB8E: jne 0x588ffb97
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588FFB90: mov edx, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x64
        // 0x588FFB93: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x588FFB95: je 0x588ffbac
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588FFB97: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FFB9A: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FFB9D: inc edi
        __asm _emit 0x47
        // 0x588FFB9E: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FFBA1: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FFBA3: jb 0x588ffb71
        __asm _emit 0x72
        __asm _emit 0xCC
        // 0x588FFBA5: pop ebp
        __asm _emit 0x5D
        // 0x588FFBA6: pop ebx
        __asm _emit 0x5B
        // 0x588FFBA7: pop edi
        __asm _emit 0x5F
        // 0x588FFBA8: pop esi
        __asm _emit 0x5E
        // 0x588FFBA9: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FFBAC: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FFBAF: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FFBB2: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FFBB5: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FFBB7: jb 0x588ffbbe
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FFBB9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFBBE: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FFBC1: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFBC7: cmp eax, dword ptr [edx + edi*4]
        __asm _emit 0x3B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588FFBCA: jne 0x588ffbd6
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588FFBCC: mov dword ptr [esi + 0x90], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFBD6: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FFBD9: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FFBDC: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FFBDF: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FFBE1: jb 0x588ffbe8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FFBE3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFBE8: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FFBEB: mov ecx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBA
        // 0x588FFBEE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FFBF0: je 0x588ffbfa
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588FFBF2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FFBF4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FFBF6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FFBF8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FFBFA: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FFBFD: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FFC00: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FFC03: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FFC05: jb 0x588ffc0c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FFC07: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFC0C: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FFC0F: mov dword ptr [ecx + edi*4], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFC16: mov ebp, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x70
        // 0x588FFC19: cmp ebp, dword ptr [esi + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x74
        // 0x588FFC1C: jbe 0x588ffc23
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588FFC1E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFC23: mov ebx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x588FFC26: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588FFC28: jne 0x588ffc42
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588FFC2A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFC2F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FFC31: lea edi, [ebp + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0xBD
        __asm _emit 0x00
        // 0x588FFC35: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588FFC38: ja 0x588ffc4d
        __asm _emit 0x77
        __asm _emit 0x13
        // 0x588FFC3A: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588FFC3C: je 0x588ffc46
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588FFC3E: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x588FFC40: jmp 0x588ffc48
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588FFC42: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588FFC44: jmp 0x588ffc31
        __asm _emit 0xEB
        __asm _emit 0xEB
        // 0x588FFC46: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FFC48: cmp edi, dword ptr [ebx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x7B
        __asm _emit 0x0C
        // 0x588FFC4B: jae 0x588ffc52
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x588FFC4D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFC52: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FFC55: lea ecx, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588FFC58: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588FFC5A: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FFC5D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FFC5F: jle 0x588ffc71
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588FFC61: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588FFC63: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588FFC65: push eax
        __asm _emit 0x50
        // 0x588FFC66: push ecx
        __asm _emit 0x51
        // 0x588FFC67: push eax
        __asm _emit 0x50
        // 0x588FFC68: push edi
        __asm _emit 0x57
        // 0x588FFC69: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xCF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFC6E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FFC71: add dword ptr [esi + 0x74], -4
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0xFC
        // 0x588FFC75: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FFC78: cmp dword ptr [esi + 0x70], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x588FFC7B: ja 0x588ffc81
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x588FFC7D: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FFC7F: jbe 0x588ffc86
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588FFC81: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xCF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFC86: pop ebp
        __asm _emit 0x5D
        // 0x588FFC87: pop ebx
        __asm _emit 0x5B
        // 0x588FFC88: pop edi
        __asm _emit 0x5F
        // 0x588FFC89: pop esi
        __asm _emit 0x5E
        // 0x588FFC8A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
