// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 796 bytes in 1 exact ranges.
// Source symbol alias: FUN_588329d0.

// Ghidra body range 0x588329D0..0x58832CEC; 796 mapped bytes.
extern "C" __declspec(naked) void FUN_588329d0_segment_00() {
    __asm {
        // 0x588329D0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588329D4: push ebx
        __asm _emit 0x53
        // 0x588329D5: push ebp
        __asm _emit 0x55
        // 0x588329D6: push esi
        __asm _emit 0x56
        // 0x588329D7: push edi
        __asm _emit 0x57
        // 0x588329D8: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588329DA: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588329DD: jne 0x58832cb3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588329E3: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588329E7: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588329E9: lea edi, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588329EF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588329F1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588329F3: lea ebx, [ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x01
        // 0x588329F6: cmp edx, dword ptr [ecx - 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0xD4
        // 0x588329F9: je 0x58832a45
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x588329FB: cmp edx, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x11
        // 0x588329FD: je 0x58832b3a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832A03: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58832A05: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58832A08: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58832A0B: jl 0x588329f6
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x58832A0D: cmp edx, dword ptr [esi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832A13: jne 0x58832c3b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832A19: cmp word ptr [0x58a0b4a8], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58832A20: jne 0x58832ce3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832A26: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832A2C: mov edx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832A32: push ecx
        __asm _emit 0x51
        // 0x58832A33: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832A39: push edx
        __asm _emit 0x52
        // 0x58832A3A: call 0x587b9300
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58832A3F: push ebp
        __asm _emit 0x55
        // 0x58832A40: jmp 0x58832cd3
        __asm _emit 0xE9
        __asm _emit 0x8E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832A45: mov ecx, dword ptr [esi + eax*4 + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x86
        __asm _emit 0x6C
        // 0x58832A49: cmp dword ptr [ecx + 0x88], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832A4F: jle 0x58832ce3
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832A55: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x58832A58: mov cx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x24
        // 0x58832A5C: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xCB
        // 0x58832A5E: je 0x58832ce3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832A64: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58832A66: je 0x58832a75
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58832A68: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58832A6B: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x57
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832A70: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58832A73: jmp 0x58832a80
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58832A75: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58832A78: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x57
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832A7D: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58832A80: push eax
        __asm _emit 0x50
        // 0x58832A81: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x5D
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832A86: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832A8C: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832A92: push edx
        __asm _emit 0x52
        // 0x58832A93: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x4E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832A98: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832A9E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58832AA0: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58832AA3: push ebp
        __asm _emit 0x55
        // 0x58832AA4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58832AA6: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58832AA9: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832AAF: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58832AB1: je 0x58832ab8
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58832AB3: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58832AB6: jmp 0x58832abb
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58832AB8: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58832ABB: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58832ABE: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832AC4: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58832AC6: je 0x58832acd
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58832AC8: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58832ACB: jmp 0x58832ad0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58832ACD: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58832AD0: push ecx
        __asm _emit 0x51
        // 0x58832AD1: push eax
        __asm _emit 0x50
        // 0x58832AD2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58832AD4: call 0x58831e20
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58832AD9: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832ADF: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832AE4: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58832AE8: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832AEE: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58832AF2: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832AF8: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832AFD: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58832B01: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B07: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58832B09: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58832B0D: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B13: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58832B16: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B1C: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x58832B1F: mov edx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B25: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x58832B28: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B2E: pop edi
        __asm _emit 0x5F
        // 0x58832B2F: pop esi
        __asm _emit 0x5E
        // 0x58832B30: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x58832B33: pop ebp
        __asm _emit 0x5D
        // 0x58832B34: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58832B36: pop ebx
        __asm _emit 0x5B
        // 0x58832B37: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58832B3A: mov ecx, dword ptr [esi + eax*4 + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B41: cmp dword ptr [ecx + 0x88], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B47: jle 0x58832ce3
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B4D: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B53: mov cx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x24
        // 0x58832B57: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xCB
        // 0x58832B59: je 0x58832ce3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B5F: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58832B61: je 0x58832b72
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58832B63: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B69: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x56
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832B6E: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832B70: jmp 0x58832b7f
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58832B72: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58832B74: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x56
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832B79: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832B7F: push eax
        __asm _emit 0x50
        // 0x58832B80: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832B85: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832B8B: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832B91: push edx
        __asm _emit 0x52
        // 0x58832B92: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x4D
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832B97: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832B9D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58832B9F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58832BA2: push ebp
        __asm _emit 0x55
        // 0x58832BA3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58832BA5: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832BAB: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832BB1: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58832BB3: je 0x58832bba
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58832BB5: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58832BB8: jmp 0x58832bbd
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58832BBA: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58832BBD: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58832BBF: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832BC5: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58832BC7: je 0x58832bce
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58832BC9: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58832BCC: jmp 0x58832bd1
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58832BCE: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58832BD1: push ecx
        __asm _emit 0x51
        // 0x58832BD2: push eax
        __asm _emit 0x50
        // 0x58832BD3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58832BD5: call 0x58831e20
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58832BDA: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832BE0: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832BE5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58832BE9: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832BEF: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58832BF1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58832BF5: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832BFB: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C00: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58832C04: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C0A: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58832C0E: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C14: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x58832C17: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C1D: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x58832C20: mov edx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C26: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x58832C29: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C2F: pop edi
        __asm _emit 0x5F
        // 0x58832C30: pop esi
        __asm _emit 0x5E
        // 0x58832C31: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58832C34: pop ebp
        __asm _emit 0x5D
        // 0x58832C35: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58832C37: pop ebx
        __asm _emit 0x5B
        // 0x58832C38: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58832C3B: cmp edx, dword ptr [esi + 0xc0]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C41: jne 0x58832c89
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x58832C43: mov ax, word ptr [0x58a0b4a8]
        __asm _emit 0x66
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58832C49: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58832C4D: jne 0x58832c69
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58832C4F: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58832C52: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58832C54: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58832C57: push ebp
        __asm _emit 0x55
        // 0x58832C58: push 0xf231
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C5D: push esi
        __asm _emit 0x56
        // 0x58832C5E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58832C60: pop edi
        __asm _emit 0x5F
        // 0x58832C61: pop esi
        __asm _emit 0x5E
        // 0x58832C62: pop ebp
        __asm _emit 0x5D
        // 0x58832C63: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58832C65: pop ebx
        __asm _emit 0x5B
        // 0x58832C66: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58832C69: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58832C6C: jne 0x58832ce3
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x58832C6E: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C74: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C7A: push eax
        __asm _emit 0x50
        // 0x58832C7B: push ecx
        __asm _emit 0x51
        // 0x58832C7C: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832C82: call 0x587b9300
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x66
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58832C87: jmp 0x58832c99
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58832C89: cmp edx, dword ptr [esi + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C8F: je 0x58832c99
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58832C91: cmp edx, dword ptr [esi + 0xc4]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832C97: jne 0x58832ce3
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x58832C99: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58832C9C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58832C9E: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58832CA1: push ebp
        __asm _emit 0x55
        // 0x58832CA2: push 0xf230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832CA7: push esi
        __asm _emit 0x56
        // 0x58832CA8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58832CAA: pop edi
        __asm _emit 0x5F
        // 0x58832CAB: pop esi
        __asm _emit 0x5E
        // 0x58832CAC: pop ebp
        __asm _emit 0x5D
        // 0x58832CAD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58832CAF: pop ebx
        __asm _emit 0x5B
        // 0x58832CB0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58832CB3: cmp eax, 0xf230
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832CB8: jne 0x58832ce3
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58832CBA: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58832CBE: push ecx
        __asm _emit 0x51
        // 0x58832CBF: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832CC5: lea edx, [esi + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832CCB: push edx
        __asm _emit 0x52
        // 0x58832CCC: call 0x587ba960
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x7C
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58832CD1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58832CD3: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58832CD6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58832CD8: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58832CDB: push 0xf230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832CE0: push esi
        __asm _emit 0x56
        // 0x58832CE1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58832CE3: pop edi
        __asm _emit 0x5F
        // 0x58832CE4: pop esi
        __asm _emit 0x5E
        // 0x58832CE5: pop ebp
        __asm _emit 0x5D
        // 0x58832CE6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58832CE8: pop ebx
        __asm _emit 0x5B
        // 0x58832CE9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
