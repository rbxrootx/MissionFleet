// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AC2F0 .. +0x2A0 bytes.
extern "C" __declspec(naked) void FUN_588ac2f0() {
    __asm {
        // 0x588AC2F0: push ecx
        __asm _emit 0x51
        // 0x588AC2F1: push esi
        __asm _emit 0x56
        // 0x588AC2F2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588AC2F4: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AC2F8: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x588AC2FA: je 0x588ac586
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC300: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588AC304: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC309: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588AC30C: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC311: push edi
        __asm _emit 0x57
        // 0x588AC312: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588AC315: je 0x588ac429
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC31B: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588AC31F: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588AC322: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC327: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588AC32A: je 0x588ac429
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC330: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588AC334: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588AC337: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC33C: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588AC33F: jne 0x588ac567
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC345: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588AC349: test cl, 2
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x588AC34C: je 0x588ac567
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC352: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588AC355: mov ecx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC35B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588AC35D: lea edi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x588AC360: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x588AC362: inc eax
        __asm _emit 0x40
        // 0x588AC363: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x588AC365: jne 0x588ac360
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588AC367: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588AC369: mov al, byte ptr [ecx + eax - 1]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0xFF
        // 0x588AC36D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588AC36F: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588AC371: jl 0x588ac377
        __asm _emit 0x7C
        __asm _emit 0x04
        // 0x588AC373: cmp al, 0x1f
        __asm _emit 0x3C
        __asm _emit 0x1F
        // 0x588AC375: jle 0x588ac37b
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588AC377: cmp al, 0x7f
        __asm _emit 0x3C
        __asm _emit 0x7F
        // 0x588AC379: jne 0x588ac380
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588AC37B: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC380: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588AC382: je 0x588ac388
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588AC384: cmp al, 0x27
        __asm _emit 0x3C
        __asm _emit 0x27
        // 0x588AC386: je 0x588ac3a5
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588AC388: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x588AC38B: jne 0x588ac567
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC391: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588AC393: lea edi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x588AC396: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x588AC398: inc eax
        __asm _emit 0x40
        // 0x588AC399: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x588AC39B: jne 0x588ac396
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588AC39D: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588AC39F: je 0x588ac567
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC3A5: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588AC3A7: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588AC3AA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC3B0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588AC3B2: inc eax
        __asm _emit 0x40
        // 0x588AC3B3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588AC3B5: jne 0x588ac3b0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588AC3B7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588AC3B9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AC3BB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AC3BD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588AC3BF: jle 0x588ac3df
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x588AC3C1: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588AC3C4: mov edx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC3CA: mov byte ptr [edx], 0
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588AC3CD: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588AC3D0: mov edx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC3D6: mov byte ptr [eax + edx], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588AC3DA: inc eax
        __asm _emit 0x40
        // 0x588AC3DB: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588AC3DD: jl 0x588ac3c1
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x588AC3DF: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588AC3E2: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x35
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AC3E7: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC3EC: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588AC3EF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588AC3F1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC3F3: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588AC3F5: push eax
        __asm _emit 0x50
        // 0x588AC3F6: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x588AC3F9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588AC3FB: push esi
        __asm _emit 0x56
        // 0x588AC3FC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC3FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC400: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588AC402: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xF6
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AC407: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AC409: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x89
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AC40E: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC414: mov edx, dword ptr [ecx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC41A: mov dword ptr [edx + 0x2c8], 0
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC424: jmp 0x588ac567
        __asm _emit 0xE9
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC429: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588AC42C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588AC42F: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588AC431: jne 0x588ac43b
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588AC433: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588AC436: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588AC439: je 0x588ac479
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588AC43B: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588AC43D: lea ecx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x07
        // 0x588AC440: cmp ecx, 0xe
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0E
        // 0x588AC443: ja 0x588ac468
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x588AC445: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588AC448: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588AC44B: ja 0x588ac461
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x588AC44D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AC44F: jge 0x588ac456
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588AC451: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588AC454: jmp 0x588ac471
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x588AC456: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AC458: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AC45A: setg cl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC1
        // 0x588AC45D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588AC45F: jmp 0x588ac471
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x588AC461: cdq
        __asm _emit 0x99
        // 0x588AC462: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588AC464: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588AC466: jmp 0x588ac471
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588AC468: cdq
        __asm _emit 0x99
        // 0x588AC469: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588AC46C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588AC46E: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588AC471: push eax
        __asm _emit 0x50
        // 0x588AC472: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588AC474: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AC479: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588AC47C: cmp edx, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588AC47F: jne 0x588ac567
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC485: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AC489: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC48E: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588AC491: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC496: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588AC499: jne 0x588ac521
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC49F: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AC4A3: mov ecx, 0xe2ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC4A8: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588AC4AB: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC4B0: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588AC4B3: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AC4B7: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC4BC: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588AC4C0: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588AC4C3: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588AC4C7: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588AC4CA: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588AC4CE: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588AC4D1: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC4D7: mov edx, 0x12c
        __asm _emit 0xBA
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC4DC: sub edx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588AC4DF: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC4E4: cmp dword ptr [ecx + 0x170], 0xc
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588AC4EB: jle 0x588ac50f
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x588AC4ED: cmp dword ptr [ecx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC4F4: je 0x588ac50f
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588AC4F6: mov edi, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC4FC: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC502: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x588AC505: push edi
        __asm _emit 0x57
        // 0x588AC506: push edx
        __asm _emit 0x52
        // 0x588AC507: push eax
        __asm _emit 0x50
        // 0x588AC508: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xAE
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588AC50D: jmp 0x588ac567
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x588AC50F: mov edi, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC515: push edi
        __asm _emit 0x57
        // 0x588AC516: push edx
        __asm _emit 0x52
        // 0x588AC517: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AC519: push eax
        __asm _emit 0x50
        // 0x588AC51A: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xAE
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588AC51F: jmp 0x588ac567
        __asm _emit 0xEB
        __asm _emit 0x46
        // 0x588AC521: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588AC525: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588AC527: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588AC52A: mov ecx, 0x400
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC52F: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588AC532: jne 0x588ac567
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x588AC534: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588AC538: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC53D: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588AC540: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC545: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588AC548: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588AC54C: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC551: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588AC555: mov eax, 0xfffb
        __asm _emit 0xB8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC55A: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AC55E: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC563: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588AC567: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588AC56A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588AC56C: je 0x588ac585
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588AC56E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588AC570: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588AC573: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588AC575: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588AC578: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588AC57B: je 0x588ac589
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588AC57D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588AC57F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588AC581: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588AC583: jne 0x588ac570
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588AC585: pop edi
        __asm _emit 0x5F
        // 0x588AC586: pop esi
        __asm _emit 0x5E
        // 0x588AC587: pop ecx
        __asm _emit 0x59
        // 0x588AC588: ret
        __asm _emit 0xC3
        // 0x588AC589: pop edi
        __asm _emit 0x5F
        // 0x588AC58A: pop esi
        __asm _emit 0x5E
        // 0x588AC58B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588AC58E: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
