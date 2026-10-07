// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 524 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cc780.

// Ghidra body range 0x587CC780..0x587CC98C; 524 mapped bytes.
extern "C" __declspec(naked) void FUN_587cc780_segment_00() {
    __asm {
        // 0x587CC780: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CC782: push 0x589818d6
        __asm _emit 0x68
        __asm _emit 0xD6
        __asm _emit 0x18
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CC787: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC78D: push eax
        __asm _emit 0x50
        // 0x587CC78E: push ecx
        __asm _emit 0x51
        // 0x587CC78F: push ebx
        __asm _emit 0x53
        // 0x587CC790: push esi
        __asm _emit 0x56
        // 0x587CC791: push edi
        __asm _emit 0x57
        // 0x587CC792: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CC797: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CC799: push eax
        __asm _emit 0x50
        // 0x587CC79A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CC79E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC7A4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CC7A6: cmp dword ptr [esi + 0x5c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x5C
        __asm _emit 0x00
        // 0x587CC7AA: jne 0x587cc853
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC7B0: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC7B5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CC7BA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CC7BC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CC7BF: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CC7C3: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC7CB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CC7CD: je 0x587cc817
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x587CC7CF: mov edx, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x48
        // 0x587CC7D2: mov edi, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CC7D8: cmp dword ptr [edi + 0x160], 0x26
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        // 0x587CC7DF: mov ebx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x587CC7E2: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587CC7E5: jle 0x587cc7fe
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587CC7E7: cmp dword ptr [edi + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC7EE: je 0x587cc7fe
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587CC7F0: mov edi, dword ptr [edi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC7F6: add edi, 0x980
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC7FC: jmp 0x587cc800
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CC7FE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CC800: add ebx, 0x11
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x11
        // 0x587CC803: push ebx
        __asm _emit 0x53
        // 0x587CC804: add eax, 0x186
        __asm _emit 0x05
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC809: push eax
        __asm _emit 0x50
        // 0x587CC80A: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587CC80C: push edi
        __asm _emit 0x57
        // 0x587CC80D: push edx
        __asm _emit 0x52
        // 0x587CC80E: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xA8
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC813: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587CC815: jmp 0x587cc819
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CC817: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CC819: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x587CC81C: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587CC81F: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC824: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CC82C: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x587CC830: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CC832: je 0x587cc83a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CC834: push edi
        __asm _emit 0x57
        // 0x587CC835: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x67
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC83A: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x587CC83D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CC83F: je 0x587cc847
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CC841: push edi
        __asm _emit 0x57
        // 0x587CC842: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x66
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC847: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587CC84A: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC84F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CC853: cmp dword ptr [esi + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x587CC857: jne 0x587cc900
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC85D: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC862: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x03
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587CC867: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CC869: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CC86C: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CC870: mov dword ptr [esp + 0x1c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC878: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CC87A: je 0x587cc8c4
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x587CC87C: mov edx, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x48
        // 0x587CC87F: mov edi, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CC885: cmp dword ptr [edi + 0x160], 0x26
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        // 0x587CC88C: mov ebx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x587CC88F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587CC892: jle 0x587cc8ab
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587CC894: cmp dword ptr [edi + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC89B: je 0x587cc8ab
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587CC89D: mov edi, dword ptr [edi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC8A3: add edi, 0x980
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC8A9: jmp 0x587cc8ad
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CC8AB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CC8AD: add ebx, 0x11
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x11
        // 0x587CC8B0: push ebx
        __asm _emit 0x53
        // 0x587CC8B1: add eax, 0x1a9
        __asm _emit 0x05
        __asm _emit 0xA9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC8B6: push eax
        __asm _emit 0x50
        // 0x587CC8B7: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587CC8B9: push edi
        __asm _emit 0x57
        // 0x587CC8BA: push edx
        __asm _emit 0x52
        // 0x587CC8BB: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xA8
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC8C0: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587CC8C2: jmp 0x587cc8c6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CC8C4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CC8C6: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x587CC8C9: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587CC8CC: mov edx, 0x2710
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC8D1: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CC8D9: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x587CC8DD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CC8DF: je 0x587cc8e7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CC8E1: push edi
        __asm _emit 0x57
        // 0x587CC8E2: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x66
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC8E7: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x587CC8EA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CC8EC: je 0x587cc8f4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587CC8EE: push edi
        __asm _emit 0x57
        // 0x587CC8EF: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x65
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC8F4: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587CC8F7: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC8FC: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CC900: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587CC903: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587CC907: movzx edi, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587CC90B: mov cl, dl
        __asm _emit 0x8A
        __asm _emit 0xCA
        // 0x587CC90D: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x01
        // 0x587CC910: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x587CC914: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC919: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xFB
        // 0x587CC91C: or di, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF9
        // 0x587CC91F: mov word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587CC923: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587CC926: movzx edi, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587CC92A: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xFB
        // 0x587CC92D: or di, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xF9
        // 0x587CC930: mov word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587CC934: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587CC936: je 0x587cc977
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x587CC938: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587CC93D: mul dword ptr [esi + 0x14]
        __asm _emit 0xF7
        __asm _emit 0x66
        __asm _emit 0x14
        // 0x587CC940: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x587CC943: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587CC945: shr edi, 3
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x03
        // 0x587CC948: mov eax, 0x88888889
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x88
        // 0x587CC94D: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587CC94F: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587CC951: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587CC954: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587CC956: shr ebx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x587CC959: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x587CC95B: push ebx
        __asm _emit 0x53
        // 0x587CC95C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xA9
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC961: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587CC964: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x587CC966: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587CC969: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x587CC96B: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587CC96D: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587CC96F: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x587CC971: push edi
        __asm _emit 0x57
        // 0x587CC972: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xA9
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC977: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CC97B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC982: pop ecx
        __asm _emit 0x59
        // 0x587CC983: pop edi
        __asm _emit 0x5F
        // 0x587CC984: pop esi
        __asm _emit 0x5E
        // 0x587CC985: pop ebx
        __asm _emit 0x5B
        // 0x587CC986: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CC989: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
