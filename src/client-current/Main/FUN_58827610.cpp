// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1398 bytes in 2 exact ranges.
// Source symbol alias: FUN_58827610.

// Ghidra body range 0x58827610..0x5882773A; 298 mapped bytes.
extern "C" __declspec(naked) void FUN_58827610_segment_00() {
    __asm {
        // 0x58827610: sub esp, 0x80c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827616: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882761B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882761D: mov dword ptr [esp + 0x808], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827624: push esi
        __asm _emit 0x56
        // 0x58827625: push edi
        __asm _emit 0x57
        // 0x58827626: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58827628: mov edi, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5882762B: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827631: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827636: push eax
        __asm _emit 0x50
        // 0x58827637: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882763D: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827643: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58827646: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58827648: inc eax
        __asm _emit 0x40
        // 0x58827649: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5882764B: jne 0x58827646
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5882764D: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5882764F: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827655: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882765B: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827661: movzx edx, word ptr [ecx + 0xd3e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x3E
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827668: push ebx
        __asm _emit 0x53
        // 0x58827669: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882766F: push ebp
        __asm _emit 0x55
        // 0x58827670: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827676: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58827679: je 0x588276ec
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x5882767B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882767D: mov ecx, 0x589baab0
        __asm _emit 0xB9
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x58827682: cmp word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x11
        // 0x58827685: je 0x58827698
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58827687: add ecx, 0xe84
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882768D: inc eax
        __asm _emit 0x40
        // 0x5882768E: cmp ecx, 0x589c2d54
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x54
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58827694: jl 0x58827682
        __asm _emit 0x7C
        __asm _emit 0xEC
        // 0x58827696: jmp 0x588276ec
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x58827698: imul eax, eax, 0xe84
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882769E: add eax, 0x589baa98
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x588276A3: push eax
        __asm _emit 0x50
        // 0x588276A4: push 0x5899ddc4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0xDD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588276A9: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588276AB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588276AE: push eax
        __asm _emit 0x50
        // 0x588276AF: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588276B3: push edx
        __asm _emit 0x52
        // 0x588276B4: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588276B6: mov edi, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x588276B9: mov ecx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588276BF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588276C2: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588276C6: push eax
        __asm _emit 0x50
        // 0x588276C7: push ecx
        __asm _emit 0x51
        // 0x588276C8: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588276CE: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588276D4: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588276D7: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588276D9: inc eax
        __asm _emit 0x40
        // 0x588276DA: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588276DC: jne 0x588276d7
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588276DE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588276E0: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588276E6: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588276EC: mov edi, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x588276EF: mov edx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588276F5: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588276FA: push edx
        __asm _emit 0x52
        // 0x588276FB: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827701: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827707: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x5882770A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827710: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58827712: inc eax
        __asm _emit 0x40
        // 0x58827713: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58827715: jne 0x58827710
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58827717: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58827719: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882771F: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827725: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882772A: cmp dword ptr [eax + 0xe08], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827731: je 0x5882777c
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x58827733: mov edi, 0x589baa98
        __asm _emit 0xBF
        __asm _emit 0x98
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x58827738: jmp 0x58827740
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58827740..0x58827B8C; 1100 mapped bytes.
extern "C" __declspec(naked) void FUN_58827610_segment_01() {
    __asm {
        // 0x58827740: mov cx, word ptr [edi + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58827744: cmp cx, word ptr [eax + 0xe04]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882774B: jne 0x5882776e
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5882774D: add eax, 0xe0c
        __asm _emit 0x05
        __asm _emit 0x0C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827752: push eax
        __asm _emit 0x50
        // 0x58827753: push edi
        __asm _emit 0x57
        // 0x58827754: push 0x5899dda0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xDD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58827759: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5882775B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882775E: push eax
        __asm _emit 0x50
        // 0x5882775F: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58827763: push edx
        __asm _emit 0x52
        // 0x58827764: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58827766: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882776B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5882776E: add edi, 0xe84
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827774: cmp edi, 0x589c2d3c
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x3C
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882777A: jl 0x58827740
        __asm _emit 0x7C
        __asm _emit 0xC4
        // 0x5882777C: cmp dword ptr [esi + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827783: je 0x588277e2
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x58827785: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58827787: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58827789: cmp ax, word ptr [esi + 0x84]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827790: jae 0x588277c5
        __asm _emit 0x73
        __asm _emit 0x33
        // 0x58827792: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827798: cmp dword ptr [ecx + edi*4], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB9
        __asm _emit 0x00
        // 0x5882779C: lea eax, [ecx + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB9
        // 0x5882779F: je 0x588277b9
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588277A1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588277A3: push edx
        __asm _emit 0x52
        // 0x588277A4: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x56
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x588277A9: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588277AF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588277B2: mov dword ptr [eax + edi*4], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588277B9: movzx ecx, word ptr [esi + 0x84]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588277C0: inc edi
        __asm _emit 0x47
        // 0x588277C1: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588277C3: jl 0x58827792
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x588277C5: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588277CB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588277CD: je 0x588277e2
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588277CF: push eax
        __asm _emit 0x50
        // 0x588277D0: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x56
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x588277D5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588277D8: mov dword ptr [esi + 0x88], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588277E2: mov edi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x588277E5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588277E7: mov word ptr [esi + 0x84], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588277EE: mov byte ptr [esi + 0x9c], dl
        __asm _emit 0x88
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588277F4: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588277FA: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588277FF: push eax
        __asm _emit 0x50
        // 0x58827800: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827806: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882780C: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x5882780F: nop
        __asm _emit 0x90
        // 0x58827810: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58827812: inc eax
        __asm _emit 0x40
        // 0x58827813: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58827815: jne 0x58827810
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58827817: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58827819: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882781F: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827825: mov edi, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882782B: mov eax, dword ptr [edi + 0x12c0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827831: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58827833: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58827835: jbe 0x58827886
        __asm _emit 0x76
        __asm _emit 0x4F
        // 0x58827837: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58827839: lea ebp, [edx + 1]
        __asm _emit 0x8D
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882783C: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5882783E: jae 0x5882784a
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x58827840: mov ecx, dword ptr [edi + 0x12c4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xC4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827846: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x58827848: jmp 0x5882784c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882784A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882784C: cmp word ptr [ecx + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58827851: je 0x58827877
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58827853: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58827855: jae 0x58827861
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x58827857: mov eax, dword ptr [edi + 0x12c4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xC4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882785D: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5882785F: jmp 0x58827863
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58827861: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58827863: cmp word ptr [eax + 2], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x04
        // 0x58827868: je 0x58827877
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5882786A: add word ptr [esi + 0x84], bp
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827871: mov edi, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827877: mov eax, dword ptr [edi + 0x12c0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882787D: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x5882787F: add ebx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x1C
        // 0x58827882: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58827884: jb 0x58827840
        __asm _emit 0x72
        __asm _emit 0xBA
        // 0x58827886: movzx eax, word ptr [esi + 0x84]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882788D: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58827890: jbe 0x58827a45
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xAF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827896: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x58827899: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882789B: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588278A0: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588278A2: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588278A5: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588278A7: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588278A9: push ecx
        __asm _emit 0x51
        // 0x588278AA: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x9C
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588278AF: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588278B5: mov ebp, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588278BB: mov edi, dword ptr [ebp + 0x12c0]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0xC0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588278C1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588278C4: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588278C6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588278C8: jbe 0x58827a0e
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588278CE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588278D0: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588278D4: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588278D8: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x588278DA: jae 0x588278e6
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x588278DC: mov eax, dword ptr [ebp + 0x12c4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588278E2: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588278E4: jmp 0x588278e8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588278E6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588278E8: cmp word ptr [eax + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588278ED: je 0x588279f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588278F3: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x588278F5: jae 0x58827901
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x588278F7: mov eax, dword ptr [ebp + 0x12c4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588278FD: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588278FF: jmp 0x58827903
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58827901: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58827903: cmp word ptr [eax + 2], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x04
        // 0x58827908: je 0x588279f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882790E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58827910: mov edx, 0x589baab0
        __asm _emit 0xBA
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x58827915: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58827917: jae 0x5882792b
        __asm _emit 0x73
        __asm _emit 0x12
        // 0x58827919: mov ecx, dword ptr [ebp + 0x12c4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xC4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882791F: add ecx, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58827923: mov ebp, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827929: jmp 0x5882792d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882792B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882792D: mov cx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58827930: cmp cx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x0A
        // 0x58827933: je 0x58827949
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58827935: add edx, 0xe84
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882793B: inc eax
        __asm _emit 0x40
        // 0x5882793C: cmp edx, 0x589c2d54
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x54
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58827942: jl 0x58827915
        __asm _emit 0x7C
        __asm _emit 0xD1
        // 0x58827944: jmp 0x588279f4
        __asm _emit 0xE9
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827949: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x5882794B: jae 0x58827959
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x5882794D: mov ecx, dword ptr [ebp + 0x12c4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xC4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827953: add ecx, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58827957: jmp 0x5882795b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58827959: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5882795B: imul eax, eax, 0xe84
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827961: add eax, 0x589baa98
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x58827966: push eax
        __asm _emit 0x50
        // 0x58827967: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5882796A: push ecx
        __asm _emit 0x51
        // 0x5882796B: push 0x5899dd80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xDD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58827970: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827976: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58827979: push eax
        __asm _emit 0x50
        // 0x5882797A: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5882797E: push edx
        __asm _emit 0x52
        // 0x5882797F: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827985: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58827988: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882798C: push eax
        __asm _emit 0x50
        // 0x5882798D: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827993: inc eax
        __asm _emit 0x40
        // 0x58827994: push eax
        __asm _emit 0x50
        // 0x58827995: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x9B
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5882799A: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588279A0: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588279A4: mov dword ptr [edi + ecx], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x588279A7: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588279AC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588279AF: cmp ebx, dword ptr [eax + 0x12c0]
        __asm _emit 0x3B
        __asm _emit 0x98
        __asm _emit 0xC0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588279B5: jae 0x588279c3
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x588279B7: mov eax, dword ptr [eax + 0x12c4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588279BD: add eax, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588279C1: jmp 0x588279c5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588279C3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588279C5: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588279CB: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x588279CF: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x588279D2: jne 0x588279db
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588279D4: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588279D9: jmp 0x588279e0
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588279DB: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588279DF: push ecx
        __asm _emit 0x51
        // 0x588279E0: push eax
        __asm _emit 0x50
        // 0x588279E1: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588279E7: mov ebp, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588279ED: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588279F0: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588279F4: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588279F8: mov edi, dword ptr [ebp + 0x12c0]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0xC0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588279FE: inc ebx
        __asm _emit 0x43
        // 0x588279FF: add ecx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x1C
        // 0x58827A02: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58827A06: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58827A08: jb 0x588278dc
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xCE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58827A0E: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A14: mov edi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x58827A17: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58827A19: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A1F: push edx
        __asm _emit 0x52
        // 0x58827A20: push eax
        __asm _emit 0x50
        // 0x58827A21: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827A27: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A2D: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58827A30: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58827A32: inc eax
        __asm _emit 0x40
        // 0x58827A33: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58827A35: jne 0x58827a30
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58827A37: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58827A39: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A3F: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A45: mov edi, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A4B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58827A4D: mov word ptr [esi + 0x8c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A54: mov byte ptr [esi + 0x9d], cl
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A5A: mov edx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A60: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827A65: push edx
        __asm _emit 0x52
        // 0x58827A66: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827A6C: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A72: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58827A75: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58827A77: inc eax
        __asm _emit 0x40
        // 0x58827A78: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58827A7A: jne 0x58827a75
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58827A7C: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58827A7E: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A84: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A8A: mov eax, 0xd94
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A8F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58827A91: lea edi, [esi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827A97: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x58827A99: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58827A9D: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x58827A9F: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58827AA3: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58827AA5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58827AA7: je 0x58827ab8
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58827AA9: push eax
        __asm _emit 0x50
        // 0x58827AAA: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x53
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58827AAF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58827AB2: mov dword ptr [ebx], 0
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827AB8: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58827ABC: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827AC2: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58827AC4: cmp dword ptr [eax + ecx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58827AC8: je 0x58827b22
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x58827ACA: inc word ptr [esi + 0x8c]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827AD1: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827AD7: lea eax, [edx + ebp + 0xe30]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x2A
        __asm _emit 0x30
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827ADE: push eax
        __asm _emit 0x50
        // 0x58827ADF: push 0x5899dd5c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0xDD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58827AE4: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827AEA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58827AED: push eax
        __asm _emit 0x50
        // 0x58827AEE: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58827AF2: push ecx
        __asm _emit 0x51
        // 0x58827AF3: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827AF9: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58827AFC: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58827B00: push edx
        __asm _emit 0x52
        // 0x58827B01: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827B07: inc eax
        __asm _emit 0x40
        // 0x58827B08: push eax
        __asm _emit 0x50
        // 0x58827B09: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x9A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58827B0E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58827B11: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58827B15: push ecx
        __asm _emit 0x51
        // 0x58827B16: push eax
        __asm _emit 0x50
        // 0x58827B17: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x58827B19: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827B1F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58827B22: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x18
        // 0x58827B25: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58827B28: cmp ebp, 0x48
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x48
        // 0x58827B2B: jl 0x58827aa3
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58827B31: cmp word ptr [esi + 0x8c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827B39: pop ebp
        __asm _emit 0x5D
        // 0x58827B3A: pop ebx
        __asm _emit 0x5B
        // 0x58827B3B: jbe 0x58827b75
        __asm _emit 0x76
        __asm _emit 0x38
        // 0x58827B3D: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58827B41: mov esi, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827B47: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58827B49: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827B4F: push eax
        __asm _emit 0x50
        // 0x58827B50: push ecx
        __asm _emit 0x51
        // 0x58827B51: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827B57: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827B5D: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58827B60: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58827B62: inc eax
        __asm _emit 0x40
        // 0x58827B63: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58827B65: jne 0x58827b60
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58827B67: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58827B69: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827B6F: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827B75: mov ecx, dword ptr [esp + 0x810]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827B7C: pop edi
        __asm _emit 0x5F
        // 0x58827B7D: pop esi
        __asm _emit 0x5E
        // 0x58827B7E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58827B80: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x50
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58827B85: add esp, 0x80c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827B8B: ret
        __asm _emit 0xC3
    }
}
