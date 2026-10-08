// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 603 bytes in 1 exact ranges.
// Source symbol alias: FUN_587367c0.

// Ghidra body range 0x587367C0..0x58736A1B; 603 mapped bytes.
extern "C" __declspec(naked) void FUN_587367c0_segment_00() {
    __asm {
        // 0x587367C0: push ecx
        __asm _emit 0x51
        // 0x587367C1: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587367C5: push esi
        __asm _emit 0x56
        // 0x587367C6: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587367CD: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587367CF: push edi
        __asm _emit 0x57
        // 0x587367D0: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587367D4: cmp edi, dword ptr [ecx + edx*8 + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0xD1
        __asm _emit 0x64
        // 0x587367D8: lea esi, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xD1
        // 0x587367DB: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587367DF: jge 0x58736a15
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587367E5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587367E7: jl 0x58736a15
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587367ED: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587367F1: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587367F4: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587367F6: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587367FA: sub ecx, dword ptr [edx]
        __asm _emit 0x2B
        __asm _emit 0x0A
        // 0x587367FC: sub eax, dword ptr [edx + 4]
        __asm _emit 0x2B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587367FF: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58736801: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x58736804: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58736806: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x58736809: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5873680B: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873680F: push ebx
        __asm _emit 0x53
        // 0x58736810: push ebp
        __asm _emit 0x55
        // 0x58736811: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58736815: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873681A: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873681F: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x58736822: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58736824: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x58736827: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58736829: cdq
        __asm _emit 0x99
        // 0x5873682A: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5873682C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5873682E: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x58736831: jle 0x587368a8
        __asm _emit 0x7E
        __asm _emit 0x75
        // 0x58736833: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58736836: mov dword ptr [eax + edi*4], ecx
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x58736839: lea ebx, [edi - 7]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0xF9
        // 0x5873683C: lea eax, [edi + 7]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x07
        // 0x5873683F: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58736843: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58736845: jge 0x58736849
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58736847: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58736849: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5873684C: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5873684E: jle 0x58736856
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x58736850: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58736854: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58736856: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58736858: jg 0x58736a05
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xA7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873685E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58736860: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58736862: je 0x5873688d
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58736864: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x58736867: cmp dword ptr [edx + ebx*4], ecx
        __asm _emit 0x39
        __asm _emit 0x0C
        __asm _emit 0x9A
        // 0x5873686A: jbe 0x5873688d
        __asm _emit 0x76
        __asm _emit 0x21
        // 0x5873686C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873686E: lea eax, [eax + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x98
        // 0x58736871: lea edx, [ecx + ecx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x09
        // 0x58736874: add dword ptr [eax], edx
        __asm _emit 0x01
        __asm _emit 0x10
        // 0x58736876: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58736879: lea ebp, [eax + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x98
        // 0x5873687C: mov eax, 0xaaaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58736881: mul dword ptr [ebp]
        __asm _emit 0xF7
        __asm _emit 0x65
        __asm _emit 0x00
        // 0x58736884: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58736888: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x5873688A: mov dword ptr [ebp], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5873688D: inc ebx
        __asm _emit 0x43
        // 0x5873688E: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58736890: jle 0x58736860
        __asm _emit 0x7E
        __asm _emit 0xCE
        // 0x58736892: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58736896: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873689A: push edx
        __asm _emit 0x52
        // 0x5873689B: call 0x58735dd0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587368A0: pop ebp
        __asm _emit 0x5D
        // 0x587368A1: pop ebx
        __asm _emit 0x5B
        // 0x587368A2: pop edi
        __asm _emit 0x5F
        // 0x587368A3: pop esi
        __asm _emit 0x5E
        // 0x587368A4: pop ecx
        __asm _emit 0x59
        // 0x587368A5: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587368A8: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x587368AB: mov ebp, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0xBA
        // 0x587368AE: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587368B0: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587368B2: cdq
        __asm _emit 0x99
        // 0x587368B3: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587368B5: xor ebx, edx
        __asm _emit 0x33
        __asm _emit 0xDA
        // 0x587368B7: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x587368B9: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x587368BE: mul ebp
        __asm _emit 0xF7
        __asm _emit 0xE5
        // 0x587368C0: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x587368C3: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x587368C5: jbe 0x5873692c
        __asm _emit 0x76
        __asm _emit 0x65
        // 0x587368C7: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587368CA: add dword ptr [eax + edi*4], ecx
        __asm _emit 0x01
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x587368CD: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x587368D0: shr dword ptr [edx + edi*4], 1
        __asm _emit 0xD1
        __asm _emit 0x2C
        __asm _emit 0xBA
        // 0x587368D3: lea eax, [eax + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x587368D6: lea eax, [edx + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x587368D9: lea eax, [edi - 7]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xF9
        // 0x587368DC: lea ebx, [edi + 7]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x07
        // 0x587368DF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587368E1: jge 0x587368e5
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587368E3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587368E5: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x587368E8: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x587368EA: jle 0x587368ee
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587368EC: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587368EE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587368F0: jg 0x58736a05
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587368F6: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587368F8: je 0x58736911
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587368FA: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x587368FD: cmp dword ptr [edx + eax*4], ecx
        __asm _emit 0x39
        __asm _emit 0x0C
        __asm _emit 0x82
        // 0x58736900: jbe 0x58736911
        __asm _emit 0x76
        __asm _emit 0x0F
        // 0x58736902: add dword ptr [edx + eax*4], ecx
        __asm _emit 0x01
        __asm _emit 0x0C
        __asm _emit 0x82
        // 0x58736905: lea edx, [edx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x82
        // 0x58736908: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x5873690B: shr dword ptr [edx + eax*4], 1
        __asm _emit 0xD1
        __asm _emit 0x2C
        __asm _emit 0x82
        // 0x5873690E: lea edx, [edx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x82
        // 0x58736911: inc eax
        __asm _emit 0x40
        // 0x58736912: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58736914: jle 0x587368f6
        __asm _emit 0x7E
        __asm _emit 0xE0
        // 0x58736916: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873691A: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873691E: push edx
        __asm _emit 0x52
        // 0x5873691F: call 0x58735dd0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736924: pop ebp
        __asm _emit 0x5D
        // 0x58736925: pop ebx
        __asm _emit 0x5B
        // 0x58736926: pop edi
        __asm _emit 0x5F
        // 0x58736927: pop esi
        __asm _emit 0x5E
        // 0x58736928: pop ecx
        __asm _emit 0x59
        // 0x58736929: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5873692C: lea edx, [ebp + ebp*4]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0xAD
        __asm _emit 0x00
        // 0x58736930: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58736935: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58736937: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5873693A: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5873693D: lea eax, [eax + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x58736940: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x58736942: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58736944: jbe 0x587369e3
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873694A: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5873694C: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5873694E: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58736951: add dword ptr [eax + edi*4], ecx
        __asm _emit 0x01
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x58736954: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x58736957: lea eax, [eax + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x5873695A: lea ebx, [edx + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0xBA
        // 0x5873695D: mov eax, 0xaaaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58736962: mul dword ptr [ebx]
        __asm _emit 0xF7
        __asm _emit 0x23
        // 0x58736964: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58736966: mov dword ptr [ebx], edx
        __asm _emit 0x89
        __asm _emit 0x13
        // 0x58736968: lea ebx, [edi - 4]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0xFC
        // 0x5873696B: lea eax, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5873696E: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58736972: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58736974: jge 0x58736978
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58736976: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58736978: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5873697B: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5873697D: jle 0x58736985
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x5873697F: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58736983: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58736985: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58736987: jg 0x58736a05
        __asm _emit 0x7F
        __asm _emit 0x7C
        // 0x58736989: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736990: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58736992: je 0x587369c8
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58736994: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x58736997: cmp dword ptr [edx + ebx*4], ecx
        __asm _emit 0x39
        __asm _emit 0x0C
        __asm _emit 0x9A
        // 0x5873699A: jbe 0x587369c8
        __asm _emit 0x76
        __asm _emit 0x2C
        // 0x5873699C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873699E: mov edx, dword ptr [eax + ebx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x98
        // 0x587369A1: lea eax, [eax + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x98
        // 0x587369A4: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587369A6: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587369A8: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587369AB: add dword ptr [eax + ebx*4], ecx
        __asm _emit 0x01
        __asm _emit 0x0C
        __asm _emit 0x98
        // 0x587369AE: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x587369B1: lea eax, [eax + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x98
        // 0x587369B4: lea ebp, [edx + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x9A
        // 0x587369B7: mov eax, 0xaaaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587369BC: mul dword ptr [ebp]
        __asm _emit 0xF7
        __asm _emit 0x65
        __asm _emit 0x00
        // 0x587369BF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587369C3: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x587369C5: mov dword ptr [ebp], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587369C8: inc ebx
        __asm _emit 0x43
        // 0x587369C9: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587369CB: jle 0x58736990
        __asm _emit 0x7E
        __asm _emit 0xC3
        // 0x587369CD: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587369D1: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587369D5: push edx
        __asm _emit 0x52
        // 0x587369D6: call 0x58735dd0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587369DB: pop ebp
        __asm _emit 0x5D
        // 0x587369DC: pop ebx
        __asm _emit 0x5B
        // 0x587369DD: pop edi
        __asm _emit 0x5F
        // 0x587369DE: pop esi
        __asm _emit 0x5E
        // 0x587369DF: pop ecx
        __asm _emit 0x59
        // 0x587369E0: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587369E3: lea edx, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x92
        // 0x587369E6: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587369E8: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587369EA: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587369ED: add dword ptr [eax + edi*4], ecx
        __asm _emit 0x01
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x587369F0: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587369F3: lea eax, [eax + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x587369F6: lea edi, [ecx + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0xB9
        // 0x587369F9: mov eax, 0xba2e8ba3
        __asm _emit 0xB8
        __asm _emit 0xA3
        __asm _emit 0x8B
        __asm _emit 0x2E
        __asm _emit 0xBA
        // 0x587369FE: mul dword ptr [edi]
        __asm _emit 0xF7
        __asm _emit 0x27
        // 0x58736A00: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x58736A03: mov dword ptr [edi], edx
        __asm _emit 0x89
        __asm _emit 0x17
        // 0x58736A05: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58736A09: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58736A0D: push edx
        __asm _emit 0x52
        // 0x58736A0E: call 0x58735dd0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736A13: pop ebp
        __asm _emit 0x5D
        // 0x58736A14: pop ebx
        __asm _emit 0x5B
        // 0x58736A15: pop edi
        __asm _emit 0x5F
        // 0x58736A16: pop esi
        __asm _emit 0x5E
        // 0x58736A17: pop ecx
        __asm _emit 0x59
        // 0x58736A18: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
