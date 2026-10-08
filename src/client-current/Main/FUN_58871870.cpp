// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 273 bytes in 1 exact ranges.
// Source symbol alias: FUN_58871870.

// Ghidra body range 0x58871870..0x58871981; 273 mapped bytes.
extern "C" __declspec(naked) void FUN_58871870_segment_00() {
    __asm {
        // 0x58871870: push esi
        __asm _emit 0x56
        // 0x58871871: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58871873: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58871877: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58871879: je 0x5887197b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887187F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58871883: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871888: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5887188B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871890: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58871893: je 0x588718aa
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58871895: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58871899: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5887189C: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588718A1: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588718A4: jne 0x58871959
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588718AA: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588718AD: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x588718B0: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588718B2: je 0x588718de
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588718B4: jle 0x588718c7
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588718B6: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588718B8: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x588718BA: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x588718BD: jg 0x588718c2
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x588718BF: push eax
        __asm _emit 0x50
        // 0x588718C0: jmp 0x588718d7
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588718C2: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x588718C5: jmp 0x588718d6
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x588718C7: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588718C9: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588718CB: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x588718CE: jg 0x588718d3
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x588718D0: push eax
        __asm _emit 0x50
        // 0x588718D1: jmp 0x588718d7
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588718D3: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x588718D6: push ecx
        __asm _emit 0x51
        // 0x588718D7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588718D9: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588718DE: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x588718E1: cmp eax, dword ptr [esi + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x588718E4: jne 0x58871959
        __asm _emit 0x75
        __asm _emit 0x73
        // 0x588718E6: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588718EA: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588718EF: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588718F2: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588718F7: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588718FA: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588718FE: jne 0x58871922
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58871900: mov edx, 0xe2ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871905: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58871908: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887190D: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58871910: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58871914: or word ptr [esi + 0x24], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x58871919: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887191B: call 0x58871290
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58871920: jmp 0x58871959
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x58871922: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58871925: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887192A: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5887192D: jne 0x58871959
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x5887192F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58871933: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871938: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5887193B: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871940: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58871943: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58871947: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887194C: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58871950: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871955: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58871959: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5887195D: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58871960: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58871962: je 0x5887197b
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58871964: push edi
        __asm _emit 0x57
        // 0x58871965: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x58871968: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5887196A: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5887196D: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x58871970: je 0x5887197d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58871972: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58871974: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58871976: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58871978: jne 0x58871965
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5887197A: pop edi
        __asm _emit 0x5F
        // 0x5887197B: pop esi
        __asm _emit 0x5E
        // 0x5887197C: ret
        __asm _emit 0xC3
        // 0x5887197D: pop edi
        __asm _emit 0x5F
        // 0x5887197E: pop esi
        __asm _emit 0x5E
        // 0x5887197F: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
