// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1314 bytes in 3 exact ranges.
// Source symbol alias: FUN_58835370.

// Ghidra body range 0x58835370..0x58835554; 484 mapped bytes.
extern "C" __declspec(naked) void FUN_58835370_segment_00() {
    __asm {
        // 0x58835370: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58835373: push esi
        __asm _emit 0x56
        // 0x58835374: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58835376: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5883537A: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883537F: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58835382: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835387: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5883538A: je 0x588353a1
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5883538C: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58835390: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58835393: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835398: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5883539B: jne 0x588358a1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588353A1: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588353A5: push ebx
        __asm _emit 0x53
        // 0x588353A6: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588353AB: push ebp
        __asm _emit 0x55
        // 0x588353AC: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588353AF: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588353B4: push edi
        __asm _emit 0x57
        // 0x588353B5: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588353B8: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588353BC: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588353C1: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x588353C5: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588353CA: mov ecx, dword ptr [esi + 0x27c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588353D0: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588353D5: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xC9
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588353DA: mov ebp, 6
        __asm _emit 0xBD
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588353DF: cmp word ptr [0x58a0b4a8], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588353E6: jne 0x58835405
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x588353E8: lea eax, [esi + 0x1bc]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588353EE: lea edx, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x588353F1: mov ecx, dword ptr [eax - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xEC
        // 0x588353F4: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x588353F8: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588353FA: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x588353FE: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58835401: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x58835403: jne 0x588353f1
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x58835405: cmp word ptr [0x58a0b4a8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x03
        // 0x5883540D: jne 0x58835439
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x5883540F: lea eax, [esi + 0x1bc]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835415: mov edx, 5
        __asm _emit 0xBA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883541A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835420: mov ecx, dword ptr [eax - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xEC
        // 0x58835423: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835428: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x5883542C: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5883542E: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x58835432: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58835435: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x58835437: jne 0x58835420
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58835439: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883543F: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58835441: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58835444: cmp word ptr [0x58a0b4a8], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883544B: jne 0x58835490
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x5883544D: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835453: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x58835456: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883545C: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58835460: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835466: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5883546A: mov edx, dword ptr [esi + 0x294]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835470: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x58835473: mov eax, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835479: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5883547C: mov ecx, dword ptr [esi + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835482: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x58835485: mov edx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883548B: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5883548E: jmp 0x588354d8
        __asm _emit 0xEB
        __asm _emit 0x48
        // 0x58835490: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835496: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58835499: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883549F: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588354A4: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588354A8: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588354AE: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588354B0: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588354B4: mov eax, dword ptr [esi + 0x294]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588354BA: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588354BD: mov ecx, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588354C3: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x588354C6: mov edx, dword ptr [esi + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588354CC: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588354CF: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588354D5: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588354D8: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588354DE: mov edx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588354E4: movsx eax, word ptr [edx + 0xf0]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x82
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588354EB: mov ecx, dword ptr [esi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588354F1: push eax
        __asm _emit 0x50
        // 0x588354F2: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x1E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588354F7: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588354FD: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835501: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x32
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58835506: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883550C: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x32
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58835511: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835517: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x32
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883551C: lea eax, [esi + 0x228]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835522: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835527: mov edx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0xFC
        // 0x5883552A: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5883552D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883552F: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x58835532: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58835534: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x58835537: jne 0x58835527
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x58835539: mov eax, dword ptr [esi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883553F: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58835543: cmp dword ptr [eax + 0x64], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x64
        // 0x58835546: je 0x5883565c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883554C: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58835552: jmp 0x58835560
        __asm _emit 0xEB
        __asm _emit 0x0C
    }
}

// Ghidra body range 0x58835560..0x58835788; 552 mapped bytes.
extern "C" __declspec(naked) void FUN_58835370_segment_01() {
    __asm {
        // 0x58835560: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58835566: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883556A: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835570: push edx
        __asm _emit 0x52
        // 0x58835571: call 0x58848420
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58835576: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58835578: cmp word ptr [edi + 0x9e], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9F
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883557F: jne 0x58835590
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x58835581: mov eax, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x70
        // 0x58835584: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x58835587: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5883558C: push edi
        __asm _emit 0x57
        // 0x5883558D: push ecx
        __asm _emit 0x51
        // 0x5883558E: jmp 0x5883559d
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58835590: mov edx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x70
        // 0x58835593: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x58835596: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883559B: push edi
        __asm _emit 0x57
        // 0x5883559C: push eax
        __asm _emit 0x50
        // 0x5883559D: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588355A3: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x33
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588355A8: movsx eax, word ptr [edi + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x87
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588355AF: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588355B2: ja 0x5883560b
        __asm _emit 0x77
        __asm _emit 0x57
        // 0x588355B4: jmp dword ptr [eax*4 + 0x588358a8]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x58
        __asm _emit 0x83
        __asm _emit 0x58
        // 0x588355BB: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x588355C0: push ebx
        __asm _emit 0x53
        // 0x588355C1: push 0x5899e1b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0xE1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588355C6: jmp 0x588355fa
        __asm _emit 0xEB
        __asm _emit 0x32
        // 0x588355C8: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588355CD: push ebx
        __asm _emit 0x53
        // 0x588355CE: push 0x5899e270
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588355D3: jmp 0x588355fa
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x588355D5: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588355DA: push ebx
        __asm _emit 0x53
        // 0x588355DB: push 0x5899e24c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588355E0: jmp 0x588355fa
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x588355E2: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588355E7: push ebx
        __asm _emit 0x53
        // 0x588355E8: push 0x5899e228
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588355ED: jmp 0x588355fa
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588355EF: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588355F4: push ebx
        __asm _emit 0x53
        // 0x588355F5: push 0x5899e200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588355FA: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588355FC: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835602: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58835605: push eax
        __asm _emit 0x50
        // 0x58835606: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x32
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883560B: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58835610: cmp word ptr [edi + 0x9e], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9F
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835617: jne 0x5883562d
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58835619: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883561F: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58835621: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58835626: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x32
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883562B: jmp 0x58835644
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x5883562D: mov ecx, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x74
        // 0x58835630: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x58835633: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835639: push ebx
        __asm _emit 0x53
        // 0x5883563A: push edx
        __asm _emit 0x52
        // 0x5883563B: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x32
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58835640: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835644: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58835648: mov ecx, dword ptr [esi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883564E: inc eax
        __asm _emit 0x40
        // 0x5883564F: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58835653: cmp eax, dword ptr [ecx + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x58835656: jne 0x58835560
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883565C: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835660: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835666: push edx
        __asm _emit 0x52
        // 0x58835667: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x1C
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883566C: mov eax, dword ptr [esi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835672: sub eax, dword ptr [esi + 0x264]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835678: test eax, 0xfffffffc
        __asm _emit 0xA9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883567D: je 0x5883574a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835683: mov ebp, dword ptr [esi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835689: cmp ebp, dword ptr [esi + 0x268]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883568F: jbe 0x58835696
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58835691: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x75
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835696: mov edi, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883569C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588356A0: mov ebx, dword ptr [esi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588356A6: cmp dword ptr [esi + 0x264], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588356AC: jbe 0x588356b3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588356AE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x75
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588356B3: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588356B9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588356BB: je 0x588356c1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588356BD: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588356BF: je 0x588356c6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588356C1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x75
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588356C6: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588356C8: je 0x58835748
        __asm _emit 0x74
        __asm _emit 0x7E
        // 0x588356CA: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588356CC: jne 0x58835740
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x588356CE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x75
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588356D3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588356D5: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x588356D8: jb 0x588356df
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588356DA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x75
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588356DF: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588356E2: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x588356E7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588356E9: push ecx
        __asm _emit 0x51
        // 0x588356EA: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588356F0: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x31
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588356F5: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588356FB: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58835700: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58835702: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58835707: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x31
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883570C: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835712: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58835717: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58835719: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883571E: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x31
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58835723: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58835725: jne 0x58835744
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58835727: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x75
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883572C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883572E: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58835731: jb 0x58835738
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58835733: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x75
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835738: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5883573B: jmp 0x588356a0
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58835740: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58835742: jmp 0x588356d5
        __asm _emit 0xEB
        __asm _emit 0x91
        // 0x58835744: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58835746: jmp 0x5883572e
        __asm _emit 0xEB
        __asm _emit 0xE6
        // 0x58835748: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5883574A: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835750: sub ecx, dword ptr [esi + 0x19c]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835756: mov eax, 0x30c30c31
        __asm _emit 0xB8
        __asm _emit 0x31
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x30
        // 0x5883575B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5883575D: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58835760: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58835762: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58835765: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58835767: je 0x5883583a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883576D: mov ebp, dword ptr [esi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835773: cmp ebp, dword ptr [esi + 0x1a0]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835779: jbe 0x58835780
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883577B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835780: mov edi, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835786: jmp 0x58835790
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x58835790..0x588358A6; 278 mapped bytes.
extern "C" __declspec(naked) void FUN_58835370_segment_02() {
    __asm {
        // 0x58835790: mov ebx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835796: cmp dword ptr [esi + 0x19c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883579C: jbe 0x588357a3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883579E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588357A3: mov eax, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588357A9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588357AB: je 0x588357b1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588357AD: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588357AF: je 0x588357b6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588357B1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588357B6: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588357B8: je 0x58835838
        __asm _emit 0x74
        __asm _emit 0x7E
        // 0x588357BA: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588357BC: jne 0x58835830
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x588357BE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588357C3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588357C5: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x588357C8: jb 0x588357cf
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588357CA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588357CF: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x588357D4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588357D6: lea ecx, [ebp + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x2D
        // 0x588357D9: push ecx
        __asm _emit 0x51
        // 0x588357DA: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588357E0: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588357E5: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588357EB: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588357F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588357F2: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588357F7: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588357FC: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835802: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58835807: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58835809: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883580E: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58835813: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58835815: jne 0x58835834
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58835817: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883581C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883581E: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58835821: jb 0x58835828
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58835823: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835828: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x54
        // 0x5883582B: jmp 0x58835790
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58835830: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58835832: jmp 0x588357c5
        __asm _emit 0xEB
        __asm _emit 0x91
        // 0x58835834: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58835836: jmp 0x5883581e
        __asm _emit 0xEB
        __asm _emit 0xE6
        // 0x58835838: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5883583A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883583C: call 0x58834030
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58835841: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835847: sub ecx, dword ptr [esi + 0x19c]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883584D: mov edi, dword ptr [esi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835853: sub edi, dword ptr [esi + 0x264]
        __asm _emit 0x2B
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835859: mov eax, 0x30c30c31
        __asm _emit 0xB8
        __asm _emit 0x31
        __asm _emit 0x0C
        __asm _emit 0xC3
        __asm _emit 0x30
        // 0x5883585E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58835860: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835866: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58835869: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5883586B: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5883586E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58835871: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58835873: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58835875: push eax
        __asm _emit 0x50
        // 0x58835876: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x1A
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883587B: mov dword ptr [esi + 0x344], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835881: mov byte ptr [esi + 0x321], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58835888: mov dword ptr [esi + 0x1f0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883588E: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58835894: push 0x58a0b4a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58835899: call 0x587b9270
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x39
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5883589E: pop edi
        __asm _emit 0x5F
        // 0x5883589F: pop ebp
        __asm _emit 0x5D
        // 0x588358A0: pop ebx
        __asm _emit 0x5B
        // 0x588358A1: pop esi
        __asm _emit 0x5E
        // 0x588358A2: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588358A5: ret
        __asm _emit 0xC3
    }
}
