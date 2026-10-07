// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 825 bytes in 1 exact ranges.
// Source symbol alias: FUN_588cec10.

// Ghidra body range 0x588CEC10..0x588CEF49; 825 mapped bytes.
extern "C" __declspec(naked) void FUN_588cec10_segment_00() {
    __asm {
        // 0x588CEC10: sub esp, 0x48
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x48
        // 0x588CEC13: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588CEC18: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588CEC1A: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588CEC1E: push ebx
        __asm _emit 0x53
        // 0x588CEC1F: push ebp
        __asm _emit 0x55
        // 0x588CEC20: push esi
        __asm _emit 0x56
        // 0x588CEC21: push edi
        __asm _emit 0x57
        // 0x588CEC22: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CEC24: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588CEC27: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEC2C: mov dword ptr [eax + 0x30], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x30
        // 0x588CEC2F: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588CEC32: mov dword ptr [ecx + 0x34], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x34
        // 0x588CEC35: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588CEC38: mov dword ptr [edx + 0x38], 0x80
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x38
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEC3F: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588CEC42: mov dword ptr [eax + 0x3c], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEC49: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588CEC4C: mov ecx, 0x7d
        __asm _emit 0xB9
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEC51: mov dword ptr [edx + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x40
        // 0x588CEC54: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588CEC57: mov dword ptr [eax + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x44
        // 0x588CEC5A: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588CEC5D: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEC62: mov dword ptr [edx + 0x48], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x48
        // 0x588CEC65: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588CEC68: mov dword ptr [eax + 0x4c], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x4C
        // 0x588CEC6B: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588CEC6E: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEC73: mov word ptr [edx + 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEC7A: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588CEC7D: mov word ptr [edx + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x36
        // 0x588CEC81: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588CEC84: or byte ptr [eax + 0x32], 0x20
        __asm _emit 0x80
        __asm _emit 0x48
        __asm _emit 0x32
        __asm _emit 0x20
        // 0x588CEC88: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588CEC8B: movzx edx, byte ptr [eax + 0x32]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x50
        __asm _emit 0x32
        // 0x588CEC8F: and dl, 0xf2
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0xF2
        // 0x588CEC92: or dl, bl
        __asm _emit 0x0A
        __asm _emit 0xD3
        // 0x588CEC94: mov byte ptr [eax + 0x32], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x32
        // 0x588CEC97: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588CEC9A: movzx edx, byte ptr [eax + 0x31]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x50
        __asm _emit 0x31
        // 0x588CEC9E: and dl, 0xb0
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0xB0
        // 0x588CECA1: or dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xCA
        __asm _emit 0x30
        // 0x588CECA4: mov byte ptr [eax + 0x31], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x31
        // 0x588CECA7: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588CECAA: mov byte ptr [eax + 0x47], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x47
        // 0x588CECAD: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588CECB0: mov byte ptr [ecx + 0x46], 1
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x588CECB4: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588CECB7: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CECBD: push 0x589a0738
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588CECC2: mov dword ptr [edx + 0x40], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x40
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CECC9: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x588CECCB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CECCE: push eax
        __asm _emit 0x50
        // 0x588CECCF: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588CECD2: add eax, 0xa6
        __asm _emit 0x05
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CECD7: push eax
        __asm _emit 0x50
        // 0x588CECD8: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CECDE: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588CECE1: and dword ptr [eax + 0x3c], 0xfffffffd
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x3C
        __asm _emit 0xFD
        // 0x588CECE5: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588CECE8: and dword ptr [eax + 0x3c], 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x3C
        __asm _emit 0xFE
        // 0x588CECEC: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588CECEF: or dword ptr [eax + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x588CECF3: push 0x5899a5a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0xA5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588CECF8: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x588CECFA: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588CECFD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CED00: mov edi, 0x30
        __asm _emit 0xBF
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CED05: lea edx, [edi + 0x7fffffce]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xCE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588CED0B: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588CED0D: je 0x588ced21
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588CED0F: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x588CED11: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x588CED13: je 0x588ced21
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588CED15: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x588CED17: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x588CED19: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x588CED1B: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x588CED1D: jne 0x588ced05
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x588CED1F: jmp 0x588ced25
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588CED21: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588CED23: jne 0x588ced27
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588CED25: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x588CED27: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588CED2A: lea ecx, [esi + 0x88]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CED30: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x588CED32: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588CED34: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CED39: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588CED3D: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588CED40: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x588CED42: jne 0x588ced32
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x588CED44: cmp dword ptr [esp + 0x5c], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588CED48: je 0x588cef2c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CED4E: lea ebx, [esi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x588CED51: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x588CED53: lea ebp, [edx + 3]
        __asm _emit 0x8D
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588CED56: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588CED58: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588CED5A: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x9A
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CED5F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588CED62: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588CED65: jne 0x588ced56
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x588CED67: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x588CED69: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CED6E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588CED70: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588CED72: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x9A
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CED77: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588CED7A: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588CED7D: jne 0x588ced70
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588CED7F: cmp dword ptr [esi + 0x98], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CED85: je 0x588cedbd
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x588CED87: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CED8D: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x588CED90: sub eax, dword ptr [ecx + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x588CED93: lea edi, [ecx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x588CED96: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588CED99: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CED9B: ja 0x588ceda8
        __asm _emit 0x77
        __asm _emit 0x0B
        // 0x588CED9D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xDE
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CEDA2: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CEDA8: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588CEDAA: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588CEDAC: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x588CEDAF: push eax
        __asm _emit 0x50
        // 0x588CEDB0: call 0x587aeef0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x01
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588CEDB5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CEDB7: jne 0x588cef34
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEDBD: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CEDC3: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x588CEDC6: sub edx, dword ptr [ecx + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CEDC9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CEDCB: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CEDCF: test edx, 0xfffffffc
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CEDD5: jle 0x588cef2c
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEDDB: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CEDE1: mov edx, dword ptr [ecx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x2C
        // 0x588CEDE4: sub edx, dword ptr [ecx + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x588CEDE7: lea edi, [ecx + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x28
        // 0x588CEDEA: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588CEDED: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588CEDEF: jb 0x588cedfc
        __asm _emit 0x72
        __asm _emit 0x0B
        // 0x588CEDF1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xDE
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CEDF6: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CEDFC: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588CEDFE: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CEE02: mov edi, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x90
        // 0x588CEE05: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588CEE07: je 0x588cef2c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEE0D: cmp dword ptr [edi + 0x180], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEE14: je 0x588cef12
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEE1A: cmp dword ptr [esi + 0x98], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEE21: je 0x588ceea9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEE27: mov eax, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x588CEE2A: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588CEE2D: je 0x588cee4c
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588CEE2F: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588CEE32: je 0x588cee4c
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588CEE34: cmp eax, 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x66
        // 0x588CEE37: je 0x588cee4c
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588CEE39: cmp eax, 0x67
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x67
        // 0x588CEE3C: je 0x588cee4c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588CEE3E: cmp eax, 0x68
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x68
        // 0x588CEE41: je 0x588cee4c
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588CEE43: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588CEE46: jne 0x588cef12
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CEE4C: mov eax, dword ptr [edi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x58
        // 0x588CEE4F: push eax
        __asm _emit 0x50
        // 0x588CEE50: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CEE54: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CEE59: push ecx
        __asm _emit 0x51
        // 0x588CEE5A: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588CEE5C: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588CEE5E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588CEE61: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x588CEE66: push edi
        __asm _emit 0x57
        // 0x588CEE67: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588CEE6B: push edx
        __asm _emit 0x52
        // 0x588CEE6C: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x9A
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CEE71: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588CEE74: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x588CEE79: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CEE7B: lea eax, [edi + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x30
        // 0x588CEE7E: push eax
        __asm _emit 0x50
        // 0x588CEE7F: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x9A
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CEE84: mov ecx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x588CEE87: imul ecx, dword ptr [edi + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4F
        __asm _emit 0x5C
        // 0x588CEE8B: push ecx
        __asm _emit 0x51
        // 0x588CEE8C: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CEE90: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CEE95: push edx
        __asm _emit 0x52
        // 0x588CEE96: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588CEE98: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588CEE9B: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x588CEEA0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CEEA2: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588CEEA6: push eax
        __asm _emit 0x50
        // 0x588CEEA7: jmp 0x588cef04
        __asm _emit 0xEB
        __asm _emit 0x5B
        // 0x588CEEA9: mov ecx, dword ptr [edi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x58
        // 0x588CEEAC: push ecx
        __asm _emit 0x51
        // 0x588CEEAD: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CEEB1: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CEEB6: push edx
        __asm _emit 0x52
        // 0x588CEEB7: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588CEEB9: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588CEEBB: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588CEEBE: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x588CEEC3: push edi
        __asm _emit 0x57
        // 0x588CEEC4: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588CEEC8: push eax
        __asm _emit 0x50
        // 0x588CEEC9: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CEECE: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x588CEED3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CEED5: lea ecx, [edi + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588CEED8: push ecx
        __asm _emit 0x51
        // 0x588CEED9: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588CEEDC: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CEEE1: mov edx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x60
        // 0x588CEEE4: imul edx, dword ptr [edi + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x57
        __asm _emit 0x5C
        // 0x588CEEE8: push edx
        __asm _emit 0x52
        // 0x588CEEE9: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CEEED: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CEEF2: push eax
        __asm _emit 0x50
        // 0x588CEEF3: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588CEEF5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588CEEF8: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x588CEEFD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CEEFF: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588CEF03: push ecx
        __asm _emit 0x51
        // 0x588CEF04: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588CEF07: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CEF0C: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CEF12: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x588CEF15: sub edx, dword ptr [ecx + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CEF18: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CEF1C: inc eax
        __asm _emit 0x40
        // 0x588CEF1D: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588CEF20: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588CEF22: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CEF26: jl 0x588cede1
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xB5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CEF2C: mov esi, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x70
        // 0x588CEF2F: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588CEF34: mov ecx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x588CEF38: pop edi
        __asm _emit 0x5F
        // 0x588CEF39: pop esi
        __asm _emit 0x5E
        // 0x588CEF3A: pop ebp
        __asm _emit 0x5D
        // 0x588CEF3B: pop ebx
        __asm _emit 0x5B
        // 0x588CEF3C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588CEF3E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xDC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CEF43: add esp, 0x48
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x48
        // 0x588CEF46: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
