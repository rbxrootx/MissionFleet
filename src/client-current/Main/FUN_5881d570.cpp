// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5881D570 .. +0x393 bytes.
// Source symbol alias: FUN_5881d570.
extern "C" __declspec(naked) void FUN_5881d570() {
    __asm {
        // 0x5881D570: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5881D572: push 0x5898364f
        __asm _emit 0x68
        __asm _emit 0x4F
        __asm _emit 0x36
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881D577: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D57D: push eax
        __asm _emit 0x50
        // 0x5881D57E: push ecx
        __asm _emit 0x51
        // 0x5881D57F: push ebx
        __asm _emit 0x53
        // 0x5881D580: push ebp
        __asm _emit 0x55
        // 0x5881D581: push esi
        __asm _emit 0x56
        // 0x5881D582: push edi
        __asm _emit 0x57
        // 0x5881D583: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5881D588: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5881D58A: push eax
        __asm _emit 0x50
        // 0x5881D58B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881D58F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D595: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5881D597: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5881D59B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881D59F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881D5A3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881D5A7: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881D5AB: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881D5AF: push eax
        __asm _emit 0x50
        // 0x5881D5B0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881D5B4: push ecx
        __asm _emit 0x51
        // 0x5881D5B5: push edx
        __asm _emit 0x52
        // 0x5881D5B6: push edi
        __asm _emit 0x57
        // 0x5881D5B7: push ebx
        __asm _emit 0x53
        // 0x5881D5B8: push eax
        __asm _emit 0x50
        // 0x5881D5B9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5881D5BB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x5B
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D5C0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881D5C6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881D5CB: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x5881D5CE: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5881D5D0: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5881D5D3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D5DA: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x5881D5DD: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D5E2: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881D5E6: mov dword ptr [esi], 0x5899d9e0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE0
        __asm _emit 0xD9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5881D5EC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xF6
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881D5F1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881D5F4: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881D5F8: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5881D5FD: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881D5FF: je 0x5881d612
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5881D601: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5881D603: push ebx
        __asm _emit 0x53
        // 0x5881D604: push 0x5899d9fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0xD9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5881D609: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881D60B: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x67
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5881D610: jmp 0x5881d614
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881D612: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881D614: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5881D617: lea eax, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5881D61A: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5881D61F: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881D623: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881D625: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xF6
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881D62A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881D62C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881D62F: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881D633: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5881D638: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5881D63A: je 0x5881d6b2
        __asm _emit 0x74
        __asm _emit 0x76
        // 0x5881D63C: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5881D63F: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D645: jle 0x5881d65a
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5881D647: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5881D649: jl 0x5881d65a
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x5881D64B: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D651: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881D653: je 0x5881d65a
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5881D655: mov ebp, dword ptr [eax + ebx*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x98
        // 0x5881D658: jmp 0x5881d65c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881D65A: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5881D65C: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881D660: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881D664: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881D666: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881D668: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881D66A: add ecx, 0x78
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x78
        // 0x5881D66D: push ecx
        __asm _emit 0x51
        // 0x5881D66E: add edx, 0x96
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D674: push edx
        __asm _emit 0x52
        // 0x5881D675: push esi
        __asm _emit 0x56
        // 0x5881D676: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881D678: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x5B
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D67D: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881D683: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5881D686: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5881D688: je 0x5881d6b4
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5881D68A: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5881D68D: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5881D690: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5881D693: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5881D696: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5881D699: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881D69B: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5881D69E: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5881D6A1: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5881D6A4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5881D6A7: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5881D6AA: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5881D6AD: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5881D6B0: jmp 0x5881d6b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881D6B2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5881D6B4: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881D6B8: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x5881D6BA: inc ebx
        __asm _emit 0x43
        // 0x5881D6BB: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5881D6BE: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x5881D6C1: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5881D6C6: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881D6CA: jl 0x5881d623
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x53
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881D6D0: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5881D6D3: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881D6D8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x56
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D6DD: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5881D6E0: push 0xe1
        __asm _emit 0x68
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D6E5: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x55
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D6EA: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D6EF: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881D6F3: mov dword ptr [esp + 0x3c], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D6FB: lea ebx, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x5881D6FE: mov dword ptr [esp + 0x34], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881D702: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881D704: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xF5
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881D709: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5881D70B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881D70E: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5881D712: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5881D717: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5881D719: je 0x5881d798
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x5881D71B: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5881D71E: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D724: jle 0x5881d73d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5881D726: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5881D728: jl 0x5881d73d
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5881D72A: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D730: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881D732: je 0x5881d73d
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5881D734: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881D738: mov ebp, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x5881D73B: jmp 0x5881d73f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881D73D: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5881D73F: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881D743: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881D747: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881D749: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881D74B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5881D74D: add edx, 0x78
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x78
        // 0x5881D750: push edx
        __asm _emit 0x52
        // 0x5881D751: add eax, 0x96
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D756: push eax
        __asm _emit 0x50
        // 0x5881D757: push esi
        __asm _emit 0x56
        // 0x5881D758: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881D75A: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x5A
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D75F: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881D765: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5881D768: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5881D76A: je 0x5881d792
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5881D76C: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5881D76F: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x5881D772: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5881D775: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5881D778: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x5881D77B: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5881D77D: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5881D780: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5881D783: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5881D786: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5881D789: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5881D78C: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5881D78F: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5881D792: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881D796: jmp 0x5881d79a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881D798: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5881D79A: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5881D79F: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x5881D7A1: inc ebp
        __asm _emit 0x45
        // 0x5881D7A2: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5881D7A5: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x5881D7AA: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5881D7AF: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881D7B3: jne 0x5881d702
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881D7B9: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5881D7BC: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881D7C1: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x55
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D7C6: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5881D7C9: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D7CE: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x55
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D7D3: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D7D8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xF4
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881D7DD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881D7E0: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881D7E4: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5881D7E9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881D7EB: je 0x5881d836
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x5881D7ED: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5881D7F0: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D7F7: jle 0x5881d803
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x5881D7F9: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D7FF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5881D801: jne 0x5881d805
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5881D803: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881D805: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881D809: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881D80B: add edx, 0x187
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D811: push edx
        __asm _emit 0x52
        // 0x5881D812: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881D816: add edx, 0x1d2
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xD2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D81C: push edx
        __asm _emit 0x52
        // 0x5881D81D: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881D823: push ecx
        __asm _emit 0x51
        // 0x5881D824: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881D82A: push esi
        __asm _emit 0x56
        // 0x5881D82B: push ecx
        __asm _emit 0x51
        // 0x5881D82C: push edx
        __asm _emit 0x52
        // 0x5881D82D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881D82F: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x05
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881D834: jmp 0x5881d838
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881D836: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881D838: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D83D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881D83F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5881D844: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5881D847: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x54
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D84C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D851: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xF3
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5881D856: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881D859: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5881D85D: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5881D862: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881D864: je 0x5881d8b4
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x5881D866: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5881D869: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5881D870: jle 0x5881d881
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5881D872: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D878: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5881D87A: je 0x5881d881
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5881D87C: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x40
        // 0x5881D87F: jmp 0x5881d883
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881D881: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5881D883: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881D887: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881D889: add edx, 0x187
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D88F: push edx
        __asm _emit 0x52
        // 0x5881D890: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881D894: add edx, 0x224
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D89A: push edx
        __asm _emit 0x52
        // 0x5881D89B: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881D8A1: push ecx
        __asm _emit 0x51
        // 0x5881D8A2: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881D8A8: push esi
        __asm _emit 0x56
        // 0x5881D8A9: push ecx
        __asm _emit 0x51
        // 0x5881D8AA: push edx
        __asm _emit 0x52
        // 0x5881D8AB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881D8AD: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x04
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5881D8B2: jmp 0x5881d8b6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881D8B4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881D8B6: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D8BB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881D8BD: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5881D8C2: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5881D8C5: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x54
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881D8CA: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D8CF: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5881D8D3: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5881D8D7: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D8DC: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D8E1: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5881D8E4: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5881D8E7: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5881D8EB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5881D8ED: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881D8F1: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881D8F8: pop ecx
        __asm _emit 0x59
        // 0x5881D8F9: pop edi
        __asm _emit 0x5F
        // 0x5881D8FA: pop esi
        __asm _emit 0x5E
        // 0x5881D8FB: pop ebp
        __asm _emit 0x5D
        // 0x5881D8FC: pop ebx
        __asm _emit 0x5B
        // 0x5881D8FD: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5881D900: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
