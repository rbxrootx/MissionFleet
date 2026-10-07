// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 730 bytes in 1 exact ranges.
// Source symbol alias: FUN_589759a0.

// Ghidra body range 0x589759A0..0x58975C7A; 730 mapped bytes.
extern "C" __declspec(naked) void FUN_589759a0_segment_00() {
    __asm {
        // 0x589759A0: push ebx
        __asm _emit 0x53
        // 0x589759A1: push esi
        __asm _emit 0x56
        // 0x589759A2: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589759A6: push edi
        __asm _emit 0x57
        // 0x589759A7: cmp dword ptr [esi + 0x14], 0x64
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x14
        __asm _emit 0x64
        // 0x589759AB: je 0x589759c6
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x589759AD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x589759AF: push esi
        __asm _emit 0x56
        // 0x589759B0: mov dword ptr [eax + 0x14], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589759B7: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x589759B9: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x589759BC: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x589759BF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x589759C1: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x589759C3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589759C6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589759CA: mov byte ptr [esi + 0xc4], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589759D1: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x589759D4: mov dword ptr [esi + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x40
        // 0x589759D7: mov byte ptr [esi + 0xcc], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589759DE: ja 0x58975c65
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589759E4: jmp dword ptr [eax*4 + 0x58975c7c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x7C
        __asm _emit 0x5C
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x589759EB: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589759F0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589759F2: mov byte ptr [esi + 0xc4], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589759F8: mov dword ptr [esi + 0x3c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x3C
        // 0x589759FB: mov esi, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x44
        // 0x589759FE: pop edi
        __asm _emit 0x5F
        // 0x589759FF: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x58975A01: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x58975A04: mov dword ptr [esi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58975A07: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58975A0A: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58975A0D: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58975A10: pop esi
        __asm _emit 0x5E
        // 0x58975A11: pop ebx
        __asm _emit 0x5B
        // 0x58975A12: ret
        __asm _emit 0xC3
        // 0x58975A13: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975A16: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975A1B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58975A1D: mov byte ptr [esi + 0xcc], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975A23: mov dword ptr [esi + 0x3c], 3
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975A2A: mov dword ptr [eax], 0x52
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975A30: mov dword ptr [eax + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x58975A33: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58975A36: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58975A39: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58975A3C: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x58975A3F: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975A42: add eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x54
        // 0x58975A45: pop edi
        __asm _emit 0x5F
        // 0x58975A46: mov dword ptr [eax], 0x47
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975A4C: mov dword ptr [eax + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x58975A4F: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58975A52: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58975A55: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58975A58: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x58975A5B: mov esi, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x44
        // 0x58975A5E: mov dword ptr [esi + 0xa8], 0x42
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975A68: add esi, 0xa8
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975A6E: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x58975A71: mov dword ptr [esi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58975A74: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58975A77: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58975A7A: mov dword ptr [esi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58975A7D: pop esi
        __asm _emit 0x5E
        // 0x58975A7E: pop ebx
        __asm _emit 0x5B
        // 0x58975A7F: ret
        __asm _emit 0xC3
        // 0x58975A80: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975A83: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975A88: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975A8D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58975A8F: mov byte ptr [esi + 0xc4], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975A95: mov dword ptr [esi + 0x3c], 3
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975A9C: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        // 0x58975A9E: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58975AA1: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58975AA4: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58975AA7: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58975AAA: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x58975AAD: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975AB0: mov dword ptr [eax + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x54
        // 0x58975AB3: add eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x54
        // 0x58975AB6: pop edi
        __asm _emit 0x5F
        // 0x58975AB7: mov dword ptr [eax + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x58975ABA: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58975ABD: mov dword ptr [eax + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58975AC0: mov dword ptr [eax + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x58975AC3: mov dword ptr [eax + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x58975AC6: mov esi, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x44
        // 0x58975AC9: add esi, 0xa8
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975ACF: mov dword ptr [esi], 3
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975AD5: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x58975AD8: mov dword ptr [esi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58975ADB: mov dword ptr [esi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58975ADE: mov dword ptr [esi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x14
        // 0x58975AE1: mov dword ptr [esi + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x58975AE4: pop esi
        __asm _emit 0x5E
        // 0x58975AE5: pop ebx
        __asm _emit 0x5B
        // 0x58975AE6: ret
        __asm _emit 0xC3
        // 0x58975AE7: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975AEA: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975AEF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58975AF1: mov byte ptr [esi + 0xcc], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975AF7: mov dword ptr [esi + 0x3c], 4
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975AFE: mov dword ptr [eax], 0x43
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975B04: mov dword ptr [eax + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x58975B07: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58975B0A: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58975B0D: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58975B10: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x58975B13: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975B16: add eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x54
        // 0x58975B19: pop edi
        __asm _emit 0x5F
        // 0x58975B1A: mov dword ptr [eax], 0x4d
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975B20: mov dword ptr [eax + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x58975B23: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58975B26: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58975B29: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58975B2C: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x58975B2F: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975B32: mov dword ptr [eax + 0xa8], 0x59
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975B3C: add eax, 0xa8
        __asm _emit 0x05
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975B41: mov dword ptr [eax + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x58975B44: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58975B47: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58975B4A: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58975B4D: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x58975B50: mov esi, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x44
        // 0x58975B53: add esi, 0xfc
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975B59: mov dword ptr [esi], 0x4b
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x4B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975B5F: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x58975B62: mov dword ptr [esi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58975B65: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58975B68: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58975B6B: mov dword ptr [esi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58975B6E: pop esi
        __asm _emit 0x5E
        // 0x58975B6F: pop ebx
        __asm _emit 0x5B
        // 0x58975B70: ret
        __asm _emit 0xC3
        // 0x58975B71: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975B74: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975B79: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975B7E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58975B80: mov byte ptr [esi + 0xcc], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975B86: mov dword ptr [esi + 0x3c], 4
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975B8D: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        // 0x58975B8F: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58975B92: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58975B95: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58975B98: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58975B9B: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x58975B9E: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975BA1: mov dword ptr [eax + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x54
        // 0x58975BA4: add eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x54
        // 0x58975BA7: pop edi
        __asm _emit 0x5F
        // 0x58975BA8: mov dword ptr [eax + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x58975BAB: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58975BAE: mov dword ptr [eax + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58975BB1: mov dword ptr [eax + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x58975BB4: mov dword ptr [eax + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x58975BB7: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x58975BBA: add eax, 0xa8
        __asm _emit 0x05
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975BBF: mov dword ptr [eax], 3
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975BC5: mov dword ptr [eax + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x58975BC8: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58975BCB: mov dword ptr [eax + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58975BCE: mov dword ptr [eax + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x58975BD1: mov dword ptr [eax + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x58975BD4: mov esi, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x44
        // 0x58975BD7: mov dword ptr [esi + 0xfc], 4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975BE1: add esi, 0xfc
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975BE7: mov dword ptr [esi + 8], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58975BEA: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58975BED: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58975BF0: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58975BF3: mov dword ptr [esi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58975BF6: pop esi
        __asm _emit 0x5E
        // 0x58975BF7: pop ebx
        __asm _emit 0x5B
        // 0x58975BF8: ret
        __asm _emit 0xC3
        // 0x58975BF9: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58975BFC: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975C01: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58975C03: mov dword ptr [esi + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58975C06: jl 0x58975c0d
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x58975C08: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x58975C0B: jle 0x58975c2f
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x58975C0D: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58975C0F: push esi
        __asm _emit 0x56
        // 0x58975C10: mov dword ptr [ecx + 0x14], 0x1a
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975C17: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58975C19: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58975C1C: mov dword ptr [edx + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58975C1F: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58975C21: mov dword ptr [ecx + 0x1c], 0xa
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975C28: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58975C2A: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x58975C2C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58975C2F: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58975C32: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58975C34: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58975C36: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58975C38: jle 0x58975c76
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x58975C3A: push ebp
        __asm _emit 0x55
        // 0x58975C3B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58975C3D: mov ebp, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x44
        // 0x58975C40: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58975C42: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x58975C44: add edx, 0x54
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x54
        // 0x58975C47: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58975C49: mov dword ptr [eax + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x58975C4C: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58975C4F: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58975C52: mov dword ptr [eax + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x58975C55: mov dword ptr [eax + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58975C58: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58975C5B: inc ecx
        __asm _emit 0x41
        // 0x58975C5C: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58975C5E: jl 0x58975c3d
        __asm _emit 0x7C
        __asm _emit 0xDD
        // 0x58975C60: pop ebp
        __asm _emit 0x5D
        // 0x58975C61: pop edi
        __asm _emit 0x5F
        // 0x58975C62: pop esi
        __asm _emit 0x5E
        // 0x58975C63: pop ebx
        __asm _emit 0x5B
        // 0x58975C64: ret
        __asm _emit 0xC3
        // 0x58975C65: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58975C67: push esi
        __asm _emit 0x56
        // 0x58975C68: mov dword ptr [eax + 0x14], 0xa
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975C6F: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58975C71: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x58975C73: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58975C76: pop edi
        __asm _emit 0x5F
        // 0x58975C77: pop esi
        __asm _emit 0x5E
        // 0x58975C78: pop ebx
        __asm _emit 0x5B
        // 0x58975C79: ret
        __asm _emit 0xC3
    }
}
