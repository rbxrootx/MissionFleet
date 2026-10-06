// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587EC290 .. +0x815 bytes.
// Source symbol alias: FUN_587ec290.
extern "C" __declspec(naked) void FUN_587ec290() {
    __asm {
        // 0x587EC290: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587EC295: mov dx, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587EC29A: push esi
        __asm _emit 0x56
        // 0x587EC29B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587EC29D: mov cx, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587EC2A2: push edi
        __asm _emit 0x57
        // 0x587EC2A3: mov word ptr [esi + 0x21cce], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xCE
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC2AA: mov cx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EC2AF: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC2B4: mov word ptr [esi + 0x21ccc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC2BB: mov word ptr [esi + 0x21cd0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xD0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC2C2: mov word ptr [esi + 0x21cd2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xD2
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC2C9: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587EC2CC: jne 0x587ec51e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC2D2: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC2D8: movzx eax, word ptr [edx + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC2DF: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587EC2E3: je 0x587ec672
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC2E9: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587EC2ED: je 0x587ec672
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC2F3: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x587EC2F7: je 0x587ec672
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC2FD: mov eax, dword ptr [esi + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC303: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587EC307: lea ecx, [esi + 0x21cb0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC30D: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC312: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587EC314: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587EC318: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587EC31B: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587EC31D: jne 0x587ec312
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587EC31F: lea ecx, [esi + 0x21cb8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC325: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC32A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC330: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587EC332: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587EC336: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587EC339: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587EC33B: jne 0x587ec330
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587EC33D: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC342: cmp dword ptr [eax + 0x160], 0x13
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        // 0x587EC349: jle 0x587ec360
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x587EC34B: cmp dword ptr [eax + 0x190], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC351: je 0x587ec360
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587EC353: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC359: add eax, 0x4c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC35E: jmp 0x587ec362
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC360: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC362: mov ecx, dword ptr [esi + 0x21cc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC368: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587EC36B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC36D: je 0x587ec397
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587EC36F: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587EC372: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EC375: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587EC378: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587EC37B: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587EC37E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587EC380: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587EC383: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587EC385: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587EC388: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EC38B: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EC38E: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EC391: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587EC394: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587EC397: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC39C: cmp dword ptr [eax + 0x160], 0x12
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        // 0x587EC3A3: jle 0x587ec3bb
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587EC3A5: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC3AC: je 0x587ec3bb
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587EC3AE: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC3B4: add eax, 0x480
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC3B9: jmp 0x587ec3bd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC3BB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC3BD: mov ecx, dword ptr [esi + 0x21cc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC3C3: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587EC3C6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC3C8: je 0x587ec3f2
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587EC3CA: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587EC3CD: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EC3D0: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587EC3D3: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587EC3D6: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587EC3D9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587EC3DB: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587EC3DE: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587EC3E0: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587EC3E3: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EC3E6: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EC3E9: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EC3EC: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587EC3EF: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587EC3F2: mov eax, dword ptr [esi + 0x21cc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC3F8: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC3FD: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587EC401: mov eax, dword ptr [esi + 0x21cc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC407: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587EC409: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587EC40D: mov eax, dword ptr [esi + 0x21cd4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC413: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587EC417: mov eax, dword ptr [esi + 0x21cd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC41D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587EC421: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC426: cmp dword ptr [eax + 0x164], 0x9c
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC430: jle 0x587ec449
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587EC432: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC439: je 0x587ec449
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587EC43B: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC441: mov eax, dword ptr [eax + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC447: jmp 0x587ec44b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC449: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC44B: mov ecx, dword ptr [esi + 0x21cdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC451: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587EC454: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC456: je 0x587ec480
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587EC458: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587EC45B: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EC45E: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587EC461: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587EC464: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587EC467: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587EC469: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587EC46C: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587EC46E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587EC471: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EC474: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EC477: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EC47A: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587EC47D: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587EC480: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC485: cmp dword ptr [eax + 0x164], 0x9d
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC48F: jle 0x587ec4a8
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587EC491: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC498: je 0x587ec4a8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587EC49A: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC4A0: mov eax, dword ptr [ecx + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC4A6: jmp 0x587ec4aa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC4A8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC4AA: mov ecx, dword ptr [esi + 0x21ce0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC4B0: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587EC4B3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC4B5: je 0x587ec4df
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587EC4B7: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587EC4BA: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EC4BD: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587EC4C0: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587EC4C3: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587EC4C6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587EC4C8: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587EC4CB: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587EC4CD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587EC4D0: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EC4D3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EC4D6: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EC4D9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587EC4DC: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587EC4DF: mov ecx, dword ptr [esi + 0x21cdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC4E5: push 0x347
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC4EA: mov dword ptr [esi + 0x21cc8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC4F0: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x6D
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587EC4F5: mov ecx, dword ptr [esi + 0x21ce0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC4FB: push 0x347
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC500: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x6D
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587EC505: mov eax, dword ptr [esi + 0x21cdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC50B: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587EC50F: mov esi, dword ptr [esi + 0x21ce0]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC515: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x587EC519: pop edi
        __asm _emit 0x5F
        // 0x587EC51A: pop esi
        __asm _emit 0x5E
        // 0x587EC51B: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EC51E: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587EC522: jne 0x587ec68f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC528: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC52D: movzx eax, word ptr [eax + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC534: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587EC538: je 0x587ec672
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC53E: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587EC542: je 0x587ec672
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC548: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x587EC54C: je 0x587ec672
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC552: mov ecx, dword ptr [esi + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC558: push edi
        __asm _emit 0x57
        // 0x587EC559: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x50
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EC55E: lea ecx, [esi + 0x21cb0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC564: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC569: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC570: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587EC572: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587EC576: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587EC579: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587EC57B: jne 0x587ec570
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587EC57D: lea ecx, [esi + 0x21cb8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC583: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC588: jmp 0x587ec590
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587EC58A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC590: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587EC592: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587EC596: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587EC599: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587EC59B: jne 0x587ec590
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587EC59D: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC5A2: cmp dword ptr [eax + 0x160], 0x13
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        // 0x587EC5A9: jle 0x587ec5c0
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x587EC5AB: cmp dword ptr [eax + 0x190], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC5B1: je 0x587ec5c0
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587EC5B3: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC5B9: add eax, 0x4c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC5BE: jmp 0x587ec5c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC5C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC5C2: mov ecx, dword ptr [esi + 0x21cc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC5C8: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587EC5CB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC5CD: je 0x587ec5f7
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587EC5CF: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587EC5D2: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EC5D5: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587EC5D8: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587EC5DB: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587EC5DE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587EC5E0: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587EC5E3: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587EC5E5: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587EC5E8: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EC5EB: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EC5EE: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EC5F1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587EC5F4: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587EC5F7: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC5FC: cmp dword ptr [eax + 0x160], 0x11
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        // 0x587EC603: jle 0x587ec61b
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587EC605: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC60C: je 0x587ec61b
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587EC60E: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC614: add eax, 0x440
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC619: jmp 0x587ec61d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC61B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC61D: mov ecx, dword ptr [esi + 0x21cc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC623: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587EC626: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC628: je 0x587ec652
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587EC62A: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587EC62D: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EC630: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587EC633: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587EC636: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587EC639: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587EC63B: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587EC63E: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587EC640: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587EC643: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EC646: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EC649: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EC64C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587EC64F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587EC652: mov eax, dword ptr [esi + 0x21cc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC658: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC65D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587EC661: mov esi, dword ptr [esi + 0x21cc4]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC667: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587EC669: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587EC66D: pop edi
        __asm _emit 0x5F
        // 0x587EC66E: pop esi
        __asm _emit 0x5E
        // 0x587EC66F: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EC672: mov eax, dword ptr [esi + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC678: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC67D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587EC681: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587EC683: pop edi
        __asm _emit 0x5F
        // 0x587EC684: mov word ptr [esi + 0x21ccc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC68B: pop esi
        __asm _emit 0x5E
        // 0x587EC68C: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EC68F: push ebx
        __asm _emit 0x53
        // 0x587EC690: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587EC694: jne 0x587ec8eb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC69A: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC69F: movzx eax, word ptr [eax + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC6A6: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587EC6AA: je 0x587ec8cd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC6B0: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587EC6B4: je 0x587ec8cd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC6BA: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x587EC6BE: je 0x587ec8cd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC6C4: mov ecx, dword ptr [esi + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC6CA: push edi
        __asm _emit 0x57
        // 0x587EC6CB: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x4F
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EC6D0: lea ecx, [esi + 0x21cb0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC6D6: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC6DB: jmp 0x587ec6e0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587EC6DD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587EC6E0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587EC6E2: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC6E7: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587EC6EB: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587EC6EE: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587EC6F0: jne 0x587ec6e0
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x587EC6F2: lea ecx, [esi + 0x21cb8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC6F8: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC6FD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587EC700: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587EC702: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC707: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587EC70B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587EC70E: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587EC710: jne 0x587ec700
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x587EC712: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC717: cmp dword ptr [eax + 0x164], 0x78
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x78
        // 0x587EC71E: jle 0x587ec736
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587EC720: cmp dword ptr [eax + 0x18c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC726: je 0x587ec736
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587EC728: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC72E: mov eax, dword ptr [ecx + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC734: jmp 0x587ec738
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC736: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC738: mov ecx, dword ptr [esi + 0x21cd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC73E: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587EC741: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC743: je 0x587ec76d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587EC745: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587EC748: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EC74B: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587EC74E: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587EC751: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587EC754: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587EC756: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587EC759: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587EC75B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587EC75E: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EC761: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EC764: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EC767: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587EC76A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587EC76D: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC772: cmp dword ptr [eax + 0x164], 0x6c
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6C
        // 0x587EC779: jle 0x587ec792
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587EC77B: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC782: je 0x587ec792
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587EC784: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC78A: mov eax, dword ptr [ecx + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC790: jmp 0x587ec794
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC792: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC794: mov ecx, dword ptr [esi + 0x21cd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC79A: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587EC79D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC79F: je 0x587ec7c9
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587EC7A1: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587EC7A4: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EC7A7: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587EC7AA: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587EC7AD: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587EC7B0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587EC7B2: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587EC7B5: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587EC7B7: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587EC7BA: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EC7BD: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EC7C0: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EC7C3: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587EC7C6: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587EC7C9: mov eax, dword ptr [esi + 0x21cc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC7CF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587EC7D1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587EC7D5: mov eax, dword ptr [esi + 0x21cc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC7DB: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587EC7DD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587EC7E1: mov eax, dword ptr [esi + 0x21cd4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC7E7: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587EC7EB: mov eax, dword ptr [esi + 0x21cd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC7F1: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587EC7F5: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC7FA: cmp dword ptr [eax + 0x164], 0x9c
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC804: jle 0x587ec81d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587EC806: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC80D: je 0x587ec81d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587EC80F: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC815: mov eax, dword ptr [eax + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC81B: jmp 0x587ec81f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC81D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC81F: mov ecx, dword ptr [esi + 0x21cdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC825: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587EC828: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC82A: je 0x587ec854
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587EC82C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587EC82F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EC832: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587EC835: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587EC838: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587EC83B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587EC83D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587EC840: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587EC842: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587EC845: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EC848: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EC84B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EC84E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587EC851: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587EC854: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC859: cmp dword ptr [eax + 0x164], 0x9d
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC863: jle 0x587ec87c
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587EC865: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC86C: je 0x587ec87c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587EC86E: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC874: mov eax, dword ptr [ecx + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC87A: jmp 0x587ec87e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC87C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC87E: mov ecx, dword ptr [esi + 0x21ce0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC884: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587EC887: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC889: je 0x587ec8b3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587EC88B: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587EC88E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587EC891: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587EC894: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587EC897: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587EC89A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587EC89C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587EC89F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587EC8A1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587EC8A4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EC8A7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EC8AA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EC8AD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587EC8B0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587EC8B3: mov eax, dword ptr [esi + 0x21cdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC8B9: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587EC8BD: mov esi, dword ptr [esi + 0x21ce0]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC8C3: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x587EC8C7: pop ebx
        __asm _emit 0x5B
        // 0x587EC8C8: pop edi
        __asm _emit 0x5F
        // 0x587EC8C9: pop esi
        __asm _emit 0x5E
        // 0x587EC8CA: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EC8CD: mov eax, dword ptr [esi + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC8D3: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC8D8: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587EC8DC: pop ebx
        __asm _emit 0x5B
        // 0x587EC8DD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587EC8DF: pop edi
        __asm _emit 0x5F
        // 0x587EC8E0: mov word ptr [esi + 0x21ccc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC8E7: pop esi
        __asm _emit 0x5E
        // 0x587EC8E8: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EC8EB: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC8EE: jne 0x587eca99
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC8F4: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC8F9: movzx eax, word ptr [eax + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC900: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587EC904: je 0x587eca7b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC90A: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587EC90E: je 0x587eca7b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC914: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x587EC918: je 0x587eca7b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC91E: mov ecx, dword ptr [esi + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC924: push edi
        __asm _emit 0x57
        // 0x587EC925: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x4C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EC92A: lea ecx, [esi + 0x21cb0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC930: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC935: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587EC937: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC93C: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587EC940: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587EC943: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587EC945: jne 0x587ec935
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x587EC947: lea ecx, [esi + 0x21cb8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC94D: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC952: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587EC954: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC959: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587EC95D: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587EC960: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587EC962: jne 0x587ec952
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x587EC964: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC969: cmp dword ptr [eax + 0x164], 0x78
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x78
        // 0x587EC970: jle 0x587ec988
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587EC972: cmp dword ptr [eax + 0x18c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC978: je 0x587ec988
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587EC97A: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC980: mov eax, dword ptr [ecx + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC986: jmp 0x587ec98a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC988: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC98A: mov ecx, dword ptr [esi + 0x21cd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC990: push eax
        __asm _emit 0x50
        // 0x587EC991: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x4D
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EC996: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC99B: cmp dword ptr [eax + 0x164], 0x79
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x79
        // 0x587EC9A2: jle 0x587ec9bb
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587EC9A4: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC9AB: je 0x587ec9bb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587EC9AD: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC9B3: mov eax, dword ptr [edx + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC9B9: jmp 0x587ec9bd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EC9BB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EC9BD: mov ecx, dword ptr [esi + 0x21cd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC9C3: push eax
        __asm _emit 0x50
        // 0x587EC9C4: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x4C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EC9C9: mov eax, dword ptr [esi + 0x21cc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC9CF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587EC9D1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587EC9D5: mov eax, dword ptr [esi + 0x21cc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC9DB: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587EC9DD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587EC9E1: mov eax, dword ptr [esi + 0x21cd4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC9E7: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587EC9EB: mov eax, dword ptr [esi + 0x21cd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC9F1: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587EC9F5: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC9FA: cmp dword ptr [eax + 0x164], 0x9a
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECA04: jle 0x587eca1d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587ECA06: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECA0D: je 0x587eca1d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587ECA0F: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECA15: mov eax, dword ptr [eax + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECA1B: jmp 0x587eca1f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587ECA1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ECA1F: mov ecx, dword ptr [esi + 0x21cdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECA25: push eax
        __asm _emit 0x50
        // 0x587ECA26: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x4C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587ECA2B: mov eax, dword ptr [0x58a24728]
        __asm _emit 0xA1
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ECA30: cmp dword ptr [eax + 0x164], 0x9b
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECA3A: jle 0x587eca53
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587ECA3C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECA43: je 0x587eca53
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587ECA45: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECA4B: mov eax, dword ptr [ecx + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECA51: jmp 0x587eca55
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587ECA53: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ECA55: mov ecx, dword ptr [esi + 0x21ce0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECA5B: push eax
        __asm _emit 0x50
        // 0x587ECA5C: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x4C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587ECA61: mov eax, dword ptr [esi + 0x21cdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECA67: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587ECA6B: mov esi, dword ptr [esi + 0x21ce0]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE0
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECA71: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x587ECA75: pop ebx
        __asm _emit 0x5B
        // 0x587ECA76: pop edi
        __asm _emit 0x5F
        // 0x587ECA77: pop esi
        __asm _emit 0x5E
        // 0x587ECA78: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587ECA7B: mov eax, dword ptr [esi + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECA81: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECA86: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587ECA8A: pop ebx
        __asm _emit 0x5B
        // 0x587ECA8B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ECA8D: pop edi
        __asm _emit 0x5F
        // 0x587ECA8E: mov word ptr [esi + 0x21ccc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECA95: pop esi
        __asm _emit 0x5E
        // 0x587ECA96: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587ECA99: mov esi, dword ptr [esi + 0x21cac]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xAC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECA9F: pop ebx
        __asm _emit 0x5B
        // 0x587ECAA0: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
