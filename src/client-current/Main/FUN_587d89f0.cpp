// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D89F0 .. +0x477 bytes.
extern "C" __declspec(naked) void FUN_587d89f0() {
    __asm {
        // 0x587D89F0: mov eax, dword ptr [ecx + 0xdd4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D89F6: mov eax, dword ptr [eax + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D89FC: sub esp, 0x4c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x4C
        // 0x587D89FF: push ebx
        __asm _emit 0x53
        // 0x587D8A00: push ebp
        __asm _emit 0x55
        // 0x587D8A01: push esi
        __asm _emit 0x56
        // 0x587D8A02: push edi
        __asm _emit 0x57
        // 0x587D8A03: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D8A06: jne 0x587d8a2a
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x587D8A08: movzx ecx, byte ptr [0x58a0b1fd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x0D
        __asm _emit 0xFD
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587D8A0F: mov edx, dword ptr [ecx*4 + 0x58a0b1e4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x8D
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587D8A16: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D8A1C: push edx
        __asm _emit 0x52
        // 0x587D8A1D: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xB6
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587D8A22: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587D8A24: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587D8A28: jmp 0x587d8a43
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x587D8A2A: mov eax, dword ptr [eax*4 + 0x58a0b1e4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587D8A31: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D8A37: push eax
        __asm _emit 0x50
        // 0x587D8A38: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xB6
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587D8A3D: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587D8A41: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587D8A43: mov ecx, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8A49: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x587D8A4C: mov ebx, dword ptr [ebp + 0xa24]
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8A52: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8A58: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587D8A5C: mov eax, dword ptr [ebp + 0xa70]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8A62: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587D8A67: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587D8A6B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D8A6D: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587D8A6F: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8A74: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587D8A76: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x587D8A79: mov dword ptr [esp + 0x3c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587D8A7D: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8A85: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587D8A87: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587D8A89: push ecx
        __asm _emit 0x51
        // 0x587D8A8A: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x8A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D8A8F: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587D8A93: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D8A95: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587D8A97: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8A9C: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587D8A9E: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x587D8AA1: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587D8AA3: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587D8AA5: push ecx
        __asm _emit 0x51
        // 0x587D8AA6: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x8A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D8AAB: push ebx
        __asm _emit 0x53
        // 0x587D8AAC: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587D8AB0: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x8A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D8AB5: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587D8AB9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D8ABB: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587D8ABD: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8AC2: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587D8AC4: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x587D8AC7: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587D8AC9: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587D8ACB: push ecx
        __asm _emit 0x51
        // 0x587D8ACC: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x8A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587D8AD1: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587D8AD3: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D8AD7: push ebx
        __asm _emit 0x53
        // 0x587D8AD8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D8ADA: push eax
        __asm _emit 0x50
        // 0x587D8ADB: mov dword ptr [esp + 0x64], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x587D8ADF: mov dword ptr [esp + 0x3c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8AE7: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x41
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D8AEC: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587D8AF0: lea edi, [ebx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1B
        // 0x587D8AF3: push edi
        __asm _emit 0x57
        // 0x587D8AF4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D8AF6: push ecx
        __asm _emit 0x51
        // 0x587D8AF7: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x41
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D8AFC: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587D8B00: lea edx, [ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8B07: push edx
        __asm _emit 0x52
        // 0x587D8B08: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D8B0A: push eax
        __asm _emit 0x50
        // 0x587D8B0B: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x41
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D8B10: push edi
        __asm _emit 0x57
        // 0x587D8B11: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D8B13: push esi
        __asm _emit 0x56
        // 0x587D8B14: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x41
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D8B19: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x587D8B1C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587D8B20: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587D8B22: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587D8B24: jbe 0x587d8d42
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8B2A: lea ecx, [ebp + 0xac0]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8B30: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D8B34: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587D8B38: mov eax, 0xda
        __asm _emit 0xB8
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8B3D: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587D8B3F: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587D8B43: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D8B45: sub eax, dword ptr [esp + 0x48]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587D8B49: lea edx, [ebp + 0xbc0]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8B4F: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587D8B53: mov dword ptr [esp + 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587D8B57: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587D8B5B: jmp 0x587d8b60
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587D8B5D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587D8B60: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D8B64: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8B6A: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8B6E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D8B70: je 0x587d8e4c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8B76: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587D8B7A: mov ebx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x19
        // 0x587D8B7C: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587D8B80: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587D8B82: je 0x587d8d1f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8B88: mov edx, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8B8E: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587D8B92: mov ecx, dword ptr [edx + eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x08
        // 0x587D8B96: push ecx
        __asm _emit 0x51
        // 0x587D8B97: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D8B9D: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587D8BA2: cmp word ptr [esi], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x587D8BA6: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D8BAA: movzx ecx, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0A
        // 0x587D8BAD: mov dword ptr [esp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587D8BB1: jne 0x587d8c25
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x587D8BB3: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8BB7: cmp byte ptr [edi + edx], 0
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587D8BBB: jne 0x587d8c25
        __asm _emit 0x75
        __asm _emit 0x68
        // 0x587D8BBD: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587D8BC1: lea edx, [esi + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x06
        // 0x587D8BC4: add edx, dword ptr [esp + 0x4c]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587D8BC8: mov eax, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8BCE: movzx edx, word ptr [edx + eax]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x587D8BD2: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8BD6: movzx eax, word ptr [eax + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x1E
        // 0x587D8BDA: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587D8BDC: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8BE0: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8BE6: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8BEA: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8BEE: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8BF3: fmul qword ptr [0x5898cb38]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D8BF9: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8BFE: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587D8C02: fldcw word ptr [esp + 0x50]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587D8C06: fistp dword ptr [esp + 0x50]
        __asm _emit 0xDB
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587D8C0A: mov ax, word ptr [esp + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587D8C0F: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587D8C12: imul cx, word ptr [ebx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4B
        __asm _emit 0x1E
        // 0x587D8C17: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8C1B: sub ax, cx
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587D8C1E: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587D8C21: mov eax, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587D8C25: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D8C27: je 0x587d8c3e
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587D8C29: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D8C2D: mov ecx, 0xaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8C32: xor cx, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x4A
        __asm _emit 0x02
        // 0x587D8C36: imul cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x48
        __asm _emit 0x1E
        // 0x587D8C3B: sub word ptr [esi], cx
        __asm _emit 0x66
        __asm _emit 0x29
        __asm _emit 0x0E
        // 0x587D8C3E: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8C42: cmp byte ptr [edi + eax], 0
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587D8C46: jne 0x587d8d1f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8C4C: mov ebp, dword ptr [ebx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x24
        // 0x587D8C4F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587D8C53: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x587D8C55: cmp dword ptr [esp + 0x58], ebp
        __asm _emit 0x39
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587D8C59: jb 0x587d8df0
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8C5F: movzx edx, word ptr [ebx + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x53
        __asm _emit 0x1E
        // 0x587D8C63: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x587D8C66: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587D8C68: js 0x587d8e3b
        __asm _emit 0x0F
        __asm _emit 0x88
        __asm _emit 0xCD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8C6E: cmp word ptr [ebx + 0x20], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x587D8C73: jne 0x587d8e01
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8C79: cmp word ptr [ebx + 0x22], 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x22
        __asm _emit 0x08
        // 0x587D8C7E: jne 0x587d8e01
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8C84: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D8C88: movzx ebx, word ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x19
        // 0x587D8C8B: xor ebx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF3
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8C91: cmp dword ptr [esp + 0x20], -1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        // 0x587D8C96: jne 0x587d8cad
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x587D8C98: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D8C9E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D8CA0: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587D8CA2: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587D8CA4: call 0x588804f0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587D8CA9: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D8CAD: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587D8CB1: movzx eax, word ptr [esi + ecx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x0E
        // 0x587D8CB5: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x587D8CB8: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x587D8CBA: cmp edx, 0x32
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x32
        // 0x587D8CBD: jae 0x587d8dde
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8CC3: cmp ebx, 0x32
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x32
        // 0x587D8CC6: jae 0x587d8dde
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8CCC: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587D8CD1: jle 0x587d8dde
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8CD7: inc eax
        __asm _emit 0x40
        // 0x587D8CD8: mov word ptr [esi + ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0E
        // 0x587D8CDC: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587D8CE0: mov cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1E
        // 0x587D8CE4: sub word ptr [esi], cx
        __asm _emit 0x66
        __asm _emit 0x29
        __asm _emit 0x0E
        // 0x587D8CE7: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x587D8CEA: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8CEF: sub dword ptr [esp + 0x20], ecx
        __asm _emit 0x29
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D8CF3: mov dword ptr [esp + 0x34], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587D8CF7: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D8CFA: jne 0x587d8d0e
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587D8CFC: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8D00: cmp byte ptr [edi + edx], al
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587D8D03: jne 0x587d8d0e
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587D8D05: add dword ptr [esp + 0x14], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8D09: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587D8D0B: mov byte ptr [edi + eax], cl
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x587D8D0E: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587D8D12: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587D8D14: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D8D18: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587D8D1C: mov dword ptr [ecx + edi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xB9
        // 0x587D8D1F: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587D8D23: add dword ptr [esp + 0x40], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587D8D28: add dword ptr [esp + 0x44], 0x18
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x18
        // 0x587D8D2D: add dword ptr [esp + 0x1c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x04
        // 0x587D8D32: inc edi
        __asm _emit 0x47
        // 0x587D8D33: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x02
        // 0x587D8D36: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587D8D38: jb 0x587d8b60
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x22
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8D3E: mov esi, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587D8D42: cmp dword ptr [esp + 0x14], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8D46: jne 0x587d8b20
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8D4C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587D8D4E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587D8D50: jbe 0x587d8d96
        __asm _emit 0x76
        __asm _emit 0x44
        // 0x587D8D52: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D8D56: mov dword ptr [esp + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587D8D5A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8D60: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587D8D64: movzx eax, word ptr [eax + edi*2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x78
        // 0x587D8D68: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D8D6B: je 0x587d8d8c
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587D8D6D: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587D8D71: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587D8D73: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D8D79: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D8D7B: push eax
        __asm _emit 0x50
        // 0x587D8D7C: mov eax, dword ptr [ebp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x48
        // 0x587D8D7F: push edx
        __asm _emit 0x52
        // 0x587D8D80: push edi
        __asm _emit 0x57
        // 0x587D8D81: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D8D83: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x587D8D86: push eax
        __asm _emit 0x50
        // 0x587D8D87: call 0x587b98b0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x0B
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587D8D8C: add dword ptr [esp + 0x44], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x04
        // 0x587D8D91: inc edi
        __asm _emit 0x47
        // 0x587D8D92: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587D8D94: jb 0x587d8d60
        __asm _emit 0x72
        __asm _emit 0xCA
        // 0x587D8D96: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8D9A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D8D9C: je 0x587d8da7
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587D8D9E: push eax
        __asm _emit 0x50
        // 0x587D8D9F: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x40
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D8DA4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D8DA7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587D8DA9: je 0x587d8db4
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587D8DAB: push esi
        __asm _emit 0x56
        // 0x587D8DAC: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x40
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D8DB1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D8DB4: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D8DB8: pop edi
        __asm _emit 0x5F
        // 0x587D8DB9: pop esi
        __asm _emit 0x5E
        // 0x587D8DBA: pop ebp
        __asm _emit 0x5D
        // 0x587D8DBB: pop ebx
        __asm _emit 0x5B
        // 0x587D8DBC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D8DBE: je 0x587d8dc9
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587D8DC0: push eax
        __asm _emit 0x50
        // 0x587D8DC1: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x40
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D8DC6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D8DC9: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D8DCD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D8DCF: je 0x587d8dda
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587D8DD1: push eax
        __asm _emit 0x50
        // 0x587D8DD2: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x40
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D8DD7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D8DDA: add esp, 0x4c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x4C
        // 0x587D8DDD: ret
        __asm _emit 0xC3
        // 0x587D8DDE: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8DE2: cmp byte ptr [edi + ecx], 0
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587D8DE6: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587D8DEA: jne 0x587d8d12
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8DF0: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8DF4: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8DF8: mov byte ptr [edi + edx], 1
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x17
        __asm _emit 0x01
        // 0x587D8DFC: jmp 0x587d8d12
        __asm _emit 0xE9
        __asm _emit 0x11
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8E01: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587D8E05: inc word ptr [esi + eax]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x04
        __asm _emit 0x06
        // 0x587D8E09: mov ax, word ptr [ebx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1E
        // 0x587D8E0D: sub word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x29
        __asm _emit 0x06
        // 0x587D8E10: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x587D8E13: mov dword ptr [esp + 0x34], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587D8E17: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D8E1A: jne 0x587d8d12
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8E20: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8E24: cmp byte ptr [edi + eax], 0
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587D8E28: jne 0x587d8d12
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8E2E: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8E32: mov byte ptr [edi + eax], 1
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x01
        // 0x587D8E36: jmp 0x587d8d12
        __asm _emit 0xE9
        __asm _emit 0xD7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8E3B: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8E3F: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8E43: mov byte ptr [edi + ecx], 1
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x0F
        __asm _emit 0x01
        // 0x587D8E47: jmp 0x587d8d12
        __asm _emit 0xE9
        __asm _emit 0xC6
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8E4C: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8E50: cmp byte ptr [edi + eax], 0
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587D8E54: jne 0x587d8d23
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8E5A: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8E5E: mov byte ptr [edi + eax], 1
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x01
        // 0x587D8E62: jmp 0x587d8d23
        __asm _emit 0xE9
        __asm _emit 0xBC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
