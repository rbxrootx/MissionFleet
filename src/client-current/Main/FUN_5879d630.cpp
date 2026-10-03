// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5879D630 .. +0x6BA bytes.
extern "C" __declspec(naked) void FUN_5879d630() {
    __asm {
        // 0x5879D630: sub esp, 0x138
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D636: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5879D63B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5879D63D: mov dword ptr [esp + 0x134], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D644: push ebx
        __asm _emit 0x53
        // 0x5879D645: push ebp
        __asm _emit 0x55
        // 0x5879D646: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5879D649: push esi
        __asm _emit 0x56
        // 0x5879D64A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5879D64C: mov ebx, dword ptr [esi + 0x2f0]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D652: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879D656: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879D65A: mov eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D660: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5879D663: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5879D665: push edi
        __asm _emit 0x57
        // 0x5879D666: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D66E: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5879D672: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879D674: je 0x5879d682
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5879D676: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x5879D679: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D67E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5879D682: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D688: cmp dword ptr [ecx + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D68F: jle 0x5879d696
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x5879D691: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xB1
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D696: lea edi, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D69C: mov ebp, 7
        __asm _emit 0xBD
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D6A1: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5879D6A3: cmp dword ptr [ecx + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D6AA: jle 0x5879d6b1
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x5879D6AC: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xB1
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D6B1: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5879D6B4: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5879D6B7: jne 0x5879d6a1
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5879D6B9: mov eax, dword ptr [esi + 0x2fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D6BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879D6C1: jle 0x5879dcd1
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x0A
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D6C7: mov edx, dword ptr [esi + 0x2f0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D6CD: mov edi, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5879D6D3: mov dword ptr [esi + 0x2f8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D6D9: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5879D6DD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5879D6E0: movzx eax, word ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D6E7: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5879D6EB: jne 0x5879d8c7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D6F1: mov ebp, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x08
        // 0x5879D6F4: movzx eax, word ptr [ebp + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x06
        // 0x5879D6F8: mov ecx, dword ptr [esi + 0x2e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D6FE: cmp byte ptr [ecx + eax + 4], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879D703: jne 0x5879d70d
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5879D705: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879D707: jne 0x5879daee
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D70D: movzx eax, word ptr [ebp + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D714: lea edx, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x78
        // 0x5879D717: push edx
        __asm _emit 0x52
        // 0x5879D718: and eax, 7
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x07
        // 0x5879D71B: push eax
        __asm _emit 0x50
        // 0x5879D71C: call dword ptr [0x5898c02c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5879D722: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5879D725: push eax
        __asm _emit 0x50
        // 0x5879D726: lea ecx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5879D72A: push 0x58998394
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x83
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879D72F: push ecx
        __asm _emit 0x51
        // 0x5879D730: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879D732: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D738: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5879D73B: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879D740: push ebx
        __asm _emit 0x53
        // 0x5879D741: lea edx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5879D745: push edx
        __asm _emit 0x52
        // 0x5879D746: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xB1
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D74B: lea eax, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D751: mov edx, 6
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D756: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5879D758: or word ptr [ecx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5879D75D: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5879D760: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5879D763: jne 0x5879d756
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5879D765: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D76B: push 0x1c5
        __asm _emit 0x68
        __asm _emit 0xC5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D770: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x5B
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D775: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D77B: push 0x206
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D780: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x5B
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D785: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D78B: push 0x233
        __asm _emit 0x68
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D790: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x5B
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D795: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D79B: push 0x260
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D7A0: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x5B
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D7A5: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D7AB: push 0x28d
        __asm _emit 0x68
        __asm _emit 0x8D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D7B0: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x5B
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D7B5: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D7BB: push 0x2d3
        __asm _emit 0x68
        __asm _emit 0xD3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D7C0: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x5B
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D7C5: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x5879D7C8: push eax
        __asm _emit 0x50
        // 0x5879D7C9: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5879D7CD: push 0x58998390
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x83
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879D7D2: push ecx
        __asm _emit 0x51
        // 0x5879D7D3: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879D7D5: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D7DB: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5879D7DE: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879D7E3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879D7E5: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879D7E9: push edx
        __asm _emit 0x52
        // 0x5879D7EA: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xB0
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D7EF: mov eax, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5879D7F2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5879D7F4: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D7F9: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5879D7FB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5879D7FD: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5879D802: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5879D804: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5879D807: push edx
        __asm _emit 0x52
        // 0x5879D808: push ecx
        __asm _emit 0x51
        // 0x5879D809: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879D80D: push 0x58998184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879D812: push edx
        __asm _emit 0x52
        // 0x5879D813: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879D815: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D81B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5879D81E: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879D823: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879D825: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879D829: push eax
        __asm _emit 0x50
        // 0x5879D82A: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xB0
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D82F: movzx ecx, word ptr [ebp + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4D
        __asm _emit 0x1E
        // 0x5879D833: push ecx
        __asm _emit 0x51
        // 0x5879D834: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5879D838: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5879D83D: push edx
        __asm _emit 0x52
        // 0x5879D83E: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879D840: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D846: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5879D849: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879D84E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879D850: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879D854: push eax
        __asm _emit 0x50
        // 0x5879D855: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xB0
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D85A: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x5879D85D: push ecx
        __asm _emit 0x51
        // 0x5879D85E: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5879D862: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5879D867: push edx
        __asm _emit 0x52
        // 0x5879D868: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879D86A: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D870: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5879D873: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879D878: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879D87A: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879D87E: push eax
        __asm _emit 0x50
        // 0x5879D87F: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xB0
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D884: movzx eax, word ptr [ebp + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D88B: cdq
        __asm _emit 0x99
        // 0x5879D88C: mov ecx, 0x64
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D891: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5879D893: push edx
        __asm _emit 0x52
        // 0x5879D894: push eax
        __asm _emit 0x50
        // 0x5879D895: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879D899: push 0x58998184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879D89E: push edx
        __asm _emit 0x52
        // 0x5879D89F: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879D8A1: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D8A7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5879D8AA: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879D8AF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879D8B1: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879D8B5: push eax
        __asm _emit 0x50
        // 0x5879D8B6: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xB0
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D8BB: movzx ecx, word ptr [ebp + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D8C2: jmp 0x5879da90
        __asm _emit 0xE9
        __asm _emit 0xC9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D8C7: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5879D8CB: jne 0x5879daee
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D8D1: mov ebp, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x08
        // 0x5879D8D4: movzx eax, word ptr [ebp + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x06
        // 0x5879D8D8: mov ecx, dword ptr [esi + 0x2e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D8DE: cmp byte ptr [ecx + eax + 4], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879D8E3: jne 0x5879d8ed
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5879D8E5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879D8E7: jne 0x5879daee
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D8ED: lea edx, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x78
        // 0x5879D8F0: push edx
        __asm _emit 0x52
        // 0x5879D8F1: lea eax, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5879D8F5: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5879D8FA: push eax
        __asm _emit 0x50
        // 0x5879D8FB: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879D8FD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5879D900: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879D905: push ebx
        __asm _emit 0x53
        // 0x5879D906: lea ecx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5879D90A: push ecx
        __asm _emit 0x51
        // 0x5879D90B: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D911: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xAF
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D916: lea ecx, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D91C: mov edx, 6
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D921: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879D923: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5879D928: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5879D92B: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5879D92E: jne 0x5879d921
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5879D930: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D936: push 0x1c5
        __asm _emit 0x68
        __asm _emit 0xC5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D93B: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x59
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D940: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D946: push 0x1fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D94B: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x59
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D950: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D956: push 0x233
        __asm _emit 0x68
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D95B: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x59
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D960: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D966: push 0x260
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D96B: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x59
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D970: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D976: push 0x28d
        __asm _emit 0x68
        __asm _emit 0x8D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D97B: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x59
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D980: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D986: push 0x2d3
        __asm _emit 0x68
        __asm _emit 0xD3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D98B: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x59
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D990: mov edx, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x0C
        // 0x5879D993: push edx
        __asm _emit 0x52
        // 0x5879D994: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5879D998: push 0x58998390
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x83
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879D99D: push eax
        __asm _emit 0x50
        // 0x5879D99E: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879D9A0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5879D9A3: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879D9A8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879D9AA: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879D9AE: push ecx
        __asm _emit 0x51
        // 0x5879D9AF: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D9B5: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xAF
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D9BA: mov eax, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5879D9BD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5879D9BF: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D9C4: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5879D9C6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5879D9C8: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5879D9CD: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5879D9CF: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5879D9D2: push edx
        __asm _emit 0x52
        // 0x5879D9D3: push ecx
        __asm _emit 0x51
        // 0x5879D9D4: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879D9D8: push 0x58998184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879D9DD: push edx
        __asm _emit 0x52
        // 0x5879D9DE: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879D9E0: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D9E6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5879D9E9: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879D9EE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879D9F0: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879D9F4: push eax
        __asm _emit 0x50
        // 0x5879D9F5: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xAE
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D9FA: movzx ecx, word ptr [ebp + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4D
        __asm _emit 0x1E
        // 0x5879D9FE: push ecx
        __asm _emit 0x51
        // 0x5879D9FF: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5879DA03: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5879DA08: push edx
        __asm _emit 0x52
        // 0x5879DA09: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879DA0B: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DA11: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5879DA14: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879DA19: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879DA1B: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879DA1F: push eax
        __asm _emit 0x50
        // 0x5879DA20: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xAE
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DA25: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x5879DA28: push ecx
        __asm _emit 0x51
        // 0x5879DA29: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5879DA2D: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5879DA32: push edx
        __asm _emit 0x52
        // 0x5879DA33: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879DA35: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DA3B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5879DA3E: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879DA43: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879DA45: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879DA49: push eax
        __asm _emit 0x50
        // 0x5879DA4A: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xAE
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DA4F: movzx eax, word ptr [ebp + 0xa2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DA56: cdq
        __asm _emit 0x99
        // 0x5879DA57: mov ecx, 0x64
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DA5C: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5879DA5E: push edx
        __asm _emit 0x52
        // 0x5879DA5F: push eax
        __asm _emit 0x50
        // 0x5879DA60: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879DA64: push 0x58998184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879DA69: push edx
        __asm _emit 0x52
        // 0x5879DA6A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879DA6C: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DA72: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5879DA75: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879DA7A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879DA7C: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879DA80: push eax
        __asm _emit 0x50
        // 0x5879DA81: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xAE
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DA86: movzx ecx, word ptr [ebp + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DA8D: shr ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x5879DA90: and ecx, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x7F
        // 0x5879DA93: push ecx
        __asm _emit 0x51
        // 0x5879DA94: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5879DA98: push 0x58998254
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x82
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879DA9D: push edx
        __asm _emit 0x52
        // 0x5879DA9E: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879DAA0: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DAA6: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5879DAA9: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879DAAE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879DAB0: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879DAB4: push eax
        __asm _emit 0x50
        // 0x5879DAB5: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xAE
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DABA: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x5879DABD: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5879DAC1: cmp dword ptr [ecx], edx
        __asm _emit 0x39
        __asm _emit 0x11
        // 0x5879DAC3: jne 0x5879dacd
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5879DAC5: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879DAC9: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879DACD: mov eax, dword ptr [esi + 0x28c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DAD3: cmp eax, 0xff
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DAD8: je 0x5879daea
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5879DADA: movzx ecx, word ptr [ebp + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4D
        __asm _emit 0x06
        // 0x5879DADE: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5879DAE0: jne 0x5879daea
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5879DAE2: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879DAE6: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5879DAEA: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879DAEE: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5879DAF2: mov ebx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x04
        // 0x5879DAF5: inc eax
        __asm _emit 0x40
        // 0x5879DAF6: cmp eax, dword ptr [esi + 0x2fc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DAFC: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5879DB00: jl 0x5879d6e0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xDA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879DB06: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5879DB0A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879DB0E: mov dword ptr [esi + 0x300], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DB14: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5879DB17: jne 0x5879db24
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5879DB19: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879DB1D: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x5879DB1F: jne 0x5879db2a
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5879DB21: lea ecx, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0xFF
        // 0x5879DB24: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879DB28: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5879DB2A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879DB2C: jne 0x5879dc4f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DB32: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5879DB36: push 0x58998378
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x83
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879DB3B: push edx
        __asm _emit 0x52
        // 0x5879DB3C: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5879DB3E: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DB44: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5879DB47: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5879DB4C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879DB4E: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879DB52: push eax
        __asm _emit 0x50
        // 0x5879DB53: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xAD
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DB58: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DB5E: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DB63: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5879DB67: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DB6D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5879DB6F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5879DB73: lea eax, [esi + 0x1d0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DB79: mov edx, 0x20
        __asm _emit 0xBA
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DB7E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5879DB80: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5879DB82: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5879DB84: je 0x5879db8f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5879DB86: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DB8B: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5879DB8F: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5879DB92: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5879DB95: jne 0x5879db80
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x5879DB97: lea edi, [esi + 0xdc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DB9D: lea ebx, [edx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x5A
        __asm _emit 0x30
        // 0x5879DBA0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5879DBA2: call 0x5875f320
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5879DBA7: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5879DBAA: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5879DBAD: jne 0x5879dba0
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5879DBAF: mov eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DBB5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879DBB7: je 0x5879dbc5
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5879DBB9: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x5879DBBC: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DBC1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5879DBC5: mov edx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DBCB: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DBD2: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DBD8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879DBDA: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DBDF: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DBE5: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DBEA: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5879DBEE: push 0x589980b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5879DBF3: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5879DBF9: mov esi, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DBFF: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5879DC02: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5879DC05: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5879DC07: je 0x5879dcd1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC0D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879DC0F: je 0x5879dcd1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC15: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5879DC17: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC1C: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5879DC1E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5879DC20: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5879DC26: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5879DC28: je 0x5879dc42
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5879DC2A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5879DC2C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5879DC2E: je 0x5879dc42
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5879DC30: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5879DC32: inc eax
        __asm _emit 0x40
        // 0x5879DC33: inc edx
        __asm _emit 0x42
        // 0x5879DC34: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5879DC37: jne 0x5879dc20
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5879DC39: dec eax
        __asm _emit 0x48
        // 0x5879DC3A: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC3D: jmp 0x5879dcd1
        __asm _emit 0xE9
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC42: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5879DC44: jne 0x5879dc47
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5879DC46: dec eax
        __asm _emit 0x48
        // 0x5879DC47: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC4A: jmp 0x5879dcd1
        __asm _emit 0xE9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC4F: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5879DC51: jne 0x5879dc6d
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5879DC53: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5879DC55: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879DC57: call 0x5879d3f0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879DC5C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879DC5E: je 0x5879dc69
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5879DC60: inc edi
        __asm _emit 0x47
        // 0x5879DC61: cmp edi, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC67: jl 0x5879dc55
        __asm _emit 0x7C
        __asm _emit 0xEC
        // 0x5879DC69: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879DC6B: jmp 0x5879dcc6
        __asm _emit 0xEB
        __asm _emit 0x59
        // 0x5879DC6D: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC73: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879DC75: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xAB
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DC7A: cmp dword ptr [esi + 0x300], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC81: je 0x5879dc99
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5879DC83: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5879DC85: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879DC87: call 0x5879d3f0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879DC8C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879DC8E: je 0x5879dc99
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5879DC90: inc edi
        __asm _emit 0x47
        // 0x5879DC91: cmp edi, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC97: jl 0x5879dc85
        __asm _emit 0x7C
        __asm _emit 0xEC
        // 0x5879DC99: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DC9F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879DCA1: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xAB
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DCA6: cmp dword ptr [esi + 0x300], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DCAD: je 0x5879dcc5
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5879DCAF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5879DCB1: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5879DCB3: jbe 0x5879dcc5
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x5879DCB5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879DCB7: call 0x5879d480
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879DCBC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879DCBE: je 0x5879dcc5
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5879DCC0: inc edi
        __asm _emit 0x47
        // 0x5879DCC1: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5879DCC3: jb 0x5879dcb5
        __asm _emit 0x72
        __asm _emit 0xF0
        // 0x5879DCC5: push ebx
        __asm _emit 0x53
        // 0x5879DCC6: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DCCC: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xAB
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879DCD1: mov ecx, dword ptr [esp + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DCD8: pop edi
        __asm _emit 0x5F
        // 0x5879DCD9: pop esi
        __asm _emit 0x5E
        // 0x5879DCDA: pop ebp
        __asm _emit 0x5D
        // 0x5879DCDB: pop ebx
        __asm _emit 0x5B
        // 0x5879DCDC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5879DCDE: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xEE
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x5879DCE3: add esp, 0x138
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879DCE9: ret
        __asm _emit 0xC3
    }
}
