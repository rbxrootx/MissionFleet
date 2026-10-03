// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F0460 .. +0x35F bytes.
extern "C" __declspec(naked) void FUN_588f0460() {
    __asm {
        // 0x588F0460: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588F0464: push ebp
        __asm _emit 0x55
        // 0x588F0465: push esi
        __asm _emit 0x56
        // 0x588F0466: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588F0469: jne 0x588f06b2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F046F: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F0473: cmp ebp, dword ptr [ecx + 0x90]
        __asm _emit 0x3B
        __asm _emit 0xA9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0479: je 0x588f0483
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588F047B: cmp ebp, dword ptr [ecx + 0x94]
        __asm _emit 0x3B
        __asm _emit 0xA9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0481: jne 0x588f04ae
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x588F0483: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0488: cmp dword ptr [eax + 0xd78], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F048F: je 0x588f07b8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0495: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F0499: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588F049C: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F04A1: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588F04A4: pop esi
        __asm _emit 0x5E
        // 0x588F04A5: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588F04A8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F04AA: pop ebp
        __asm _emit 0x5D
        // 0x588F04AB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F04AE: cmp ebp, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xA9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F04B4: jne 0x588f04d5
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x588F04B6: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588F04BA: mov edx, 0xe7ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE7
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F04BF: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588F04C2: mov edx, 0x700
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F04C7: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588F04CA: pop esi
        __asm _emit 0x5E
        // 0x588F04CB: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588F04CF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F04D1: pop ebp
        __asm _emit 0x5D
        // 0x588F04D2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F04D5: cmp ebp, dword ptr [ecx + 0x2b4]
        __asm _emit 0x3B
        __asm _emit 0xA9
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F04DB: jne 0x588f04e9
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588F04DD: call 0x588eff30
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F04E2: pop esi
        __asm _emit 0x5E
        // 0x588F04E3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F04E5: pop ebp
        __asm _emit 0x5D
        // 0x588F04E6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F04E9: cmp ebp, dword ptr [ecx + 0x2b8]
        __asm _emit 0x3B
        __asm _emit 0xA9
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F04EF: jne 0x588f04fd
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588F04F1: call 0x588f0150
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F04F6: pop esi
        __asm _emit 0x5E
        // 0x588F04F7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F04F9: pop ebp
        __asm _emit 0x5D
        // 0x588F04FA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F04FD: cmp ebp, dword ptr [ecx + 0x2d8]
        __asm _emit 0x3B
        __asm _emit 0xA9
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0503: jne 0x588f0517
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588F0505: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F050B: call 0x587d8840
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588F0510: pop esi
        __asm _emit 0x5E
        // 0x588F0511: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F0513: pop ebp
        __asm _emit 0x5D
        // 0x588F0514: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F0517: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F051C: cmp dword ptr [eax + 0xd78], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0523: je 0x588f07b8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0529: cmp dword ptr [0x58a248d8], 1
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x588F0530: je 0x588f07b8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0536: push ebx
        __asm _emit 0x53
        // 0x588F0537: push edi
        __asm _emit 0x57
        // 0x588F0538: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F053A: lea edi, [ecx + 0x134]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0540: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x588F0542: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x588F0544: jne 0x588f055b
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x588F0546: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F054C: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588F054F: push ecx
        __asm _emit 0x51
        // 0x588F0550: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F0552: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x0F
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F0557: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F0559: jne 0x588f0580
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x588F055B: mov ecx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0561: cmp ebp, ecx
        __asm _emit 0x3B
        __asm _emit 0xE9
        // 0x588F0563: jne 0x588f0661
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0569: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F056F: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588F0572: push edx
        __asm _emit 0x52
        // 0x588F0573: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x0F
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F0578: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F057A: je 0x588f0661
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0580: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0585: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F058B: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0591: movzx edx, word ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x588F0595: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588F0598: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588F059B: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x588F059D: jge 0x588f05b2
        __asm _emit 0x7D
        __asm _emit 0x13
        // 0x588F059F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F05A1: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x588F05A3: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x588F05A6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F05A8: push edx
        __asm _emit 0x52
        // 0x588F05A9: push ebx
        __asm _emit 0x53
        // 0x588F05AA: push ecx
        __asm _emit 0x51
        // 0x588F05AB: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x588F05AD: jmp 0x588f0691
        __asm _emit 0xE9
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F05B2: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x588F05B4: jne 0x588f05cc
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x588F05B6: mov edx, dword ptr [edi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F05BC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F05BE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F05C0: add edx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x1C
        // 0x588F05C3: push edx
        __asm _emit 0x52
        // 0x588F05C4: push ecx
        __asm _emit 0x51
        // 0x588F05C5: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x588F05C7: jmp 0x588f0691
        __asm _emit 0xE9
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F05CC: cmp ebp, dword ptr [edi + 0x80]
        __asm _emit 0x3B
        __asm _emit 0xAF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F05D2: jne 0x588f069c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F05D8: mov eax, dword ptr [edi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F05DE: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F05E0: sub edx, 0
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x00
        // 0x588F05E3: je 0x588f064f
        __asm _emit 0x74
        __asm _emit 0x6A
        // 0x588F05E5: sub edx, 2
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x02
        // 0x588F05E8: je 0x588f0636
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x588F05EA: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588F05ED: jne 0x588f069c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F05F3: call 0x588e65d0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x5F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F05F8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F05FA: je 0x588f0618
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588F05FC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F05FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F0600: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F0602: push 0x494
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0607: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xB4
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F060C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F060E: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x47
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F0613: jmp 0x588f069c
        __asm _emit 0xE9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0618: mov eax, dword ptr [edi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F061E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F0620: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F0622: add eax, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1C
        // 0x588F0625: push eax
        __asm _emit 0x50
        // 0x588F0626: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F062B: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0631: push ecx
        __asm _emit 0x51
        // 0x588F0632: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x588F0634: jmp 0x588f0691
        __asm _emit 0xEB
        __asm _emit 0x5B
        // 0x588F0636: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F063C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F063E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F0640: add eax, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1C
        // 0x588F0643: push eax
        __asm _emit 0x50
        // 0x588F0644: push ecx
        __asm _emit 0x51
        // 0x588F0645: mov ecx, dword ptr [edx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F064B: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x588F064D: jmp 0x588f0697
        __asm _emit 0xEB
        __asm _emit 0x48
        // 0x588F064F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F0651: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F0653: add eax, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1C
        // 0x588F0656: push eax
        __asm _emit 0x50
        // 0x588F0657: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F065C: push ecx
        __asm _emit 0x51
        // 0x588F065D: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x588F065F: jmp 0x588f0691
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x588F0661: mov ecx, dword ptr [edi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0667: cmp ebp, ecx
        __asm _emit 0x3B
        __asm _emit 0xE9
        // 0x588F0669: jne 0x588f069c
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x588F066B: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0671: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588F0674: push edx
        __asm _emit 0x52
        // 0x588F0675: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x0E
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x588F067A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F067C: je 0x588f069c
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588F067E: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0683: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0689: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F068B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F068D: push ebx
        __asm _emit 0x53
        // 0x588F068E: push ecx
        __asm _emit 0x51
        // 0x588F068F: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x588F0691: mov ecx, dword ptr [eax + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0697: call 0x58798d60
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x86
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588F069C: inc ebx
        __asm _emit 0x43
        // 0x588F069D: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588F06A0: cmp ebx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x20
        // 0x588F06A3: jl 0x588f0540
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F06A9: pop edi
        __asm _emit 0x5F
        // 0x588F06AA: pop ebx
        __asm _emit 0x5B
        // 0x588F06AB: pop esi
        __asm _emit 0x5E
        // 0x588F06AC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F06AE: pop ebp
        __asm _emit 0x5D
        // 0x588F06AF: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F06B2: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588F06B5: jne 0x588f07a3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F06BB: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F06BF: cmp esi, dword ptr [ecx + 0x90]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F06C5: jne 0x588f06e6
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x588F06C7: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F06CD: push 0x589a1934
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F06D2: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x588F06D4: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F06D9: push esi
        __asm _emit 0x56
        // 0x588F06DA: call 0x587626c0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x1F
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F06DF: pop esi
        __asm _emit 0x5E
        // 0x588F06E0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F06E2: pop ebp
        __asm _emit 0x5D
        // 0x588F06E3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F06E6: cmp esi, dword ptr [ecx + 0x94]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F06EC: jne 0x588f070d
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x588F06EE: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F06F4: push 0x589a1924
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x19
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F06F9: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x588F06FB: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0700: push esi
        __asm _emit 0x56
        // 0x588F0701: call 0x587626c0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x1F
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F0706: pop esi
        __asm _emit 0x5E
        // 0x588F0707: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F0709: pop ebp
        __asm _emit 0x5D
        // 0x588F070A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F070D: cmp esi, dword ptr [ecx + 0x2b4]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0713: jne 0x588f071c
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588F0715: push 0x58998488
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588F071A: jmp 0x588f0729
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x588F071C: cmp esi, dword ptr [ecx + 0x2b8]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0722: jne 0x588f074d
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x588F0724: push 0x5899846c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588F0729: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F072F: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F0735: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F0738: push eax
        __asm _emit 0x50
        // 0x588F0739: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x588F073B: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0740: push esi
        __asm _emit 0x56
        // 0x588F0741: call 0x587626c0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x1F
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F0746: pop esi
        __asm _emit 0x5E
        // 0x588F0747: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F0749: pop ebp
        __asm _emit 0x5D
        // 0x588F074A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F074D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588F074F: lea eax, [ecx + 0x1b4]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0755: cmp esi, dword ptr [eax - 0x80]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x80
        // 0x588F0758: je 0x588f077d
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588F075A: cmp esi, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x30
        // 0x588F075C: je 0x588f077d
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x588F075E: cmp esi, dword ptr [eax + 0x80]
        __asm _emit 0x3B
        __asm _emit 0xB0
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0764: je 0x588f0776
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588F0766: inc edx
        __asm _emit 0x42
        // 0x588F0767: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588F076A: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x588F076D: jl 0x588f0755
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x588F076F: pop esi
        __asm _emit 0x5E
        // 0x588F0770: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F0772: pop ebp
        __asm _emit 0x5D
        // 0x588F0773: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F0776: push 0x589a1908
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x19
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F077B: jmp 0x588f0782
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588F077D: push 0x589a18e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F0782: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F0788: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F078E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F0791: push eax
        __asm _emit 0x50
        // 0x588F0792: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x588F0794: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x588F0796: push esi
        __asm _emit 0x56
        // 0x588F0797: call 0x587626c0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x1F
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F079C: pop esi
        __asm _emit 0x5E
        // 0x588F079D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F079F: pop ebp
        __asm _emit 0x5D
        // 0x588F07A0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588F07A3: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588F07A6: jne 0x588f07b8
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588F07A8: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F07AC: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F07B2: push edx
        __asm _emit 0x52
        // 0x588F07B3: call 0x58762610
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x1E
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F07B8: pop esi
        __asm _emit 0x5E
        // 0x588F07B9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F07BB: pop ebp
        __asm _emit 0x5D
        // 0x588F07BC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
