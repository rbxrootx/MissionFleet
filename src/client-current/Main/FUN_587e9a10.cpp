// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E9A10 .. +0xB5C bytes.
extern "C" __declspec(naked) void FUN_587e9a10() {
    __asm {
        // 0x587E9A10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587E9A12: push 0x589824fe
        __asm _emit 0x68
        __asm _emit 0xFE
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E9A17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A1D: push eax
        __asm _emit 0x50
        // 0x587E9A1E: sub esp, 0x918
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A24: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587E9A29: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587E9A2B: mov dword ptr [esp + 0x914], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A32: push ebx
        __asm _emit 0x53
        // 0x587E9A33: push ebp
        __asm _emit 0x55
        // 0x587E9A34: push esi
        __asm _emit 0x56
        // 0x587E9A35: push edi
        __asm _emit 0x57
        // 0x587E9A36: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587E9A3B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587E9A3D: push eax
        __asm _emit 0x50
        // 0x587E9A3E: lea eax, [esp + 0x92c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A45: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A4B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587E9A4D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E9A4F: cmp dword ptr [esp + 0x93c], edi
        __asm _emit 0x39
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A56: jne 0x587ea542
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE6
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A5C: mov eax, dword ptr [esp + 0x940]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A63: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E9A65: jne 0x587e9bc1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A6B: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A70: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E9A72: mov byte ptr [esp + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E9A76: mov byte ptr [esp + 0x15], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x15
        // 0x587E9A7A: mov byte ptr [esp + 0x16], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587E9A7F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587E9A81: lea edx, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A87: cmp dword ptr [edx], edi
        __asm _emit 0x39
        __asm _emit 0x3A
        // 0x587E9A89: je 0x587e9a94
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587E9A8B: mov byte ptr [esp + eax + 0xb0], cl
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x04
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9A92: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x587E9A94: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x587E9A96: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587E9A99: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x587E9A9C: jl 0x587e9a87
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x587E9A9E: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9AA4: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587E9AA7: mov ebp, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9AAD: mov ebx, dword ptr [ebp + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9AB3: add al, 8
        __asm _emit 0x04
        __asm _emit 0x08
        // 0x587E9AB5: mov byte ptr [esp + 0x17], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x587E9AB9: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587E9ABB: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9AC1: cdq
        __asm _emit 0x99
        // 0x587E9AC2: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587E9AC4: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587E9AC7: add ax, word ptr [ebp + 0x50]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0x50
        // 0x587E9ACB: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587E9ACE: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E9AD2: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587E9AD4: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9ADA: cdq
        __asm _emit 0x99
        // 0x587E9ADB: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587E9ADD: add ax, word ptr [ebp + 0x54]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0x54
        // 0x587E9AE1: movzx ebx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD8
        // 0x587E9AE4: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9AE9: mov edx, dword ptr [eax + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9AEF: cmp dword ptr [edx + 0x594], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9AF6: je 0x587e9b24
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x587E9AF8: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E9AFA: sub cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587E9AFE: sub di, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587E9B02: sub cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x587E9B06: shl cx, 6
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x06
        // 0x587E9B0A: add di, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587E9B0E: shl di, 6
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x06
        // 0x587E9B12: movzx ebp, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xE9
        // 0x587E9B15: movzx ebx, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDF
        // 0x587E9B18: mov dword ptr [eax + 0x594], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9B22: jmp 0x587e9b28
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587E9B24: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E9B28: lea edi, [esi + 0xe0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9B2E: mov dword ptr [esp + 0x18], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9B36: cmp dword ptr [edi - 0x48], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0xB8
        __asm _emit 0x00
        // 0x587E9B3A: je 0x587e9b60
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587E9B3C: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587E9B3E: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9B44: push eax
        __asm _emit 0x50
        // 0x587E9B45: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E9B4A: movsx ecx, bx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xCB
        // 0x587E9B4D: movsx edx, bp
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xD5
        // 0x587E9B50: push ecx
        __asm _emit 0x51
        // 0x587E9B51: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587E9B53: push edx
        __asm _emit 0x52
        // 0x587E9B54: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x97
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E9B59: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587E9B5B: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587E9B60: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587E9B63: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x587E9B68: jne 0x587e9b36
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x587E9B6A: cmp byte ptr [esi + 0x10484], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9B71: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E9B75: mov dword ptr [esp + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9B7C: mov word ptr [esp + 0xac], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9B84: mov word ptr [esp + 0xae], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9B8C: jne 0x587ea542
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9B92: movzx eax, byte ptr [esp + 0x17]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x587E9B97: push eax
        __asm _emit 0x50
        // 0x587E9B98: lea ecx, [esp + 0xac]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9B9F: mov dword ptr [esi + 0x20c94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9BA5: mov byte ptr [esi + 0x10484], 0xc
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x587E9BAC: push ecx
        __asm _emit 0x51
        // 0x587E9BAD: add esi, 0x20c14
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x14
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9BB3: push esi
        __asm _emit 0x56
        // 0x587E9BB4: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x31
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E9BB9: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E9BBC: jmp 0x587ea542
        __asm _emit 0xE9
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9BC1: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9BC6: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587E9BC8: jne 0x587e9cfa
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9BCE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587E9BD0: mov byte ptr [esp + 0x14], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587E9BD5: mov byte ptr [esp + 0x15], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x02
        // 0x587E9BDA: mov byte ptr [esp + 0x16], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        __asm _emit 0x01
        // 0x587E9BDF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E9BE1: lea edx, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9BE7: cmp dword ptr [edx], edi
        __asm _emit 0x39
        __asm _emit 0x3A
        // 0x587E9BE9: je 0x587e9bf4
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587E9BEB: mov byte ptr [esp + ecx + 0x22e], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x0C
        __asm _emit 0x2E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9BF2: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587E9BF4: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587E9BF6: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587E9BF9: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587E9BFC: jl 0x587e9be7
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x587E9BFE: add cl, 6
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x06
        // 0x587E9C01: mov byte ptr [esp + 0x17], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x587E9C05: mov ebx, 0x1390
        __asm _emit 0xBB
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9C0A: lea edi, [esi + 0xe0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9C10: cmp dword ptr [edi - 0x48], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0xB8
        __asm _emit 0x00
        // 0x587E9C14: je 0x587e9c7c
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x587E9C16: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9C1C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587E9C1F: mov ecx, dword ptr [eax + ebx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x18
        // 0x587E9C22: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587E9C25: movzx ecx, word ptr [eax + 0x2cc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9C2C: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x587E9C2E: jle 0x587e9c7c
        __asm _emit 0x7E
        __asm _emit 0x4C
        // 0x587E9C30: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x587E9C33: je 0x587e9c7c
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x587E9C35: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x587E9C38: jne 0x587e9c7c
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x587E9C3A: mov edx, dword ptr [eax + 0x33c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9C40: mov ecx, dword ptr [esi + 0x10554]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9C46: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587E9C4B: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587E9C4D: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587E9C50: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E9C52: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587E9C55: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587E9C57: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587E9C5A: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587E9C5C: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587E9C5F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587E9C61: push edx
        __asm _emit 0x52
        // 0x587E9C62: push eax
        __asm _emit 0x50
        // 0x587E9C63: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E9C68: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587E9C6A: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x587E9C6E: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587E9C70: push ecx
        __asm _emit 0x51
        // 0x587E9C71: mov ecx, dword ptr [esi + 0x10554]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9C77: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x92
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E9C7C: add ebx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x10
        // 0x587E9C7F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587E9C82: cmp ebx, 0x1410
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9C88: jl 0x587e9c10
        __asm _emit 0x7C
        __asm _emit 0x86
        // 0x587E9C8A: mov ax, word ptr [esi + 0x104c4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9C91: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E9C95: mov word ptr [esp + 0x22c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9C9D: mov al, byte ptr [esp + 0x17]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x587E9CA1: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x587E9CA5: mov dword ptr [esp + 0x228], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9CAC: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x587E9CAF: shl cx, 6
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x06
        // 0x587E9CB3: or cx, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x0C
        // 0x587E9CB7: push edx
        __asm _emit 0x52
        // 0x587E9CB8: lea eax, [esp + 0x22c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9CBF: mov word ptr [esp + 0x6ac], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9CC7: push eax
        __asm _emit 0x50
        // 0x587E9CC8: lea ecx, [esp + 0x6b2]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xB2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9CCF: push ecx
        __asm _emit 0x51
        // 0x587E9CD0: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x30
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E9CD5: movzx edx, word ptr [esp + 0x6b4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xB4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9CDD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E9CE0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E9CE2: shr edx, 6
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x587E9CE5: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x587E9CE8: push edx
        __asm _emit 0x52
        // 0x587E9CE9: lea eax, [esp + 0x6b0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9CF0: push eax
        __asm _emit 0x50
        // 0x587E9CF1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E9CF3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E9CF5: jmp 0x587e9da2
        __asm _emit 0xE9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9CFA: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587E9CFD: jne 0x587e9db7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9D03: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587E9D05: mov byte ptr [esp + 0x14], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587E9D0A: mov byte ptr [esp + 0x15], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x01
        // 0x587E9D0F: mov byte ptr [esp + 0x16], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        __asm _emit 0x01
        // 0x587E9D14: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E9D16: lea edx, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9D1C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587E9D20: cmp dword ptr [edx], edi
        __asm _emit 0x39
        __asm _emit 0x3A
        // 0x587E9D22: je 0x587e9d2d
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587E9D24: mov byte ptr [esp + ecx + 0x2ae], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x0C
        __asm _emit 0xAE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9D2B: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587E9D2D: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587E9D2F: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587E9D32: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587E9D35: jl 0x587e9d20
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x587E9D37: mov ax, word ptr [esi + 0x104c4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9D3E: add cl, 6
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x06
        // 0x587E9D41: mov byte ptr [esp + 0x17], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x587E9D45: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E9D49: mov dword ptr [esp + 0x2a8], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9D50: movzx dx, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD1
        // 0x587E9D54: mov word ptr [esp + 0x2ac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9D5C: movzx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC1
        // 0x587E9D5F: shl dx, 6
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x587E9D63: or dx, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x0C
        // 0x587E9D67: push eax
        __asm _emit 0x50
        // 0x587E9D68: lea ecx, [esp + 0x2ac]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9D6F: mov word ptr [esp + 0x82c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9D77: push ecx
        __asm _emit 0x51
        // 0x587E9D78: lea edx, [esp + 0x832]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9D7F: push edx
        __asm _emit 0x52
        // 0x587E9D80: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x2F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E9D85: movzx eax, word ptr [esp + 0x834]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9D8D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E9D90: push edi
        __asm _emit 0x57
        // 0x587E9D91: shr eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x587E9D94: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587E9D97: push eax
        __asm _emit 0x50
        // 0x587E9D98: lea ecx, [esp + 0x830]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9D9F: push ecx
        __asm _emit 0x51
        // 0x587E9DA0: push edi
        __asm _emit 0x57
        // 0x587E9DA1: push edi
        __asm _emit 0x57
        // 0x587E9DA2: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9DA8: push 0x80020500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587E9DAD: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x6E
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587E9DB2: jmp 0x587ea542
        __asm _emit 0xE9
        __asm _emit 0x8B
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9DB7: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x587E9DBA: jne 0x587e9fec
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9DC0: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9DC6: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587E9DC9: movzx eax, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9DD0: cmp dword ptr [esi + 0x104c4], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9DD6: je 0x587ea542
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9DDC: cmp byte ptr [esi + 0x10484], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9DE3: jne 0x587ea542
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9DE9: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9DEF: push ecx
        __asm _emit 0x51
        // 0x587E9DF0: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587E9DF3: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xDB
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E9DF8: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587E9DFB: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587E9DFD: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587E9E00: push edi
        __asm _emit 0x57
        // 0x587E9E01: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587E9E03: mov eax, dword ptr [esi + 0x104c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9E09: mov byte ptr [esi + 0x10484], 0xf
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x587E9E10: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E9E13: jne 0x587e9ec2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9E19: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9E1F: mov eax, dword ptr [ecx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9E25: cmp dword ptr [eax + 0x594], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9E2B: je 0x587e9eb1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9E31: and dword ptr [esi + 0x20c98], 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xA6
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xFC
        // 0x587E9E38: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9E3E: mov eax, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9E44: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9E4A: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587E9E4D: sub edx, dword ptr [eax + 4]
        __asm _emit 0x2B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E9E50: mov ecx, dword ptr [esi + 0x20c98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9E56: sub edx, 4
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x587E9E59: shl edx, 8
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x08
        // 0x587E9E5C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E9E5E: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xC1
        // 0x587E9E60: and eax, 0x1fffc
        __asm _emit 0x25
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9E65: xor eax, ecx
        __asm _emit 0x33
        __asm _emit 0xC1
        // 0x587E9E67: mov dword ptr [esi + 0x20c98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9E6D: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9E73: mov ecx, dword ptr [ecx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9E79: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9E7E: sub edx, dword ptr [ecx + 8]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587E9E81: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9E87: add edx, dword ptr [ecx + 8]
        __asm _emit 0x03
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587E9E8A: and eax, 0x1ffff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9E8F: shl edx, 0x17
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x17
        // 0x587E9E92: xor edx, eax
        __asm _emit 0x33
        __asm _emit 0xD0
        // 0x587E9E94: mov dword ptr [esi + 0x20c98], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9E9A: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9EA0: mov eax, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9EA6: mov dword ptr [eax + 0x594], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9EAC: jmp 0x587e9f5b
        __asm _emit 0xE9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9EB1: and dword ptr [esi + 0x20c98], 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xA6
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xFC
        // 0x587E9EB8: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9EBD: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587E9EC0: jmp 0x587e9ef7
        __asm _emit 0xEB
        __asm _emit 0x35
        // 0x587E9EC2: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9EC8: mov edx, dword ptr [esi + 0x10554]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9ECE: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587E9ED1: mov dl, byte ptr [edx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x92
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9ED7: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9EDD: jne 0x587e9ee7
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587E9EDF: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587E9EE1: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587E9EE3: or eax, ebp
        __asm _emit 0x0B
        __asm _emit 0xC5
        // 0x587E9EE5: jmp 0x587e9f55
        __asm _emit 0xEB
        __asm _emit 0x6E
        // 0x587E9EE7: and dword ptr [esi + 0x20c98], 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xA6
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xFC
        // 0x587E9EEE: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9EF4: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587E9EF7: mov edi, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9EFD: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9F03: cdq
        __asm _emit 0x99
        // 0x587E9F04: idiv dword ptr [edi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9F0A: mov ebx, dword ptr [esi + 0x20c98]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9F10: add ax, word ptr [edi + 0x50]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x587E9F14: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x587E9F17: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587E9F19: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587E9F1B: xor ecx, ebx
        __asm _emit 0x33
        __asm _emit 0xCB
        // 0x587E9F1D: and ecx, 0x1fffc
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9F23: xor ecx, ebx
        __asm _emit 0x33
        __asm _emit 0xCB
        // 0x587E9F25: mov dword ptr [esi + 0x20c98], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9F2B: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9F31: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587E9F34: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9F3A: cdq
        __asm _emit 0x99
        // 0x587E9F3B: idiv dword ptr [edi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9F41: and ecx, 0x1ffff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9F47: add ax, word ptr [edi + 0x54]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x587E9F4B: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587E9F4E: shl eax, 0x11
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x11
        // 0x587E9F51: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x587E9F53: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587E9F55: mov dword ptr [esi + 0x20c98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9F5B: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587E9F5D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x2C
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E9F62: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E9F65: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E9F69: mov dword ptr [esp + 0x934], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9F70: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E9F72: je 0x587e9fc2
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x587E9F74: mov edx, dword ptr [0x58a24608]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9F7A: cmp dword ptr [edx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xAA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9F80: jle 0x587e9f95
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x587E9F82: cmp dword ptr [edx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9F88: je 0x587e9f95
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587E9F8A: mov edi, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9F90: add edi, 0x40
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x40
        // 0x587E9F93: jmp 0x587e9f97
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587E9F95: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587E9F97: mov edx, dword ptr [esi + 0x20c98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9F9D: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587E9F9F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587E9FA1: shr ecx, 0x11
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x11
        // 0x587E9FA4: push ecx
        __asm _emit 0x51
        // 0x587E9FA5: shr edx, 2
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x02
        // 0x587E9FA8: and edx, 0x7fff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9FAE: push edx
        __asm _emit 0x52
        // 0x587E9FAF: mov edx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9FB5: push edi
        __asm _emit 0x57
        // 0x587E9FB6: push edx
        __asm _emit 0x52
        // 0x587E9FB7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E9FB9: call 0x58907c80
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xDC
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E9FBE: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587E9FC0: jmp 0x587e9fc4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587E9FC2: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587E9FC4: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9FC9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E9FCB: mov dword ptr [esp + 0x938], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E9FD6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x8D
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E9FDB: push 0x190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9FE0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E9FE2: call 0x58731590
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x75
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587E9FE7: jmp 0x587ea542
        __asm _emit 0xE9
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9FEC: cmp eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x587E9FEF: jne 0x587ea07f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9FF5: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E9FFA: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587E9FFD: mov dl, byte ptr [ecx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA003: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA009: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA00F: mov edi, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA015: mov byte ptr [esp + 0x16], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587EA019: mov byte ptr [esp + 0x14], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x587EA01E: mov byte ptr [esp + 0x15], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x01
        // 0x587EA023: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EA027: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EA02B: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587EA02E: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA034: cdq
        __asm _emit 0x99
        // 0x587EA035: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EA037: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587EA039: add ax, word ptr [ecx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587EA03D: mov word ptr [esp + 0x30], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587EA042: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587EA045: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA04B: cdq
        __asm _emit 0x99
        // 0x587EA04C: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EA04E: add ax, word ptr [ecx + 0x54]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587EA052: mov word ptr [esp + 0x32], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x32
        // 0x587EA057: mov eax, dword ptr [esi + 0x10558]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA05D: mov cx, word ptr [eax + 0x350]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA064: mov dx, word ptr [eax + 0x606c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x6C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA06B: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587EA06F: mov word ptr [esp + 0x34], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587EA074: mov word ptr [esp + 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x36
        // 0x587EA079: push eax
        __asm _emit 0x50
        // 0x587EA07A: jmp 0x587ea539
        __asm _emit 0xE9
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA07F: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x587EA082: je 0x587ea4ea
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA088: cmp eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x587EA08B: je 0x587ea4ea
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA091: cmp eax, 0x15
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x15
        // 0x587EA094: je 0x587ea458
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA09A: cmp eax, 0x17
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x17
        // 0x587EA09D: je 0x587ea458
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA0A3: cmp eax, 0x16
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x16
        // 0x587EA0A6: jne 0x587ea153
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA0AC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587EA0AE: mov byte ptr [esp + 0x14], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587EA0B3: mov byte ptr [esp + 0x15], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x07
        // 0x587EA0B8: mov byte ptr [esp + 0x16], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587EA0BD: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587EA0BF: mov ecx, 0x1390
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA0C4: lea ebp, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA0CA: cmp dword ptr [ebp], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA0CE: je 0x587ea121
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x587EA0D0: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA0D5: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587EA0D8: mov byte ptr [esp + edx + 0x32c], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x14
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA0DF: inc edx
        __asm _emit 0x42
        // 0x587EA0E0: cmp dword ptr [eax + 0x63bc], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xBC
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA0E7: je 0x587ea0fe
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587EA0E9: mov edi, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x08
        // 0x587EA0EC: mov edi, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x0C
        // 0x587EA0EF: cmp word ptr [edi + 0x2cc], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x587EA0F7: jne 0x587ea0fe
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587EA0F9: mov byte ptr [esp + 0x16], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        __asm _emit 0x02
        // 0x587EA0FE: mov eax, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x08
        // 0x587EA101: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x587EA104: cmp word ptr [edi + 0x2cc], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587EA10C: jne 0x587ea121
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587EA10E: mov al, byte ptr [edi + 0x15b]
        __asm _emit 0x8A
        __asm _emit 0x87
        __asm _emit 0x5B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA114: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587EA116: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x587EA118: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x587EA11B: add al, 3
        __asm _emit 0x04
        __asm _emit 0x03
        // 0x587EA11D: mov byte ptr [esp + 0x16], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587EA121: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x587EA124: inc ebx
        __asm _emit 0x43
        // 0x587EA125: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587EA128: cmp ecx, 0x1410
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA12E: jl 0x587ea0ca
        __asm _emit 0x7C
        __asm _emit 0x9A
        // 0x587EA130: add dl, 4
        __asm _emit 0x80
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587EA133: mov byte ptr [esp + 0x17], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x587EA137: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EA13B: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587EA13E: push edx
        __asm _emit 0x52
        // 0x587EA13F: lea eax, [esp + 0x32c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA146: mov dword ptr [esp + 0x32c], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA14D: push eax
        __asm _emit 0x50
        // 0x587EA14E: jmp 0x587ea539
        __asm _emit 0xE9
        __asm _emit 0xE6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA153: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x587EA156: je 0x587ea405
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA15C: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x587EA15F: je 0x587ea405
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA165: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x28
        // 0x587EA168: jne 0x587ea1f5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA16E: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA174: mov edi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x587EA177: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587EA179: mov byte ptr [esp + 0x14], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x587EA17E: mov byte ptr [esp + 0x15], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x09
        // 0x587EA183: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587EA185: je 0x587ea1d2
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x587EA187: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EA18D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587EA190: cmp dword ptr [edi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA197: je 0x587ea1cb
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x587EA199: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587EA19E: lea edx, [edi + 0x356]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA1A4: push edx
        __asm _emit 0x52
        // 0x587EA1A5: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x587EA1A7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EA1A9: jne 0x587ea1cb
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x587EA1AB: mov ecx, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x7C
        // 0x587EA1AE: mov ax, word ptr [edi + 0x350]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA1B5: add ebx, 2
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x02
        // 0x587EA1B8: cmp dword ptr [ecx + 0x24], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587EA1BC: mov word ptr [esp + 0x42c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA1C4: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x587EA1C7: mov byte ptr [esp + 0x16], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587EA1CB: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x587EA1CE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587EA1D0: jne 0x587ea190
        __asm _emit 0x75
        __asm _emit 0xBE
        // 0x587EA1D2: add bl, 4
        __asm _emit 0x80
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587EA1D5: movzx ecx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCB
        // 0x587EA1D8: mov byte ptr [esp + 0x17], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x587EA1DC: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EA1E0: push ecx
        __asm _emit 0x51
        // 0x587EA1E1: lea edx, [esp + 0x42c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA1E8: mov dword ptr [esp + 0x42c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA1EF: push edx
        __asm _emit 0x52
        // 0x587EA1F0: jmp 0x587ea539
        __asm _emit 0xE9
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA1F5: cmp eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x5A
        // 0x587EA1F8: jne 0x587ea2de
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA1FE: cmp byte ptr [esi + 0x10484], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA205: je 0x587ea217
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587EA207: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA20C: mov dword ptr [eax + 0x2f0], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA212: jmp 0x587ea542
        __asm _emit 0xE9
        __asm _emit 0x2B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA217: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587EA219: mov ebp, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA21F: mov word ptr [esp + 0x20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587EA224: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587EA227: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA22D: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA232: mov word ptr [esp + 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EA237: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA23D: mov ecx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA243: mov edi, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA249: mov edx, 6
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA24E: mov word ptr [esp + 0x1e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x587EA253: cdq
        __asm _emit 0x99
        // 0x587EA254: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EA256: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x587EA258: mov byte ptr [esp + 0x18], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        // 0x587EA25D: mov byte ptr [esp + 0x19], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x19
        __asm _emit 0x0A
        // 0x587EA262: mov byte ptr [esp + 0x1b], 0x10
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1B
        __asm _emit 0x10
        // 0x587EA267: add ax, word ptr [ecx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587EA26B: mov word ptr [esp + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x26
        // 0x587EA270: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x587EA273: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA279: cdq
        __asm _emit 0x99
        // 0x587EA27A: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EA27C: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587EA27E: mov word ptr [esp + 0x2a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2A
        // 0x587EA283: add ax, word ptr [ecx + 0x54]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587EA287: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587EA28B: mov word ptr [esp + 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EA290: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587EA294: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EA298: mov dword ptr [esp + 0x1b4], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA29F: lea ecx, [esp + 0x1ac]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA2A6: push ecx
        __asm _emit 0x51
        // 0x587EA2A7: mov dword ptr [esp + 0x1b4], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA2AE: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EA2B2: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587EA2B4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587EA2B6: mov dword ptr [esp + 0x1c0], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA2BD: mov dword ptr [esp + 0x1b4], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA2C4: call 0x587e5a70
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xB7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EA2C9: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA2CF: mov dword ptr [edx + 0x2f0], 1
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA2D9: jmp 0x587ea542
        __asm _emit 0xE9
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA2DE: cmp eax, 0x5b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x5B
        // 0x587EA2E1: jne 0x587ea32b
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x587EA2E3: cmp byte ptr [esi + 0x10484], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA2EA: je 0x587ea302
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587EA2EC: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA2F1: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA2F7: mov dword ptr [ecx + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA2FD: jmp 0x587ea542
        __asm _emit 0xE9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA302: mov byte ptr [esp + 0x14], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x587EA307: mov byte ptr [esp + 0x15], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x0B
        // 0x587EA30C: mov byte ptr [esp + 0x17], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        __asm _emit 0x04
        // 0x587EA311: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EA315: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587EA317: lea eax, [esp + 0x62c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA31E: mov dword ptr [esp + 0x62c], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA325: push eax
        __asm _emit 0x50
        // 0x587EA326: jmp 0x587ea53b
        __asm _emit 0xE9
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA32B: cmp eax, 0x5c
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x5C
        // 0x587EA32E: jne 0x587ea378
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x587EA330: cmp byte ptr [esi + 0x10484], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA337: je 0x587ea350
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587EA339: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA33F: mov edx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA345: mov dword ptr [edx + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBA
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA34B: jmp 0x587ea542
        __asm _emit 0xE9
        __asm _emit 0xF2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA350: mov byte ptr [esp + 0x14], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x587EA355: mov byte ptr [esp + 0x15], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x0C
        // 0x587EA35A: mov byte ptr [esp + 0x17], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        __asm _emit 0x04
        // 0x587EA35F: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EA363: mov dword ptr [esp + 0x528], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA36A: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587EA36C: lea ecx, [esp + 0x52c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA373: jmp 0x587ea538
        __asm _emit 0xE9
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA378: cmp eax, 0x5d
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x5D
        // 0x587EA37B: jne 0x587ea3c6
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x587EA37D: cmp byte ptr [esi + 0x10484], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA384: je 0x587ea39d
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587EA386: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA38C: mov eax, dword ptr [edx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA392: mov dword ptr [eax + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA398: jmp 0x587ea542
        __asm _emit 0xE9
        __asm _emit 0xA5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA39D: mov byte ptr [esp + 0x14], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x587EA3A2: mov byte ptr [esp + 0x15], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x0D
        // 0x587EA3A7: mov byte ptr [esp + 0x17], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        __asm _emit 0x04
        // 0x587EA3AC: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EA3B0: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587EA3B2: lea edx, [esp + 0x7ac]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA3B9: mov dword ptr [esp + 0x7ac], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA3C0: push edx
        __asm _emit 0x52
        // 0x587EA3C1: jmp 0x587ea539
        __asm _emit 0xE9
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA3C6: cmp eax, 0x5e
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x5E
        // 0x587EA3C9: jne 0x587ea542
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA3CF: cmp byte ptr [esi + 0x10484], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA3D6: jne 0x587ea2ec
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EA3DC: mov byte ptr [esp + 0x14], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x587EA3E1: mov byte ptr [esp + 0x15], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x0E
        // 0x587EA3E6: mov byte ptr [esp + 0x17], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        __asm _emit 0x04
        // 0x587EA3EB: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EA3EF: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587EA3F1: lea eax, [esp + 0x5ac]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA3F8: mov dword ptr [esp + 0x5ac], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA3FF: push eax
        __asm _emit 0x50
        // 0x587EA400: jmp 0x587ea53b
        __asm _emit 0xE9
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA405: sub al, 0x1f
        __asm _emit 0x2C
        __asm _emit 0x1F
        // 0x587EA407: mov byte ptr [esp + 0x16], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587EA40B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EA40D: mov byte ptr [esp + 0x14], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587EA412: mov byte ptr [esp + 0x15], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x08
        // 0x587EA417: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EA419: lea edx, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA41F: nop
        __asm _emit 0x90
        // 0x587EA420: cmp dword ptr [edx], edi
        __asm _emit 0x39
        __asm _emit 0x3A
        // 0x587EA422: je 0x587ea42d
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587EA424: mov byte ptr [esp + ecx + 0x3ac], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x0C
        __asm _emit 0xAC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA42B: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587EA42D: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587EA42F: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587EA432: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587EA435: jl 0x587ea420
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x587EA437: add cl, 4
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587EA43A: mov byte ptr [esp + 0x17], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x587EA43E: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EA442: movzx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC1
        // 0x587EA445: mov dword ptr [esp + 0x3a8], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA44C: lea ecx, [esp + 0x3a8]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA453: jmp 0x587ea537
        __asm _emit 0xE9
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA458: sub al, 0x15
        __asm _emit 0x2C
        __asm _emit 0x15
        // 0x587EA45A: mov byte ptr [esp + 0x16], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587EA45E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EA460: mov byte ptr [esp + 0x14], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587EA465: mov byte ptr [esp + 0x15], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x06
        // 0x587EA46A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EA46C: lea edx, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA472: cmp dword ptr [edx], edi
        __asm _emit 0x39
        __asm _emit 0x3A
        // 0x587EA474: je 0x587ea47f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587EA476: mov byte ptr [esp + eax + 0x130], cl
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x04
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA47D: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587EA47F: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587EA481: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587EA484: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x587EA487: jl 0x587ea472
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x587EA489: mov ebp, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EA48F: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EA495: mov edi, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA49B: add al, 8
        __asm _emit 0x04
        __asm _emit 0x08
        // 0x587EA49D: mov bl, al
        __asm _emit 0x8A
        __asm _emit 0xD8
        // 0x587EA49F: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587EA4A2: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA4A8: mov byte ptr [esp + 0x17], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x587EA4AC: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EA4B0: mov dword ptr [esp + 0x128], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA4B7: cdq
        __asm _emit 0x99
        // 0x587EA4B8: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EA4BA: add ax, word ptr [ecx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587EA4BE: mov word ptr [esp + 0x12c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA4C6: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x587EA4C9: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA4CF: cdq
        __asm _emit 0x99
        // 0x587EA4D0: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EA4D2: add ax, word ptr [ecx + 0x54]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587EA4D6: lea ecx, [esp + 0x128]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA4DD: mov word ptr [esp + 0x12e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA4E5: movzx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC3
        // 0x587EA4E8: jmp 0x587ea537
        __asm _emit 0xEB
        __asm _emit 0x4D
        // 0x587EA4EA: sub al, 0xc
        __asm _emit 0x2C
        __asm _emit 0x0C
        // 0x587EA4EC: mov byte ptr [esp + 0x16], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587EA4F0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EA4F2: mov byte ptr [esp + 0x14], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587EA4F7: mov byte ptr [esp + 0x15], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x05
        // 0x587EA4FC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EA4FE: lea edx, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA504: cmp dword ptr [edx], edi
        __asm _emit 0x39
        __asm _emit 0x3A
        // 0x587EA506: je 0x587ea511
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587EA508: mov byte ptr [esp + ecx + 0x4ac], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x0C
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA50F: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587EA511: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587EA513: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587EA516: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587EA519: jl 0x587ea504
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x587EA51B: add cl, 4
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587EA51E: mov byte ptr [esp + 0x17], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x587EA522: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EA526: movzx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC1
        // 0x587EA529: mov dword ptr [esp + 0x4a8], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA530: lea ecx, [esp + 0x4a8]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA537: push eax
        __asm _emit 0x50
        // 0x587EA538: push ecx
        __asm _emit 0x51
        // 0x587EA539: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587EA53B: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587EA53D: call 0x587e5a70
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xB5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EA542: mov ecx, dword ptr [esp + 0x92c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA549: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA550: pop ecx
        __asm _emit 0x59
        // 0x587EA551: pop edi
        __asm _emit 0x5F
        // 0x587EA552: pop esi
        __asm _emit 0x5E
        // 0x587EA553: pop ebp
        __asm _emit 0x5D
        // 0x587EA554: pop ebx
        __asm _emit 0x5B
        // 0x587EA555: mov ecx, dword ptr [esp + 0x914]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA55C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587EA55E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x26
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587EA563: add esp, 0x924
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EA569: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
