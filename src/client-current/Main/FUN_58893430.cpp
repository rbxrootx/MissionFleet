// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58893430 .. +0x430 bytes.
// Source symbol alias: FUN_58893430.
extern "C" __declspec(naked) void FUN_58893430() {
    __asm {
        // 0x58893430: push esi
        __asm _emit 0x56
        // 0x58893431: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58893433: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58893437: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58893439: je 0x58893858
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889343F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58893443: push ebx
        __asm _emit 0x53
        // 0x58893444: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893449: push ebp
        __asm _emit 0x55
        // 0x5889344A: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5889344D: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893452: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58893454: push edi
        __asm _emit 0x57
        // 0x58893455: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889345A: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5889345D: je 0x58893474
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5889345F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58893463: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58893466: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889346B: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5889346E: jne 0x588935cb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893474: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58893477: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5889347A: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5889347C: jne 0x58893486
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5889347E: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58893481: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58893484: je 0x58893503
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x58893486: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58893488: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5889348B: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5889348E: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x58893491: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x58893494: ja 0x588934b9
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x58893496: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x58893499: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5889349C: ja 0x588934b0
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x5889349E: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588934A0: jge 0x588934a7
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588934A2: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x588934A5: jmp 0x588934c4
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588934A7: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588934A9: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588934AB: setg bl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC3
        // 0x588934AE: jmp 0x588934c4
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588934B0: cdq
        __asm _emit 0x99
        // 0x588934B1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588934B3: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588934B5: sar ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xFB
        // 0x588934B7: jmp 0x588934c4
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588934B9: cdq
        __asm _emit 0x99
        // 0x588934BA: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588934BD: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588934BF: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588934C1: sar ebx, 2
        __asm _emit 0xC1
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x588934C4: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x588934C7: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x588934CA: ja 0x588934ef
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x588934CC: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x588934CF: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588934D2: ja 0x588934e6
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x588934D4: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588934D6: jge 0x588934dd
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588934D8: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588934DB: jmp 0x588934fa
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588934DD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588934DF: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588934E1: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x588934E4: jmp 0x588934fa
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588934E6: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588934E8: cdq
        __asm _emit 0x99
        // 0x588934E9: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588934EB: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588934ED: jmp 0x588934fa
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588934EF: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588934F1: cdq
        __asm _emit 0x99
        // 0x588934F2: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588934F5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588934F7: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588934FA: push eax
        __asm _emit 0x50
        // 0x588934FB: push ebx
        __asm _emit 0x53
        // 0x588934FC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588934FE: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xF9
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893503: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58893506: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58893509: jne 0x588935cb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889350F: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58893512: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58893515: jne 0x588935cb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889351B: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5889351F: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893524: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58893527: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889352C: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5889352F: jne 0x5889358e
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x58893531: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58893535: mov eax, 0xe2ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889353A: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5889353D: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893542: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x58893545: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58893549: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5889354E: mov dword ptr [esi + 0x174], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893554: mov dword ptr [esi + 0x170], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889355A: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889355F: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x58893562: sub edx, dword ptr [eax + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58893565: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x58893568: sub ecx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5889356B: sub edx, 0x23
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x23
        // 0x5889356E: add ecx, -0x80
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x80
        // 0x58893571: push edx
        __asm _emit 0x52
        // 0x58893572: push ecx
        __asm _emit 0x51
        // 0x58893573: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58893576: call 0x587b67a0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x32
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5889357B: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5889357E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58893580: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58893583: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58893585: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58893587: call 0x5888d660
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xA0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889358C: jmp 0x588935cb
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x5889358E: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58893592: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58893594: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58893597: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889359C: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5889359F: jne 0x588935cb
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x588935A1: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588935A5: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588935AA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588935AD: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588935B2: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588935B5: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588935B9: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588935BE: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588935C2: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588935C7: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588935CB: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588935CF: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588935D4: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588935D7: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588935DC: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588935DF: jne 0x58893837
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588935E5: cmp dword ptr [esi + 0x174], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588935EB: je 0x5889365a
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x588935ED: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588935F3: mov eax, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588935F9: sub eax, dword ptr [ecx + 4]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588935FC: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x588935FE: setns bl
        __asm _emit 0x0F
        __asm _emit 0x99
        __asm _emit 0xC3
        // 0x58893601: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x58893604: lea ebx, [ebx + ebx - 1]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0x1B
        __asm _emit 0xFF
        // 0x58893608: jle 0x58893611
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x5889360A: mov eax, 0x10
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889360F: jmp 0x5889361b
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58893611: cmp eax, -0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xF0
        // 0x58893614: jge 0x5889361b
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58893616: mov eax, 0xfffffff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889361B: push eax
        __asm _emit 0x50
        // 0x5889361C: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xF8
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893621: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893627: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5889362A: cmp eax, dword ptr [esi + 0x170]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893630: jne 0x5889365a
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x58893632: push edi
        __asm _emit 0x57
        // 0x58893633: mov dword ptr [esi + 0x174], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893639: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x07
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5889363E: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x58893640: jle 0x5889365a
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58893642: mov ecx, dword ptr [esi + 0x180]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893648: push edi
        __asm _emit 0x57
        // 0x58893649: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xDF
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889364E: mov ecx, dword ptr [esi + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893654: push edi
        __asm _emit 0x57
        // 0x58893655: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xDF
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889365A: cmp dword ptr [esi + 0x178], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893660: je 0x5889372e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893666: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889366C: call 0x58793e10
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x07
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58893671: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58893673: jne 0x5889372e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893679: mov eax, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889367F: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58893683: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893689: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5889368C: je 0x588936ab
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5889368E: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58893691: je 0x588936ab
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58893693: mov ecx, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893699: push edi
        __asm _emit 0x57
        // 0x5889369A: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xDF
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889369F: mov ecx, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588936A5: push edi
        __asm _emit 0x57
        // 0x588936A6: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xDF
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588936AB: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588936B1: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588936B5: mov eax, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588936BB: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588936BF: mov eax, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588936C5: mov dword ptr [esi + 0x178], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588936CB: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588936D0: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588936D4: mov eax, dword ptr [esi + 0x4b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588936DA: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588936DE: mov eax, dword ptr [esi + 0x4b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588936E4: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588936E8: mov eax, dword ptr [esi + 0x4bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588936EE: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588936F2: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588936F8: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588936FC: mov eax, dword ptr [esi + 0x498]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893702: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58893706: mov eax, dword ptr [esi + 0x49c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889370C: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58893710: mov eax, dword ptr [esi + 0x4a4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893716: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5889371A: mov eax, dword ptr [esi + 0x4a8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893720: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58893724: mov eax, dword ptr [esi + 0x4f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889372A: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5889372E: cmp dword ptr [esi + 0x4ac], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893734: je 0x58893837
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889373A: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58893740: mov ecx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893746: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58893749: push edi
        __asm _emit 0x57
        // 0x5889374A: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xDD
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889374F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58893751: je 0x5889376a
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58893753: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893759: call 0x58908650
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x4E
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5889375E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58893760: call 0x5888d5c0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x9E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58893765: jmp 0x58893837
        __asm _emit 0xE9
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889376A: mov ecx, dword ptr [esi + 0x4b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893770: push edi
        __asm _emit 0x57
        // 0x58893771: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xDD
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58893776: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58893778: je 0x588937ad
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5889377A: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893780: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893786: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x49
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5889378B: add edi, -9
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xF7
        // 0x5889378E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58893790: jge 0x58893837
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893796: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889379C: call 0x589086f0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x4F
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588937A1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588937A3: call 0x5888d5c0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x9E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588937A8: jmp 0x58893837
        __asm _emit 0xE9
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588937AD: mov ecx, dword ptr [esi + 0x4b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588937B3: push edi
        __asm _emit 0x57
        // 0x588937B4: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xDD
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588937B9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588937BB: je 0x588937e3
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588937BD: mov ecx, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588937C3: call 0x58908650
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x4E
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588937C8: mov ecx, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588937CE: call 0x58908650
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x4E
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588937D3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588937D5: call 0x5888cee0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x97
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588937DA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588937DC: call 0x5888d5c0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x9D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588937E1: jmp 0x58893837
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x588937E3: mov ecx, dword ptr [esi + 0x4bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588937E9: push edi
        __asm _emit 0x57
        // 0x588937EA: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xDD
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588937EF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588937F1: je 0x58893831
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588937F3: mov ecx, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588937F9: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588937FF: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x49
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58893804: add edi, -6
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xFA
        // 0x58893807: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58893809: jge 0x58893837
        __asm _emit 0x7D
        __asm _emit 0x2C
        // 0x5889380B: mov ecx, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893811: call 0x589086f0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x4E
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58893816: mov ecx, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889381C: call 0x589086f0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x4E
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58893821: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58893823: call 0x5888cee0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x96
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58893828: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889382A: call 0x5888d5c0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x9D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889382F: jmp 0x58893837
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58893831: mov dword ptr [esi + 0x4ac], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893837: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5889383A: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5889383C: je 0x58893855
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5889383E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58893840: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x58893843: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58893845: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58893848: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5889384B: je 0x5889385a
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5889384D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5889384F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58893851: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x58893853: jne 0x58893840
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58893855: pop edi
        __asm _emit 0x5F
        // 0x58893856: pop ebp
        __asm _emit 0x5D
        // 0x58893857: pop ebx
        __asm _emit 0x5B
        // 0x58893858: pop esi
        __asm _emit 0x5E
        // 0x58893859: ret
        __asm _emit 0xC3
        // 0x5889385A: pop edi
        __asm _emit 0x5F
        // 0x5889385B: pop ebp
        __asm _emit 0x5D
        // 0x5889385C: pop ebx
        __asm _emit 0x5B
        // 0x5889385D: pop esi
        __asm _emit 0x5E
        // 0x5889385E: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
