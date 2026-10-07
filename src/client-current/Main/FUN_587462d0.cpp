// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 750 bytes in 1 exact ranges.
// Source symbol alias: FUN_587462d0.

// Ghidra body range 0x587462D0..0x587465BE; 750 mapped bytes.
extern "C" __declspec(naked) void FUN_587462d0_segment_00() {
    __asm {
        // 0x587462D0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587462D3: push ebx
        __asm _emit 0x53
        // 0x587462D4: push ebp
        __asm _emit 0x55
        // 0x587462D5: push esi
        __asm _emit 0x56
        // 0x587462D6: push edi
        __asm _emit 0x57
        // 0x587462D7: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587462DB: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587462DD: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587462DF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587462E1: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587462E5: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587462E9: call 0x587b07b0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xA4
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587462EE: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587462F2: lea edx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587462F9: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587462FB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587462FD: cmp word ptr [ebp + edx*8 + 0x18], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xD5
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x58746303: lea ebx, [ebp + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0xD5
        __asm _emit 0x00
        // 0x58746307: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874630B: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874630F: jne 0x58746433
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746315: mov ecx, dword ptr [ebx + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x44
        // 0x58746318: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874631A: je 0x58746509
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746320: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58746325: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5874632A: jne 0x58746509
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746330: mov ecx, dword ptr [ebx + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x44
        // 0x58746333: mov eax, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746339: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874633B: je 0x587465b4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746341: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x58746344: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58746349: jne 0x5874635a
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5874634B: mov esi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x5874634E: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58746352: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x58746355: jmp 0x58746412
        __asm _emit 0xE9
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874635A: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746360: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58746363: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58746368: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5874636A: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5874636D: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5874636F: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58746374: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58746376: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58746379: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5874637B: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5874637E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58746380: mov edx, dword ptr [ecx + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746386: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58746388: mov eax, dword ptr [edx*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5874638F: cdq
        __asm _emit 0x99
        // 0x58746390: mov edi, 0xe10
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746395: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58746397: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5874639C: mov ebp, 0xe10
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587463A1: imul esi, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF2
        // 0x587463A4: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587463A6: mov esi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x587463A9: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587463AC: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587463AE: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587463B1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587463B3: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x587463B5: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587463B9: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587463BF: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587463C2: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587463C7: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587463C9: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587463CC: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587463CE: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587463D3: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587463D5: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587463D8: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587463DA: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587463DD: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587463DF: mov edx, dword ptr [ecx + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587463E5: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587463E7: mov eax, dword ptr [edx*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587463EE: cdq
        __asm _emit 0x99
        // 0x587463EF: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587463F1: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x587463F4: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587463F8: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587463FD: imul edi, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFA
        // 0x58746400: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x58746402: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746406: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58746409: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5874640B: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5874640E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58746410: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58746412: cmp dword ptr [ebp + 0xd0], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746419: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874641D: je 0x58746433
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5874641F: add esi, dword ptr [ebp + 0xd4]
        __asm _emit 0x03
        __asm _emit 0xB5
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746425: add ecx, dword ptr [ebp + 0xd8]
        __asm _emit 0x03
        __asm _emit 0x8D
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874642B: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874642F: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58746433: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x58746436: push ecx
        __asm _emit 0x51
        // 0x58746437: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x5874643A: push esi
        __asm _emit 0x56
        // 0x5874643B: push ecx
        __asm _emit 0x51
        // 0x5874643C: push edx
        __asm _emit 0x52
        // 0x5874643D: call 0x5876c010
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x5B
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58746442: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58746445: cmp word ptr [ebx + 0x18], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x5874644A: jne 0x5874651d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746450: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x58746453: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58746457: sub eax, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5874645A: cdq
        __asm _emit 0x99
        // 0x5874645B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874645D: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58746461: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58746464: xor ecx, edx
        __asm _emit 0x33
        __asm _emit 0xCA
        // 0x58746466: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58746468: cdq
        __asm _emit 0x99
        // 0x58746469: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5874646B: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5874646D: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5874646F: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x58746472: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58746474: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58746477: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58746479: cmp dword ptr [ebx + 0x2c], edx
        __asm _emit 0x39
        __asm _emit 0x53
        __asm _emit 0x2C
        // 0x5874647C: jb 0x58746509
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746482: mov ecx, dword ptr [ebx + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x44
        // 0x58746485: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5874648A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874648C: je 0x58746509
        __asm _emit 0x74
        __asm _emit 0x7B
        // 0x5874648E: movzx ecx, word ptr [ebx + 0x4c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x4C
        // 0x58746492: cmp ecx, dword ptr [ebx + 0x20]
        __asm _emit 0x3B
        __asm _emit 0x4B
        __asm _emit 0x20
        // 0x58746495: jl 0x587464a1
        __asm _emit 0x7C
        __asm _emit 0x0A
        // 0x58746497: mov dx, word ptr [ebx + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x20
        // 0x5874649B: dec dx
        __asm _emit 0x66
        __asm _emit 0x4A
        // 0x5874649D: mov word ptr [ebx + 0x4c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x53
        __asm _emit 0x4C
        // 0x587464A1: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587464A5: push eax
        __asm _emit 0x50
        // 0x587464A6: lea eax, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587464A9: push eax
        __asm _emit 0x50
        // 0x587464AA: call 0x58747320
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587464AF: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587464B1: add esi, 0x384
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587464B7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587464BA: cmp esi, 0x2a94
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x94
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587464C0: jne 0x587464c4
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x587464C2: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587464C4: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x587464C9: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587464CB: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x587464CD: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587464D0: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587464D2: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587464D5: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587464D7: imul ecx, ecx, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587464DD: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x587464DF: jns 0x587464e7
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x587464E1: add esi, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587464E7: movzx edx, word ptr [ebx + 0x4c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x53
        __asm _emit 0x4C
        // 0x587464EB: push edx
        __asm _emit 0x52
        // 0x587464EC: push esi
        __asm _emit 0x56
        // 0x587464ED: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587464EF: call 0x587b1090
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xAB
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587464F4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587464F6: mov dword ptr [edi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587464FC: mov dword ptr [edi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746502: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746507: jmp 0x58746525
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x58746509: pop edi
        __asm _emit 0x5F
        // 0x5874650A: pop esi
        __asm _emit 0x5E
        // 0x5874650B: mov dword ptr [ebp + 0x88], 0xff
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746515: pop ebp
        __asm _emit 0x5D
        // 0x58746516: pop ebx
        __asm _emit 0x5B
        // 0x58746517: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5874651A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5874651D: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746521: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746525: cmp dword ptr [edi + 0x108], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874652C: jne 0x587465b4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746532: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58746534: je 0x587465b4
        __asm _emit 0x74
        __asm _emit 0x7E
        // 0x58746536: mov eax, dword ptr [edi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874653C: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58746541: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58746546: jne 0x587465b4
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x58746548: cmp dword ptr [edi + 0xf4], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874654F: je 0x587465b4
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x58746551: cmp dword ptr [0x58a24508], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x08
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58746558: jne 0x58746561
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5874655A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874655C: call 0x587b1850
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xB2
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58746561: lea ecx, [ebp + 0xe0]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746567: call 0x58745f40
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874656C: movzx ecx, word ptr [ebx + 0x4c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x4C
        // 0x58746570: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746574: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58746578: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874657E: and esi, 0xfff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746584: shl esi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x0A
        // 0x58746587: or ecx, esi
        __asm _emit 0x0B
        __asm _emit 0xCE
        // 0x58746589: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x5874658C: and edx, 0x80000000
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58746592: or ecx, edx
        __asm _emit 0x0B
        __asm _emit 0xCA
        // 0x58746594: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58746596: mov edx, dword ptr [edx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x3C
        // 0x58746599: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x5874659C: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5874659E: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587465A2: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587465A6: push eax
        __asm _emit 0x50
        // 0x587465A7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587465A9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587465AB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587465AD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587465AF: call 0x587b2460
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xBE
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587465B4: pop edi
        __asm _emit 0x5F
        // 0x587465B5: pop esi
        __asm _emit 0x5E
        // 0x587465B6: pop ebp
        __asm _emit 0x5D
        // 0x587465B7: pop ebx
        __asm _emit 0x5B
        // 0x587465B8: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587465BB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
