// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 608 bytes in 2 exact ranges.
// Source symbol alias: FUN_587f6740.

// Ghidra body range 0x587F6740..0x587F6926; 486 mapped bytes.
extern "C" __declspec(naked) void FUN_587f6740_segment_00() {
    __asm {
        // 0x587F6740: sub esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x3C
        // 0x587F6743: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F6748: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F674A: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F674E: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587F6755: push ebx
        __asm _emit 0x53
        // 0x587F6756: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587F6758: push esi
        __asm _emit 0x56
        // 0x587F6759: mov dword ptr [esp + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F675D: je 0x587f6973
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6763: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6768: cmp dword ptr [eax + 0x644], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F676F: jne 0x587f67c9
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x587F6771: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6777: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F677C: push 0x5899c5c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6781: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F6783: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6789: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F678C: push eax
        __asm _emit 0x50
        // 0x587F678D: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x6A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F6792: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6797: push 0x5899c5c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F679C: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F679E: mov ecx, dword ptr [ebx + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F67A4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F67A7: push eax
        __asm _emit 0x50
        // 0x587F67A8: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x55
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F67AD: mov ecx, dword ptr [ebx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F67B3: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x91
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F67B8: pop esi
        __asm _emit 0x5E
        // 0x587F67B9: pop ebx
        __asm _emit 0x5B
        // 0x587F67BA: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F67BE: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F67C0: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F67C5: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x587F67C8: ret
        __asm _emit 0xC3
        // 0x587F67C9: mov ecx, dword ptr [ebx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F67CF: mov esi, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F67D5: mov al, byte ptr [esi + 1]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x587F67D8: push edi
        __asm _emit 0x57
        // 0x587F67D9: cmp al, 0xa4
        __asm _emit 0x3C
        __asm _emit 0xA4
        // 0x587F67DB: jne 0x587f67e8
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587F67DD: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F67E2: mov dword ptr [esp + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F67E6: jmp 0x587f6810
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x587F67E8: cmp al, 0xc0
        __asm _emit 0x3C
        __asm _emit 0xC0
        // 0x587F67EA: jne 0x587f67fa
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587F67EC: mov dword ptr [esp + 0xc], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F67F4: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F67F8: jmp 0x587f6810
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x587F67FA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587F67FC: cmp byte ptr [esi + 2], 0x71
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x02
        __asm _emit 0x71
        // 0x587F6800: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x587F6803: dec edx
        __asm _emit 0x4A
        // 0x587F6804: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587F6807: add edx, 3
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x03
        // 0x587F680A: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F680E: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587F6810: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587F6812: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F6815: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F6817: inc eax
        __asm _emit 0x40
        // 0x587F6818: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F681A: jne 0x587f6815
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F681C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F681E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F6820: jbe 0x587f693b
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6826: cmp byte ptr [esi + edi - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x3E
        __asm _emit 0xFF
        __asm _emit 0x20
        // 0x587F682B: jne 0x587f693b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6831: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587F6833: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F6837: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F6839: push eax
        __asm _emit 0x50
        // 0x587F683A: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x64
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F683F: mov eax, dword ptr [0x58a0b458]
        __asm _emit 0xA1
        __asm _emit 0x58
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6844: mov edx, dword ptr [0x58a0b454]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F684A: mov ecx, dword ptr [0x58a0b450]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6850: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F6854: mov eax, dword ptr [0x58a0b464]
        __asm _emit 0xA1
        __asm _emit 0x64
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6859: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F685D: mov edx, dword ptr [0x58a0b460]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6863: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F6867: mov ecx, dword ptr [0x58a0b45c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x5C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F686D: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F6871: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587F6873: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F6877: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F687A: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F687E: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F6881: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F6883: inc eax
        __asm _emit 0x40
        // 0x587F6884: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F6886: jne 0x587f6881
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F6888: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F688A: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587F688C: add eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x31
        // 0x587F688F: push ebp
        __asm _emit 0x55
        // 0x587F6890: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587F6892: push ebp
        __asm _emit 0x55
        // 0x587F6893: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587F6898: push ebp
        __asm _emit 0x55
        // 0x587F6899: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587F689B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F689D: push ebx
        __asm _emit 0x53
        // 0x587F689E: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x63
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F68A3: mov ecx, 0xc
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F68A8: lea esi, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F68AC: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x587F68AE: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587F68B0: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F68B4: mov edx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F68BA: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F68C0: add eax, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F68C4: lea ecx, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x587F68C7: push ecx
        __asm _emit 0x51
        // 0x587F68C8: push eax
        __asm _emit 0x50
        // 0x587F68C9: lea ecx, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x587F68CC: push ecx
        __asm _emit 0x51
        // 0x587F68CD: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x64
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F68D2: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F68D8: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587F68DB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F68DD: push ebp
        __asm _emit 0x55
        // 0x587F68DE: push ebx
        __asm _emit 0x53
        // 0x587F68DF: call 0x587b8300
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x1A
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F68E4: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F68EA: pop ebp
        __asm _emit 0x5D
        // 0x587F68EB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F68ED: jne 0x587f690a
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587F68EF: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F68F4: push 0x5899c598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F68F9: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587F68FB: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6901: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6904: push eax
        __asm _emit 0x50
        // 0x587F6905: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F690A: push 0x5899c600
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xC6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F690F: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587F6911: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6914: push eax
        __asm _emit 0x50
        // 0x587F6915: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587F6917: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F6919: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F691B: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x79
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F6920: push ebx
        __asm _emit 0x53
        // 0x587F6921: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x63
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587F6929..0x587F69A3; 122 mapped bytes.
extern "C" __declspec(naked) void FUN_587f6740_segment_01() {
    __asm {
        // 0x587F6929: pop edi
        __asm _emit 0x5F
        // 0x587F692A: pop esi
        __asm _emit 0x5E
        // 0x587F692B: pop ebx
        __asm _emit 0x5B
        // 0x587F692C: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F6930: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F6932: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x62
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6937: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x587F693A: ret
        __asm _emit 0xC3
        // 0x587F693B: mov al, byte ptr [esi + edi - 1]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x3E
        __asm _emit 0xFF
        // 0x587F693F: cmp al, 0x20
        __asm _emit 0x3C
        __asm _emit 0x20
        // 0x587F6941: je 0x587f6947
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587F6943: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587F6945: jne 0x587f6929
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x587F6947: push 0x5899c600
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xC6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F694C: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6952: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6955: push eax
        __asm _emit 0x50
        // 0x587F6956: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587F6958: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F695A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587F695C: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F6961: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587F6965: pop edi
        __asm _emit 0x5F
        // 0x587F6966: pop esi
        __asm _emit 0x5E
        // 0x587F6967: pop ebx
        __asm _emit 0x5B
        // 0x587F6968: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F696A: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x62
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F696F: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x587F6972: ret
        __asm _emit 0xC3
        // 0x587F6973: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6979: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F697E: push 0x5899c5dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6983: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F6985: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F698B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F698E: push eax
        __asm _emit 0x50
        // 0x587F698F: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F6994: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6999: push 0x5899c5dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F699E: jmp 0x587f679c
        __asm _emit 0xE9
        __asm _emit 0xF9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
