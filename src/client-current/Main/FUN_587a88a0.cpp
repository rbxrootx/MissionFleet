// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 709 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a88a0.

// Ghidra body range 0x587A88A0..0x587A8B65; 709 mapped bytes.
extern "C" __declspec(naked) void FUN_587a88a0_segment_00() {
    __asm {
        // 0x587A88A0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587A88A3: push ebx
        __asm _emit 0x53
        // 0x587A88A4: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A88A8: push ebp
        __asm _emit 0x55
        // 0x587A88A9: push esi
        __asm _emit 0x56
        // 0x587A88AA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A88AC: push edi
        __asm _emit 0x57
        // 0x587A88AD: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A88B1: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587A88B3: jne 0x587a88cc
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587A88B5: push 0x541
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A88BA: push 0x589999a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A88BF: push 0x58999a8c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x9A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A88C4: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x46
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A88C9: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A88CC: cmp byte ptr [ebx + 0xa], 0
        __asm _emit 0x80
        __asm _emit 0x7B
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587A88D0: je 0x587a8a9d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A88D6: cmp byte ptr [ebx + 9], 1
        __asm _emit 0x80
        __asm _emit 0x7B
        __asm _emit 0x09
        __asm _emit 0x01
        // 0x587A88DA: mov esi, dword ptr [ebx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A88E0: jne 0x587a89ee
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A88E6: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587A88E9: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587A88EC: jbe 0x587a88f3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A88EE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x43
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A88F3: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587A88F5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A88F7: jne 0x587a89e7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A88FD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x43
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8902: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587A8905: jb 0x587a890c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8907: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x43
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A890C: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A890E: mov byte ptr [eax + 0x9c], 1
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587A8915: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A8919: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A891D: cmp ecx, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587A8920: je 0x587a8a87
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8926: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587A8928: cmp byte ptr [eax + 9], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x02
        // 0x587A892C: jne 0x587a8a87
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8932: test byte ptr [ecx + 0x50], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587A8936: je 0x587a8a87
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A893C: mov esi, dword ptr [eax + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8942: mov ebp, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587A8945: cmp ebp, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587A8948: jbe 0x587a894f
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A894A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x43
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A894F: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x587A8951: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x587A8953: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A8957: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587A8959: mov esi, dword ptr [edx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A895F: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587A8962: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587A8965: jbe 0x587a896c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8967: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x43
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A896C: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587A896E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A8970: je 0x587a8976
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A8972: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587A8974: je 0x587a897b
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A8976: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A897B: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587A897D: je 0x587a8a83
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8983: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A8985: jne 0x587a8a6e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A898B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8990: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8992: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A8995: jb 0x587a899c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8997: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A899C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A89A0: cmp dword ptr [ebx], eax
        __asm _emit 0x39
        __asm _emit 0x03
        // 0x587A89A2: je 0x587a89c6
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587A89A4: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A89A6: jne 0x587a8a75
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A89AC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A89B1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A89B3: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A89B6: jb 0x587a89bd
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A89B8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A89BD: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587A89BF: mov byte ptr [ecx + 0x9c], 3
        __asm _emit 0xC6
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587A89C6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A89C8: jne 0x587a8a7c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A89CE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A89D3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A89D5: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A89D8: jb 0x587a89df
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A89DA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A89DF: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587A89E2: jmp 0x587a8953
        __asm _emit 0xE9
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A89E7: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587A89E9: jmp 0x587a8902
        __asm _emit 0xE9
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A89EE: mov ebp, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587A89F1: cmp ebp, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587A89F4: jbe 0x587a89fb
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A89F6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A89FB: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x587A89FD: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x587A89FF: nop
        __asm _emit 0x90
        // 0x587A8A00: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A8A04: mov esi, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8A0A: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587A8A0D: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587A8A10: jbe 0x587a8a17
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8A12: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8A17: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587A8A19: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A8A1B: je 0x587a8a21
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A8A1D: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587A8A1F: je 0x587a8a26
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A8A21: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8A26: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587A8A28: je 0x587a8915
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8A2E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A8A30: jne 0x587a8a66
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x587A8A32: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8A37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8A39: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A8A3C: jb 0x587a8a43
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8A3E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8A43: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587A8A45: mov byte ptr [edx + 0x9c], 1
        __asm _emit 0xC6
        __asm _emit 0x82
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587A8A4C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A8A4E: jne 0x587a8a6a
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587A8A50: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8A55: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8A57: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A8A5A: jb 0x587a8a61
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8A5C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8A61: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587A8A64: jmp 0x587a8a00
        __asm _emit 0xEB
        __asm _emit 0x9A
        // 0x587A8A66: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A8A68: jmp 0x587a8a39
        __asm _emit 0xEB
        __asm _emit 0xCF
        // 0x587A8A6A: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A8A6C: jmp 0x587a8a57
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x587A8A6E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A8A70: jmp 0x587a8992
        __asm _emit 0xE9
        __asm _emit 0x1D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8A75: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A8A77: jmp 0x587a89b3
        __asm _emit 0xE9
        __asm _emit 0x37
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8A7C: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A8A7E: jmp 0x587a89d5
        __asm _emit 0xE9
        __asm _emit 0x52
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8A83: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A8A87: pop edi
        __asm _emit 0x5F
        // 0x587A8A88: pop esi
        __asm _emit 0x5E
        // 0x587A8A89: pop ebp
        __asm _emit 0x5D
        // 0x587A8A8A: mov byte ptr [ecx + 0x9c], 2
        __asm _emit 0xC6
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587A8A91: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8A96: pop ebx
        __asm _emit 0x5B
        // 0x587A8A97: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A8A9A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A8A9D: cmp ebx, dword ptr [esi + 4]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x587A8AA0: je 0x587a8b4f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8AA6: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587A8AA8: cmp byte ptr [eax + 9], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x02
        // 0x587A8AAC: jne 0x587a8b4f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8AB2: test byte ptr [ebx + 0x50], 1
        __asm _emit 0xF6
        __asm _emit 0x43
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587A8AB6: je 0x587a8b4f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8ABC: mov ecx, dword ptr [eax + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8AC2: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A8AC6: push edx
        __asm _emit 0x52
        // 0x587A8AC7: call 0x58834b00
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A8ACC: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A8AD0: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587A8AD2: mov esi, dword ptr [eax + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8AD8: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587A8ADB: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587A8ADE: jbe 0x587a8ae5
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8AE0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8AE5: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587A8AE7: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A8AE9: je 0x587a8aef
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A8AEB: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x587A8AED: je 0x587a8af4
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A8AEF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x41
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8AF4: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A8AF8: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587A8AFA: je 0x587a8b4f
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x587A8AFC: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A8AFE: jne 0x587a8b45
        __asm _emit 0x75
        __asm _emit 0x45
        // 0x587A8B00: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x41
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8B05: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8B07: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587A8B0A: jb 0x587a8b11
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8B0C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x41
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8B11: cmp dword ptr [esi], ebx
        __asm _emit 0x39
        __asm _emit 0x1E
        // 0x587A8B13: je 0x587a8b27
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587A8B15: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A8B19: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8B1E: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587A8B20: mov byte ptr [ecx + 0x9c], 3
        __asm _emit 0xC6
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587A8B27: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A8B29: jne 0x587a8b4a
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x587A8B2B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x41
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8B30: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8B32: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587A8B35: jb 0x587a8b3c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8B37: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x41
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8B3C: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587A8B3F: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A8B43: jmp 0x587a8ad0
        __asm _emit 0xEB
        __asm _emit 0x8B
        // 0x587A8B45: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A8B48: jmp 0x587a8b07
        __asm _emit 0xEB
        __asm _emit 0xBD
        // 0x587A8B4A: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A8B4D: jmp 0x587a8b32
        __asm _emit 0xEB
        __asm _emit 0xE3
        // 0x587A8B4F: pop edi
        __asm _emit 0x5F
        // 0x587A8B50: pop esi
        __asm _emit 0x5E
        // 0x587A8B51: pop ebp
        __asm _emit 0x5D
        // 0x587A8B52: mov byte ptr [ebx + 0x9c], 3
        __asm _emit 0xC6
        __asm _emit 0x83
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587A8B59: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8B5E: pop ebx
        __asm _emit 0x5B
        // 0x587A8B5F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A8B62: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
