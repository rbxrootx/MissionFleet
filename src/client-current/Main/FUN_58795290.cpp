// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58795290 .. +0x40E bytes.
// Source symbol alias: FUN_58795290.
extern "C" __declspec(naked) void FUN_58795290() {
    __asm {
        // 0x58795290: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58795293: push ebx
        __asm _emit 0x53
        // 0x58795294: push ebp
        __asm _emit 0x55
        // 0x58795295: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58795299: push esi
        __asm _emit 0x56
        // 0x5879529A: push edi
        __asm _emit 0x57
        // 0x5879529B: push ebp
        __asm _emit 0x55
        // 0x5879529C: call 0x587950d0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587952A1: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587952A5: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587952A8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587952AA: movzx ebx, word ptr [ebp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x587952AE: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587952B2: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587952B5: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587952B8: mov di, ax
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587952BB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587952BE: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587952C2: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587952C6: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587952CA: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x587952CD: jbe 0x58795421
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x4E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587952D3: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587952D5: shr eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x10
        // 0x587952D8: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587952DB: jbe 0x587952f3
        __asm _emit 0x76
        __asm _emit 0x16
        // 0x587952DD: lea edx, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xFF
        // 0x587952E0: add di, 0x3c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x3C
        // 0x587952E4: mov word ptr [esp + 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x587952E9: mov word ptr [esp + 0x1c], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587952EE: jmp 0x5879542b
        __asm _emit 0xE9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587952F3: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587952F6: jbe 0x5879531d
        __asm _emit 0x76
        __asm _emit 0x25
        // 0x587952F8: mov edx, 0xffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587952FD: add cx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58795300: mov edx, 0x3b
        __asm _emit 0xBA
        __asm _emit 0x3B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795305: add di, 0x3c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x3C
        // 0x58795309: mov word ptr [esp + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5879530E: mov word ptr [esp + 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x58795313: mov word ptr [esp + 0x1c], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58795318: jmp 0x5879542b
        __asm _emit 0xE9
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879531D: cmp word ptr [esp + 0x14], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58795323: jbe 0x58795331
        __asm _emit 0x76
        __asm _emit 0x0C
        // 0x58795325: mov eax, 0xffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879532A: add word ptr [esp + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879532F: jmp 0x5879533b
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58795331: mov ecx, 6
        __asm _emit 0xB9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795336: mov word ptr [esp + 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879533B: mov ax, word ptr [esp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x58795340: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58795344: jbe 0x58795370
        __asm _emit 0x76
        __asm _emit 0x2A
        // 0x58795346: mov edx, 0xffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879534B: add ax, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5879534E: mov ecx, 0x17
        __asm _emit 0xB9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795353: mov edx, 0x3b
        __asm _emit 0xBA
        __asm _emit 0x3B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795358: add di, 0x3c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x3C
        // 0x5879535C: mov word ptr [esp + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58795361: mov word ptr [esp + 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x58795366: mov word ptr [esp + 0x1c], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5879536B: jmp 0x58795430
        __asm _emit 0xE9
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795370: shr edx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x10
        // 0x58795373: cmp dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x58795377: jbe 0x587953eb
        __asm _emit 0x76
        __asm _emit 0x72
        // 0x58795379: lea esi, [edx - 1]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0xFF
        // 0x5879537C: mov word ptr [esp + 0x12], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58795381: cmp si, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x58795385: je 0x587953c7
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x58795387: cmp si, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x06
        // 0x5879538B: je 0x587953c7
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5879538D: cmp si, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x09
        // 0x58795391: je 0x587953c7
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58795393: cmp si, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0B
        // 0x58795397: je 0x587953c7
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58795399: cmp si, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x5879539D: jne 0x587953c0
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5879539F: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587953A4: and eax, 0x80000003
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587953A9: jns 0x587953b0
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x587953AB: dec eax
        __asm _emit 0x48
        // 0x587953AC: or eax, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFC
        // 0x587953AF: inc eax
        __asm _emit 0x40
        // 0x587953B0: jne 0x587953b9
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587953B2: mov eax, 0x1d
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587953B7: jmp 0x587953cc
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587953B9: mov eax, 0x1c
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587953BE: jmp 0x587953cc
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587953C0: mov eax, 0x1f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587953C5: jmp 0x587953cc
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587953C7: mov eax, 0x1e
        __asm _emit 0xB8
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587953CC: mov ecx, 0x17
        __asm _emit 0xB9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587953D1: mov edx, 0x3b
        __asm _emit 0xBA
        __asm _emit 0x3B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587953D6: add di, 0x3c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x3C
        // 0x587953DA: mov word ptr [esp + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587953DF: mov word ptr [esp + 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x587953E4: mov word ptr [esp + 0x1c], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587953E9: jmp 0x58795435
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x587953EB: mov ecx, 0xffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587953F0: add word ptr [esp + 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587953F5: mov esi, 0xc
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587953FA: mov ecx, 0x17
        __asm _emit 0xB9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587953FF: mov edx, 0x3b
        __asm _emit 0xBA
        __asm _emit 0x3B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795404: add di, 0x3c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x3C
        // 0x58795408: mov word ptr [esp + 0x12], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5879540D: lea eax, [esi + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x13
        // 0x58795410: mov word ptr [esp + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58795415: mov word ptr [esp + 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x5879541A: mov word ptr [esp + 0x1c], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5879541F: jmp 0x58795435
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58795421: mov dx, word ptr [esp + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x58795426: mov cx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5879542B: mov ax, word ptr [esp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x58795430: mov si, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58795435: cmp di, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58795438: jb 0x58795442
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x5879543A: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5879543E: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x58795440: jmp 0x58795444
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58795442: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58795444: movzx ebx, word ptr [ebp + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5D
        __asm _emit 0x0A
        // 0x58795448: mov word ptr [ebp + 0xc], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5879544C: cmp bx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x5879544F: jbe 0x5879551b
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795455: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58795458: jbe 0x58795467
        __asm _emit 0x76
        __asm _emit 0x0D
        // 0x5879545A: mov edi, 0xffff
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879545F: add cx, di
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x58795462: jmp 0x5879550d
        __asm _emit 0xE9
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795467: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5879546B: jbe 0x5879547a
        __asm _emit 0x76
        __asm _emit 0x0D
        // 0x5879546D: mov ecx, 0xffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795472: add ax, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58795475: jmp 0x58795508
        __asm _emit 0xE9
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879547A: mov eax, 0xffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879547F: cmp si, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x58795483: jbe 0x587954f6
        __asm _emit 0x76
        __asm _emit 0x71
        // 0x58795485: add si, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x58795488: mov word ptr [esp + 0x12], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5879548D: cmp si, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x58795491: je 0x587954d7
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x58795493: cmp si, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x06
        // 0x58795497: je 0x587954d7
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58795499: cmp si, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x09
        // 0x5879549D: je 0x587954d7
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5879549F: cmp si, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0B
        // 0x587954A3: je 0x587954d7
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x587954A5: mov di, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587954AA: cmp si, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587954AE: jne 0x587954d0
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x587954B0: movzx ecx, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCF
        // 0x587954B3: and ecx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587954B9: jns 0x587954c0
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x587954BB: dec ecx
        __asm _emit 0x49
        // 0x587954BC: or ecx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFC
        // 0x587954BF: inc ecx
        __asm _emit 0x41
        // 0x587954C0: jne 0x587954c9
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587954C2: mov eax, 0x1d
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587954C7: jmp 0x587954e1
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x587954C9: mov eax, 0x1c
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587954CE: jmp 0x587954e1
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x587954D0: mov eax, 0x1f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587954D5: jmp 0x587954e1
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587954D7: mov di, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587954DC: mov eax, 0x1e
        __asm _emit 0xB8
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587954E1: mov ecx, 0x17
        __asm _emit 0xB9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587954E6: add dx, 0x3c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x3C
        // 0x587954EA: mov word ptr [esp + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587954EF: mov word ptr [esp + 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x587954F4: jmp 0x58795520
        __asm _emit 0xEB
        __asm _emit 0x2A
        // 0x587954F6: add word ptr [esp + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587954FB: mov esi, 0xc
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795500: mov word ptr [esp + 0x12], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58795505: lea eax, [esi + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x13
        // 0x58795508: mov ecx, 0x17
        __asm _emit 0xB9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879550D: add dx, 0x3c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x3C
        // 0x58795511: mov word ptr [esp + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58795516: mov word ptr [esp + 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x5879551B: mov di, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58795520: cmp dx, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x58795523: jb 0x58795531
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x58795525: mov edx, dword ptr [esp + 0x1a]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x58795529: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x5879552B: mov word ptr [ebp + 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x0A
        // 0x5879552F: jmp 0x58795533
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58795531: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58795533: movzx edx, word ptr [ebp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x58795537: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5879553A: jae 0x587955c7
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795540: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58795544: jbe 0x58795550
        __asm _emit 0x76
        __asm _emit 0x0A
        // 0x58795546: mov ebx, 0xffff
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879554B: add ax, bx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5879554E: jmp 0x587955b9
        __asm _emit 0xEB
        __asm _emit 0x69
        // 0x58795550: mov eax, 0xffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795555: cmp si, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x58795559: jbe 0x587955a7
        __asm _emit 0x76
        __asm _emit 0x4C
        // 0x5879555B: add si, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5879555E: mov word ptr [esp + 0x12], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58795563: cmp si, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x58795567: je 0x587955a0
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x58795569: cmp si, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x06
        // 0x5879556D: je 0x587955a0
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5879556F: cmp si, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x09
        // 0x58795573: je 0x587955a0
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58795575: cmp si, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0B
        // 0x58795579: je 0x587955a0
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5879557B: cmp si, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x5879557F: jne 0x587955b4
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x58795581: movzx eax, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC7
        // 0x58795584: and eax, 0x80000003
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58795589: jns 0x58795590
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x5879558B: dec eax
        __asm _emit 0x48
        // 0x5879558C: or eax, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFC
        // 0x5879558F: inc eax
        __asm _emit 0x40
        // 0x58795590: jne 0x58795599
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58795592: mov eax, 0x1d
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795597: jmp 0x587955b9
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x58795599: mov eax, 0x1c
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879559E: jmp 0x587955b9
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x587955A0: mov eax, 0x1e
        __asm _emit 0xB8
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587955A5: jmp 0x587955b9
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x587955A7: mov esi, 0xc
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587955AC: add di, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587955AF: mov word ptr [esp + 0x12], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x587955B4: mov eax, 0x1f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587955B9: add cx, 0x18
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x587955BD: mov word ptr [esp + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587955C2: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587955C5: jb 0x587955cf
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x587955C7: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587955CB: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587955CD: jmp 0x587955d1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587955CF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587955D1: mov word ptr [ebp + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587955D5: cmp word ptr [ebp + 6], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x06
        // 0x587955D9: jbe 0x58795641
        __asm _emit 0x76
        __asm _emit 0x66
        // 0x587955DB: mov edx, 0xffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587955E0: cmp si, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587955E4: jbe 0x58795630
        __asm _emit 0x76
        __asm _emit 0x4A
        // 0x587955E6: add si, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x587955E9: mov word ptr [esp + 0x12], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x587955EE: cmp si, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x587955F2: je 0x5879562a
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x587955F4: cmp si, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x06
        // 0x587955F8: je 0x5879562a
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x587955FA: cmp si, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x09
        // 0x587955FE: je 0x5879562a
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58795600: cmp si, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0B
        // 0x58795604: je 0x5879562a
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58795606: cmp si, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x5879560A: jne 0x5879563d
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x5879560C: movzx ecx, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCF
        // 0x5879560F: and ecx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58795615: jns 0x5879561c
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58795617: dec ecx
        __asm _emit 0x49
        // 0x58795618: or ecx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFC
        // 0x5879561B: inc ecx
        __asm _emit 0x41
        // 0x5879561C: jne 0x58795624
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5879561E: add ax, 0x1d
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1D
        // 0x58795622: jmp 0x58795641
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x58795624: add ax, 0x1c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1C
        // 0x58795628: jmp 0x58795641
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x5879562A: add ax, 0x1e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1E
        // 0x5879562E: jmp 0x58795641
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x58795630: mov esi, 0xc
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795635: add di, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58795638: mov word ptr [esp + 0x12], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5879563D: add ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1F
        // 0x58795641: mov cx, ax
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58795644: sub cx, word ptr [ebp + 6]
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x06
        // 0x58795648: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5879564B: mov word ptr [ebp + 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x06
        // 0x5879564F: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x58795652: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58795654: cdq
        __asm _emit 0x99
        // 0x58795655: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879565A: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5879565C: add dx, word ptr [ebp + 4]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58795660: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x58795663: cdq
        __asm _emit 0x99
        // 0x58795664: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58795666: movzx eax, word ptr [ebp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x02
        // 0x5879566A: mov word ptr [ebp + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x5879566E: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58795671: jbe 0x58795684
        __asm _emit 0x76
        __asm _emit 0x11
        // 0x58795673: mov edx, 0xffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795678: add di, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5879567B: add si, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x5879567F: mov word ptr [esp + 0x12], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58795684: mov ecx, dword ptr [esp + 0x12]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58795688: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5879568A: sub di, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x5879568E: mov word ptr [ebp + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x02
        // 0x58795692: mov word ptr [ebp], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x58795696: pop edi
        __asm _emit 0x5F
        // 0x58795697: pop esi
        __asm _emit 0x5E
        // 0x58795698: pop ebp
        __asm _emit 0x5D
        // 0x58795699: pop ebx
        __asm _emit 0x5B
        // 0x5879569A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5879569D: ret
        __asm _emit 0xC3
    }
}
