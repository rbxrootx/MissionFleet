// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 598 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a5120.

// Ghidra body range 0x587A5120..0x587A5376; 598 mapped bytes.
extern "C" __declspec(naked) void FUN_587a5120_segment_00() {
    __asm {
        // 0x587A5120: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587A5123: push edi
        __asm _emit 0x57
        // 0x587A5124: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A5128: cmp dword ptr [edi], 0xb
        __asm _emit 0x83
        __asm _emit 0x3F
        __asm _emit 0x0B
        // 0x587A512B: jne 0x587a536f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5131: push ebx
        __asm _emit 0x53
        // 0x587A5132: mov ebx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x587A5135: push esi
        __asm _emit 0x56
        // 0x587A5136: lea esi, [ecx + 4]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x587A5139: mov dword ptr [esp + 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A513D: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587A5140: jbe 0x587a5147
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A5142: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x7B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A5147: push ebp
        __asm _emit 0x55
        // 0x587A5148: mov ebp, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x2E
        // 0x587A514A: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A514E: mov esi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x587A5151: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A5155: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A5159: cmp dword ptr [eax + 0xc], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x587A515C: jbe 0x587a5163
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A515E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x7B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A5163: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A5167: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587A5169: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A516B: je 0x587a5171
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A516D: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587A516F: je 0x587a5176
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A5171: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x7A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A5176: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587A5178: je 0x587a536c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A517E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A5180: jne 0x587a5256
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5186: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x7A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A518B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A518D: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A5190: jb 0x587a5197
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A5192: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x7A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A5197: cmp dword ptr [ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x587A519A: je 0x587a5326
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A51A0: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A51A2: jne 0x587a525e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A51A8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x7A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A51AD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A51AF: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A51B2: jb 0x587a51b9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A51B4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x7A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A51B9: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587A51BB: call 0x587a2f20
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A51C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A51C2: je 0x587a5326
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A51C8: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A51CA: jne 0x587a5266
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A51D0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x7A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A51D5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A51D7: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A51DA: jb 0x587a51e1
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A51DC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x7A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A51E1: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587A51E3: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A51E6: sub eax, dword ptr [esp + 0x24]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A51EA: cdq
        __asm _emit 0x99
        // 0x587A51EB: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587A51ED: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587A51EF: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x32
        // 0x587A51F2: jge 0x587a5273
        __asm _emit 0x7D
        __asm _emit 0x7F
        // 0x587A51F4: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587A51F7: sub eax, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A51FB: cdq
        __asm _emit 0x99
        // 0x587A51FC: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587A51FE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587A5200: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x32
        // 0x587A5203: jge 0x587a5273
        __asm _emit 0x7D
        __asm _emit 0x6E
        // 0x587A5205: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A5207: jne 0x587a526e
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x587A5209: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x7A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A520E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A5210: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A5213: jb 0x587a521a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A5215: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x7A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A521A: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A521E: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587A5220: push edi
        __asm _emit 0x57
        // 0x587A5221: push esi
        __asm _emit 0x56
        // 0x587A5222: call 0x587a3f30
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A5227: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A5229: je 0x587a5326
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A522F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A5231: je 0x587a523c
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587A5233: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x587A5235: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A5237: call 0x588d6c90
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x1A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587A523C: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A5240: push ebx
        __asm _emit 0x53
        // 0x587A5241: push ebp
        __asm _emit 0x55
        // 0x587A5242: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5246: push edx
        __asm _emit 0x52
        // 0x587A5247: call 0x58849980
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587A524C: pop ebp
        __asm _emit 0x5D
        // 0x587A524D: pop esi
        __asm _emit 0x5E
        // 0x587A524E: pop ebx
        __asm _emit 0x5B
        // 0x587A524F: pop edi
        __asm _emit 0x5F
        // 0x587A5250: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A5253: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587A5256: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A5259: jmp 0x587a518d
        __asm _emit 0xE9
        __asm _emit 0x2F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A525E: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A5261: jmp 0x587a51af
        __asm _emit 0xE9
        __asm _emit 0x49
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A5266: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A5269: jmp 0x587a51d7
        __asm _emit 0xE9
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A526E: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A5271: jmp 0x587a5210
        __asm _emit 0xEB
        __asm _emit 0x9D
        // 0x587A5273: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A5275: jne 0x587a5347
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A527B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x79
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A5280: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A5282: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A5285: jb 0x587a528c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A5287: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x79
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A528C: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587A528E: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587A5291: sub esi, dword ptr [esp + 0x24]
        __asm _emit 0x2B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A5295: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A5297: jne 0x587a534f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A529D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x79
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A52A2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A52A4: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A52A7: jb 0x587a52ae
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A52A9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x79
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A52AE: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587A52B0: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587A52B3: sub eax, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A52B7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A52B9: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x587A52BC: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x587A52BF: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A52C3: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587A52C5: imul edx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD6
        // 0x587A52C8: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587A52CA: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587A52CC: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A52D0: jge 0x587a5326
        __asm _emit 0x7D
        __asm _emit 0x54
        // 0x587A52D2: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A52D6: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x79
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A52DB: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x79
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A52E0: push eax
        __asm _emit 0x50
        // 0x587A52E1: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587A52E4: cdq
        __asm _emit 0x99
        // 0x587A52E5: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587A52E7: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587A52E9: push esi
        __asm _emit 0x56
        // 0x587A52EA: push eax
        __asm _emit 0x50
        // 0x587A52EB: call 0x5876bf80
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x6C
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587A52F0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587A52F2: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x587A52F5: mov dword ptr [edi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587A52F8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A52FB: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A52FF: mov dword ptr [edi + 0x10], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A5306: mov dword ptr [edi + 0xc], 2
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A530D: mov dword ptr [edi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587A5310: call 0x587a5080
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A5315: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A5319: push edi
        __asm _emit 0x57
        // 0x587A531A: push ecx
        __asm _emit 0x51
        // 0x587A531B: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587A531D: call 0x587a3f30
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A5322: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A5324: jne 0x587a535c
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x587A5326: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A5328: jne 0x587a5357
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x587A532A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x79
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A532F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A5331: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587A5334: jb 0x587a533b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A5336: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x79
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A533B: mov esi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A533F: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587A5342: jmp 0x587a514e
        __asm _emit 0xE9
        __asm _emit 0x07
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A5347: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A534A: jmp 0x587a5282
        __asm _emit 0xE9
        __asm _emit 0x33
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A534F: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A5352: jmp 0x587a52a4
        __asm _emit 0xE9
        __asm _emit 0x4D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A5357: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A535A: jmp 0x587a5331
        __asm _emit 0xEB
        __asm _emit 0xD5
        // 0x587A535C: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A5360: push ebx
        __asm _emit 0x53
        // 0x587A5361: push ebp
        __asm _emit 0x55
        // 0x587A5362: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5366: push eax
        __asm _emit 0x50
        // 0x587A5367: call 0x58849980
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587A536C: pop ebp
        __asm _emit 0x5D
        // 0x587A536D: pop esi
        __asm _emit 0x5E
        // 0x587A536E: pop ebx
        __asm _emit 0x5B
        // 0x587A536F: pop edi
        __asm _emit 0x5F
        // 0x587A5370: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A5373: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
