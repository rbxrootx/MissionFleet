// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 667 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d8230.

// Ghidra body range 0x588D8230..0x588D84CB; 667 mapped bytes.
extern "C" __declspec(naked) void FUN_588d8230_segment_00() {
    __asm {
        // 0x588D8230: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588D8233: push ebx
        __asm _emit 0x53
        // 0x588D8234: push ebp
        __asm _emit 0x55
        // 0x588D8235: push esi
        __asm _emit 0x56
        // 0x588D8236: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D8238: mov ebx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D823E: movzx ecx, word ptr [ebx + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x06
        // 0x588D8242: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588D8244: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x588D8247: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588D824A: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x588D824C: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8252: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588D8254: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x588D8256: mov dword ptr [esi + 0x42c0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D825C: mov dword ptr [esi + 0x42c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8262: mov dword ptr [esi + 0x42d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8268: push edi
        __asm _emit 0x57
        // 0x588D8269: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588D826B: mov dword ptr [esi + 0x42b0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8271: mov dword ptr [esi + 0x42b8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8277: mov dword ptr [esi + 0x42d0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xD0
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D827D: mov dword ptr [esi + 0x42b4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8283: mov dword ptr [esi + 0x42cc], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8289: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588D828B: neg edi
        __asm _emit 0xF7
        __asm _emit 0xDF
        // 0x588D828D: mov dword ptr [esi + 0x42d4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8293: mov dword ptr [esi + 0x42dc], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8299: mov dword ptr [esi + 0x168c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D829F: mov dword ptr [esi + 0x1694], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D82A5: mov dword ptr [esi + 0x42bc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D82AB: mov dword ptr [esi + 0x42c4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D82B1: movzx ecx, word ptr [ebx + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x06
        // 0x588D82B5: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x588D82B7: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D82BD: lea edx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x89
        // 0x588D82C0: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588D82C2: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D82C7: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588D82C9: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D82CC: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D82CE: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D82D1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D82D3: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588D82D5: mov dword ptr [esi + 0x1690], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D82DB: mov edx, 0xfffffffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D82E0: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x588D82E2: lea eax, [esi + 0x4220]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D82E8: mov dword ptr [esi + 0x1698], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D82EE: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D82F2: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D82F7: mov edx, 0x2fc
        __asm _emit 0xBA
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D82FC: lea eax, [esi + 0x4120]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8302: mov dword ptr [esp + 0x14], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D830A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8310: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8316: movsx ecx, word ptr [edx + ecx - 0x40]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0xC0
        // 0x588D831B: mov dword ptr [eax - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0xFC
        // 0x588D831E: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8324: movzx ebx, word ptr [ecx + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x59
        __asm _emit 0x06
        // 0x588D8328: movsx ecx, word ptr [edx + ecx]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x0C
        __asm _emit 0x0A
        // 0x588D832C: shr ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xEB
        // 0x588D832E: and ebx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8334: sub ebx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD9
        // 0x588D8336: mov ecx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xFC
        // 0x588D8339: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D833C: mov dword ptr [eax - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0xFC
        // 0x588D833F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588D8341: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D8344: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588D8346: lea ebx, [edi - 2]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0xFE
        // 0x588D8349: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x588D834B: shr ebx, 3
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588D834E: and ebp, 7
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x07
        // 0x588D8351: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8356: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x588D8358: mov ebp, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D835E: mov ebx, dword ptr [ebp + ebx*4 + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x9D
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8365: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D8367: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D8369: shr ebx, cl
        __asm _emit 0xD3
        __asm _emit 0xEB
        // 0x588D836B: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D836F: and ebx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x0F
        // 0x588D8372: mov dword ptr [ecx - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0xFC
        // 0x588D8375: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D837B: movsx ecx, word ptr [edx + ecx - 0x3e]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0xC2
        // 0x588D8380: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588D8383: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8389: movzx ebx, word ptr [ecx + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x59
        __asm _emit 0x06
        // 0x588D838D: movsx ecx, word ptr [edx + ecx + 2]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x02
        // 0x588D8392: shr ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xEB
        // 0x588D8394: and ebx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D839A: sub ebx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD9
        // 0x588D839C: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588D839F: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D83A2: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588D83A5: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588D83A7: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D83AA: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588D83AD: lea ebx, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0xFF
        // 0x588D83B0: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x588D83B2: shr ebx, 3
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588D83B5: and ebp, 7
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x07
        // 0x588D83B8: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D83BD: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x588D83BF: mov ebp, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D83C5: mov ebx, dword ptr [ebp + ebx*4 + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x9D
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D83CC: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D83CE: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D83D0: shr ebx, cl
        __asm _emit 0xD3
        __asm _emit 0xEB
        // 0x588D83D2: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D83D6: and ebx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x0F
        // 0x588D83D9: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x588D83DB: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D83E1: movsx ecx, word ptr [edx + ecx - 0x3c]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0xC4
        // 0x588D83E6: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588D83E9: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D83EF: movzx ebx, word ptr [ecx + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x59
        __asm _emit 0x06
        // 0x588D83F3: movsx ecx, word ptr [edx + ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x04
        // 0x588D83F8: shr ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xEB
        // 0x588D83FA: and ebx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8400: sub ebx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD9
        // 0x588D8402: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588D8405: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D8408: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588D840B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588D840D: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D8410: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x588D8413: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x588D8415: and ebx, 7
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x07
        // 0x588D8418: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D841D: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x588D841F: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D8421: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x588D8423: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D8425: shr ebx, 3
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588D8428: mov ebp, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D842E: mov ebx, dword ptr [ebp + ebx*4 + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x9D
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8435: shr ebx, cl
        __asm _emit 0xD3
        __asm _emit 0xEB
        // 0x588D8437: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D843B: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x588D843E: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588D8441: and ebx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x0F
        // 0x588D8444: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x588D8447: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D844D: movsx ecx, word ptr [edx + ecx - 0x42]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0xBE
        // 0x588D8452: mov dword ptr [eax - 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0xF4
        // 0x588D8455: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D845B: movzx ebx, word ptr [ecx + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x59
        __asm _emit 0x06
        // 0x588D845F: movsx ecx, word ptr [edx + ecx - 2]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0xFE
        // 0x588D8464: shr ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xEB
        // 0x588D8466: and ebx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D846C: sub ebx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD9
        // 0x588D846E: mov ecx, dword ptr [eax - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xF4
        // 0x588D8471: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D8474: mov dword ptr [eax - 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0xF4
        // 0x588D8477: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588D8479: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D847C: mov dword ptr [eax - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0xF8
        // 0x588D847F: lea ebx, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x01
        // 0x588D8482: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x588D8484: and ebp, 7
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x07
        // 0x588D8487: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D848C: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x588D848E: mov ebp, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8494: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D8496: shr ebx, 3
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588D8499: mov ebx, dword ptr [ebp + ebx*4 + 0x29c]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x9D
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D84A0: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D84A2: shr ebx, cl
        __asm _emit 0xD3
        __asm _emit 0xEB
        // 0x588D84A4: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D84A8: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x588D84AB: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D84AE: and ebx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x0F
        // 0x588D84B1: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x588D84B6: mov dword ptr [ecx - 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0xF8
        // 0x588D84B9: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D84BD: jne 0x588d8310
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D84C3: pop edi
        __asm _emit 0x5F
        // 0x588D84C4: pop esi
        __asm _emit 0x5E
        // 0x588D84C5: pop ebp
        __asm _emit 0x5D
        // 0x588D84C6: pop ebx
        __asm _emit 0x5B
        // 0x588D84C7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588D84CA: ret
        __asm _emit 0xC3
    }
}
