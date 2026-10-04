// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58775980 .. +0x290 bytes.
// Source symbol alias: FUN_58775980.
extern "C" __declspec(naked) void FUN_58775980() {
    __asm {
        // 0x58775980: push ebp
        __asm _emit 0x55
        // 0x58775981: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58775983: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58775986: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x58775989: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877598E: test byte ptr [eax + 0x105a8], 1
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58775995: push ebx
        __asm _emit 0x53
        // 0x58775996: push esi
        __asm _emit 0x56
        // 0x58775997: push edi
        __asm _emit 0x57
        // 0x58775998: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877599C: je 0x587759c2
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5877599E: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587759A1: mov dl, byte ptr [ecx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587759A7: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x587759AA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587759AC: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587759B2: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x587759B5: lea eax, [eax + eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587759B9: pop edi
        __asm _emit 0x5F
        // 0x587759BA: pop esi
        __asm _emit 0x5E
        // 0x587759BB: pop ebx
        __asm _emit 0x5B
        // 0x587759BC: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587759BE: pop ebp
        __asm _emit 0x5D
        // 0x587759BF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587759C2: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x587759C5: movzx eax, word ptr [edx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587759CC: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x587759CF: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587759D3: cmp ax, word ptr [edx + 0x350]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x82
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587759DA: jne 0x587759ea
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587759DC: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587759E1: pop edi
        __asm _emit 0x5F
        // 0x587759E2: pop esi
        __asm _emit 0x5E
        // 0x587759E3: pop ebx
        __asm _emit 0x5B
        // 0x587759E4: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587759E6: pop ebp
        __asm _emit 0x5D
        // 0x587759E7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587759EA: mov esi, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x587759ED: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587759F0: mov dword ptr [esp + 0xc], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587759F8: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587759FB: jbe 0x58775a02
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587759FD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x72
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775A02: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x58775A04: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775A08: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775A0C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58775A10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58775A14: mov esi, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x54
        // 0x58775A17: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58775A1A: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58775A1D: jbe 0x58775a24
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58775A1F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x72
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775A24: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58775A26: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775A28: je 0x58775a2e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58775A2A: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x58775A2C: je 0x58775a33
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58775A2E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x72
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775A33: cmp dword ptr [esp + 0x1c], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775A37: je 0x58775b91
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775A3D: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775A3F: jne 0x58775abe
        __asm _emit 0x75
        __asm _emit 0x7D
        // 0x58775A41: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x72
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775A46: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775A48: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775A4C: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58775A4F: jb 0x58775a56
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775A51: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x72
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775A56: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775A5A: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58775A5C: mov cx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58775A61: cmp word ptr [eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58775A65: jne 0x58775b66
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775A6B: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58775A6E: cmp dword ptr [esi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775A75: je 0x58775b15
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775A7B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775A7D: jne 0x58775ac2
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x58775A7F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x71
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775A84: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775A86: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775A8A: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58775A8D: jb 0x58775a94
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775A8F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x71
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775A94: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775A98: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58775A9A: mov dx, word ptr [ecx + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x58775A9E: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775AA2: cmp dx, word ptr [esi + 0x350]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775AA9: jne 0x58775ac6
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58775AAB: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xF5
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775AB0: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58775AB2: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58775AB5: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58775AB9: jmp 0x58775b66
        __asm _emit 0xE9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775ABE: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775AC0: jmp 0x58775a48
        __asm _emit 0xEB
        __asm _emit 0x86
        // 0x58775AC2: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775AC4: jmp 0x58775a86
        __asm _emit 0xEB
        __asm _emit 0xC0
        // 0x58775AC6: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xF5
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775ACB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58775ACD: cmp dword ptr [edx + 0x10], 0xffff
        __asm _emit 0x81
        __asm _emit 0x7A
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775AD4: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775AD8: je 0x58775b41
        __asm _emit 0x74
        __asm _emit 0x67
        // 0x58775ADA: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xF5
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775ADF: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58775AE1: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58775AE4: cmp ecx, dword ptr [esi + 0x1334]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775AEA: jne 0x58775b66
        __asm _emit 0x75
        __asm _emit 0x7A
        // 0x58775AEC: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775AF0: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xF5
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775AF5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58775AF7: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x58775AFA: cmp eax, dword ptr [esi + 0x1338]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775B00: jne 0x58775b66
        __asm _emit 0x75
        __asm _emit 0x64
        // 0x58775B02: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775B06: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xF5
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775B0B: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58775B0D: cmp dword ptr [ecx + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58775B11: je 0x58775b66
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x58775B13: jmp 0x58775b54
        __asm _emit 0xEB
        __asm _emit 0x3F
        // 0x58775B15: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775B17: jne 0x58775b89
        __asm _emit 0x75
        __asm _emit 0x70
        // 0x58775B19: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x71
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775B1E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775B20: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775B24: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58775B27: jb 0x58775b2e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775B29: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x71
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775B2E: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775B32: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58775B34: cmp dword ptr [eax + 0x10], 0xffff
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775B3B: jne 0x58775b66
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58775B3D: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775B41: movzx esi, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775B48: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xF5
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775B4D: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58775B4F: cmp dword ptr [ecx + 0x14], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x58775B52: jne 0x58775b66
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58775B54: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58775B58: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xF5
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58775B5D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58775B5F: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58775B62: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58775B66: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58775B68: jne 0x58775b8d
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x58775B6A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x71
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775B6F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58775B71: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775B75: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58775B78: jb 0x58775b7f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58775B7A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58775B7F: add dword ptr [esp + 0x1c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x04
        // 0x58775B84: jmp 0x58775a10
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775B89: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775B8B: jmp 0x58775b20
        __asm _emit 0xEB
        __asm _emit 0x93
        // 0x58775B8D: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58775B8F: jmp 0x58775b71
        __asm _emit 0xEB
        __asm _emit 0xE0
        // 0x58775B91: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58775B94: mov dl, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775B9A: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58775B9D: cmp dl, byte ptr [edi + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x97
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775BA3: je 0x587759dc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775BA9: cmp dword ptr [esp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58775BAE: je 0x58775bbd
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58775BB0: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58775BB4: pop edi
        __asm _emit 0x5F
        // 0x58775BB5: pop esi
        __asm _emit 0x5E
        // 0x58775BB6: pop ebx
        __asm _emit 0x5B
        // 0x58775BB7: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58775BB9: pop ebp
        __asm _emit 0x5D
        // 0x58775BBA: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58775BBD: mov eax, dword ptr [esi + 0x1338]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775BC3: mov ecx, dword ptr [esi + 0x1334]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775BC9: push edi
        __asm _emit 0x57
        // 0x58775BCA: push eax
        __asm _emit 0x50
        // 0x58775BCB: push ecx
        __asm _emit 0x51
        // 0x58775BCC: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58775BD0: call 0x587756f0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775BD5: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58775BD8: jne 0x58775c07
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x58775BDA: mov edx, dword ptr [esi + 0x1334]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775BE0: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58775BE4: push edi
        __asm _emit 0x57
        // 0x58775BE5: push edx
        __asm _emit 0x52
        // 0x58775BE6: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58775BE8: call 0x587754e0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775BED: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58775BF0: jne 0x58775c07
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58775BF2: movzx eax, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58775BF9: push edi
        __asm _emit 0x57
        // 0x58775BFA: push eax
        __asm _emit 0x50
        // 0x58775BFB: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58775BFD: call 0x587752d0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58775C02: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58775C05: jne 0x58775c07
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x58775C07: pop edi
        __asm _emit 0x5F
        // 0x58775C08: pop esi
        __asm _emit 0x5E
        // 0x58775C09: pop ebx
        __asm _emit 0x5B
        // 0x58775C0A: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58775C0C: pop ebp
        __asm _emit 0x5D
        // 0x58775C0D: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
