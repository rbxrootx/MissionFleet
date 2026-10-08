// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 613 bytes in 1 exact ranges.
// Source symbol alias: FUN_58810850.

// Ghidra body range 0x58810850..0x58810AB5; 613 mapped bytes.
extern "C" __declspec(naked) void FUN_58810850_segment_00() {
    __asm {
        // 0x58810850: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810855: push esi
        __asm _emit 0x56
        // 0x58810856: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58810858: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5881085B: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810861: mov eax, dword ptr [edx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x34
        // 0x58810864: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58810866: jl 0x588109ad
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881086C: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x5881086F: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xA1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810874: jle 0x588108fb
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881087A: cmp dword ptr [eax + 0x164], 0x51
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x51
        // 0x58810881: jle 0x5881089a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58810883: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881088A: je 0x5881089a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881088C: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810892: mov eax, dword ptr [eax + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810898: jmp 0x5881089c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881089A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881089C: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588108A2: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588108A5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588108A7: je 0x588108d1
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588108A9: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588108AC: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588108AF: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588108B2: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588108B5: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588108B8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588108BA: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588108BD: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588108BF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588108C2: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588108C5: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588108C8: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588108CB: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588108CE: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588108D1: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xA1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588108D6: cmp dword ptr [eax + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588108DD: jle 0x58810971
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588108E3: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588108EA: je 0x58810971
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588108F0: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588108F6: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x588108F9: jmp 0x58810973
        __asm _emit 0xEB
        __asm _emit 0x78
        // 0x588108FB: cmp dword ptr [eax + 0x164], 0x50
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x50
        // 0x58810902: jle 0x5881091b
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58810904: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881090B: je 0x5881091b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5881090D: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810913: mov eax, dword ptr [edx + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810919: jmp 0x5881091d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881091B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881091D: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810923: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58810926: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58810928: je 0x58810952
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5881092A: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5881092D: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58810930: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58810933: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58810936: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58810939: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881093B: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5881093E: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58810940: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58810943: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58810946: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58810949: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5881094C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5881094F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58810952: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xA1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810957: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881095E: jle 0x58810971
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58810960: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810967: je 0x58810971
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58810969: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881096F: jmp 0x58810973
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58810971: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58810973: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810979: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881097F: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810985: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58810988: mov ecx, dword ptr [eax + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881098E: mov ecx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x50
        // 0x58810991: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58810997: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5881099C: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5881099E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588109A1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588109A3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588109A6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588109A8: jmp 0x58810a6c
        __asm _emit 0xE9
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588109AD: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xA1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588109B2: cmp dword ptr [eax + 0x164], 0x1be
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588109BC: jle 0x588109d5
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588109BE: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588109C5: je 0x588109d5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588109C7: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588109CD: mov eax, dword ptr [ecx + 0x6f8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588109D3: jmp 0x588109d7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588109D5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588109D7: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588109DD: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588109E0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588109E2: je 0x58810a0c
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588109E4: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588109E7: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588109EA: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588109ED: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588109F0: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588109F3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588109F5: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588109F8: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588109FA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588109FD: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58810A00: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58810A03: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58810A06: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58810A09: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58810A0C: mov eax, dword ptr [0x58a24714]
        __asm _emit 0xA1
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810A11: cmp dword ptr [eax + 0x160], 0xd
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x58810A18: jle 0x58810a30
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58810A1A: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810A21: je 0x58810a30
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58810A23: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810A29: add eax, 0x340
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810A2E: jmp 0x58810a32
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58810A30: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58810A32: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810A38: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810A3E: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810A44: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58810A47: mov ecx, dword ptr [eax + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810A4D: mov ecx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x50
        // 0x58810A50: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58810A56: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58810A5B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58810A5D: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58810A60: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58810A62: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58810A65: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58810A67: cdq
        __asm _emit 0x99
        // 0x58810A68: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58810A6A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58810A6C: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810A72: push eax
        __asm _emit 0x50
        // 0x58810A73: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58810A78: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58810A7E: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58810A81: mov ecx, dword ptr [eax + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810A87: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58810A8A: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810A90: cdq
        __asm _emit 0x99
        // 0x58810A91: idiv dword ptr [ecx + 0x2c]
        __asm _emit 0xF7
        __asm _emit 0x79
        __asm _emit 0x2C
        // 0x58810A94: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58810A96: imul ecx, ecx, 0x34
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x34
        // 0x58810A99: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58810A9E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58810AA0: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58810AA3: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58810AA5: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58810AA8: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58810AAA: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58810AB0: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x58810AB3: pop esi
        __asm _emit 0x5E
        // 0x58810AB4: ret
        __asm _emit 0xC3
    }
}
