// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 688 bytes in 1 exact ranges.
// Source symbol alias: FUN_588cc610.

// Ghidra body range 0x588CC610..0x588CC8C0; 688 mapped bytes.
extern "C" __declspec(naked) void FUN_588cc610_segment_00() {
    __asm {
        // 0x588CC610: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588CC612: push 0x58988ede
        __asm _emit 0x68
        __asm _emit 0xDE
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CC617: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC61D: push eax
        __asm _emit 0x50
        // 0x588CC61E: push ecx
        __asm _emit 0x51
        // 0x588CC61F: push ebx
        __asm _emit 0x53
        // 0x588CC620: push ebp
        __asm _emit 0x55
        // 0x588CC621: push esi
        __asm _emit 0x56
        // 0x588CC622: push edi
        __asm _emit 0x57
        // 0x588CC623: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588CC628: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588CC62A: push eax
        __asm _emit 0x50
        // 0x588CC62B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CC62F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC635: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CC637: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588CC63B: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588CC63F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588CC643: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588CC647: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CC64B: push eax
        __asm _emit 0x50
        // 0x588CC64C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CC650: push ecx
        __asm _emit 0x51
        // 0x588CC651: push edx
        __asm _emit 0x52
        // 0x588CC652: push edi
        __asm _emit 0x57
        // 0x588CC653: push eax
        __asm _emit 0x50
        // 0x588CC654: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CC656: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC65B: mov dword ptr [esi], 0x589a0ce8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588CC661: mov eax, dword ptr [0x58a24638]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CC666: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC66D: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC675: jle 0x588cc68a
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588CC677: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC67E: je 0x588cc68a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588CC680: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC686: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588CC688: jmp 0x588cc68c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CC68A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CC68C: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588CC68F: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CC692: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CC694: je 0x588cc6be
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CC696: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CC699: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CC69C: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CC69F: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CC6A2: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CC6A5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CC6A7: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CC6AA: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CC6AC: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CC6AF: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CC6B2: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CC6B5: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CC6B8: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CC6BB: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CC6BE: mov eax, dword ptr [0x58a24638]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CC6C3: cmp dword ptr [eax + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588CC6CA: jle 0x588cc6e0
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588CC6CC: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC6D3: je 0x588cc6e0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588CC6D5: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC6DB: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588CC6DE: jmp 0x588cc6e2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CC6E0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CC6E2: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588CC6E5: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CC6E8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CC6EA: je 0x588cc714
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CC6EC: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CC6EF: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CC6F2: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CC6F5: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CC6F8: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CC6FB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CC6FD: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CC700: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CC702: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CC705: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CC708: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CC70B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CC70E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CC711: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CC714: mov eax, dword ptr [0x58a24638]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CC719: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC720: jle 0x588cc735
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588CC722: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC729: je 0x588cc735
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588CC72B: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC731: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588CC733: jmp 0x588cc737
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CC735: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CC737: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x588CC73A: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588CC73D: add esi, 0x7c
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x7C
        // 0x588CC740: add edi, 0x1c1
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xC1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC746: mov dword ptr [ecx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x588CC749: mov ebp, 0x10
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC74E: mov ebx, 0x400
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC753: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588CC757: mov dword ptr [esp + 0x38], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC75F: nop
        __asm _emit 0x90
        // 0x588CC760: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC765: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588CC76A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CC76D: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CC771: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588CC776: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CC778: je 0x588cc7c9
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x588CC77A: mov ecx, dword ptr [0x58a24638]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CC780: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC786: jle 0x588cc79f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588CC788: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588CC78A: jl 0x588cc79f
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588CC78C: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC793: je 0x588cc79f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588CC795: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC79B: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x588CC79D: jmp 0x588cc7a1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CC79F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588CC7A1: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588CC7A5: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CC7A7: sub ecx, -0x80
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x80
        // 0x588CC7AA: push ecx
        __asm _emit 0x51
        // 0x588CC7AB: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CC7B1: push edi
        __asm _emit 0x57
        // 0x588CC7B2: push edx
        __asm _emit 0x52
        // 0x588CC7B3: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588CC7B7: push edx
        __asm _emit 0x52
        // 0x588CC7B8: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CC7BE: push ecx
        __asm _emit 0x51
        // 0x588CC7BF: push edx
        __asm _emit 0x52
        // 0x588CC7C0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CC7C2: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x15
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588CC7C7: jmp 0x588cc7cb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CC7C9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CC7CB: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC7D0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CC7D2: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CC7D7: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588CC7D9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CC7DE: add ebx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x40
        // 0x588CC7E1: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588CC7E4: inc ebp
        __asm _emit 0x45
        // 0x588CC7E5: add edi, 0x15
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x15
        // 0x588CC7E8: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x588CC7ED: jne 0x588cc760
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CC7F3: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588CC7F7: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588CC7FB: mov ebp, 0x16
        __asm _emit 0xBD
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC800: mov ebx, 0x580
        __asm _emit 0xBB
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC805: add esi, 0x70
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x70
        // 0x588CC808: mov dword ptr [esp + 0x38], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC810: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC815: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588CC81A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CC81D: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588CC821: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588CC826: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CC828: je 0x588cc87c
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x588CC82A: mov ecx, dword ptr [0x58a24638]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CC830: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC836: jle 0x588cc84f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588CC838: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588CC83A: jl 0x588cc84f
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588CC83C: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC843: je 0x588cc84f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588CC845: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC84B: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x588CC84D: jmp 0x588cc851
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CC84F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588CC851: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588CC855: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CC857: add ecx, 0x92
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC85D: push ecx
        __asm _emit 0x51
        // 0x588CC85E: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CC864: push edi
        __asm _emit 0x57
        // 0x588CC865: push edx
        __asm _emit 0x52
        // 0x588CC866: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588CC86A: push edx
        __asm _emit 0x52
        // 0x588CC86B: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CC871: push ecx
        __asm _emit 0x51
        // 0x588CC872: push edx
        __asm _emit 0x52
        // 0x588CC873: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CC875: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x15
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588CC87A: jmp 0x588cc87e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CC87C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CC87E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC883: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CC885: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588CC88A: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588CC88C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CC891: add ebx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x40
        // 0x588CC894: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588CC897: inc ebp
        __asm _emit 0x45
        // 0x588CC898: add edi, 0x15
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x15
        // 0x588CC89B: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x588CC8A0: jne 0x588cc810
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588CC8A6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588CC8AA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CC8AE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CC8B5: pop ecx
        __asm _emit 0x59
        // 0x588CC8B6: pop edi
        __asm _emit 0x5F
        // 0x588CC8B7: pop esi
        __asm _emit 0x5E
        // 0x588CC8B8: pop ebp
        __asm _emit 0x5D
        // 0x588CC8B9: pop ebx
        __asm _emit 0x5B
        // 0x588CC8BA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588CC8BD: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
