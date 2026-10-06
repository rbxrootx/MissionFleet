// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FD180 .. +0x39C bytes.
// Source symbol alias: FUN_588fd180.
extern "C" __declspec(naked) void FUN_588fd180() {
    __asm {
        // 0x588FD180: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x588FD183: push esi
        __asm _emit 0x56
        // 0x588FD184: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FD186: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588FD189: call 0x588ff080
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD18E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD190: jne 0x588fd513
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD196: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FD19A: push ebx
        __asm _emit 0x53
        // 0x588FD19B: push ebp
        __asm _emit 0x55
        // 0x588FD19C: cmp eax, 0xf230
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1A1: ja 0x588fd4b1
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x0A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1A7: je 0x588fd470
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1AD: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x588FD1B0: je 0x588fd428
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1B6: sub eax, 0xee46
        __asm _emit 0x2D
        __asm _emit 0x46
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1BB: jne 0x588fd511
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1C1: mov ebp, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588FD1C5: mov ebx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588FD1C9: cmp ebp, dword ptr [esi + 0xa8]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1CF: jne 0x588fd297
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1D5: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x588FD1D8: je 0x588fd511
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1DE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FD1E0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD1E2: call 0x588fb950
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD1E7: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588FD1E9: je 0x588fd511
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1EF: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1F5: mov al, byte ptr [eax + 0x13a5]
        __asm _emit 0x8A
        __asm _emit 0x80
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD1FB: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588FD1FD: je 0x588fd511
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD203: push edi
        __asm _emit 0x57
        // 0x588FD204: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FD206: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588FD208: jbe 0x588fd232
        __asm _emit 0x76
        __asm _emit 0x28
        // 0x588FD20A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD210: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD216: push edi
        __asm _emit 0x57
        // 0x588FD217: call 0x588bb440
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xE2
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588FD21C: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD222: mov dword ptr [esp + edi*4 + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xBC
        __asm _emit 0x10
        // 0x588FD226: movzx edx, byte ptr [ecx + 0x13a5]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD22D: inc edi
        __asm _emit 0x47
        // 0x588FD22E: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588FD230: jl 0x588fd210
        __asm _emit 0x7C
        __asm _emit 0xDE
        // 0x588FD232: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD238: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x588FD23B: pop edi
        __asm _emit 0x5F
        // 0x588FD23C: je 0x588fd277
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588FD23E: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588FD241: jne 0x588fd297
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x588FD243: push eax
        __asm _emit 0x50
        // 0x588FD244: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD246: call 0x588fb950
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD24B: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FD24E: mov dword ptr [eax + 0x60], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD255: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588FD258: mov edx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x588FD25B: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588FD25E: mov ecx, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x60
        // 0x588FD261: push edx
        __asm _emit 0x52
        // 0x588FD262: push ecx
        __asm _emit 0x51
        // 0x588FD263: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FD266: call 0x589001f0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x2F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD26B: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FD26E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FD270: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588FD273: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FD275: jmp 0x588fd297
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x588FD277: mov edx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD27D: movzx ax, byte ptr [edx + 0x13a5]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x82
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD285: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FD289: push ecx
        __asm _emit 0x51
        // 0x588FD28A: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x588FD28D: push ecx
        __asm _emit 0x51
        // 0x588FD28E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FD290: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD292: call 0x588fc930
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD297: cmp ebp, dword ptr [esi + 0xac]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD29D: jne 0x588fd3c8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD2A3: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x588FD2A6: je 0x588fd511
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD2AC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FD2AE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD2B0: call 0x588fb950
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD2B5: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588FD2B7: je 0x588fd511
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD2BD: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD2C3: cmp byte ptr [ecx + 0xad], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD2CA: jbe 0x588fd3c8
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD2D0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD2D2: call 0x588bca40
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xF7
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588FD2D7: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FD2DD: push eax
        __asm _emit 0x50
        // 0x588FD2DE: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588FD2E2: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD2E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD2E9: je 0x588fd301
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588FD2EB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FD2ED: add eax, 0xa2
        __asm _emit 0x05
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD2F2: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x588FD2F6: jne 0x588fd34c
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x588FD2F8: inc ecx
        __asm _emit 0x41
        // 0x588FD2F9: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x588FD2FC: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x588FD2FF: jl 0x588fd2f2
        __asm _emit 0x7C
        __asm _emit 0xF1
        // 0x588FD301: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD307: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x588FD30A: je 0x588fd36e
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x588FD30C: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588FD30F: jne 0x588fd3c8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD315: push eax
        __asm _emit 0x50
        // 0x588FD316: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD318: call 0x588fb950
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD31D: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FD320: mov dword ptr [edx + 0x60], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD327: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588FD32A: mov ecx, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x60
        // 0x588FD32D: mov edx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x588FD330: mov eax, dword ptr [edx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x60
        // 0x588FD333: push ecx
        __asm _emit 0x51
        // 0x588FD334: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FD337: push eax
        __asm _emit 0x50
        // 0x588FD338: call 0x589001f0
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD33D: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FD340: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FD342: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588FD345: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FD347: jmp 0x588fd3c8
        __asm _emit 0xE9
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD34C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD34E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD350: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD352: push 0x1267
        __asm _emit 0x68
        __asm _emit 0x67
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD357: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xE7
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588FD35C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FD35E: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x79
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588FD363: pop ebp
        __asm _emit 0x5D
        // 0x588FD364: pop ebx
        __asm _emit 0x5B
        // 0x588FD365: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD367: pop esi
        __asm _emit 0x5E
        // 0x588FD368: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588FD36B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FD36E: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD374: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD376: call 0x588bcaa0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xF7
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588FD37B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FD37D: call 0x588fb930
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD382: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD384: jne 0x588fd3b8
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x588FD386: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588FD388: call 0x588f74c0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xA1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD38D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FD38F: call 0x588f7580
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xA1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD394: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD39A: call 0x588feb40
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD39F: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD3A5: push ecx
        __asm _emit 0x51
        // 0x588FD3A6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD3A8: call 0x588fc8e0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD3AD: pop ebp
        __asm _emit 0x5D
        // 0x588FD3AE: pop ebx
        __asm _emit 0x5B
        // 0x588FD3AF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD3B1: pop esi
        __asm _emit 0x5E
        // 0x588FD3B2: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588FD3B5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FD3B8: lea edx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588FD3BC: push edx
        __asm _emit 0x52
        // 0x588FD3BD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FD3BF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD3C1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD3C3: call 0x588fc930
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD3C8: cmp ebp, dword ptr [esi + 0x70]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x70
        // 0x588FD3CB: jne 0x588fd511
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD3D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FD3D3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD3D5: call 0x588fb950
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD3DA: cmp ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0A
        // 0x588FD3DD: jne 0x588fd3f7
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588FD3DF: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD3E5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD3E7: call 0x588bb5e0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xE1
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588FD3EC: pop ebp
        __asm _emit 0x5D
        // 0x588FD3ED: pop ebx
        __asm _emit 0x5B
        // 0x588FD3EE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD3F0: pop esi
        __asm _emit 0x5E
        // 0x588FD3F1: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588FD3F4: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FD3F7: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FD3FA: mov ecx, dword ptr [eax + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x7C
        // 0x588FD3FD: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD403: mov ecx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x78
        // 0x588FD406: push edx
        __asm _emit 0x52
        // 0x588FD407: mov edx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x588FD40A: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x588FD40D: mov eax, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x60
        // 0x588FD410: push edx
        __asm _emit 0x52
        // 0x588FD411: mov edx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x588FD414: push edx
        __asm _emit 0x52
        // 0x588FD415: push eax
        __asm _emit 0x50
        // 0x588FD416: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD418: call 0x588fcd30
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD41D: pop ebp
        __asm _emit 0x5D
        // 0x588FD41E: pop ebx
        __asm _emit 0x5B
        // 0x588FD41F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD421: pop esi
        __asm _emit 0x5E
        // 0x588FD422: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588FD425: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FD428: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588FD42C: cmp eax, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD432: jne 0x588fd450
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x588FD434: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD436: mov dword ptr [esi + 0x8c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD440: call 0x588fc5a0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD445: pop ebp
        __asm _emit 0x5D
        // 0x588FD446: pop ebx
        __asm _emit 0x5B
        // 0x588FD447: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD449: pop esi
        __asm _emit 0x5E
        // 0x588FD44A: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588FD44D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FD450: cmp eax, dword ptr [esi + 0xb4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD456: jne 0x588fd511
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD45C: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588FD45E: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588FD461: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD463: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FD465: pop ebp
        __asm _emit 0x5D
        // 0x588FD466: pop ebx
        __asm _emit 0x5B
        // 0x588FD467: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD469: pop esi
        __asm _emit 0x5E
        // 0x588FD46A: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588FD46D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FD470: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD472: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD474: call 0x588fb950
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD479: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD47F: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD484: push 0x130
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD489: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x5E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD48E: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD494: call 0x5874ddd0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588FD499: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD49F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FD4A1: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588FD4A4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FD4A6: pop ebp
        __asm _emit 0x5D
        // 0x588FD4A7: pop ebx
        __asm _emit 0x5B
        // 0x588FD4A8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD4AA: pop esi
        __asm _emit 0x5E
        // 0x588FD4AB: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588FD4AE: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FD4B1: cmp eax, 0xf231
        __asm _emit 0x3D
        __asm _emit 0x31
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD4B6: je 0x588fd4db
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588FD4B8: jbe 0x588fd511
        __asm _emit 0x76
        __asm _emit 0x57
        // 0x588FD4BA: cmp eax, 0xf233
        __asm _emit 0x3D
        __asm _emit 0x33
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD4BF: ja 0x588fd511
        __asm _emit 0x77
        __asm _emit 0x50
        // 0x588FD4C1: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FD4C4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FD4C6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD4C8: push eax
        __asm _emit 0x50
        // 0x588FD4C9: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x588FD4CC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD4CE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FD4D0: pop ebp
        __asm _emit 0x5D
        // 0x588FD4D1: pop ebx
        __asm _emit 0x5B
        // 0x588FD4D2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD4D4: pop esi
        __asm _emit 0x5E
        // 0x588FD4D5: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588FD4D8: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FD4DB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD4DD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD4DF: call 0x588fb950
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD4E4: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD4EA: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD4EF: push 0x130
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD4F4: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x5D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD4F9: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD4FF: call 0x5874ddd0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x08
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588FD504: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD50A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FD50C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588FD50F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FD511: pop ebp
        __asm _emit 0x5D
        // 0x588FD512: pop ebx
        __asm _emit 0x5B
        // 0x588FD513: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD515: pop esi
        __asm _emit 0x5E
        // 0x588FD516: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x588FD519: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
