// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 423 bytes in 1 exact ranges.
// Source symbol alias: FUN_58731860.

// Ghidra body range 0x58731860..0x58731A07; 423 mapped bytes.
extern "C" __declspec(naked) void FUN_58731860_segment_00() {
    __asm {
        // 0x58731860: push esi
        __asm _emit 0x56
        // 0x58731861: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58731863: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58731867: push edi
        __asm _emit 0x57
        // 0x58731868: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5873186A: je 0x587319ff
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731870: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58731873: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58731877: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58731879: je 0x5873189f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5873187B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5873187E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58731880: je 0x58731898
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58731882: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58731884: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58731886: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58731889: push edi
        __asm _emit 0x57
        // 0x5873188A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873188C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5873188F: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58731892: je 0x5873189f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58731894: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58731896: jne 0x58731882
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58731898: pop edi
        __asm _emit 0x5F
        // 0x58731899: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873189B: pop esi
        __asm _emit 0x5E
        // 0x5873189C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873189F: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587318A2: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587318A7: je 0x587319f0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587318AD: cmp eax, 0x202
        __asm _emit 0x3D
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587318B2: jne 0x587319ff
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587318B8: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587318BE: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587318C4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587318C7: push edi
        __asm _emit 0x57
        // 0x587318C8: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587318CD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587318CF: je 0x58731926
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x587318D1: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587318D7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587318D9: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587318DE: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587318E4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587318E6: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587318EB: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587318F1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587318F3: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587318F8: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587318FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58731900: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58731905: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x58731907: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873190D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58731912: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731918: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x5873191A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x14
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x5873191F: pop edi
        __asm _emit 0x5F
        // 0x58731920: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58731922: pop esi
        __asm _emit 0x5E
        // 0x58731923: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58731926: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873192C: push edi
        __asm _emit 0x57
        // 0x5873192D: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58731932: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58731934: je 0x58731981
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x58731936: movzx eax, word ptr [esi + 0x12c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873193D: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58731941: je 0x58731949
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58731943: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58731947: jne 0x5873191f
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x58731949: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873194F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58731951: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58731956: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873195C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873195E: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58731963: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731969: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873196B: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58731970: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731976: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x58731978: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x5873197D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873197F: jmp 0x58731907
        __asm _emit 0xEB
        __asm _emit 0x86
        // 0x58731981: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731987: push edi
        __asm _emit 0x57
        // 0x58731988: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873198D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873198F: je 0x587319ff
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x58731991: cmp word ptr [esi + 0x12c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58731999: jne 0x5873191f
        __asm _emit 0x75
        __asm _emit 0x84
        // 0x5873199B: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587319A1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587319A3: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587319A8: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587319AE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587319B0: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587319B5: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587319BB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587319BD: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587319C2: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587319C8: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x587319CA: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587319CF: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587319D5: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x587319D7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587319DC: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587319E2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587319E4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x13
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587319E9: pop edi
        __asm _emit 0x5F
        // 0x587319EA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587319EC: pop esi
        __asm _emit 0x5E
        // 0x587319ED: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587319F0: cmp dword ptr [edi + 8], 0x1b
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x08
        __asm _emit 0x1B
        // 0x587319F4: jne 0x587319ff
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587319F6: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587319F8: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587319FB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587319FD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587319FF: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58731A02: pop edi
        __asm _emit 0x5F
        // 0x58731A03: pop esi
        __asm _emit 0x5E
        // 0x58731A04: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
