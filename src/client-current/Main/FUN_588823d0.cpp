// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 655 bytes in 3 exact ranges.
// Source symbol alias: FUN_588823d0.

// Ghidra body range 0x588823D0..0x58882544; 372 mapped bytes.
extern "C" __declspec(naked) void FUN_588823d0_segment_00() {
    __asm {
        // 0x588823D0: push ebp
        __asm _emit 0x55
        // 0x588823D1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588823D3: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588823D5: push 0x58986800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588823DA: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588823E0: push eax
        __asm _emit 0x50
        // 0x588823E1: sub esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x34
        // 0x588823E4: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588823E9: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x588823EB: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x588823EE: push ebx
        __asm _emit 0x53
        // 0x588823EF: push esi
        __asm _emit 0x56
        // 0x588823F0: push edi
        __asm _emit 0x57
        // 0x588823F1: push eax
        __asm _emit 0x50
        // 0x588823F2: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x588823F5: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588823FB: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x588823FE: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58882400: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58882403: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882405: jne 0x5888240b
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58882407: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58882409: jmp 0x58882421
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x5888240B: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x5888240E: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58882410: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58882415: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58882417: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5888241A: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5888241C: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5888241F: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58882421: cmp dword ptr [ebp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58882425: je 0x58882659
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888242B: mov esi, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x5888242E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882430: sub ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x58882433: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58882438: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5888243A: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5888243D: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58882440: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58882442: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58882445: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58882447: mov edx, 0x7878787
        __asm _emit 0xBA
        __asm _emit 0x87
        __asm _emit 0x87
        __asm _emit 0x87
        __asm _emit 0x07
        // 0x5888244C: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5888244E: mov dword ptr [ebp - 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x58882451: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58882453: jae 0x5888245a
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58882455: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x42
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888245A: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5888245C: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5888245E: jae 0x58882584
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882464: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58882466: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x58882468: mov edx, 0x7878787
        __asm _emit 0xBA
        __asm _emit 0x87
        __asm _emit 0x87
        __asm _emit 0x87
        __asm _emit 0x07
        // 0x5888246D: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5888246F: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58882471: jae 0x58882477
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x58882473: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58882475: jmp 0x58882479
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58882477: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x58882479: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5888247B: jae 0x5888247f
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5888247D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5888247F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58882481: push edi
        __asm _emit 0x57
        // 0x58882482: call 0x5887a410
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x7F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882487: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5888248A: sub edx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x53
        __asm _emit 0x0C
        // 0x5888248D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888248F: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58882494: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58882496: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58882499: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5888249C: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5888249E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588824A1: push eax
        __asm _emit 0x50
        // 0x588824A2: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x588824A5: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x588824A7: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x588824AA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588824AC: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x588824AF: mov dword ptr [ebp - 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xC4
        // 0x588824B2: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x588824B4: lea ecx, [ecx + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x41
        // 0x588824B7: push edx
        __asm _emit 0x52
        // 0x588824B8: push ecx
        __asm _emit 0x51
        // 0x588824B9: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588824BB: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588824C2: call 0x5887dbb0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xB6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588824C7: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x588824CA: mov byte ptr [ebp - 0x40], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xC0
        __asm _emit 0x00
        // 0x588824CE: mov edx, dword ptr [ebp - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xC0
        // 0x588824D1: push edx
        __asm _emit 0x52
        // 0x588824D2: mov edx, dword ptr [ebp - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xC0
        // 0x588824D5: push edx
        __asm _emit 0x52
        // 0x588824D6: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x588824D9: lea ecx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x588824DC: push ecx
        __asm _emit 0x51
        // 0x588824DD: mov ecx, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xC4
        // 0x588824E0: push ecx
        __asm _emit 0x51
        // 0x588824E1: push edx
        __asm _emit 0x52
        // 0x588824E2: push eax
        __asm _emit 0x50
        // 0x588824E3: call 0x5887cb60
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xA6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588824E8: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x588824EB: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x588824EE: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x588824F0: mov ecx, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xC4
        // 0x588824F3: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x588824F5: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x588824F8: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x588824FA: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588824FD: lea ecx, [ecx + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x51
        // 0x58882500: mov byte ptr [ebp - 0x40], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xC0
        __asm _emit 0x00
        // 0x58882504: mov edx, dword ptr [ebp - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xC0
        // 0x58882507: push edx
        __asm _emit 0x52
        // 0x58882508: mov edx, dword ptr [ebp - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xC0
        // 0x5888250B: push edx
        __asm _emit 0x52
        // 0x5888250C: lea edx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x5888250F: push edx
        __asm _emit 0x52
        // 0x58882510: push ecx
        __asm _emit 0x51
        // 0x58882511: push eax
        __asm _emit 0x50
        // 0x58882512: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58882515: push eax
        __asm _emit 0x50
        // 0x58882516: call 0x5887cb60
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xA6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888251B: mov esi, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x5888251E: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x58882521: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58882523: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58882528: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5888252A: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5888252D: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5888252F: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58882532: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58882534: add dword ptr [ebp + 0x10], ecx
        __asm _emit 0x01
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x58882537: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5888253A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5888253C: je 0x58882547
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5888253E: push esi
        __asm _emit 0x56
        // 0x5888253F: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xA6
        __asm _emit 0x0F
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58882547..0x5888256F; 40 mapped bytes.
extern "C" __declspec(naked) void FUN_588823d0_segment_01() {
    __asm {
        // 0x58882547: mov eax, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xC4
        // 0x5888254A: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5888254C: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5888254F: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x58882551: lea ecx, [eax + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x50
        // 0x58882554: mov dword ptr [ebx + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x58882557: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5888255A: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5888255C: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5888255F: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58882561: lea ecx, [eax + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x50
        // 0x58882564: mov dword ptr [ebx + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x58882567: mov dword ptr [ebx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x5888256A: jmp 0x58882659
        __asm _emit 0xE9
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58882584..0x58882677; 243 mapped bytes.
extern "C" __declspec(naked) void FUN_588823d0_segment_02() {
    __asm {
        // 0x58882584: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882586: sub ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x58882589: mov esi, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5888258C: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x58882591: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58882593: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882598: lea edi, [ebp - 0x38]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0xC8
        // 0x5888259B: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5888259D: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588825A0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588825A2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588825A5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588825A7: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xA5
        // 0x588825A9: cmp eax, dword ptr [ebp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x588825AC: jae 0x58882618
        __asm _emit 0x73
        __asm _emit 0x6A
        // 0x588825AE: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x588825B1: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x588825B4: mov edx, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xC4
        // 0x588825B7: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x588825B9: shl esi, 4
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x04
        // 0x588825BC: add esi, edi
        __asm _emit 0x03
        __asm _emit 0xF7
        // 0x588825BE: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x588825C0: lea ecx, [esi + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x588825C3: push ecx
        __asm _emit 0x51
        // 0x588825C4: push edx
        __asm _emit 0x52
        // 0x588825C5: push eax
        __asm _emit 0x50
        // 0x588825C6: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588825C8: call 0x58880d90
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588825CD: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x588825D0: sub ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x588825D3: lea eax, [ebp - 0x38]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x588825D6: push eax
        __asm _emit 0x50
        // 0x588825D7: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x588825DC: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588825DE: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x588825E1: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588825E4: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588825E6: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588825E9: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588825EB: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x588825ED: push edi
        __asm _emit 0x57
        // 0x588825EE: push eax
        __asm _emit 0x50
        // 0x588825EF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588825F1: mov dword ptr [ebp - 4], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588825F8: call 0x5887dbb0
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xB5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588825FD: add dword ptr [ebx + 0x10], esi
        __asm _emit 0x01
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x58882600: mov ebx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x10
        // 0x58882603: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58882606: lea edx, [ebp - 0x38]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xC8
        // 0x58882609: push edx
        __asm _emit 0x52
        // 0x5888260A: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x5888260C: push ebx
        __asm _emit 0x53
        // 0x5888260D: push eax
        __asm _emit 0x50
        // 0x5888260E: call 0x5887cb00
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882613: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58882616: jmp 0x58882659
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x58882618: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5888261B: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5888261D: shl esi, 4
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x04
        // 0x58882620: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x58882622: mov eax, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xC4
        // 0x58882625: push eax
        __asm _emit 0x50
        // 0x58882626: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58882628: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x5888262A: push eax
        __asm _emit 0x50
        // 0x5888262B: sub edi, esi
        __asm _emit 0x2B
        __asm _emit 0xFE
        // 0x5888262D: push edi
        __asm _emit 0x57
        // 0x5888262E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58882630: call 0x58880d90
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882635: mov ecx, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xC4
        // 0x58882638: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5888263B: push ecx
        __asm _emit 0x51
        // 0x5888263C: push edi
        __asm _emit 0x57
        // 0x5888263D: push edx
        __asm _emit 0x52
        // 0x5888263E: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58882641: call 0x5887da60
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xB4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882646: lea eax, [ebp - 0x38]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xC8
        // 0x58882649: push eax
        __asm _emit 0x50
        // 0x5888264A: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5888264D: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5888264F: push esi
        __asm _emit 0x56
        // 0x58882650: push eax
        __asm _emit 0x50
        // 0x58882651: call 0x5887cb00
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882656: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58882659: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5888265C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882663: pop ecx
        __asm _emit 0x59
        // 0x58882664: pop edi
        __asm _emit 0x5F
        // 0x58882665: pop esi
        __asm _emit 0x5E
        // 0x58882666: pop ebx
        __asm _emit 0x5B
        // 0x58882667: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5888266A: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x5888266C: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xA5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58882671: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58882673: pop ebp
        __asm _emit 0x5D
        // 0x58882674: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
