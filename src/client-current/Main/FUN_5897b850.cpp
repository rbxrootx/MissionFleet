// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 461 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897b850.

// Ghidra body range 0x5897B850..0x5897BA1D; 461 mapped bytes.
extern "C" __declspec(naked) void FUN_5897b850_segment_00() {
    __asm {
        // 0x5897B850: push ebx
        __asm _emit 0x53
        // 0x5897B851: push ebp
        __asm _emit 0x55
        // 0x5897B852: push esi
        __asm _emit 0x56
        // 0x5897B853: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897B857: push edi
        __asm _emit 0x57
        // 0x5897B858: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5897B85B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897B85D: jbe 0x5897b874
        __asm _emit 0x76
        __asm _emit 0x15
        // 0x5897B85F: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x5897B862: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897B864: jbe 0x5897b874
        __asm _emit 0x76
        __asm _emit 0x0E
        // 0x5897B866: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5897B869: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897B86B: jle 0x5897b874
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x5897B86D: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5897B870: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897B872: jg 0x5897b885
        __asm _emit 0x7F
        __asm _emit 0x11
        // 0x5897B874: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B876: push esi
        __asm _emit 0x56
        // 0x5897B877: mov dword ptr [eax + 0x14], 0x20
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B87E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B880: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897B882: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B885: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x5897B888: mov eax, 0xffdc
        __asm _emit 0xB8
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B88D: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5897B88F: jg 0x5897b896
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x5897B891: cmp dword ptr [esi + 0x1c], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x5897B894: jle 0x5897b8ac
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5897B896: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B898: push esi
        __asm _emit 0x56
        // 0x5897B899: mov dword ptr [edx + 0x14], 0x29
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B8A0: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B8A2: mov dword ptr [ecx + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x5897B8A5: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B8A7: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897B8A9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B8AC: cmp dword ptr [esi + 0x38], 8
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x38
        __asm _emit 0x08
        // 0x5897B8B0: je 0x5897b8cb
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5897B8B2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B8B4: push esi
        __asm _emit 0x56
        // 0x5897B8B5: mov dword ptr [eax + 0x14], 0xf
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B8BC: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B8BE: mov edx, dword ptr [esi + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x38
        // 0x5897B8C1: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x5897B8C4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B8C6: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897B8C8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B8CB: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5897B8CE: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B8D3: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5897B8D5: jle 0x5897b8f5
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x5897B8D7: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B8D9: push esi
        __asm _emit 0x56
        // 0x5897B8DA: mov dword ptr [ecx + 0x14], 0x1a
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B8E1: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B8E3: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5897B8E6: mov dword ptr [edx + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x18
        // 0x5897B8E9: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B8EB: mov dword ptr [edx + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x1C
        // 0x5897B8EE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897B8F0: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897B8F2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B8F5: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5897B8F8: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x5897B8FB: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B900: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5897B902: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5897B904: mov dword ptr [esi + 0xd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B90A: mov dword ptr [esi + 0xdc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B910: jle 0x5897b971
        __asm _emit 0x7E
        __asm _emit 0x5F
        // 0x5897B912: lea edi, [eax + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x5897B915: mov eax, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xFC
        // 0x5897B918: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897B91A: jle 0x5897b92c
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5897B91C: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5897B91F: jg 0x5897b92c
        __asm _emit 0x7F
        __asm _emit 0x0B
        // 0x5897B921: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5897B923: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897B925: jle 0x5897b92c
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x5897B927: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5897B92A: jle 0x5897b93d
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5897B92C: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897B92E: push esi
        __asm _emit 0x56
        // 0x5897B92F: mov dword ptr [ecx + 0x14], 0x12
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B936: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897B938: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897B93A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897B93D: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B943: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x5897B946: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5897B948: jg 0x5897b94c
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x5897B94A: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5897B94C: mov dword ptr [esi + 0xd8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B952: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B958: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5897B95A: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5897B95C: jg 0x5897b960
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x5897B95E: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5897B960: mov dword ptr [esi + 0xdc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B966: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5897B969: inc ebp
        __asm _emit 0x45
        // 0x5897B96A: add edi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x54
        // 0x5897B96D: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5897B96F: jl 0x5897b915
        __asm _emit 0x7C
        __asm _emit 0xA4
        // 0x5897B971: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5897B974: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x5897B977: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5897B979: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5897B97B: jle 0x5897b9fc
        __asm _emit 0x7E
        __asm _emit 0x7F
        // 0x5897B97D: lea edi, [eax + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5897B980: mov ecx, dword ptr [edi - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE4
        // 0x5897B983: mov dword ptr [edi - 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0xE0
        // 0x5897B986: mov dword ptr [edi], 8
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B98C: imul ecx, dword ptr [esi + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5897B990: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B996: shl eax, 3
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x5897B999: push eax
        __asm _emit 0x50
        // 0x5897B99A: push ecx
        __asm _emit 0x51
        // 0x5897B99B: call 0x58976c10
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xB2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897B9A0: mov dword ptr [edi - 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xF8
        // 0x5897B9A3: mov eax, dword ptr [edi - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xE8
        // 0x5897B9A6: imul eax, dword ptr [esi + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5897B9AA: mov edx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B9B0: shl edx, 3
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5897B9B3: push edx
        __asm _emit 0x52
        // 0x5897B9B4: push eax
        __asm _emit 0x50
        // 0x5897B9B5: call 0x58976c10
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xB2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897B9BA: mov edx, dword ptr [edi - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0xE4
        // 0x5897B9BD: mov dword ptr [edi - 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xFC
        // 0x5897B9C0: imul edx, dword ptr [esi + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5897B9C4: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B9CA: push ecx
        __asm _emit 0x51
        // 0x5897B9CB: push edx
        __asm _emit 0x52
        // 0x5897B9CC: call 0x58976c10
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xB2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897B9D1: mov ecx, dword ptr [edi - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE8
        // 0x5897B9D4: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5897B9D7: imul ecx, dword ptr [esi + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x5897B9DB: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897B9E1: push eax
        __asm _emit 0x50
        // 0x5897B9E2: push ecx
        __asm _emit 0x51
        // 0x5897B9E3: call 0x58976c10
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xB2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897B9E8: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x5897B9EB: mov dword ptr [edi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5897B9EE: mov byte ptr [edi + 0xc], bl
        __asm _emit 0x88
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x5897B9F1: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5897B9F4: inc ebp
        __asm _emit 0x45
        // 0x5897B9F5: add edi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x54
        // 0x5897B9F8: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5897B9FA: jl 0x5897b980
        __asm _emit 0x7C
        __asm _emit 0x84
        // 0x5897B9FC: mov edx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BA02: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5897BA05: shl edx, 3
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5897BA08: push edx
        __asm _emit 0x52
        // 0x5897BA09: push eax
        __asm _emit 0x50
        // 0x5897BA0A: call 0x58976c10
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xB2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897BA0F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5897BA12: mov dword ptr [esi + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BA18: pop edi
        __asm _emit 0x5F
        // 0x5897BA19: pop esi
        __asm _emit 0x5E
        // 0x5897BA1A: pop ebp
        __asm _emit 0x5D
        // 0x5897BA1B: pop ebx
        __asm _emit 0x5B
        // 0x5897BA1C: ret
        __asm _emit 0xC3
    }
}
