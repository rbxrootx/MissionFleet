// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FD520 .. +0x26C bytes.
// Source symbol alias: FUN_588fd520.
extern "C" __declspec(naked) void FUN_588fd520() {
    __asm {
        // 0x588FD520: push esi
        __asm _emit 0x56
        // 0x588FD521: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FD523: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FD527: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x588FD529: je 0x588fd786
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD52F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588FD533: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD538: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588FD53B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD540: push edi
        __asm _emit 0x57
        // 0x588FD541: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588FD544: jne 0x588fd623
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD54A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588FD54D: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588FD550: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588FD552: jne 0x588fd55c
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588FD554: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588FD557: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588FD55A: je 0x588fd5db
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x588FD55C: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588FD55E: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588FD561: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588FD564: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x588FD567: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x588FD56A: ja 0x588fd591
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x588FD56C: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588FD56F: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588FD572: ja 0x588fd588
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x588FD574: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD576: jge 0x588fd57d
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588FD578: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x588FD57B: jmp 0x588fd59c
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588FD57D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FD57F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD581: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x588FD584: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588FD586: jmp 0x588fd59c
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588FD588: cdq
        __asm _emit 0x99
        // 0x588FD589: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588FD58B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FD58D: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x588FD58F: jmp 0x588fd59c
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588FD591: cdq
        __asm _emit 0x99
        // 0x588FD592: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588FD595: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FD597: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FD599: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x588FD59C: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x588FD59F: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x588FD5A2: ja 0x588fd5c7
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x588FD5A4: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x588FD5A7: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588FD5AA: ja 0x588fd5be
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x588FD5AC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FD5AE: jge 0x588fd5b5
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588FD5B0: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588FD5B3: jmp 0x588fd5d2
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588FD5B5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD5B7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FD5B9: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x588FD5BC: jmp 0x588fd5d2
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588FD5BE: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588FD5C0: cdq
        __asm _emit 0x99
        // 0x588FD5C1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588FD5C3: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588FD5C5: jmp 0x588fd5d2
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588FD5C7: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588FD5C9: cdq
        __asm _emit 0x99
        // 0x588FD5CA: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588FD5CD: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FD5CF: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FD5D2: push eax
        __asm _emit 0x50
        // 0x588FD5D3: push edi
        __asm _emit 0x57
        // 0x588FD5D4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD5D6: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD5DB: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588FD5DE: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588FD5E1: jne 0x588fd75a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD5E7: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588FD5EA: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588FD5ED: jne 0x588fd75a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD5F3: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588FD5F7: mov eax, 0xe2ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD5FC: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588FD5FF: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD604: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588FD607: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588FD60B: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588FD610: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD616: push edx
        __asm _emit 0x52
        // 0x588FD617: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD619: call 0x588fc8e0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD61E: jmp 0x588fd75a
        __asm _emit 0xE9
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD623: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FD627: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588FD629: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588FD62C: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD631: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588FD634: jne 0x588fd70b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD63A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588FD63D: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588FD640: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588FD642: jne 0x588fd64c
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588FD644: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588FD647: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588FD64A: je 0x588fd6cb
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x588FD64C: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588FD64E: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588FD651: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588FD654: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x588FD657: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x588FD65A: ja 0x588fd681
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x588FD65C: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588FD65F: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588FD662: ja 0x588fd678
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x588FD664: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD666: jge 0x588fd66d
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588FD668: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x588FD66B: jmp 0x588fd68c
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588FD66D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FD66F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD671: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x588FD674: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588FD676: jmp 0x588fd68c
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588FD678: cdq
        __asm _emit 0x99
        // 0x588FD679: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588FD67B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FD67D: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x588FD67F: jmp 0x588fd68c
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588FD681: cdq
        __asm _emit 0x99
        // 0x588FD682: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588FD685: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FD687: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FD689: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x588FD68C: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x588FD68F: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x588FD692: ja 0x588fd6b7
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x588FD694: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x588FD697: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588FD69A: ja 0x588fd6ae
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x588FD69C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FD69E: jge 0x588fd6a5
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588FD6A0: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588FD6A3: jmp 0x588fd6c2
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588FD6A5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FD6A7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FD6A9: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x588FD6AC: jmp 0x588fd6c2
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588FD6AE: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588FD6B0: cdq
        __asm _emit 0x99
        // 0x588FD6B1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588FD6B3: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588FD6B5: jmp 0x588fd6c2
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588FD6B7: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588FD6B9: cdq
        __asm _emit 0x99
        // 0x588FD6BA: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588FD6BD: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FD6BF: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FD6C2: push eax
        __asm _emit 0x50
        // 0x588FD6C3: push edi
        __asm _emit 0x57
        // 0x588FD6C4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD6C6: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD6CB: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588FD6CE: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588FD6D1: jne 0x588fd75a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD6D7: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588FD6DA: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588FD6DD: jne 0x588fd75a
        __asm _emit 0x75
        __asm _emit 0x7B
        // 0x588FD6DF: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD6E4: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588FD6E8: mov eax, 0xfffb
        __asm _emit 0xB8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD6ED: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FD6F1: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588FD6F5: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD6FA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588FD6FD: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD702: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588FD705: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588FD709: jmp 0x588fd75a
        __asm _emit 0xEB
        __asm _emit 0x4F
        // 0x588FD70B: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588FD70F: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD714: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588FD717: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD71C: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588FD71F: jne 0x588fd75a
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x588FD721: movzx eax, word ptr [esi + 0x94]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD728: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD72B: jbe 0x588fd75a
        __asm _emit 0x76
        __asm _emit 0x2D
        // 0x588FD72D: dec eax
        __asm _emit 0x48
        // 0x588FD72E: mov word ptr [esi + 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD735: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD738: jne 0x588fd75a
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x588FD73A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD73C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD73E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD740: push 0x1072
        __asm _emit 0x68
        __asm _emit 0x72
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD745: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xE3
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588FD74A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FD74C: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x75
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588FD751: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD753: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD755: call 0x588fc560
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD75A: cmp dword ptr [esi + 0x98], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD761: jne 0x588fd785
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x588FD763: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588FD766: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FD768: je 0x588fd785
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588FD76A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD770: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588FD773: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FD775: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588FD778: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588FD77B: je 0x588fd788
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FD77D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FD77F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FD781: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588FD783: jne 0x588fd770
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588FD785: pop edi
        __asm _emit 0x5F
        // 0x588FD786: pop esi
        __asm _emit 0x5E
        // 0x588FD787: ret
        __asm _emit 0xC3
        // 0x588FD788: pop edi
        __asm _emit 0x5F
        // 0x588FD789: pop esi
        __asm _emit 0x5E
        // 0x588FD78A: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
