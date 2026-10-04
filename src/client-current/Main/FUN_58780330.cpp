// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58780330 .. +0x303 bytes.
// Source symbol alias: FUN_58780330.
extern "C" __declspec(naked) void FUN_58780330() {
    __asm {
        // 0x58780330: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58780334: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58780337: push ebp
        __asm _emit 0x55
        // 0x58780338: push esi
        __asm _emit 0x56
        // 0x58780339: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878033B: add dword ptr [esi + 0xac], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780341: cmp byte ptr [esi + 0x5c], 0x18
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x5C
        __asm _emit 0x18
        // 0x58780345: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878034B: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780350: jae 0x5878058a
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780356: push ebx
        __asm _emit 0x53
        // 0x58780357: push edi
        __asm _emit 0x57
        // 0x58780358: mov edi, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878035E: mov eax, 0xaaaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58780363: mul edi
        __asm _emit 0xF7
        __asm _emit 0xE7
        // 0x58780365: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58780367: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58780369: ja 0x5878038c
        __asm _emit 0x77
        __asm _emit 0x21
        // 0x5878036B: lea edx, [edi + edi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x3F
        // 0x5878036E: mov eax, 0xaaaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58780373: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58780375: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58780377: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58780379: jae 0x5878038c
        __asm _emit 0x73
        __asm _emit 0x11
        // 0x5878037B: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5878037E: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780385: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878038A: jmp 0x587803ab
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5878038C: lea edx, [edi + edi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x3F
        // 0x5878038F: mov eax, 0xaaaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58780394: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58780396: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58780398: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5878039A: ja 0x587803ab
        __asm _emit 0x77
        __asm _emit 0x0F
        // 0x5878039C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5878039E: ja 0x587803ab
        __asm _emit 0x77
        __asm _emit 0x0B
        // 0x587803A0: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587803A3: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x587803A6: mov ebp, 8
        __asm _emit 0xBD
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587803AB: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587803B1: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x587803B4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587803B6: div dword ptr [esi + 0xa8]
        __asm _emit 0xF7
        __asm _emit 0xB6
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587803BC: movzx ecx, byte ptr [esi + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x587803C0: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587803C8: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587803CA: shr ebx, 2
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587803CD: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x587803CF: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587803D1: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587803D5: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587803D7: jle 0x58780585
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587803DD: movzx edi, bp
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xFD
        // 0x587803E0: mov ebp, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587803E6: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587803EA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587803F0: mov ecx, dword ptr [ebp + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587803F6: add ecx, dword ptr [ebp + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587803FC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587803FE: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58780400: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x58780403: add eax, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58780407: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58780409: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878040F: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58780414: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x58780417: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58780419: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x5878041B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878041D: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5878041F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58780421: jle 0x5878056c
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780427: cmp byte ptr [esi + ecx + 0x5d], 3
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x5D
        __asm _emit 0x03
        // 0x5878042C: jb 0x58780446
        __asm _emit 0x72
        __asm _emit 0x18
        // 0x5878042E: inc ecx
        __asm _emit 0x41
        // 0x5878042F: and ecx, 0x80000007
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58780435: jns 0x5878043c
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58780437: dec ecx
        __asm _emit 0x49
        // 0x58780438: or ecx, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xF8
        // 0x5878043B: inc ecx
        __asm _emit 0x41
        // 0x5878043C: inc eax
        __asm _emit 0x40
        // 0x5878043D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5878043F: jl 0x58780427
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x58780441: jmp 0x5878056c
        __asm _emit 0xE9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780446: inc byte ptr [esi + ecx + 0x5d]
        __asm _emit 0xFE
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x5D
        // 0x5878044A: movzx eax, byte ptr [esi + ecx + 0x5d]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x5D
        // 0x5878044F: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x58780452: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x58780455: add eax, 0xec
        __asm _emit 0x05
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878045A: cmp dword ptr [edx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780460: jle 0x58780477
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x58780462: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58780464: jl 0x58780477
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x58780466: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878046C: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5878046E: je 0x58780477
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58780470: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x58780473: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58780475: jmp 0x58780479
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58780477: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58780479: mov edx, dword ptr [esi + ecx*8 + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0xCE
        __asm _emit 0x68
        // 0x5878047D: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x58780480: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58780482: je 0x587804ac
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58780484: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58780487: mov dword ptr [edx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x5878048A: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x5878048D: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58780490: mov dword ptr [edx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x10
        // 0x58780493: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x58780495: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x58780498: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x5878049A: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5878049D: mov dword ptr [edx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x587804A0: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587804A3: mov dword ptr [edx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x587804A6: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587804A9: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587804AC: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587804B0: lea ebp, [ebx + edx]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x13
        // 0x587804B3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587804B5: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587804B7: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587804BD: mov edi, dword ptr [esi + ecx*8 + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0xCE
        __asm _emit 0x68
        // 0x587804C1: mov eax, dword ptr [edi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x587804C4: movzx ebx, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x587804C8: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587804CD: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x587804D0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587804D2: div ebx
        __asm _emit 0xF7
        __asm _emit 0xF3
        // 0x587804D4: mov dword ptr [edi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x50
        // 0x587804D7: movzx eax, byte ptr [esi + ecx + 0x5d]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x5D
        // 0x587804DC: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x587804DF: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587804E2: add eax, 0xef
        __asm _emit 0x05
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587804E7: cmp dword ptr [edx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587804ED: jle 0x58780504
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x587804EF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587804F1: jl 0x58780504
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x587804F3: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587804F9: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587804FB: je 0x58780504
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587804FD: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x58780500: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58780502: jmp 0x58780506
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58780504: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58780506: mov edx, dword ptr [esi + ecx*8 + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0xCE
        __asm _emit 0x6C
        // 0x5878050A: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x5878050D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878050F: je 0x5878053a
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58780511: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58780514: mov dword ptr [edx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x58780517: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x5878051A: mov dword ptr [edx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x10
        // 0x5878051D: mov edi, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x20
        // 0x58780520: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58780523: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x58780526: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x58780528: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5878052B: mov dword ptr [edx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x5878052E: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58780531: mov dword ptr [edx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x58780534: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58780537: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5878053A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5878053C: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5878053E: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58780544: mov ecx, dword ptr [esi + ecx*8 + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xCE
        __asm _emit 0x6C
        // 0x58780548: mov eax, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5878054B: movzx edi, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x5878054F: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58780554: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58780558: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x5878055B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5878055D: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x5878055F: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58780563: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x58780566: mov ebp, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878056C: movzx ecx, byte ptr [esi + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x58780570: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58780574: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x58780576: inc eax
        __asm _emit 0x40
        // 0x58780577: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58780579: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5878057B: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878057F: jl 0x587803f0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x6B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58780585: pop edi
        __asm _emit 0x5F
        // 0x58780586: mov byte ptr [esi + 0x5c], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x58780589: pop ebx
        __asm _emit 0x5B
        // 0x5878058A: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878058F: cmp word ptr [eax + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58780597: jne 0x5878062b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878059D: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587805A3: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587805A5: sub eax, dword ptr [esi + 0xac]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587805AB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587805AD: imul eax, eax, 0xb54
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x54
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587805B3: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x587805B5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587805B7: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587805BC: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x587805BE: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587805C4: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x587805C7: mov eax, 0x1d
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587805CC: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587805CE: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587805D1: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587805D7: cmp dword ptr [eax + 0x50], 0x1d
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x1D
        // 0x587805DB: jne 0x587805f2
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x587805DD: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587805E3: cmp edx, dword ptr [esi + 0xa8]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587805E9: jae 0x587805f2
        __asm _emit 0x73
        __asm _emit 0x07
        // 0x587805EB: mov dword ptr [eax + 0x50], 0x1c
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587805F2: cmp byte ptr [esi + 0xcc], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587805F9: jne 0x5878062b
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x587805FB: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780601: cmp eax, dword ptr [esi + 0xac]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780607: ja 0x5878062b
        __asm _emit 0x77
        __asm _emit 0x22
        // 0x58780609: cmp byte ptr [esi + 0xc4], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780610: jne 0x5878062b
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58780612: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58780618: push ecx
        __asm _emit 0x51
        // 0x58780619: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878061F: call 0x587ba230
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x9C
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58780624: mov byte ptr [esi + 0xcc], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5878062B: pop esi
        __asm _emit 0x5E
        // 0x5878062C: pop ebp
        __asm _emit 0x5D
        // 0x5878062D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58780630: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
