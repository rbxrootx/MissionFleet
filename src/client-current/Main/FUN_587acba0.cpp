// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587ACBA0 .. +0x4F9 bytes.
// Source symbol alias: FUN_587acba0.
extern "C" __declspec(naked) void FUN_587acba0() {
    __asm {
        // 0x587ACBA0: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587ACBA3: push ebx
        __asm _emit 0x53
        // 0x587ACBA4: push ebp
        __asm _emit 0x55
        // 0x587ACBA5: push esi
        __asm _emit 0x56
        // 0x587ACBA6: push edi
        __asm _emit 0x57
        // 0x587ACBA7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587ACBA9: mov esi, dword ptr [edi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACBAF: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587ACBB3: cmp esi, dword ptr [edi + 0x174]
        __asm _emit 0x3B
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACBB9: jbe 0x587acbc0
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACBBB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACBC0: mov ebp, dword ptr [edi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACBC6: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x587ACBC8: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ACBCC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587ACBD0: mov esi, dword ptr [edi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACBD6: cmp dword ptr [edi + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB7
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACBDC: jbe 0x587acbe3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACBDE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACBE3: mov eax, dword ptr [edi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACBE9: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ACBEB: je 0x587acbf1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587ACBED: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587ACBEF: je 0x587acbf6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587ACBF1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACBF6: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587ACBF8: je 0x587ad08b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACBFE: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ACC00: jne 0x587acc3c
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x587ACC02: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACC07: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACC09: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587ACC0C: jb 0x587acc13
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACC0E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACC13: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ACC17: movzx eax, byte ptr [esi + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587ACC1B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587ACC1D: cmp dword ptr [ecx + 0x78], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x587ACC20: je 0x587acc46
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587ACC22: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ACC24: jne 0x587acc41
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587ACC26: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACC2B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACC2D: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587ACC30: jb 0x587acc37
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACC32: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACC37: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587ACC3A: jmp 0x587acbd0
        __asm _emit 0xEB
        __asm _emit 0x94
        // 0x587ACC3C: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ACC3F: jmp 0x587acc09
        __asm _emit 0xEB
        __asm _emit 0xC8
        // 0x587ACC41: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ACC44: jmp 0x587acc2d
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x587ACC46: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ACC4A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ACC4C: jne 0x587ace51
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACC52: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACC57: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACC59: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587ACC5C: jb 0x587acc63
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACC5E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACC63: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587ACC65: mov eax, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x587ACC68: mov dword ptr [esi + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x587ACC6B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ACC6D: jne 0x587ace59
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACC73: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACC78: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACC7A: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587ACC7D: jb 0x587acc84
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACC7F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACC84: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587ACC86: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACC8C: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ACC8F: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACC92: jbe 0x587acc99
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACC94: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACC99: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACC9B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587ACC9D: jne 0x587ace61
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACCA3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACCA8: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACCAB: jb 0x587accb2
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACCAD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACCB2: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587ACCB4: mov eax, dword ptr [edx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x68
        // 0x587ACCB7: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ACCBB: mov dword ptr [ecx + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x2C
        // 0x587ACCBE: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ACCC0: jne 0x587ace68
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACCC6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACCCB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACCCD: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587ACCD0: jb 0x587accd7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACCD2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACCD7: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587ACCD9: mov esi, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACCDF: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ACCE2: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACCE5: jbe 0x587accec
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACCE7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACCEC: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACCEE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587ACCF0: jne 0x587ace70
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACCF6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACCFB: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACCFE: jb 0x587acd05
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACD00: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACD05: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587ACD07: mov eax, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACD0D: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587ACD10: sub ecx, dword ptr [eax + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587ACD13: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587ACD16: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587ACD18: jbe 0x587acfb9
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x9B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACD1E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ACD20: jne 0x587ace77
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACD26: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACD2B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACD2D: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587ACD30: jb 0x587acd37
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACD32: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACD37: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587ACD39: mov esi, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACD3F: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ACD42: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACD45: jbe 0x587acd4c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACD47: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACD4C: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACD4E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587ACD50: jne 0x587ace7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACD56: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACD5B: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACD5E: jb 0x587acd65
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACD60: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACD65: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587ACD67: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACD6D: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ACD70: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACD73: jbe 0x587acd7a
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACD75: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACD7A: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x587ACD7C: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ACD80: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ACD82: jne 0x587ace86
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACD88: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACD8D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACD8F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ACD93: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587ACD96: jb 0x587acd9d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACD98: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACD9D: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ACDA1: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587ACDA3: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACDA9: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ACDAC: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACDAF: jbe 0x587acdb6
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACDB1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACDB6: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACDB8: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587ACDBA: jne 0x587ace8e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACDC0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACDC5: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACDC8: jb 0x587acdcf
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACDCA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACDCF: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587ACDD1: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACDD7: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACDDA: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ACDDD: jbe 0x587acde4
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACDDF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACDE4: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACDE6: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587ACDE8: je 0x587acdee
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587ACDEA: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587ACDEC: je 0x587acdf3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587ACDEE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACDF3: cmp dword ptr [esp + 0x20], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ACDF7: je 0x587acf12
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACDFD: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587ACDFF: jne 0x587ace95
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACE05: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACE0A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACE0C: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ACE10: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587ACE13: jb 0x587ace1a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACE15: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACE1A: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ACE1E: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587ACE20: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587ACE24: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ACE28: cmp dx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587ACE2C: ja 0x587acea0
        __asm _emit 0x77
        __asm _emit 0x72
        // 0x587ACE2E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587ACE30: jne 0x587ace9c
        __asm _emit 0x75
        __asm _emit 0x6A
        // 0x587ACE32: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACE37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACE39: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ACE3D: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587ACE40: jb 0x587ace47
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACE42: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xFE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACE47: add dword ptr [esp + 0x20], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x587ACE4C: jmp 0x587acd80
        __asm _emit 0xE9
        __asm _emit 0x2F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACE51: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ACE54: jmp 0x587acc59
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACE59: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ACE5C: jmp 0x587acc7a
        __asm _emit 0xE9
        __asm _emit 0x19
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACE61: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACE63: jmp 0x587acca8
        __asm _emit 0xE9
        __asm _emit 0x40
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACE68: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ACE6B: jmp 0x587acccd
        __asm _emit 0xE9
        __asm _emit 0x5D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACE70: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACE72: jmp 0x587accfb
        __asm _emit 0xE9
        __asm _emit 0x84
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACE77: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ACE7A: jmp 0x587acd2d
        __asm _emit 0xE9
        __asm _emit 0xAE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACE7F: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACE81: jmp 0x587acd5b
        __asm _emit 0xE9
        __asm _emit 0xD5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACE86: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ACE89: jmp 0x587acd8f
        __asm _emit 0xE9
        __asm _emit 0x01
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACE8E: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACE90: jmp 0x587acdc5
        __asm _emit 0xE9
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACE95: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587ACE97: jmp 0x587ace0c
        __asm _emit 0xE9
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACE9C: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587ACE9E: jmp 0x587ace39
        __asm _emit 0xEB
        __asm _emit 0x99
        // 0x587ACEA0: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ACEA2: jne 0x587acf09
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x587ACEA4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACEA9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACEAB: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ACEAF: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587ACEB2: jb 0x587aceb9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACEB4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACEB9: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ACEBD: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587ACEBF: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACEC5: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ACEC8: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACECB: jbe 0x587aced2
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACECD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACED2: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACED4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587ACED6: jne 0x587acf0e
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x587ACED8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACEDD: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACEE0: jb 0x587acee7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACEE2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACEE7: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ACEEB: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ACEEF: push edx
        __asm _emit 0x52
        // 0x587ACEF0: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587ACEF2: push eax
        __asm _emit 0x50
        // 0x587ACEF3: push ebx
        __asm _emit 0x53
        // 0x587ACEF4: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ACEF8: push ecx
        __asm _emit 0x51
        // 0x587ACEF9: mov ecx, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACEFF: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x99
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587ACF04: jmp 0x587ad00e
        __asm _emit 0xE9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACF09: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ACF0C: jmp 0x587aceab
        __asm _emit 0xEB
        __asm _emit 0x9D
        // 0x587ACF0E: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACF10: jmp 0x587acedd
        __asm _emit 0xEB
        __asm _emit 0xCB
        // 0x587ACF12: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ACF14: jne 0x587acf6c
        __asm _emit 0x75
        __asm _emit 0x56
        // 0x587ACF16: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACF1B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACF1D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ACF21: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587ACF24: jb 0x587acf2b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACF26: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACF2B: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ACF2F: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587ACF31: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACF37: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ACF3A: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACF3D: jbe 0x587acf44
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACF3F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACF44: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACF46: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587ACF48: jne 0x587acf71
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587ACF4A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACF4F: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACF52: jb 0x587acf59
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACF54: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACF59: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587ACF5B: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACF61: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587ACF64: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587ACF66: jne 0x587acf75
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587ACF68: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACF6A: jmp 0x587acf7d
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x587ACF6C: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ACF6F: jmp 0x587acf1d
        __asm _emit 0xEB
        __asm _emit 0xAC
        // 0x587ACF71: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACF73: jmp 0x587acf4f
        __asm _emit 0xEB
        __asm _emit 0xDA
        // 0x587ACF75: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587ACF78: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587ACF7A: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587ACF7D: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACF80: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587ACF82: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587ACF84: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587ACF87: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587ACF89: jae 0x587acf99
        __asm _emit 0x73
        __asm _emit 0x0E
        // 0x587ACF8B: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ACF8F: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x587ACF91: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587ACF94: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACF97: jmp 0x587ad00e
        __asm _emit 0xEB
        __asm _emit 0x75
        // 0x587ACF99: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587ACF9B: jbe 0x587acfa2
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACF9D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACFA2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587ACFA4: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ACFA8: push ecx
        __asm _emit 0x51
        // 0x587ACFA9: push edi
        __asm _emit 0x57
        // 0x587ACFAA: push eax
        __asm _emit 0x50
        // 0x587ACFAB: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ACFAF: push edx
        __asm _emit 0x52
        // 0x587ACFB0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587ACFB2: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x98
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587ACFB7: jmp 0x587ad00e
        __asm _emit 0xEB
        __asm _emit 0x55
        // 0x587ACFB9: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ACFBB: jne 0x587ad04d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACFC1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACFC6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACFC8: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587ACFCB: jb 0x587acfd2
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACFCD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACFD2: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587ACFD4: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACFDA: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ACFDD: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACFE0: jbe 0x587acfe7
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACFE2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACFE7: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ACFE9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587ACFEB: jne 0x587ad055
        __asm _emit 0x75
        __asm _emit 0x68
        // 0x587ACFED: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACFF2: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACFF5: jb 0x587acffc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ACFF7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACFFC: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587ACFFE: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587AD002: push ecx
        __asm _emit 0x51
        // 0x587AD003: mov ecx, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD009: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x84
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD00E: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587AD012: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587AD015: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AD01B: push eax
        __asm _emit 0x50
        // 0x587AD01C: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xBA
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587AD021: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AD025: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AD027: je 0x587ad077
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x587AD029: movzx edi, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587AD02D: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587AD030: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587AD033: and edi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x1F
        // 0x587AD036: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x587AD038: cmp cl, 0x10
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x10
        // 0x587AD03B: movzx ecx, byte ptr [esi + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587AD03F: lea ecx, [ecx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC9
        // 0x587AD042: jae 0x587ad059
        __asm _emit 0x73
        __asm _emit 0x15
        // 0x587AD044: lea ecx, [edi + ecx*8 + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0xCF
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD04B: jmp 0x587ad060
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587AD04D: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AD050: jmp 0x587acfc8
        __asm _emit 0xE9
        __asm _emit 0x73
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AD055: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587AD057: jmp 0x587acff2
        __asm _emit 0xEB
        __asm _emit 0x99
        // 0x587AD059: lea ecx, [edi + ecx*8 + 0x196]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0xCF
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD060: inc byte ptr [ecx]
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587AD062: movzx ecx, byte ptr [esi + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587AD066: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x78
        // 0x587AD069: add dword ptr [edx + ecx*4 + 0x3dc], eax
        __asm _emit 0x01
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD070: lea ecx, [edx + ecx*4 + 0x3dc]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x8A
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AD077: cmp dword ptr [esp + 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587AD07C: je 0x587ad08f
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587AD07E: inc dword ptr [edx + 0x6c]
        __asm _emit 0xFF
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x587AD081: pop edi
        __asm _emit 0x5F
        // 0x587AD082: pop esi
        __asm _emit 0x5E
        // 0x587AD083: pop ebp
        __asm _emit 0x5D
        // 0x587AD084: pop ebx
        __asm _emit 0x5B
        // 0x587AD085: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587AD088: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587AD08B: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AD08F: pop edi
        __asm _emit 0x5F
        // 0x587AD090: pop esi
        __asm _emit 0x5E
        // 0x587AD091: pop ebp
        __asm _emit 0x5D
        // 0x587AD092: pop ebx
        __asm _emit 0x5B
        // 0x587AD093: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587AD096: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
