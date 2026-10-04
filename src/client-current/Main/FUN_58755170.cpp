// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58755170 .. +0x3A4 bytes.
// Source symbol alias: FUN_58755170.
extern "C" __declspec(naked) void FUN_58755170() {
    __asm {
        // 0x58755170: sub esp, 0x54
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x54
        // 0x58755173: push ebx
        __asm _emit 0x53
        // 0x58755174: push ebp
        __asm _emit 0x55
        // 0x58755175: push esi
        __asm _emit 0x56
        // 0x58755176: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58755178: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5875517B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5875517D: push edi
        __asm _emit 0x57
        // 0x5875517E: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58755182: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58755184: je 0x58755198
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58755186: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58755189: cmp dword ptr [eax + 0x5c], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x5875518C: jae 0x58755191
        __asm _emit 0x73
        __asm _emit 0x03
        // 0x5875518E: mov dword ptr [eax + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x58755191: add dword ptr [esi + 0x18], 0x88
        __asm _emit 0x81
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755198: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5875519B: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875519F: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587551A3: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587551A6: je 0x5875542b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587551AC: mov ecx, 0x4d42
        __asm _emit 0xB9
        __asm _emit 0x42
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587551B1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587551B3: mov word ptr [esp + 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587551B8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587551BA: mov word ptr [esp + 0x32], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x32
        // 0x587551BF: mov word ptr [esp + 0x34], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587551C4: mov dword ptr [esp + 0x36], 0x36
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x36
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587551CC: jmp 0x587551d4
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587551CE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587551D0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587551D4: mov ecx, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x34
        // 0x587551D7: mov edx, dword ptr [eax + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x38
        // 0x587551DA: lea ebx, [ecx + ecx*2 + 3]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0x49
        __asm _emit 0x03
        // 0x587551DE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587551E0: and ebx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0xFC
        // 0x587551E3: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587551E6: mov dword ptr [esp + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587551EA: lea esi, [eax + 0x36]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x36
        // 0x587551ED: mov ecx, 0x18
        __asm _emit 0xB9
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587551F2: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587551F6: mov dword ptr [esp + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587551FA: mov word ptr [esp + 0x4a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4A
        // 0x587551FF: mov ecx, 0xb12
        __asm _emit 0xB9
        __asm _emit 0x12
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755204: add eax, 0x36
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x36
        // 0x58755207: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875520C: push eax
        __asm _emit 0x50
        // 0x5875520D: mov dword ptr [esp + 0x32], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x32
        // 0x58755211: mov dword ptr [esp + 0x40], 0x28
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755219: mov word ptr [esp + 0x4c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5875521E: mov dword ptr [esp + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58755222: mov dword ptr [esp + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58755226: mov dword ptr [esp + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x5875522A: mov dword ptr [esp + 0x60], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x5875522E: mov dword ptr [esp + 0x64], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58755232: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58755237: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875523B: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5875523F: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58755241: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58755245: mov dword ptr [ebp], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58755248: mov dx, word ptr [esp + 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5875524D: mov dword ptr [ebp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58755250: mov eax, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58755254: mov dword ptr [ebp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58755257: push eax
        __asm _emit 0x50
        // 0x58755258: lea edi, [ebp + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x5875525B: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755260: lea esi, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58755264: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58755266: lea ecx, [ebp + 0x36]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x36
        // 0x58755269: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875526B: push ecx
        __asm _emit 0x51
        // 0x5875526C: mov word ptr [ebp + 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58755270: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58755275: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58755279: mov dl, byte ptr [eax + 0x2d]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x2D
        // 0x5875527C: lea esi, [eax + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x74
        // 0x5875527F: mov al, byte ptr [eax + 0x2c]
        __asm _emit 0x8A
        __asm _emit 0x40
        __asm _emit 0x2C
        // 0x58755282: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58755285: mov byte ptr [esp + 0x13], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x58755289: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5875528B: jne 0x58755338
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755291: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58755295: lea eax, [ecx - 1]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0xFF
        // 0x58755298: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x5875529B: lea eax, [eax + ebp + 0x36]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0x36
        // 0x5875529F: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587552A3: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587552AB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587552AD: jle 0x587553fc
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587552B3: movzx edx, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x16
        // 0x587552B6: cmp dx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587552BA: je 0x58755319
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x587552BC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587552C0: cmp dx, -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0xFE
        // 0x587552C4: je 0x587553fc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587552CA: movzx ecx, byte ptr [esp + 0x13]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x587552CF: movsx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xD2
        // 0x587552D2: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587552D5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587552D7: movzx edx, word ptr [esi + 3]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x56
        __asm _emit 0x03
        // 0x587552DB: lea edi, [esi + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x56
        // 0x587552DE: lea edi, [edx + edi + 5]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x3A
        __asm _emit 0x05
        // 0x587552E2: add esi, 5
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x05
        // 0x587552E5: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587552E7: jae 0x5875530c
        __asm _emit 0x73
        __asm _emit 0x23
        // 0x587552E9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587552F0: movzx edx, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x16
        // 0x587552F3: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587552F5: movzx edx, byte ptr [esi + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x01
        // 0x587552F9: mov byte ptr [eax + 1], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587552FC: movzx edx, byte ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x02
        // 0x58755300: mov byte ptr [eax + 2], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x02
        // 0x58755303: add esi, 3
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x03
        // 0x58755306: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58755308: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5875530A: jb 0x587552f0
        __asm _emit 0x72
        __asm _emit 0xE4
        // 0x5875530C: movzx edx, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x16
        // 0x5875530F: cmp dx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58755313: jne 0x587552c0
        __asm _emit 0x75
        __asm _emit 0xAB
        // 0x58755315: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58755319: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875531D: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755321: inc edx
        __asm _emit 0x42
        // 0x58755322: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x58755324: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x02
        // 0x58755327: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58755329: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875532D: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755331: jl 0x587552b3
        __asm _emit 0x7C
        __asm _emit 0x80
        // 0x58755333: jmp 0x587553fc
        __asm _emit 0xE9
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755338: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5875533A: jne 0x587553b5
        __asm _emit 0x75
        __asm _emit 0x79
        // 0x5875533C: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58755340: lea ecx, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0xFF
        // 0x58755343: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x58755346: lea edi, [ecx + ebp + 0x36]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x29
        __asm _emit 0x36
        // 0x5875534A: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755352: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58755354: jle 0x587553fc
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875535A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755360: movzx ecx, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0E
        // 0x58755363: cmp cx, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58755367: jne 0x5875536e
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58755369: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x02
        // 0x5875536C: jmp 0x587553a6
        __asm _emit 0xEB
        __asm _emit 0x38
        // 0x5875536E: cmp cx, -2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFE
        // 0x58755372: je 0x587553fc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755378: movzx eax, word ptr [esi + 3]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x03
        // 0x5875537C: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x5875537F: push edx
        __asm _emit 0x52
        // 0x58755380: lea eax, [esi + 5]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x05
        // 0x58755383: push eax
        __asm _emit 0x50
        // 0x58755384: movsx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xC1
        // 0x58755387: lea ecx, [edi + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x47
        // 0x5875538A: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x5875538C: push ecx
        __asm _emit 0x51
        // 0x5875538D: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58755392: movzx eax, word ptr [esi + 3]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x03
        // 0x58755396: lea edx, [eax + esi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x30
        // 0x58755399: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5875539C: lea esi, [edx + eax*2 + 5]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x42
        __asm _emit 0x05
        // 0x587553A0: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587553A4: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x587553A6: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587553AA: inc ecx
        __asm _emit 0x41
        // 0x587553AB: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587553AD: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587553B1: jl 0x58755360
        __asm _emit 0x7C
        __asm _emit 0xAD
        // 0x587553B3: jmp 0x587553fc
        __asm _emit 0xEB
        __asm _emit 0x47
        // 0x587553B5: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587553B7: jne 0x587553fc
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x587553B9: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587553BD: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x587553C0: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587553C4: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587553C8: lea ecx, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0xFF
        // 0x587553CB: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587553CE: lea edi, [ecx + ebp + 0x36]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x29
        __asm _emit 0x36
        // 0x587553D2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587553D4: jle 0x587553fc
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x587553D6: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587553DA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587553E0: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587553E4: push edx
        __asm _emit 0x52
        // 0x587553E5: push esi
        __asm _emit 0x56
        // 0x587553E6: push edi
        __asm _emit 0x57
        // 0x587553E7: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587553EC: add esi, dword ptr [esp + 0x28]
        __asm _emit 0x03
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587553F0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587553F3: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x587553F5: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x587553FA: jne 0x587553e0
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x587553FC: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58755400: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58755404: mov edx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x20
        // 0x58755407: mov dword ptr [edx + eax*4], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x82
        // 0x5875540A: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875540E: mov esi, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x30
        // 0x58755411: inc eax
        __asm _emit 0x40
        // 0x58755412: lea edx, [edx + esi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x32
        __asm _emit 0x74
        // 0x58755416: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58755418: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875541C: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58755420: cmp eax, dword ptr [ecx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58755423: jne 0x587551d0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA7
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58755429: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875542B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5875542D: cmp dword ptr [esi + 8], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x58755430: je 0x58755500
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755436: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875543A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755440: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x58755443: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58755447: cmp eax, dword ptr [esi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5875544A: ja 0x587554d6
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755450: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58755453: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x58755456: mov eax, dword ptr [ecx + 2]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x02
        // 0x58755459: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5875545B: sub eax, 0x36
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x36
        // 0x5875545E: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58755460: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58755463: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755467: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875546B: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875546F: jl 0x587554a2
        __asm _emit 0x7C
        __asm _emit 0x31
        // 0x58755471: lea edx, [eax - 2]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xFE
        // 0x58755474: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58755476: add ecx, 0x37
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x37
        // 0x58755479: inc edx
        __asm _emit 0x42
        // 0x5875547A: lea ebx, [edx + edx]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x12
        // 0x5875547D: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58755481: movsx ebx, byte ptr [ecx - 1]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x59
        __asm _emit 0xFF
        // 0x58755485: add dword ptr [esp + 0x18], ebx
        __asm _emit 0x01
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755489: movsx ebx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x19
        // 0x5875548C: add dword ptr [esp + 0x14], ebx
        __asm _emit 0x01
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755490: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x58755493: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x58755496: jne 0x58755481
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x58755498: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875549C: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587554A0: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587554A2: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587554A4: jae 0x587554b1
        __asm _emit 0x73
        __asm _emit 0x0B
        // 0x587554A6: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x587554A9: mov edx, dword ptr [ecx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB9
        // 0x587554AC: movsx edx, byte ptr [edx + ebx + 0x36]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x1A
        __asm _emit 0x36
        // 0x587554B1: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587554B5: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587554B9: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587554BB: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587554BF: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587554C1: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587554C4: cmp eax, dword ptr [ecx + edx + 8]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        // 0x587554C8: jne 0x587554d6
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587554CA: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x587554CD: mov dword ptr [edx + edi*4], 1
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587554D4: jmp 0x587554ee
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x587554D6: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587554D9: mov dword ptr [eax + edi*4], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0xB8
        // 0x587554DC: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587554DF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587554E1: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587554E7: push edi
        __asm _emit 0x57
        // 0x587554E8: push edx
        __asm _emit 0x52
        // 0x587554E9: call 0x587b9530
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587554EE: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587554F2: add dword ptr [esp + 0x1c], 0x10
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x10
        // 0x587554F7: cmp edi, dword ptr [esi + 8]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587554FA: jne 0x58755440
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58755500: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58755503: push eax
        __asm _emit 0x50
        // 0x58755504: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58755509: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875550C: pop edi
        __asm _emit 0x5F
        // 0x5875550D: pop esi
        __asm _emit 0x5E
        // 0x5875550E: pop ebp
        __asm _emit 0x5D
        // 0x5875550F: pop ebx
        __asm _emit 0x5B
        // 0x58755510: add esp, 0x54
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x54
        // 0x58755513: ret
        __asm _emit 0xC3
    }
}
