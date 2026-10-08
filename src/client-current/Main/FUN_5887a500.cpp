// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 620 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887a500.

// Ghidra body range 0x5887A500..0x5887A76C; 620 mapped bytes.
extern "C" __declspec(naked) void FUN_5887a500_segment_00() {
    __asm {
        // 0x5887A500: push esi
        __asm _emit 0x56
        // 0x5887A501: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5887A503: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5887A507: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5887A509: je 0x5887a766
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A50F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5887A513: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A518: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5887A51B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A520: push edi
        __asm _emit 0x57
        // 0x5887A521: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5887A524: jne 0x5887a5f5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A52A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5887A52D: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5887A530: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5887A532: jne 0x5887a53c
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5887A534: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5887A537: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x5887A53A: je 0x5887a5bb
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x5887A53C: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5887A53E: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5887A541: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5887A544: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x5887A547: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x5887A54A: ja 0x5887a571
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x5887A54C: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x5887A54F: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5887A552: ja 0x5887a568
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x5887A554: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887A556: jge 0x5887a55d
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5887A558: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x5887A55B: jmp 0x5887a57c
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5887A55D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5887A55F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887A561: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x5887A564: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5887A566: jmp 0x5887a57c
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5887A568: cdq
        __asm _emit 0x99
        // 0x5887A569: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5887A56B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887A56D: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x5887A56F: jmp 0x5887a57c
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5887A571: cdq
        __asm _emit 0x99
        // 0x5887A572: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5887A575: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5887A577: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887A579: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5887A57C: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x5887A57F: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5887A582: ja 0x5887a5a7
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x5887A584: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x5887A587: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5887A58A: ja 0x5887a59e
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x5887A58C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887A58E: jge 0x5887a595
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5887A590: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5887A593: jmp 0x5887a5b2
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x5887A595: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887A597: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887A599: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x5887A59C: jmp 0x5887a5b2
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5887A59E: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5887A5A0: cdq
        __asm _emit 0x99
        // 0x5887A5A1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5887A5A3: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5887A5A5: jmp 0x5887a5b2
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5887A5A7: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5887A5A9: cdq
        __asm _emit 0x99
        // 0x5887A5AA: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5887A5AD: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5887A5AF: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5887A5B2: push eax
        __asm _emit 0x50
        // 0x5887A5B3: push edi
        __asm _emit 0x57
        // 0x5887A5B4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887A5B6: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887A5BB: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5887A5BE: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5887A5C1: jne 0x5887a743
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A5C7: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5887A5CA: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5887A5CD: jne 0x5887a743
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A5D3: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5887A5D7: mov eax, 0xe2ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A5DC: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5887A5DF: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A5E4: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5887A5E7: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5887A5EB: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5887A5F0: jmp 0x5887a743
        __asm _emit 0xE9
        __asm _emit 0x4E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A5F5: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5887A5F9: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A5FE: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5887A601: mov ecx, 0x400
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A606: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5887A609: jne 0x5887a6e4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A60F: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5887A612: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5887A615: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5887A617: jne 0x5887a621
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5887A619: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5887A61C: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x5887A61F: je 0x5887a6a0
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x5887A621: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5887A623: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5887A626: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5887A629: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x5887A62C: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x5887A62F: ja 0x5887a656
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x5887A631: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x5887A634: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5887A637: ja 0x5887a64d
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x5887A639: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887A63B: jge 0x5887a642
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5887A63D: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x5887A640: jmp 0x5887a661
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x5887A642: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5887A644: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887A646: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x5887A649: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5887A64B: jmp 0x5887a661
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5887A64D: cdq
        __asm _emit 0x99
        // 0x5887A64E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5887A650: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887A652: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x5887A654: jmp 0x5887a661
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5887A656: cdq
        __asm _emit 0x99
        // 0x5887A657: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5887A65A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5887A65C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887A65E: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5887A661: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x5887A664: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5887A667: ja 0x5887a68c
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x5887A669: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x5887A66C: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5887A66F: ja 0x5887a683
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x5887A671: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887A673: jge 0x5887a67a
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5887A675: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5887A678: jmp 0x5887a697
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x5887A67A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887A67C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887A67E: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x5887A681: jmp 0x5887a697
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5887A683: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5887A685: cdq
        __asm _emit 0x99
        // 0x5887A686: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5887A688: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5887A68A: jmp 0x5887a697
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5887A68C: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5887A68E: cdq
        __asm _emit 0x99
        // 0x5887A68F: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5887A692: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5887A694: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5887A697: push eax
        __asm _emit 0x50
        // 0x5887A698: push edi
        __asm _emit 0x57
        // 0x5887A699: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887A69B: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887A6A0: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5887A6A3: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5887A6A6: jne 0x5887a743
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A6AC: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5887A6AF: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5887A6B2: jne 0x5887a743
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A6B8: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A6BD: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5887A6C1: mov eax, 0xfffb
        __asm _emit 0xB8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A6C6: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5887A6CA: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5887A6CE: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A6D3: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5887A6D6: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A6DB: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5887A6DE: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5887A6E2: jmp 0x5887a743
        __asm _emit 0xEB
        __asm _emit 0x5F
        // 0x5887A6E4: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5887A6E8: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5887A6EA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5887A6ED: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A6F2: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5887A6F5: jne 0x5887a743
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x5887A6F7: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5887A6FB: test cl, 2
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x5887A6FE: je 0x5887a743
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x5887A700: movzx eax, word ptr [esi + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A707: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887A70A: jbe 0x5887a714
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5887A70C: dec eax
        __asm _emit 0x48
        // 0x5887A70D: mov word ptr [esi + 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A714: movzx eax, word ptr [esi + 0x92]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A71B: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887A71E: jbe 0x5887a743
        __asm _emit 0x76
        __asm _emit 0x23
        // 0x5887A720: dec eax
        __asm _emit 0x48
        // 0x5887A721: mov word ptr [esi + 0x92], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A728: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887A72B: jne 0x5887a743
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x5887A72D: push 0xfab
        __asm _emit 0x68
        __asm _emit 0xAB
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A732: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887A734: call 0x5887a3f0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887A739: mov dword ptr [esi + 0x94], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A743: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5887A746: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887A748: je 0x5887a765
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5887A74A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A750: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x5887A753: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5887A755: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5887A758: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5887A75B: je 0x5887a768
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5887A75D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5887A75F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5887A761: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5887A763: jne 0x5887a750
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5887A765: pop edi
        __asm _emit 0x5F
        // 0x5887A766: pop esi
        __asm _emit 0x5E
        // 0x5887A767: ret
        __asm _emit 0xC3
        // 0x5887A768: pop edi
        __asm _emit 0x5F
        // 0x5887A769: pop esi
        __asm _emit 0x5E
        // 0x5887A76A: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
