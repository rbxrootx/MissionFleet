// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E0090 .. +0x8F9 bytes.
// Source symbol alias: FUN_587e0090.
// Direct callers: 0x587BB700 (13 sites) and 0x588C4210 (7 sites).
// The body invokes a virtual slot through receiver +0xDB0, then dispatches
// selector values 1..14 to table cases; all other selector values default.
// Its ret 0x18 cleans six stack arguments. Case semantics remain unresolved;
// see docs/current-main-tag-dispatch-587e0090.md.
extern "C" __declspec(naked) void FUN_587e0090() {
    __asm {
        // 0x587E0090: push ebx
        __asm _emit 0x53
        // 0x587E0091: push esi
        __asm _emit 0x56
        // 0x587E0092: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E0094: mov ecx, dword ptr [esi + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E009A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E009C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587E009F: push edi
        __asm _emit 0x57
        // 0x587E00A0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587E00A2: mov bx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E00A7: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E00AD: movzx eax, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC3
        // 0x587E00B0: push eax
        __asm _emit 0x50
        // 0x587E00B1: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E00B5: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x3F
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E00BA: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587E00BC: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E00C0: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x587E00C3: dec ecx
        __asm _emit 0x49
        // 0x587E00C4: cmp ecx, 0xd
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0D
        // 0x587E00C7: ja 0x587e0963
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E00CD: movzx ecx, byte ptr [ecx + 0x587e09ac]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x09
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587E00D4: push ebp
        __asm _emit 0x55
        // 0x587E00D5: jmp dword ptr [ecx*4 + 0x587e098c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x09
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587E00DC: mov edx, 0xffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E00E1: cmp bx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x587E00E4: je 0x587e0385
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E00EA: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587E00EE: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587E00F0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587E00F2: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587E00F4: je 0x587e0169
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x587E00F6: cmp word ptr [esp + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E00FB: jl 0x587e0169
        __asm _emit 0x7C
        __asm _emit 0x6C
        // 0x587E00FD: movzx eax, byte ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E0102: movzx ecx, byte ptr [esp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E0107: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x587E010A: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x587E010C: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x587E010E: je 0x587e0129
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587E0110: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E0116: mov ecx, dword ptr [edx + 0xdb8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E011C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E011E: lea ebx, [edi + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0124: call 0x588b2700
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x25
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587E0129: mov eax, dword ptr [edi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x587E012C: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E0132: push eax
        __asm _emit 0x50
        // 0x587E0133: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E0138: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587E013C: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x587E013E: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587E0141: cmp cl, 7
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x07
        // 0x587E0144: jne 0x587e0169
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x587E0146: and eax, 0x3e0
        __asm _emit 0x25
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E014B: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0150: jne 0x587e0169
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587E0152: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E0154: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E0156: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E0158: push 0x514
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E015D: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xB9
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E0162: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E0164: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x4B
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E0169: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E016D: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E0170: jle 0x587e0219
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0176: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587E0178: je 0x587e0370
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E017E: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E0184: cmp dword ptr [ecx + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587E0188: push ebx
        __asm _emit 0x53
        // 0x587E0189: push ebp
        __asm _emit 0x55
        // 0x587E018A: je 0x587e019a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587E018C: call 0x588f3e70
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x3C
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E0191: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0193: call 0x587daeb0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xAD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0198: jmp 0x587e01c3
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x587E019A: call 0x588f3e70
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x3C
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E019F: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E01A5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E01A7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587E01A9: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x2B
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E01AE: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E01B4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E01B6: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x2B
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E01BB: push edi
        __asm _emit 0x57
        // 0x587E01BC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E01BE: call 0x587df580
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E01C3: mov edx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E01C9: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587E01CD: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x587E01D1: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x587E01D3: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x587E01D5: je 0x587e01f1
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587E01D7: mov ecx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E01DD: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587E01E1: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x587E01E5: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587E01E8: cmp dl, 4
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587E01EB: jne 0x587e0370
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E01F1: mov ecx, dword ptr [esi + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E01F7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E01F9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E01FC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587E01FE: mov ecx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0204: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E0206: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587E0209: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587E020B: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x587E020D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E020F: call 0x587d7820
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x76
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0214: jmp 0x587e0370
        __asm _emit 0xE9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0219: jge 0x587e028c
        __asm _emit 0x7D
        __asm _emit 0x71
        // 0x587E021B: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E021F: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E0225: push ebx
        __asm _emit 0x53
        // 0x587E0226: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x3E
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E022B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587E022D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587E022F: je 0x587e0370
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0235: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E0237: push edi
        __asm _emit 0x57
        // 0x587E0238: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E023A: call 0x587d8ff0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x8D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E023F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0241: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E0243: je 0x587e024c
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E0245: call 0x587dad80
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xAB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E024A: jmp 0x587e026b
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x587E024C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E024E: push edi
        __asm _emit 0x57
        // 0x587E024F: call 0x587d8f90
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x8D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0254: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E0256: je 0x587e0261
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587E0258: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E025A: call 0x587dac20
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xA9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E025F: jmp 0x587e026b
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587E0261: mov dword ptr [esi + 0xe10], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E026B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E026D: call 0x588e9880
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0272: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E0274: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0276: call 0x587df580
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E027B: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E0281: push ebx
        __asm _emit 0x53
        // 0x587E0282: call 0x588f41e0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x3F
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E0287: jmp 0x587e0370
        __asm _emit 0xE9
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E028C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587E028E: je 0x587e0370
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0294: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E0298: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E029E: push eax
        __asm _emit 0x50
        // 0x587E029F: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x3D
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E02A4: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587E02A6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587E02A8: je 0x587e0370
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E02AE: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E02B4: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587E02B7: push ecx
        __asm _emit 0x51
        // 0x587E02B8: mov ecx, dword ptr [esi + 0x350]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E02BE: call 0x5873a2e0
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xA0
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E02C3: mov edx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E02C9: mov eax, dword ptr [edx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x587E02CC: mov ecx, dword ptr [esi + 0x350]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E02D2: push eax
        __asm _emit 0x50
        // 0x587E02D3: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E02D8: mov ecx, dword ptr [esi + 0x350]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E02DE: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E02E3: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x29
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E02E8: mov ecx, dword ptr [esi + 0x350]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E02EE: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x587E02F0: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x12
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E02F5: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E02FB: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587E02FE: push ecx
        __asm _emit 0x51
        // 0x587E02FF: mov ecx, dword ptr [esi + 0x354]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0305: call 0x5873a2e0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x9F
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E030A: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0310: mov eax, dword ptr [edx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x587E0313: mov ecx, dword ptr [esi + 0x354]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0319: push eax
        __asm _emit 0x50
        // 0x587E031A: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x46
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E031F: mov ecx, dword ptr [esi + 0x354]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0325: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E032A: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x29
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E032F: mov ecx, dword ptr [esi + 0x354]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0335: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x587E0337: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E033C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E033E: push ebx
        __asm _emit 0x53
        // 0x587E033F: push ebp
        __asm _emit 0x55
        // 0x587E0340: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0342: call 0x588e9940
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0347: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0349: call 0x588e9880
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E034E: push edi
        __asm _emit 0x57
        // 0x587E034F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0351: call 0x587df580
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0356: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E035C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E035E: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x29
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E0363: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0369: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E036B: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x29
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E0370: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0372: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0374: call 0x587d90f0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x8D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0379: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E037F: push eax
        __asm _emit 0x50
        // 0x587E0380: call 0x588f0430
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E0385: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0387: call 0x587da120
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x9D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E038C: jmp 0x587e0962
        __asm _emit 0xE9
        __asm _emit 0xD1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0391: cmp word ptr [esp + 0x24], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587E0397: jle 0x587e03e4
        __asm _emit 0x7E
        __asm _emit 0x4B
        // 0x587E0399: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E039B: push eax
        __asm _emit 0x50
        // 0x587E039C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E039E: call 0x588e9850
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x94
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E03A3: mov edi, dword ptr [edi + 0xccc]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E03A9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587E03AB: je 0x587e0962
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E03B1: movzx ecx, word ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587E03B5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E03B7: push ecx
        __asm _emit 0x51
        // 0x587E03B8: mov ecx, dword ptr [0x58a24654]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E03BE: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x14
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E03C3: mov ecx, dword ptr [esi + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E03C9: push eax
        __asm _emit 0x50
        // 0x587E03CA: mov eax, dword ptr [esi + 0x584]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E03D0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587E03D3: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587E03D6: push edx
        __asm _emit 0x52
        // 0x587E03D7: push eax
        __asm _emit 0x50
        // 0x587E03D8: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587E03DA: call 0x5876d8b0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xD4
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E03DF: jmp 0x587e0962
        __asm _emit 0xE9
        __asm _emit 0x7E
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E03E4: mov ecx, dword ptr [esi + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E03EA: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587E03EE: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x587E03F2: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587E03F5: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587E03F8: je 0x587e0405
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587E03FA: mov ecx, dword ptr [esi + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0400: call 0x5876d3c0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xCF
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E0405: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E0407: mov word ptr [esp + 0x1e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x587E040C: mov byte ptr [esp + 0x1c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587E0411: mov byte ptr [esp + 0x1d], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587E0416: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E041A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E041C: push ecx
        __asm _emit 0x51
        // 0x587E041D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E041F: call 0x588e9850
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x94
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0424: mov edx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E042A: mov dword ptr [edx + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0431: jmp 0x587e0962
        __asm _emit 0xE9
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0436: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587E0438: cmp word ptr [esp + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E043D: jle 0x587e04ca
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0443: movzx ebp, byte ptr [esp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E0448: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E044A: push eax
        __asm _emit 0x50
        // 0x587E044B: push ebp
        __asm _emit 0x55
        // 0x587E044C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E044E: call 0x588e9700
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x92
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0453: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0459: push ebp
        __asm _emit 0x55
        // 0x587E045A: call 0x588f13b0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x0F
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E045F: mov edx, dword ptr [edi + ebp*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xAF
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0466: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587E0468: je 0x587e0522
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E046E: mov eax, dword ptr [edi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0474: mov eax, dword ptr [eax + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E047A: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E047F: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x587E0481: shr eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE8
        // 0x587E0483: movzx ecx, word ptr [edx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587E0487: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x01
        // 0x587E048A: lea ebx, [ecx + eax]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x587E048D: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E0493: lea edx, [ebx + 5]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x05
        // 0x587E0496: push edx
        __asm _emit 0x52
        // 0x587E0497: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E049C: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E04A2: push eax
        __asm _emit 0x50
        // 0x587E04A3: add ebx, 3
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x03
        // 0x587E04A6: push ebx
        __asm _emit 0x53
        // 0x587E04A7: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E04AC: push eax
        __asm _emit 0x50
        // 0x587E04AD: mov eax, dword ptr [esi + ebp*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xAE
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E04B4: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587E04B7: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E04BA: push ecx
        __asm _emit 0x51
        // 0x587E04BB: mov ecx, dword ptr [esi + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E04C1: push edx
        __asm _emit 0x52
        // 0x587E04C2: push ebp
        __asm _emit 0x55
        // 0x587E04C3: call 0x5876d8b0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E04C8: jmp 0x587e0522
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x587E04CA: mov eax, dword ptr [esi + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E04D0: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587E04D4: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x587E04D8: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587E04DB: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x587E04DE: je 0x587e04eb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587E04E0: mov ecx, dword ptr [esi + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E04E6: call 0x5876d3c0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xCE
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E04EB: movzx ebp, byte ptr [esp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E04F0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587E04F2: mov word ptr [esp + 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x587E04F7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E04F9: mov byte ptr [esp + 0x1c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E04FD: mov byte ptr [esp + 0x1d], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1D
        // 0x587E0501: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E0505: push eax
        __asm _emit 0x50
        // 0x587E0506: push ebp
        __asm _emit 0x55
        // 0x587E0507: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0509: call 0x588e9700
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E050E: mov ecx, dword ptr [esi + ebp*4 + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xAE
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0515: mov dword ptr [ecx + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x54
        // 0x587E0518: mov edx, dword ptr [esi + ebp*4 + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xAE
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E051F: mov dword ptr [edx + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x54
        // 0x587E0522: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0528: push ebp
        __asm _emit 0x55
        // 0x587E0529: call 0x588f13b0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x0E
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E052E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E0530: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0532: mov word ptr [esp + 0x22], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587E0537: push eax
        __asm _emit 0x50
        // 0x587E0538: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587E053D: mov byte ptr [esp + 0x25], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x25
        __asm _emit 0x00
        // 0x587E0542: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E0546: push ebx
        __asm _emit 0x53
        // 0x587E0547: push ebp
        __asm _emit 0x55
        // 0x587E0548: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E054A: call 0x588e97a0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x92
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E054F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0551: push 0xaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0556: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E0558: push ebp
        __asm _emit 0x55
        // 0x587E0559: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E055B: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0560: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0562: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0564: push ebx
        __asm _emit 0x53
        // 0x587E0565: push ebp
        __asm _emit 0x55
        // 0x587E0566: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0568: call 0x588e97a0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x92
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E056D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E056F: push 0xaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0574: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0576: push ebp
        __asm _emit 0x55
        // 0x587E0577: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0579: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E057E: jmp 0x587e094d
        __asm _emit 0xE9
        __asm _emit 0xCA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0583: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587E0585: cmp word ptr [esp + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E058A: jle 0x587e05f8
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x587E058C: movzx ebp, byte ptr [esp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E0591: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0593: push eax
        __asm _emit 0x50
        // 0x587E0594: push ebp
        __asm _emit 0x55
        // 0x587E0595: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0597: call 0x588e9700
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E059C: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E05A2: push ebp
        __asm _emit 0x55
        // 0x587E05A3: call 0x588f13b0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x0E
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E05A8: mov eax, dword ptr [edi + ebp*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xAF
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E05AF: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587E05B1: je 0x587e0650
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E05B7: movzx ebx, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587E05BB: lea ecx, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587E05BE: push ecx
        __asm _emit 0x51
        // 0x587E05BF: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E05C5: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x12
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E05CA: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E05D0: push eax
        __asm _emit 0x50
        // 0x587E05D1: add ebx, 3
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x03
        // 0x587E05D4: push ebx
        __asm _emit 0x53
        // 0x587E05D5: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x12
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E05DA: mov ecx, dword ptr [esi + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E05E0: push eax
        __asm _emit 0x50
        // 0x587E05E1: mov eax, dword ptr [esi + ebp*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xAE
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E05E8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587E05EB: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587E05EE: push edx
        __asm _emit 0x52
        // 0x587E05EF: push eax
        __asm _emit 0x50
        // 0x587E05F0: push ebp
        __asm _emit 0x55
        // 0x587E05F1: call 0x5876d8b0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xD2
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E05F6: jmp 0x587e0650
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x587E05F8: mov ecx, dword ptr [esi + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E05FE: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587E0602: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x587E0606: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587E0609: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587E060C: je 0x587e0619
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587E060E: mov ecx, dword ptr [esi + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0614: call 0x5876d3c0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xCD
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E0619: movzx ebp, byte ptr [esp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E061E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E0620: mov word ptr [esp + 0x1a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x587E0625: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0627: mov byte ptr [esp + 0x1c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E062B: mov byte ptr [esp + 0x1d], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1D
        // 0x587E062F: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E0633: push ecx
        __asm _emit 0x51
        // 0x587E0634: push ebp
        __asm _emit 0x55
        // 0x587E0635: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0637: call 0x588e9700
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E063C: mov edx, dword ptr [esi + ebp*4 + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xAE
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0643: mov dword ptr [edx + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x54
        // 0x587E0646: mov eax, dword ptr [esi + ebp*4 + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xAE
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E064D: mov dword ptr [eax + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x54
        // 0x587E0650: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587E0652: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0654: mov word ptr [esp + 0x22], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587E0659: push ecx
        __asm _emit 0x51
        // 0x587E065A: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587E065F: mov byte ptr [esp + 0x25], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x25
        __asm _emit 0x00
        // 0x587E0664: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E0668: push ebx
        __asm _emit 0x53
        // 0x587E0669: push ebp
        __asm _emit 0x55
        // 0x587E066A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E066C: call 0x588e97a0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0671: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0673: push 0xaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0678: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E067A: push ebp
        __asm _emit 0x55
        // 0x587E067B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E067D: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x8F
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0682: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0684: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0686: push ebx
        __asm _emit 0x53
        // 0x587E0687: push ebp
        __asm _emit 0x55
        // 0x587E0688: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E068A: call 0x588e97a0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E068F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0691: push 0xaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0696: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0698: push ebp
        __asm _emit 0x55
        // 0x587E0699: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E069B: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E06A0: jmp 0x587e0941
        __asm _emit 0xE9
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E06A5: cmp word ptr [esp + 0x24], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587E06AB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E06AD: jle 0x587e06e6
        __asm _emit 0x7E
        __asm _emit 0x37
        // 0x587E06AF: push eax
        __asm _emit 0x50
        // 0x587E06B0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E06B2: call 0x588e9820
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E06B7: mov edi, dword ptr [edi + 0xcc8]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E06BD: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587E06BF: je 0x587e0962
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E06C5: movzx edx, word ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587E06C9: mov ecx, dword ptr [0x58a24658]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E06CF: push edx
        __asm _emit 0x52
        // 0x587E06D0: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x11
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E06D5: mov ecx, dword ptr [esi + 0x344]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E06DB: push eax
        __asm _emit 0x50
        // 0x587E06DC: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x42
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E06E1: jmp 0x587e0962
        __asm _emit 0xE9
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E06E6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E06E8: mov word ptr [esp + 0x22], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587E06ED: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587E06F2: mov byte ptr [esp + 0x21], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x587E06F7: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E06FB: push ecx
        __asm _emit 0x51
        // 0x587E06FC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E06FE: call 0x588e9820
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0703: mov edx, dword ptr [esi + 0x344]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0709: mov dword ptr [edx + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0710: jmp 0x587e0962
        __asm _emit 0xE9
        __asm _emit 0x4D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0715: movzx ebp, byte ptr [esp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E071A: movzx ebx, byte ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E071F: lea ecx, [ebx + ebp*2 + 0x2f0]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x6B
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0726: mov ecx, dword ptr [edi + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8F
        // 0x587E0729: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587E072B: je 0x587e0738
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587E072D: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x02
        // 0x587E0731: cmp dx, word ptr [esp + 0x22]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587E0736: je 0x587e0754
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587E0738: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E073A: push ebx
        __asm _emit 0x53
        // 0x587E073B: push eax
        __asm _emit 0x50
        // 0x587E073C: push ebp
        __asm _emit 0x55
        // 0x587E073D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E073F: call 0x588e97a0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0744: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0746: push 0xaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E074B: push ebx
        __asm _emit 0x53
        // 0x587E074C: push ebp
        __asm _emit 0x55
        // 0x587E074D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E074F: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0754: lea eax, [ebx + ebp*2 + 0x560]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x6B
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E075B: lea eax, [edi + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x47
        // 0x587E075E: mov ecx, 0xaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0763: xor cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x08
        // 0x587E0766: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E076B: add cx, word ptr [esp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E0770: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E0774: xor cx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x587E0777: movzx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC1
        // 0x587E077A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E077C: push eax
        __asm _emit 0x50
        // 0x587E077D: push ebx
        __asm _emit 0x53
        // 0x587E077E: push ebp
        __asm _emit 0x55
        // 0x587E077F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0781: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0786: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E078A: mov ecx, 0xaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E078F: cmp word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x0A
        // 0x587E0792: jne 0x587e07b5
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587E0794: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0796: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E0798: mov word ptr [esp + 0x22], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587E079D: push ebx
        __asm _emit 0x53
        // 0x587E079E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587E07A3: mov byte ptr [esp + 0x25], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x25
        __asm _emit 0x00
        // 0x587E07A8: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E07AC: push ecx
        __asm _emit 0x51
        // 0x587E07AD: push ebp
        __asm _emit 0x55
        // 0x587E07AE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E07B0: call 0x588e97a0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x8F
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E07B5: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E07B9: cmp al, 0xb
        __asm _emit 0x3C
        __asm _emit 0x0B
        // 0x587E07BB: jne 0x587e07cb
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587E07BD: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E07C3: push eax
        __asm _emit 0x50
        // 0x587E07C4: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x85
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E07C9: jmp 0x587e07db
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x587E07CB: cmp al, 0xc
        __asm _emit 0x3C
        __asm _emit 0x0C
        // 0x587E07CD: jne 0x587e081e
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x587E07CF: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E07D5: push eax
        __asm _emit 0x50
        // 0x587E07D6: call 0x58778e20
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x86
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E07DB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E07DD: je 0x587e081e
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x587E07DF: movzx ecx, word ptr [eax + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x587E07E3: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587E07E7: jne 0x587e081e
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x587E07E9: cmp word ptr [eax + 0x22], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x22
        __asm _emit 0x01
        // 0x587E07EE: jne 0x587e07fb
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587E07F0: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E07F4: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587E07F6: push eax
        __asm _emit 0x50
        // 0x587E07F7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E07F9: jmp 0x587e0811
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x587E07FB: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587E07FF: jne 0x587e081e
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587E0801: cmp word ptr [eax + 0x22], 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x22
        __asm _emit 0x08
        // 0x587E0806: jne 0x587e081e
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587E0808: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E080C: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587E080E: push eax
        __asm _emit 0x50
        // 0x587E080F: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587E0811: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E0817: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587E0819: call 0x58880630
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xFE
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587E081E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0820: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0822: call 0x587d90f0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x88
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0827: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E082D: push eax
        __asm _emit 0x50
        // 0x587E082E: call 0x588f0430
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xFB
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0833: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0839: call 0x588f2cf0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E083E: jmp 0x587e0962
        __asm _emit 0xE9
        __asm _emit 0x1F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0843: movzx ebp, byte ptr [esp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E0848: mov ecx, dword ptr [edi + ebp*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xAF
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E084F: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587E0851: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587E0853: je 0x587e0860
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587E0855: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x02
        // 0x587E0859: cmp dx, word ptr [esp + 0x22]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587E085E: je 0x587e087b
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587E0860: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0862: push eax
        __asm _emit 0x50
        // 0x587E0863: push ebp
        __asm _emit 0x55
        // 0x587E0864: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0866: call 0x588e9700
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E086B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E086D: push 0xaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0872: push ebx
        __asm _emit 0x53
        // 0x587E0873: push ebp
        __asm _emit 0x55
        // 0x587E0874: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0876: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x8D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E087B: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0880: xor ax, word ptr [edi + ebp*4 + 0xac0]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x84
        __asm _emit 0xAF
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0888: mov ecx, 0xaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E088D: add ax, word ptr [esp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587E0892: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E0894: xor ax, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xC1
        // 0x587E0897: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x587E089A: push edx
        __asm _emit 0x52
        // 0x587E089B: push ebx
        __asm _emit 0x53
        // 0x587E089C: push ebp
        __asm _emit 0x55
        // 0x587E089D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E089F: call 0x588e9590
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x8C
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E08A4: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E08A9: cmp word ptr [edi + ebp*4 + 0xac0], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0xAF
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E08B1: jne 0x587e08e7
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x587E08B3: mov ecx, dword ptr [esi + ebp*4 + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xAE
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E08BA: mov dword ptr [ecx + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x54
        // 0x587E08BD: mov edx, dword ptr [esi + ebp*4 + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xAE
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E08C4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E08C6: mov word ptr [esp + 0x1e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x587E08CB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E08CD: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E08D1: mov byte ptr [esp + 0x21], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x21
        // 0x587E08D5: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E08D9: push ecx
        __asm _emit 0x51
        // 0x587E08DA: push ebp
        __asm _emit 0x55
        // 0x587E08DB: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E08DD: mov dword ptr [edx + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x54
        // 0x587E08E0: call 0x588e9700
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E08E5: jmp 0x587e0941
        __asm _emit 0xEB
        __asm _emit 0x5A
        // 0x587E08E7: mov edx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E08ED: mov eax, dword ptr [edx + ebp*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xAA
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E08F4: movzx ecx, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587E08F8: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x03
        // 0x587E08FB: push ecx
        __asm _emit 0x51
        // 0x587E08FC: mov ecx, dword ptr [0x58a24648]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E0902: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x0E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E0907: mov ecx, dword ptr [esi + ebp*4 + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xAE
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E090E: push eax
        __asm _emit 0x50
        // 0x587E090F: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x40
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E0914: mov edx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E091A: mov eax, dword ptr [edx + ebp*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xAA
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0921: movzx ecx, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587E0925: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587E0928: push ecx
        __asm _emit 0x51
        // 0x587E0929: mov ecx, dword ptr [0x58a24648]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E092F: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x0E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E0934: mov ecx, dword ptr [esi + ebp*4 + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xAE
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E093B: push eax
        __asm _emit 0x50
        // 0x587E093C: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x3F
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587E0941: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0947: push ebp
        __asm _emit 0x55
        // 0x587E0948: call 0x588f13b0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x0A
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E094D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E094F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0951: call 0x587d90f0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x87
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0956: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E095C: push eax
        __asm _emit 0x50
        // 0x587E095D: call 0x588f0430
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xFA
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0962: pop ebp
        __asm _emit 0x5D
        // 0x587E0963: mov ecx, dword ptr [esi + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0969: call 0x588ecea0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xC5
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E096E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0970: call 0x587df010
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0975: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0977: call 0x587d8470
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x7A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E097C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E097E: call 0x587d9460
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x8A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0983: pop edi
        __asm _emit 0x5F
        // 0x587E0984: pop esi
        __asm _emit 0x5E
        // 0x587E0985: pop ebx
        __asm _emit 0x5B
        // 0x587E0986: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
