// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58839460 .. +0x289 bytes.
// Source symbol alias: FUN_58839460.
extern "C" __declspec(naked) void FUN_58839460() {
    __asm {
        // 0x58839460: sub esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839466: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5883946B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5883946D: mov dword ptr [esp + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839474: push ebp
        __asm _emit 0x55
        // 0x58839475: push esi
        __asm _emit 0x56
        // 0x58839476: mov esi, dword ptr [esp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883947D: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58839480: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58839482: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58839484: push eax
        __asm _emit 0x50
        // 0x58839485: push ecx
        __asm _emit 0x51
        // 0x58839486: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883948C: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58839490: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58839494: call 0x58753bf0
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xA7
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58839499: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883949D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883949F: jne 0x588394bf
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x588394A1: mov byte ptr [ebp + 0x321], 6
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x588394A8: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588394AB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588394AD: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588394B3: push edx
        __asm _emit 0x52
        // 0x588394B4: push eax
        __asm _emit 0x50
        // 0x588394B5: call 0x587b9290
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xFD
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588394BA: jmp 0x588396d0
        __asm _emit 0xE9
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588394BF: push edi
        __asm _emit 0x57
        // 0x588394C0: add esi, 0x24
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x24
        // 0x588394C3: push esi
        __asm _emit 0x56
        // 0x588394C4: push 0x5899e2dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588394C9: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588394CF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588394D2: push eax
        __asm _emit 0x50
        // 0x588394D3: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588394D7: push ecx
        __asm _emit 0x51
        // 0x588394D8: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588394DE: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588394E4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588394E7: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588394E9: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588394ED: push edx
        __asm _emit 0x52
        // 0x588394EE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588394F0: call 0x5881e2e0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x4D
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588394F5: mov edi, dword ptr [ebp + 0x264]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588394FB: add ebp, 0x258
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839501: cmp edi, dword ptr [ebp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x58839504: jbe 0x5883950b
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58839506: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883950B: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x5883950E: push ebx
        __asm _emit 0x53
        // 0x5883950F: nop
        __asm _emit 0x90
        // 0x58839510: mov ebx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x58839513: cmp dword ptr [ebp + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x58839516: jbe 0x5883951d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58839518: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883951D: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58839520: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58839522: je 0x58839528
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58839524: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58839526: je 0x5883952d
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58839528: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883952D: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5883952F: je 0x5883958b
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x58839531: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58839533: jne 0x58839575
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x58839535: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883953A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883953C: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5883953F: jb 0x58839546
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58839541: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839546: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58839548: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883954C: push eax
        __asm _emit 0x50
        // 0x5883954D: add ecx, 0x2d
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x2D
        // 0x58839550: push ecx
        __asm _emit 0x51
        // 0x58839551: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58839557: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839559: je 0x5883957d
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5883955B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5883955D: jne 0x58839579
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5883955F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839564: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839566: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58839569: jb 0x58839570
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5883956B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x37
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839570: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58839573: jmp 0x58839510
        __asm _emit 0xEB
        __asm _emit 0x9B
        // 0x58839575: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58839577: jmp 0x5883953c
        __asm _emit 0xEB
        __asm _emit 0xC3
        // 0x58839579: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5883957B: jmp 0x58839566
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x5883957D: push edi
        __asm _emit 0x57
        // 0x5883957E: push esi
        __asm _emit 0x56
        // 0x5883957F: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58839583: push edx
        __asm _emit 0x52
        // 0x58839584: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58839586: call 0x58849980
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5883958B: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883958F: mov ebx, dword ptr [esi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839595: add esi, 0x190
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883959B: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5883959E: jbe 0x588395a5
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588395A0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x36
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588395A5: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x588395A7: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x588395A9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588395B0: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x588395B3: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x588395B6: jbe 0x588395bd
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588395B8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x36
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588395BD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588395BF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588395C1: je 0x588395c7
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588395C3: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588395C5: je 0x588395cc
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588395C7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x36
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588395CC: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588395CE: je 0x58839621
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x588395D0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588395D2: jne 0x58839619
        __asm _emit 0x75
        __asm _emit 0x45
        // 0x588395D4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x36
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588395D9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588395DB: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x588395DE: jb 0x588395e5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588395E0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x36
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588395E5: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588395E9: lea eax, [ebp + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x2D
        // 0x588395EC: push eax
        __asm _emit 0x50
        // 0x588395ED: add ecx, 0x2d
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x2D
        // 0x588395F0: push ecx
        __asm _emit 0x51
        // 0x588395F1: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588395F7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588395F9: je 0x588396ce
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588395FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58839601: jne 0x5883961d
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58839603: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x36
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839608: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883960A: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5883960D: jb 0x58839614
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5883960F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x36
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839614: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x54
        // 0x58839617: jmp 0x588395b0
        __asm _emit 0xEB
        __asm _emit 0x97
        // 0x58839619: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5883961B: jmp 0x588395db
        __asm _emit 0xEB
        __asm _emit 0xBE
        // 0x5883961D: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5883961F: jmp 0x5883960a
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x58839621: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58839625: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58839629: add edx, 0x2d
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x2D
        // 0x5883962C: push edx
        __asm _emit 0x52
        // 0x5883962D: lea edi, [ebx + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x2D
        // 0x58839630: push edi
        __asm _emit 0x57
        // 0x58839631: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58839637: push ebx
        __asm _emit 0x53
        // 0x58839638: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883963A: call 0x58836af0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xD4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883963F: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58839643: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x58839647: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883964C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5883964F: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839654: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58839657: jne 0x588396ce
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x58839659: mov ecx, dword ptr [ebx + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883965F: push 0xadd783
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x00
        // 0x58839664: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58839666: push edi
        __asm _emit 0x57
        // 0x58839667: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xF2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883966C: mov ecx, dword ptr [ebx + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839672: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58839677: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58839679: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883967E: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xF2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839683: mov ecx, dword ptr [ebx + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839689: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883968E: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58839690: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58839695: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xF2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883969A: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5883969D: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588396A0: mov eax, 0x30c30c31
        __asm _emit 0xB8
        __asm _emit 0x31
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x30
        // 0x588396A5: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588396A7: mov ecx, dword ptr [ebx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588396AD: sub ecx, dword ptr [ebx + 0x264]
        __asm _emit 0x2B
        __asm _emit 0x8B
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588396B3: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588396B6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588396B8: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588396BB: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588396BE: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588396C0: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588396C2: mov ecx, dword ptr [ebx + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588396C8: push eax
        __asm _emit 0x50
        // 0x588396C9: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588396CE: pop ebx
        __asm _emit 0x5B
        // 0x588396CF: pop edi
        __asm _emit 0x5F
        // 0x588396D0: mov ecx, dword ptr [esp + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588396D7: pop esi
        __asm _emit 0x5E
        // 0x588396D8: pop ebp
        __asm _emit 0x5D
        // 0x588396D9: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588396DB: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588396E0: add esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588396E6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
