// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58868110 .. +0x8E4 bytes.
// Source symbol alias: FUN_58868110.
extern "C" __declspec(naked) void FUN_58868110() {
    __asm {
        // 0x58868110: push ecx
        __asm _emit 0x51
        // 0x58868111: push esi
        __asm _emit 0x56
        // 0x58868112: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58868114: movzx eax, word ptr [esi + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886811B: mov edx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868121: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x58868124: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58868126: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58868129: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5886812B: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x5886812D: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x58868130: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868136: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5886813C: cmp eax, 0x4b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x4B
        // 0x5886813F: jge 0x5886831d
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868145: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886814B: add eax, 0x2a5
        __asm _emit 0x05
        __asm _emit 0xA5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868150: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868156: jle 0x58868170
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58868158: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886815A: jl 0x58868170
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5886815C: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868163: je 0x58868170
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58868165: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886816B: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x5886816E: jmp 0x58868172
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58868170: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58868172: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868178: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5886817B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886817D: je 0x588681a7
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5886817F: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58868182: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58868185: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58868188: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5886818B: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5886818E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58868190: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58868193: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58868195: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58868198: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5886819B: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5886819E: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588681A1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588681A4: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588681A7: movzx eax, word ptr [esi + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588681AE: mov edx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588681B4: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588681B7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588681B9: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588681BC: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588681BE: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x588681C0: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588681C3: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588681C9: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588681CF: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588681D5: add eax, 0x25a
        __asm _emit 0x05
        __asm _emit 0x5A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588681DA: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588681E0: jle 0x588681fa
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588681E2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588681E4: jl 0x588681fa
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588681E6: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588681ED: je 0x588681fa
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588681EF: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588681F5: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588681F8: jmp 0x588681fc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588681FA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588681FC: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868202: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58868205: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58868207: je 0x58868231
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58868209: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5886820C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5886820F: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58868212: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58868215: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58868218: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5886821A: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5886821D: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5886821F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58868222: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58868225: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58868228: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5886822B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5886822E: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58868231: movzx eax, word ptr [esi + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868238: mov edx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886823E: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x58868241: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58868243: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58868246: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58868248: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x5886824A: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x5886824D: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58868253: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868259: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5886825F: add eax, 0x33b
        __asm _emit 0x05
        __asm _emit 0x3B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868264: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886826A: jle 0x58868284
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5886826C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886826E: jl 0x58868284
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58868270: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868277: je 0x58868284
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58868279: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886827F: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x58868282: jmp 0x58868286
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58868284: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58868286: mov ecx, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886828C: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5886828F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58868291: je 0x588682bb
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58868293: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58868296: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58868299: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5886829C: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5886829F: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588682A2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588682A4: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588682A7: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588682A9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588682AC: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588682AF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588682B2: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588682B5: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588682B8: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588682BB: movzx eax, word ptr [esi + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588682C2: mov edx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588682C8: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588682CB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588682CD: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588682D0: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588682D2: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x588682D4: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588682D7: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588682DD: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588682E3: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588682E9: add eax, 0x2f0
        __asm _emit 0x05
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588682EE: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588682F4: jle 0x588684de
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588682FA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588682FC: jl 0x588684de
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868302: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868309: je 0x588684de
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886830F: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868315: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x58868318: jmp 0x588684e0
        __asm _emit 0xE9
        __asm _emit 0xC3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886831D: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58868323: add eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x19
        // 0x58868326: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886832C: jle 0x58868346
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5886832E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58868330: jl 0x58868346
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58868332: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868339: je 0x58868346
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5886833B: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868341: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x58868344: jmp 0x58868348
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58868346: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58868348: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886834E: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58868351: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58868353: je 0x5886837d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58868355: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58868358: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5886835B: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5886835E: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58868361: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58868364: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58868366: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58868369: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5886836B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5886836E: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58868371: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58868374: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58868377: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5886837A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5886837D: movzx eax, word ptr [esi + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868384: mov edx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886838A: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5886838D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886838F: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58868392: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58868394: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58868396: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x58868399: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886839F: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588683A5: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588683AB: sub eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x19
        // 0x588683AE: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588683B4: jle 0x588683ce
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588683B6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588683B8: jl 0x588683ce
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588683BA: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588683C1: je 0x588683ce
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588683C3: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588683C9: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588683CC: jmp 0x588683d0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588683CE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588683D0: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588683D6: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588683D9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588683DB: je 0x58868405
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588683DD: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588683E0: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588683E3: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588683E6: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588683E9: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588683EC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588683EE: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588683F1: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588683F3: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588683F6: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588683F9: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588683FC: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588683FF: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58868402: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58868405: movzx eax, word ptr [esi + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886840C: mov edx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868412: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x58868415: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58868417: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5886841A: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5886841C: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x5886841E: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x58868421: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58868427: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886842D: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58868433: add eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x7D
        // 0x58868436: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886843C: jle 0x58868456
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5886843E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58868440: jl 0x58868456
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58868442: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868449: je 0x58868456
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5886844B: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868451: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x58868454: jmp 0x58868458
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58868456: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58868458: mov ecx, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886845E: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58868461: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58868463: je 0x5886848d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58868465: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58868468: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5886846B: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5886846E: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58868471: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58868474: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58868476: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58868479: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5886847B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5886847E: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58868481: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58868484: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58868487: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5886848A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5886848D: movzx eax, word ptr [esi + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868494: mov edx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886849A: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x5886849D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886849F: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x588684A2: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588684A4: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x588684A6: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x588684A9: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588684AF: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588684B5: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588684BB: add eax, 0x4b
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x4B
        // 0x588684BE: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588684C4: jle 0x588684de
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588684C6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588684C8: jl 0x588684de
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588684CA: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588684D1: je 0x588684de
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588684D3: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588684D9: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588684DC: jmp 0x588684e0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588684DE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588684E0: mov ecx, dword ptr [esi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588684E6: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588684E9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588684EB: je 0x58868516
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588684ED: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588684F0: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588684F3: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588684F6: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588684F9: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588684FC: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588684FF: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58868502: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58868504: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58868507: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5886850A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5886850D: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58868510: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58868513: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58868516: movzx eax, word ptr [esi + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886851D: mov edx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868523: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x58868526: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58868528: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5886852B: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5886852D: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x5886852F: lea ecx, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xCA
        // 0x58868532: mov edx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58868538: imul ecx, ecx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886853E: add ecx, 0x589cfca8
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA8
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58868544: mov eax, dword ptr [ecx + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886854A: push ebp
        __asm _emit 0x55
        // 0x5886854B: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868550: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x58868552: cmp dword ptr [edx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868558: push edi
        __asm _emit 0x57
        // 0x58868559: jle 0x58868573
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5886855B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886855D: jl 0x58868573
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5886855F: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868566: je 0x58868573
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58868568: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5886856B: add eax, dword ptr [edx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868571: jmp 0x58868575
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58868573: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58868575: mov edx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886857B: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x5886857E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58868580: je 0x588685aa
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58868582: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58868585: mov dword ptr [edx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x58868588: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x5886858B: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5886858E: mov dword ptr [edx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x10
        // 0x58868591: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x58868593: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x58868596: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x58868598: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5886859B: mov dword ptr [edx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x5886859E: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588685A1: mov dword ptr [edx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x588685A4: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588685A7: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588685AA: mov eax, dword ptr [ecx + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588685B0: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588685B6: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588685BC: jle 0x588685d6
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588685BE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588685C0: jl 0x588685d6
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588685C2: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588685C9: je 0x588685d6
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588685CB: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588685CE: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588685D4: jmp 0x588685d8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588685D6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588685D8: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588685DE: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588685E1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588685E3: je 0x5886860d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588685E5: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588685E8: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588685EB: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588685EE: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588685F1: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588685F4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588685F6: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588685F9: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588685FB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588685FE: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58868601: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58868604: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58868607: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5886860A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5886860D: movzx eax, word ptr [esi + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868614: test al, 0xf
        __asm _emit 0xA8
        __asm _emit 0x0F
        // 0x58868616: je 0x5886865c
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x58868618: mov edx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886861E: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x58868621: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58868623: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58868626: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58868628: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x5886862A: lea eax, [edx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCA
        // 0x5886862D: mov edx, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868633: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868639: movzx ecx, word ptr [eax + 0x589cfce8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58868640: and ecx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x3F
        // 0x58868643: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x58868646: mov eax, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886864C: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58868650: mov eax, dword ptr [esi + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868656: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5886865A: jmp 0x58868677
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x5886865C: mov eax, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868662: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868667: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5886866B: mov eax, dword ptr [esi + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868671: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58868673: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58868677: movzx ecx, word ptr [esi + 0xf6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886867E: push ebx
        __asm _emit 0x53
        // 0x5886867F: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58868681: xor ebx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF3
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868687: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5886868A: je 0x588686b6
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5886868C: movzx eax, word ptr [esi + 0xd6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868693: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868698: imul eax, dword ptr [0x58a242fc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x05
        __asm _emit 0xFC
        __asm _emit 0x42
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886869F: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x588686A2: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588686A4: movzx edi, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF9
        // 0x588686A7: cdq
        __asm _emit 0x99
        // 0x588686A8: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588686AE: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588686B0: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588686B4: jmp 0x588686ba
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588686B6: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588686BA: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588686BD: je 0x588686e5
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588686BF: movzx eax, word ptr [esi + 0xd8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588686C6: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588686CB: imul eax, dword ptr [0x58a24300]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588686D2: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x588686D5: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588686D7: movzx edi, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF9
        // 0x588686DA: cdq
        __asm _emit 0x99
        // 0x588686DB: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588686E1: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588686E3: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x588686E5: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588686E9: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588686EC: lea edi, [eax + ebp]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x28
        // 0x588686EF: pop ebx
        __asm _emit 0x5B
        // 0x588686F0: je 0x5886872d
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x588686F2: movzx eax, word ptr [esi + 0xd8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588686F9: movzx edx, word ptr [esi + 0xd6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868700: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868705: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886870B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5886870D: movzx edx, word ptr [esi + 0xd4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868714: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886871A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5886871C: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x5886871F: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x58868722: cdq
        __asm _emit 0x99
        // 0x58868723: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868729: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5886872B: jmp 0x58868732
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5886872D: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868732: movzx edx, word ptr [esi + 0xd4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868739: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886873F: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868745: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58868747: push edx
        __asm _emit 0x52
        // 0x58868748: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5886874A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xEC
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886874F: movzx ecx, word ptr [esi + 0x11c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868756: movzx eax, word ptr [esi + 0xd4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886875D: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868763: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868768: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5886876B: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58868770: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58868772: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58868775: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58868777: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5886877A: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5886877C: push ecx
        __asm _emit 0x51
        // 0x5886877D: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868783: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xEB
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58868788: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886878E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58868790: jge 0x588687be
        __asm _emit 0x7D
        __asm _emit 0x2C
        // 0x58868792: mov dword ptr [edx + 0xfc], 1
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886879C: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588687A1: cmp dword ptr [eax + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588687A8: jle 0x588687ec
        __asm _emit 0x7E
        __asm _emit 0x42
        // 0x588687AA: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588687B1: je 0x588687ec
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588687B3: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588687B9: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x588687BC: jmp 0x588687ee
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x588687BE: mov dword ptr [edx + 0xfc], 0
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588687C8: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588687CD: cmp dword ptr [eax + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x588687D4: jle 0x588687ec
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588687D6: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588687DD: je 0x588687ec
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588687DF: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588687E5: add eax, 0xb00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588687EA: jmp 0x588687ee
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588687EC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588687EE: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588687F4: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588687FA: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868800: push edi
        __asm _emit 0x57
        // 0x58868801: call 0x587c9e80
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x16
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58868806: movzx edx, word ptr [esi + 0xd6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886880D: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868813: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868819: push edx
        __asm _emit 0x52
        // 0x5886881A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xEB
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886881F: movzx ecx, word ptr [esi + 0x11c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868826: movzx eax, word ptr [esi + 0xd6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886882D: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868833: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868838: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5886883B: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58868840: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58868842: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58868845: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58868847: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5886884A: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5886884C: push ecx
        __asm _emit 0x51
        // 0x5886884D: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868853: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xEB
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58868858: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5886885C: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868862: push edx
        __asm _emit 0x52
        // 0x58868863: call 0x587c9e80
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58868868: movzx eax, word ptr [esi + 0xd8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886886F: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868875: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886887A: push eax
        __asm _emit 0x50
        // 0x5886887B: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xEA
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58868880: movzx ecx, word ptr [esi + 0xd8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868887: movzx edx, word ptr [esi + 0x11c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886888E: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868894: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886889A: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x5886889D: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588688A2: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588688A4: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588688AA: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588688AD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588688AF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588688B2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588688B4: push eax
        __asm _emit 0x50
        // 0x588688B5: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xEA
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588688BA: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588688C0: push ebp
        __asm _emit 0x55
        // 0x588688C1: call 0x587c9e80
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x15
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x588688C6: movzx ecx, word ptr [esi + 0xd8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588688CD: movzx edx, word ptr [esi + 0xd6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588688D4: movzx eax, word ptr [esi + 0xd4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588688DB: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588688E1: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588688E7: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588688E9: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588688EE: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x588688F0: push ecx
        __asm _emit 0x51
        // 0x588688F1: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588688F7: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xEA
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588688FC: movzx ecx, word ptr [esi + 0xf6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868903: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868909: push ecx
        __asm _emit 0x51
        // 0x5886890A: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868910: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xEA
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58868915: movzx eax, word ptr [esi + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886891C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886891E: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x58868921: pop edi
        __asm _emit 0x5F
        // 0x58868922: pop ebp
        __asm _emit 0x5D
        // 0x58868923: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58868927: jne 0x58868957
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x58868929: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5886892C: xor eax, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0xAA
        // 0x5886892F: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868934: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58868936: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5886893B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5886893D: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x5886893F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58868941: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58868944: lea ecx, [edx + eax + 5]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x05
        // 0x58868948: push ecx
        __asm _emit 0x51
        // 0x58868949: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886894F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xEA
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58868954: pop esi
        __asm _emit 0x5E
        // 0x58868955: pop ecx
        __asm _emit 0x59
        // 0x58868956: ret
        __asm _emit 0xC3
        // 0x58868957: cmp cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x5886895B: jne 0x58868989
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5886895D: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58868960: xor eax, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0xAA
        // 0x58868963: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868968: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886896A: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5886896F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58868971: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58868973: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58868976: lea ecx, [edx + eax + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x0C
        // 0x5886897A: push ecx
        __asm _emit 0x51
        // 0x5886897B: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868981: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xE9
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58868986: pop esi
        __asm _emit 0x5E
        // 0x58868987: pop ecx
        __asm _emit 0x59
        // 0x58868988: ret
        __asm _emit 0xC3
        // 0x58868989: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x5886898D: jne 0x588689a7
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5886898F: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868995: shr eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x58868998: xor eax, 0xffffffd5
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0xD5
        // 0x5886899B: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x5886899E: push eax
        __asm _emit 0x50
        // 0x5886899F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xE9
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588689A4: pop esi
        __asm _emit 0x5E
        // 0x588689A5: pop ecx
        __asm _emit 0x59
        // 0x588689A6: ret
        __asm _emit 0xC3
        // 0x588689A7: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x588689AB: jne 0x588689c8
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x588689AD: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588689B3: shr eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x588689B6: xor eax, 0xffffffd5
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0xD5
        // 0x588689B9: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x588689BC: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x588689BF: push eax
        __asm _emit 0x50
        // 0x588689C0: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xE9
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588689C5: pop esi
        __asm _emit 0x5E
        // 0x588689C6: pop ecx
        __asm _emit 0x59
        // 0x588689C7: ret
        __asm _emit 0xC3
        // 0x588689C8: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588689CB: xor eax, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0xAA
        // 0x588689CE: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588689D3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588689D5: mov eax, 0x55555556
        __asm _emit 0xB8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x55
        // 0x588689DA: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588689DC: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588689DE: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588689E1: lea ecx, [edx + eax + 2]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x02
        // 0x588689E5: push ecx
        __asm _emit 0x51
        // 0x588689E6: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588689EC: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xE9
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588689F1: pop esi
        __asm _emit 0x5E
        // 0x588689F2: pop ecx
        __asm _emit 0x59
        // 0x588689F3: ret
        __asm _emit 0xC3
    }
}
