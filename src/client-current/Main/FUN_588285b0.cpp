// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1321 bytes in 5 exact ranges.
// Source symbol alias: FUN_588285b0.

// Ghidra body range 0x588285B0..0x588286A7; 247 mapped bytes.
extern "C" __declspec(naked) void FUN_588285b0_segment_00() {
    __asm {
        // 0x588285B0: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588285B3: push ebx
        __asm _emit 0x53
        // 0x588285B4: push ebp
        __asm _emit 0x55
        // 0x588285B5: push esi
        __asm _emit 0x56
        // 0x588285B6: lea eax, [ecx + 0x194]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588285BC: push edi
        __asm _emit 0x57
        // 0x588285BD: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588285C1: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588285C5: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588285CA: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588285CC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588285D0: mov ecx, dword ptr [eax - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xF4
        // 0x588285D3: mov dword ptr [ecx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x588285D6: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588285D8: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x588285DB: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x588285DD: je 0x58828613
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588285DF: mov edi, 0x5898c922
        __asm _emit 0xBF
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588285E4: mov ebp, 0x80
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588285E9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588285F0: lea edx, [ebp + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588285F6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588285F8: je 0x5882860b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588285FA: mov dl, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x17
        // 0x588285FC: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x588285FE: je 0x5882860b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58828600: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x58828602: inc ecx
        __asm _emit 0x41
        // 0x58828603: inc edi
        __asm _emit 0x47
        // 0x58828604: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58828607: jne 0x588285f0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58828609: jmp 0x5882860f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5882860B: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x5882860D: jne 0x58828610
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5882860F: dec ecx
        __asm _emit 0x49
        // 0x58828610: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58828613: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58828616: mov dword ptr [ecx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x58828619: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5882861C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x5882861F: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x58828621: je 0x58828653
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58828623: mov edi, 0x5898c922
        __asm _emit 0xBF
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58828628: mov ebp, 0x80
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882862D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58828630: lea edx, [ebp + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58828636: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58828638: je 0x5882864b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5882863A: mov dl, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x17
        // 0x5882863C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5882863E: je 0x5882864b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58828640: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x58828642: inc ecx
        __asm _emit 0x41
        // 0x58828643: inc edi
        __asm _emit 0x47
        // 0x58828644: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58828647: jne 0x58828630
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58828649: jmp 0x5882864f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5882864B: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x5882864D: jne 0x58828650
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5882864F: dec ecx
        __asm _emit 0x49
        // 0x58828650: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58828653: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58828656: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882865B: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5882865F: mov ecx, dword ptr [eax + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x3C
        // 0x58828662: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58828666: mov ecx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x48
        // 0x58828669: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5882866D: mov ecx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x58828670: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58828674: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58828677: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5882867A: jne 0x588285d0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58828680: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58828684: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58828688: mov eax, 0xfffffe9c
        __asm _emit 0xB8
        __asm _emit 0x9C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882868D: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5882868F: mov ebp, 0xbc8
        __asm _emit 0xBD
        __asm _emit 0xC8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828694: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58828696: sub ebp, ecx
        __asm _emit 0x2B
        __asm _emit 0xE9
        // 0x58828698: mov ebx, 0xd68
        __asm _emit 0xBB
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882869D: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588286A1: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588286A5: jmp 0x588286b0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x588286B0..0x58828739; 137 mapped bytes.
extern "C" __declspec(naked) void FUN_588285b0_segment_01() {
    __asm {
        // 0x588286B0: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588286B5: lea ecx, [esi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x2E
        // 0x588286B8: cmp dword ptr [ecx + eax], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588286BC: je 0x588287a2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588286C2: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588286C6: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x588286C8: mov edx, dword ptr [ecx + eax + 0xd2c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x2C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588286CF: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588286D5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588286D7: push edx
        __asm _emit 0x52
        // 0x588286D8: call 0x587537e0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xB1
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588286DD: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588286E3: push eax
        __asm _emit 0x50
        // 0x588286E4: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xD9
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588286E9: mov ecx, dword ptr [esi - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xF4
        // 0x588286EC: sub eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x38
        // 0x588286EF: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588286F2: je 0x5882871c
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588286F4: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588286F7: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588286FA: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588286FD: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58828700: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58828703: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58828705: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58828708: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5882870A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5882870D: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58828710: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58828713: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58828716: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58828719: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5882871C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882871E: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58828721: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828727: lea edx, [ebx + ecx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x0B
        // 0x5882872A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882872C: je 0x58828767
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5882872E: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58828730: je 0x58828767
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58828732: mov ebp, 0x80
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828737: jmp 0x58828740
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58828740..0x58828969; 553 mapped bytes.
extern "C" __declspec(naked) void FUN_588285b0_segment_02() {
    __asm {
        // 0x58828740: lea ecx, [ebp + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58828746: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58828748: je 0x5882875b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5882874A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5882874C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5882874E: je 0x5882875b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58828750: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58828752: inc eax
        __asm _emit 0x40
        // 0x58828753: inc edx
        __asm _emit 0x42
        // 0x58828754: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58828757: jne 0x58828740
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58828759: jmp 0x5882875f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5882875B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5882875D: jne 0x58828760
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5882875F: dec eax
        __asm _emit 0x48
        // 0x58828760: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58828764: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828767: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x5882876A: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5882876F: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58828773: mov byte ptr [edi + edx + 0x200], 2
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5882877B: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828781: lea eax, [esi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2E
        // 0x58828784: mov edx, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x58828787: mov dword ptr [esi + 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x5882878A: add ebx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x18
        // 0x5882878D: inc edi
        __asm _emit 0x47
        // 0x5882878E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58828791: cmp ebx, 0xdb0
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828797: jl 0x588286b0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882879D: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588287A2: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588287A6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588287A8: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588287AC: mov ebx, 0xe78
        __asm _emit 0xBB
        __asm _emit 0x78
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588287B1: lea ecx, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x3E
        // 0x588287B4: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x588287B7: jge 0x588288be
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588287BD: cmp dword ptr [ebx + eax], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588287C1: je 0x588288a9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588287C7: mov edx, dword ptr [eax + ebx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x18
        // 0x588287CA: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588287D0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588287D2: push edx
        __asm _emit 0x52
        // 0x588287D3: call 0x587537e0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xB0
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588287D8: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588287DE: dec eax
        __asm _emit 0x48
        // 0x588287DF: push eax
        __asm _emit 0x50
        // 0x588287E0: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xD8
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588287E5: lea ecx, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x3E
        // 0x588287E8: mov ecx, dword ptr [ebp + ecx*4 + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588287EF: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588287F2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588287F4: je 0x5882881e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588287F6: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588287F9: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588287FC: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588287FF: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58828802: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58828805: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58828807: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5882880A: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5882880C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5882880F: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58828812: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58828815: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58828818: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5882881B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5882881E: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828824: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58828828: lea eax, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x5882882B: mov eax, dword ptr [ebp + eax*4 + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828832: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58828835: lea edx, [edx + ecx + 0xe84]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x0A
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882883C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882883E: je 0x58828877
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x58828840: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58828842: je 0x58828877
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58828844: mov ebp, 0x80
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828849: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828850: lea ecx, [ebp + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58828856: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58828858: je 0x5882886b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5882885A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5882885C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5882885E: je 0x5882886b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58828860: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58828862: inc eax
        __asm _emit 0x40
        // 0x58828863: inc edx
        __asm _emit 0x42
        // 0x58828864: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58828867: jne 0x58828850
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58828869: jmp 0x5882886f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5882886B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5882886D: jne 0x58828870
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5882886F: dec eax
        __asm _emit 0x48
        // 0x58828870: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58828874: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828877: lea edx, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x3E
        // 0x5882887A: mov eax, dword ptr [ebp + edx*4 + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828881: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58828886: lea eax, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x58828889: mov byte ptr [eax + ebp + 0x200], 1
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58828891: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828897: mov eax, dword ptr [ebx + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x13
        // 0x5882889A: lea ecx, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x3E
        // 0x5882889D: mov dword ptr [ebp + ecx*4 + 0x208], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588288A4: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588288A9: add dword ptr [esp + 0x14], 0x18
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x18
        // 0x588288AE: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588288B1: inc esi
        __asm _emit 0x46
        // 0x588288B2: cmp ebx, 0xe84
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588288B8: jl 0x588287b1
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588288BE: mov ecx, 0xfffffed8
        __asm _emit 0xB9
        __asm _emit 0xD8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588288C3: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x588288C5: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588288C9: mov ecx, 0xc04
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588288CE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588288D0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588288D2: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x588288D4: lea esi, [ebp + 0x1ac]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588288DA: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588288DE: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588288E0: lea ecx, [esi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x2E
        // 0x588288E3: cmp dword ptr [ecx + eax], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588288E7: je 0x588289cf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588288ED: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588288F1: lea edx, [eax + ecx + 0xd2c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x2C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588288F8: mov eax, dword ptr [edx + esi]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x32
        // 0x588288FB: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828901: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828903: push eax
        __asm _emit 0x50
        // 0x58828904: call 0x587537e0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xAE
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58828909: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882890F: dec eax
        __asm _emit 0x48
        // 0x58828910: push eax
        __asm _emit 0x50
        // 0x58828911: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xD6
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58828916: mov ecx, dword ptr [esi - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xF4
        // 0x58828919: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5882891C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882891E: je 0x58828948
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58828920: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58828923: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58828926: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58828929: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5882892C: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5882892F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58828931: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58828934: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58828936: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58828939: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5882893C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5882893F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58828942: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58828945: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58828948: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882894A: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5882894D: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828953: lea edx, [ebx + ecx + 0xdbc]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x0B
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882895A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882895C: je 0x58828997
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5882895E: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58828960: je 0x58828997
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58828962: mov ebp, 0x80
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828967: jmp 0x58828970
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58828970..0x58828A7A; 266 mapped bytes.
extern "C" __declspec(naked) void FUN_588285b0_segment_03() {
    __asm {
        // 0x58828970: lea ecx, [ebp + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58828976: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58828978: je 0x5882898b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5882897A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5882897C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5882897E: je 0x5882898b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58828980: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58828982: inc eax
        __asm _emit 0x40
        // 0x58828983: inc edx
        __asm _emit 0x42
        // 0x58828984: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58828987: jne 0x58828970
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58828989: jmp 0x5882898f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5882898B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5882898D: jne 0x58828990
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5882898F: dec eax
        __asm _emit 0x48
        // 0x58828990: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58828994: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828997: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5882899A: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5882899F: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588289A3: mov byte ptr [edi + edx + 0x203], 2
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588289AB: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588289B1: lea eax, [esi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2E
        // 0x588289B4: mov edx, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x588289B7: mov dword ptr [esi + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x588289BA: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588289BF: add ebx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x18
        // 0x588289C2: inc edi
        __asm _emit 0x47
        // 0x588289C3: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588289C6: cmp ebx, 0x48
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x48
        // 0x588289C9: jl 0x588288e0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x11
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588289CF: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588289D3: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588289D5: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588289D9: mov ebx, 0xecc
        __asm _emit 0xBB
        __asm _emit 0xCC
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588289DE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588289E0: lea ecx, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x3E
        // 0x588289E3: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x588289E6: jge 0x58828aee
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588289EC: cmp dword ptr [ebx + eax], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588289F0: je 0x58828ad9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588289F6: mov edx, dword ptr [eax + ebx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x18
        // 0x588289F9: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588289FF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58828A01: push edx
        __asm _emit 0x52
        // 0x58828A02: call 0x587537e0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xAD
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58828A07: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828A0D: dec eax
        __asm _emit 0x48
        // 0x58828A0E: push eax
        __asm _emit 0x50
        // 0x58828A0F: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xD5
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58828A14: lea ecx, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x3E
        // 0x58828A17: mov ecx, dword ptr [ebp + ecx*4 + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x8D
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828A1E: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58828A21: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58828A23: je 0x58828a4d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58828A25: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58828A28: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58828A2B: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58828A2E: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58828A31: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58828A34: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58828A36: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58828A39: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58828A3B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58828A3E: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58828A41: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58828A44: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58828A47: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58828A4A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58828A4D: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828A53: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58828A57: lea eax, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x58828A5A: mov eax, dword ptr [ebp + eax*4 + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828A61: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58828A64: lea edx, [edx + ecx + 0xed8]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x0A
        __asm _emit 0xD8
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828A6B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58828A6D: je 0x58828aa7
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58828A6F: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58828A71: je 0x58828aa7
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58828A73: mov ebp, 0x80
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828A78: jmp 0x58828a80
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58828A80..0x58828AF6; 118 mapped bytes.
extern "C" __declspec(naked) void FUN_588285b0_segment_04() {
    __asm {
        // 0x58828A80: lea ecx, [ebp + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58828A86: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58828A88: je 0x58828a9b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58828A8A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58828A8C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58828A8E: je 0x58828a9b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58828A90: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58828A92: inc eax
        __asm _emit 0x40
        // 0x58828A93: inc edx
        __asm _emit 0x42
        // 0x58828A94: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58828A97: jne 0x58828a80
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58828A99: jmp 0x58828a9f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58828A9B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58828A9D: jne 0x58828aa0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58828A9F: dec eax
        __asm _emit 0x48
        // 0x58828AA0: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58828AA4: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828AA7: lea edx, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x3E
        // 0x58828AAA: mov eax, dword ptr [ebp + edx*4 + 0x1e8]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828AB1: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58828AB6: lea eax, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x58828AB9: mov byte ptr [eax + ebp + 0x203], 1
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58828AC1: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828AC7: mov eax, dword ptr [ebx + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x13
        // 0x58828ACA: lea ecx, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x3E
        // 0x58828ACD: mov dword ptr [ebp + ecx*4 + 0x214], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828AD4: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828AD9: add dword ptr [esp + 0x14], 0x18
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x18
        // 0x58828ADE: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58828AE1: inc esi
        __asm _emit 0x46
        // 0x58828AE2: cmp ebx, 0xed8
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xD8
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828AE8: jl 0x588289e0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58828AEE: pop edi
        __asm _emit 0x5F
        // 0x58828AEF: pop esi
        __asm _emit 0x5E
        // 0x58828AF0: pop ebp
        __asm _emit 0x5D
        // 0x58828AF1: pop ebx
        __asm _emit 0x5B
        // 0x58828AF2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58828AF5: ret
        __asm _emit 0xC3
    }
}
