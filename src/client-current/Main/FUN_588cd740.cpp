// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 861 bytes in 1 exact ranges.
// Source symbol alias: FUN_588cd740.

// Ghidra body range 0x588CD740..0x588CDA9D; 861 mapped bytes.
extern "C" __declspec(naked) void FUN_588cd740_segment_00() {
    __asm {
        // 0x588CD740: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588CD742: push 0x58988f7e
        __asm _emit 0x68
        __asm _emit 0x7E
        __asm _emit 0x8F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CD747: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD74D: push eax
        __asm _emit 0x50
        // 0x588CD74E: push ecx
        __asm _emit 0x51
        // 0x588CD74F: push ebx
        __asm _emit 0x53
        // 0x588CD750: push ebp
        __asm _emit 0x55
        // 0x588CD751: push esi
        __asm _emit 0x56
        // 0x588CD752: push edi
        __asm _emit 0x57
        // 0x588CD753: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588CD758: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588CD75A: push eax
        __asm _emit 0x50
        // 0x588CD75B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CD75F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD765: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588CD767: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588CD76B: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CD76F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588CD773: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588CD777: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CD77B: push eax
        __asm _emit 0x50
        // 0x588CD77C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CD780: push ecx
        __asm _emit 0x51
        // 0x588CD781: push edx
        __asm _emit 0x52
        // 0x588CD782: push ebp
        __asm _emit 0x55
        // 0x588CD783: push eax
        __asm _emit 0x50
        // 0x588CD784: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588CD786: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD78B: mov dword ptr [edi], 0x589a0d60
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x60
        __asm _emit 0x0D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588CD791: mov eax, dword ptr [0x58a24750]
        __asm _emit 0xA1
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CD796: cmp dword ptr [eax + 0x164], 0x16
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x588CD79D: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD7A5: jle 0x588cd7bb
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588CD7A7: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD7AE: je 0x588cd7bb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588CD7B0: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD7B6: mov eax, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x58
        // 0x588CD7B9: jmp 0x588cd7bd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD7BB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD7BD: mov ecx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x588CD7C0: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CD7C3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD7C5: je 0x588cd7ef
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CD7C7: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CD7CA: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CD7CD: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CD7D0: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CD7D3: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CD7D6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CD7D8: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CD7DB: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CD7DD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CD7E0: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CD7E3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CD7E6: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CD7E9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CD7EC: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CD7EF: mov eax, dword ptr [0x58a24750]
        __asm _emit 0xA1
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CD7F4: cmp dword ptr [eax + 0x164], 0x17
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        // 0x588CD7FB: jle 0x588cd811
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588CD7FD: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD804: je 0x588cd811
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588CD806: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD80C: mov eax, dword ptr [ecx + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x588CD80F: jmp 0x588cd813
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD811: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD813: mov ecx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x64
        // 0x588CD816: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CD819: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD81B: je 0x588cd845
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CD81D: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CD820: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CD823: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CD826: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CD829: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CD82C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CD82E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CD831: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CD833: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CD836: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CD839: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CD83C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CD83F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CD842: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CD845: mov eax, dword ptr [0x58a24750]
        __asm _emit 0xA1
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CD84A: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD851: jle 0x588cd866
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588CD853: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD85A: je 0x588cd866
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588CD85C: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD862: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588CD864: jmp 0x588cd868
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD866: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD868: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588CD86B: mov ecx, dword ptr [edi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x5C
        // 0x588CD86E: mov dword ptr [ecx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x588CD871: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD876: mov dword ptr [esp + 0x38], 0x40
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD87E: lea esi, [edi + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x70
        // 0x588CD881: add ebp, 0x1d2
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xD2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD887: mov dword ptr [esp + 0x34], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD88F: nop
        __asm _emit 0x90
        // 0x588CD890: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD895: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xF3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CD89A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CD89D: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588CD8A1: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588CD8A6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD8A8: je 0x588cd8fa
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x588CD8AA: mov ecx, dword ptr [0x58a24750]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CD8B0: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD8B6: jle 0x588cd8d1
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x588CD8B8: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588CD8BA: jl 0x588cd8d1
        __asm _emit 0x7C
        __asm _emit 0x15
        // 0x588CD8BC: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD8C3: je 0x588cd8d1
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588CD8C5: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD8CB: add edx, dword ptr [esp + 0x38]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CD8CF: jmp 0x588cd8d3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD8D1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588CD8D3: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588CD8D7: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CD8D9: add ecx, 0x9e
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD8DF: push ecx
        __asm _emit 0x51
        // 0x588CD8E0: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CD8E6: push ebp
        __asm _emit 0x55
        // 0x588CD8E7: push edx
        __asm _emit 0x52
        // 0x588CD8E8: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CD8EE: push edi
        __asm _emit 0x57
        // 0x588CD8EF: push edx
        __asm _emit 0x52
        // 0x588CD8F0: push ecx
        __asm _emit 0x51
        // 0x588CD8F1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CD8F3: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588CD8F8: jmp 0x588cd8fc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD8FA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD8FC: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD901: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CD903: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CD908: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588CD90A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CD90F: add dword ptr [esp + 0x38], 0x40
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x40
        // 0x588CD914: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588CD917: inc ebx
        __asm _emit 0x43
        // 0x588CD918: add ebp, 0x50
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x50
        // 0x588CD91B: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x588CD920: jne 0x588cd890
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CD926: push 0x1b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD92B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xF3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CD930: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CD933: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CD937: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588CD93C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD93E: je 0x588cd965
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588CD940: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588CD944: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CD948: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588CD94A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CD94C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CD94E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CD950: add edx, 0xaf
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD956: push edx
        __asm _emit 0x52
        // 0x588CD957: add ecx, 0x23
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x23
        // 0x588CD95A: push ecx
        __asm _emit 0x51
        // 0x588CD95B: push edi
        __asm _emit 0x57
        // 0x588CD95C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CD95E: call 0x58897930
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x9F
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588CD963: jmp 0x588cd967
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD965: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD967: mov dword ptr [edi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x78
        // 0x588CD96A: mov ecx, dword ptr [0x58a24750]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CD970: cmp dword ptr [ecx + 0x164], 0x18
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        // 0x588CD977: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588CD97C: jle 0x588cd992
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588CD97E: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD985: je 0x588cd992
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588CD987: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD98D: mov ecx, dword ptr [edx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x60
        // 0x588CD990: jmp 0x588cd994
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD992: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588CD994: mov eax, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x60
        // 0x588CD997: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588CD99A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588CD99C: je 0x588cd9c6
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CD99E: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CD9A1: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588CD9A4: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x588CD9A7: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x588CD9AA: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CD9AD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588CD9AF: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x588CD9B2: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588CD9B4: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CD9B7: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CD9BA: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CD9BD: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CD9C0: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x588CD9C3: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588CD9C6: mov eax, dword ptr [0x58a24750]
        __asm _emit 0xA1
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CD9CB: cmp dword ptr [eax + 0x164], 0x19
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x588CD9D2: jle 0x588cd9e8
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588CD9D4: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD9DB: je 0x588cd9e8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588CD9DD: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CD9E3: mov eax, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x588CD9E6: jmp 0x588cd9ea
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CD9E8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CD9EA: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x588CD9ED: mov ecx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x64
        // 0x588CD9F0: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CD9F3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CD9F5: je 0x588cda1f
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CD9F7: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CD9FA: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CD9FD: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CDA00: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CDA03: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CDA06: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CDA08: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CDA0B: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CDA0D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CDA10: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CDA13: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CDA16: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CDA19: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CDA1C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CDA1F: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588CDA21: mov ebp, 0x57
        __asm _emit 0xBD
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CDA26: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x588CDA29: push ebp
        __asm _emit 0x55
        // 0x588CDA2A: push 0x5a
        __asm _emit 0x6A
        __asm _emit 0x5A
        // 0x588CDA2C: push esi
        __asm _emit 0x56
        // 0x588CDA2D: call 0x58897850
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x9E
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588CDA32: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x588CDA35: inc esi
        __asm _emit 0x46
        // 0x588CDA36: cmp ebp, 0x6f
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x6F
        // 0x588CDA39: jl 0x588cda26
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588CDA3B: cmp esi, 6
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x06
        // 0x588CDA3E: jge 0x588cda5f
        __asm _emit 0x7D
        __asm _emit 0x1F
        // 0x588CDA40: lea ebp, [esi*8 - 9]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0xF5
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CDA47: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x588CDA4A: push ebp
        __asm _emit 0x55
        // 0x588CDA4B: push 0x16a
        __asm _emit 0x68
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CDA50: push esi
        __asm _emit 0x56
        // 0x588CDA51: call 0x58897850
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x9D
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588CDA56: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x588CDA59: inc esi
        __asm _emit 0x46
        // 0x588CDA5A: cmp ebp, 0x27
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x27
        // 0x588CDA5D: jl 0x588cda47
        __asm _emit 0x7C
        __asm _emit 0xE8
        // 0x588CDA5F: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x588CDA62: mov dword ptr [ecx + 0x1b0], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CDA6C: mov edx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x78
        // 0x588CDA6F: mov dword ptr [edx + 0x1ac], 0
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CDA79: mov eax, dword ptr [edi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x5C
        // 0x588CDA7C: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CDA81: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588CDA85: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588CDA87: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CDA8B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CDA92: pop ecx
        __asm _emit 0x59
        // 0x588CDA93: pop edi
        __asm _emit 0x5F
        // 0x588CDA94: pop esi
        __asm _emit 0x5E
        // 0x588CDA95: pop ebp
        __asm _emit 0x5D
        // 0x588CDA96: pop ebx
        __asm _emit 0x5B
        // 0x588CDA97: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588CDA9A: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
