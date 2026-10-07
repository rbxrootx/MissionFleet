// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 499 bytes in 1 exact ranges.
// Source symbol alias: FUN_588be810.

// Ghidra body range 0x588BE810..0x588BEA03; 499 mapped bytes.
extern "C" __declspec(naked) void FUN_588be810_segment_00() {
    __asm {
        // 0x588BE810: push ebx
        __asm _emit 0x53
        // 0x588BE811: push ebp
        __asm _emit 0x55
        // 0x588BE812: push esi
        __asm _emit 0x56
        // 0x588BE813: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588BE815: mov ecx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE81B: push edi
        __asm _emit 0x57
        // 0x588BE81C: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x9D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588BE821: lea edi, [esi + 0x138]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE827: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE82C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BE830: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588BE832: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x9F
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BE837: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588BE83A: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588BE83D: jne 0x588be830
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588BE83F: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE845: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE84A: cmp dword ptr [ecx + 0x50], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588BE84D: jne 0x588be8e5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE853: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BE859: mov edi, 0xb40
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE85E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588BE860: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE866: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x588BE869: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BE86B: je 0x588be8d4
        __asm _emit 0x74
        __asm _emit 0x67
        // 0x588BE86D: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588BE870: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588BE874: jne 0x588be8d4
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x588BE876: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE87B: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x588BE87D: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE882: shl eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE0
        // 0x588BE884: mov ecx, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE88A: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE88F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BE891: test dword ptr [ecx + 0x268], eax
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE897: je 0x588be8a0
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BE899: push 0x589a0a64
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x0A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588BE89E: jmp 0x588be8a5
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588BE8A0: push 0x589a0a4c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588BE8A5: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588BE8A7: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE8AD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BE8B0: push eax
        __asm _emit 0x50
        // 0x588BE8B1: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BE8B6: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE8BC: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x588BE8BF: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE8C5: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588BE8CA: push ebx
        __asm _emit 0x53
        // 0x588BE8CB: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x588BE8CE: push eax
        __asm _emit 0x50
        // 0x588BE8CF: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x9F
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BE8D4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588BE8D7: inc ebx
        __asm _emit 0x43
        // 0x588BE8D8: cmp edi, 0xbc0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE8DE: jl 0x588be860
        __asm _emit 0x7C
        __asm _emit 0x80
        // 0x588BE8E0: pop edi
        __asm _emit 0x5F
        // 0x588BE8E1: pop esi
        __asm _emit 0x5E
        // 0x588BE8E2: pop ebp
        __asm _emit 0x5D
        // 0x588BE8E3: pop ebx
        __asm _emit 0x5B
        // 0x588BE8E4: ret
        __asm _emit 0xC3
        // 0x588BE8E5: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE8EB: cmp dword ptr [ecx + 0x50], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588BE8EE: jne 0x588be986
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE8F4: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BE8FA: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588BE8FC: mov edi, 0xb40
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE901: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE907: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x588BE90A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BE90C: je 0x588be975
        __asm _emit 0x74
        __asm _emit 0x67
        // 0x588BE90E: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588BE911: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588BE915: jne 0x588be975
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x588BE917: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE91C: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x588BE91E: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE923: shl eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE0
        // 0x588BE925: mov ecx, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE92B: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE930: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BE932: test dword ptr [ecx + 0x268], eax
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE938: je 0x588be941
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BE93A: push 0x589a0a4c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588BE93F: jmp 0x588be946
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588BE941: push 0x589a0a64
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x0A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588BE946: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588BE948: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE94E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BE951: push eax
        __asm _emit 0x50
        // 0x588BE952: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x9F
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BE957: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE95D: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x588BE960: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE966: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588BE96B: push ebx
        __asm _emit 0x53
        // 0x588BE96C: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x588BE96F: push eax
        __asm _emit 0x50
        // 0x588BE970: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x9F
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BE975: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588BE978: inc ebx
        __asm _emit 0x43
        // 0x588BE979: cmp edi, 0xbc0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE97F: jl 0x588be901
        __asm _emit 0x7C
        __asm _emit 0x80
        // 0x588BE981: pop edi
        __asm _emit 0x5F
        // 0x588BE982: pop esi
        __asm _emit 0x5E
        // 0x588BE983: pop ebp
        __asm _emit 0x5D
        // 0x588BE984: pop ebx
        __asm _emit 0x5B
        // 0x588BE985: ret
        __asm _emit 0xC3
        // 0x588BE986: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE98C: cmp dword ptr [ecx + 0x50], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588BE98F: jne 0x588be9fe
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x588BE991: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BE997: mov ebx, 0x1c
        __asm _emit 0xBB
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE99C: mov edi, 0xbb0
        __asm _emit 0xBF
        __asm _emit 0xB0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE9A1: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE9A7: mov eax, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x07
        // 0x588BE9AA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BE9AC: je 0x588be9f2
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x588BE9AE: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588BE9B1: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588BE9B5: jne 0x588be9f2
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x588BE9B7: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE9BC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BE9BE: push 0x589a0a34
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x0A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588BE9C3: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588BE9C5: mov ecx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE9CB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BE9CE: push eax
        __asm _emit 0x50
        // 0x588BE9CF: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BE9D4: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE9DA: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x588BE9DD: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE9E3: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588BE9E8: push ebx
        __asm _emit 0x53
        // 0x588BE9E9: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x588BE9EC: push eax
        __asm _emit 0x50
        // 0x588BE9ED: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BE9F2: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588BE9F5: inc ebx
        __asm _emit 0x43
        // 0x588BE9F6: cmp edi, 0xbc0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BE9FC: jl 0x588be9a1
        __asm _emit 0x7C
        __asm _emit 0xA3
        // 0x588BE9FE: pop edi
        __asm _emit 0x5F
        // 0x588BE9FF: pop esi
        __asm _emit 0x5E
        // 0x588BEA00: pop ebp
        __asm _emit 0x5D
        // 0x588BEA01: pop ebx
        __asm _emit 0x5B
        // 0x588BEA02: ret
        __asm _emit 0xC3
    }
}
