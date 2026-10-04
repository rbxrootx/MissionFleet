// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FE520 .. +0x493 bytes.
// Source symbol alias: FUN_588fe520.
extern "C" __declspec(naked) void FUN_588fe520() {
    __asm {
        // 0x588FE520: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FE522: push 0x5898a4ea
        __asm _emit 0x68
        __asm _emit 0xEA
        __asm _emit 0xA4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FE527: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE52D: push eax
        __asm _emit 0x50
        // 0x588FE52E: push ecx
        __asm _emit 0x51
        // 0x588FE52F: push ebx
        __asm _emit 0x53
        // 0x588FE530: push ebp
        __asm _emit 0x55
        // 0x588FE531: push esi
        __asm _emit 0x56
        // 0x588FE532: push edi
        __asm _emit 0x57
        // 0x588FE533: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FE538: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FE53A: push eax
        __asm _emit 0x50
        // 0x588FE53B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FE53F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE545: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FE547: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FE54B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FE54F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FE553: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FE557: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FE55B: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FE55F: push eax
        __asm _emit 0x50
        // 0x588FE560: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FE564: push ecx
        __asm _emit 0x51
        // 0x588FE565: push edx
        __asm _emit 0x52
        // 0x588FE566: push edi
        __asm _emit 0x57
        // 0x588FE567: push ebp
        __asm _emit 0x55
        // 0x588FE568: push eax
        __asm _emit 0x50
        // 0x588FE569: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FE56B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE570: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FE576: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FE57B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FE57D: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588FE580: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588FE583: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE58A: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588FE58D: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FE591: mov dword ptr [esi], 0x589a233c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x3C
        __asm _emit 0x23
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FE597: mov dword ptr [esi + 0x60], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE59E: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE5A4: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE5AA: lea ebx, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE5B0: add ebp, 0x8b
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE5B6: mov dword ptr [esp + 0x38], 0xa
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE5BE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588FE5C0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FE5C2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xE6
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FE5C7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FE5C9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FE5CC: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FE5D0: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588FE5D5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588FE5D7: je 0x588fe608
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588FE5D9: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FE5DD: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FE5E1: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x588FE5E4: push ecx
        __asm _emit 0x51
        // 0x588FE5E5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FE5E7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FE5E9: add edx, 0x1da
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xDA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE5EF: push edx
        __asm _emit 0x52
        // 0x588FE5F0: push ebp
        __asm _emit 0x55
        // 0x588FE5F1: push esi
        __asm _emit 0x56
        // 0x588FE5F2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FE5F4: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x4B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE5F9: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FE5FF: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE606: jmp 0x588fe60a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE608: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FE60A: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x588FE60C: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE611: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588FE615: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588FE618: add ebp, 0x16
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x16
        // 0x588FE61B: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x588FE620: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588FE625: jne 0x588fe5c0
        __asm _emit 0x75
        __asm _emit 0x99
        // 0x588FE627: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE62C: cmp dword ptr [eax + 0x164], 0x4b6
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xB6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE636: jle 0x588fe64f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588FE638: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE63F: je 0x588fe64f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FE641: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE647: mov eax, dword ptr [ecx + 0x12d8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xD8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE64D: jmp 0x588fe651
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE64F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FE651: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE657: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588FE65A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FE65C: je 0x588fe686
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588FE65E: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588FE661: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588FE664: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588FE667: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588FE66A: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588FE66D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FE66F: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588FE672: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588FE674: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FE677: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588FE67A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588FE67D: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588FE680: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588FE683: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588FE686: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FE68A: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE690: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588FE695: lea ecx, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588FE698: lea edx, [ebp + 0x92]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE69E: mov ebx, 0x589a22c0
        __asm _emit 0xBB
        __asm _emit 0xC0
        __asm _emit 0x22
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FE6A3: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FE6A7: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FE6AB: jmp 0x588fe6b0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588FE6AD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588FE6B0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FE6B2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xE5
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FE6B7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FE6B9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FE6BC: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588FE6C0: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588FE6C5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588FE6C7: je 0x588fe754
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE6CD: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588FE6CF: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE6D5: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE6DB: jle 0x588fe6f5
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588FE6DD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FE6DF: jl 0x588fe6f5
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588FE6E1: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE6E8: je 0x588fe6f5
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FE6EA: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE6F0: mov ebp, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x81
        // 0x588FE6F3: jmp 0x588fe6f7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE6F5: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588FE6F7: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FE6FB: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FE6FF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FE703: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x588FE706: push edx
        __asm _emit 0x52
        // 0x588FE707: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FE709: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FE70B: add eax, 0x1da
        __asm _emit 0x05
        __asm _emit 0xDA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE710: push eax
        __asm _emit 0x50
        // 0x588FE711: push ecx
        __asm _emit 0x51
        // 0x588FE712: push esi
        __asm _emit 0x56
        // 0x588FE713: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FE715: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x4A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE71A: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FE720: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588FE723: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588FE725: je 0x588fe74e
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588FE727: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x588FE72A: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x588FE72D: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x588FE730: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x588FE733: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x588FE736: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588FE739: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588FE73C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FE73F: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588FE742: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588FE745: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x588FE748: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588FE74B: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x588FE74E: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FE752: jmp 0x588fe756
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE754: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FE756: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FE75A: add dword ptr [esp + 0x38], 0x16
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x16
        // 0x588FE75F: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x588FE761: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588FE764: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588FE767: cmp ebx, 0x589a22e8
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FE76D: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588FE772: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FE776: jl 0x588fe6b0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x34
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FE77C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE781: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xE4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FE786: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FE789: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FE78D: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588FE792: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FE794: je 0x588fe7ee
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x588FE796: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE79C: cmp dword ptr [ecx + 0x160], 0xa
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x588FE7A3: jle 0x588fe7bc
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588FE7A5: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE7AC: je 0x588fe7bc
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FE7AE: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE7B4: add edx, 0x280
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE7BA: jmp 0x588fe7be
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE7BC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FE7BE: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FE7C2: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FE7C6: lea ecx, [edi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x64
        // 0x588FE7C9: push ecx
        __asm _emit 0x51
        // 0x588FE7CA: lea ecx, [ebx + 0x1d9]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xD9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE7D0: push ecx
        __asm _emit 0x51
        // 0x588FE7D1: lea ecx, [ebp + 0x5a]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x5A
        // 0x588FE7D4: push ecx
        __asm _emit 0x51
        // 0x588FE7D5: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE7DB: push edx
        __asm _emit 0x52
        // 0x588FE7DC: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE7E2: push esi
        __asm _emit 0x56
        // 0x588FE7E3: push edx
        __asm _emit 0x52
        // 0x588FE7E4: push ecx
        __asm _emit 0x51
        // 0x588FE7E5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FE7E7: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xF5
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588FE7EC: jmp 0x588fe7f8
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588FE7EE: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FE7F2: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FE7F6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FE7F8: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE7FD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FE7FF: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588FE804: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE80A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE80F: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE814: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xE4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FE819: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FE81C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FE820: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588FE825: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FE827: je 0x588fe87c
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x588FE829: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE82F: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x588FE836: jle 0x588fe84f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588FE838: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE83F: je 0x588fe84f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FE841: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE847: add ecx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE84D: jmp 0x588fe851
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE84F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FE851: lea edx, [edi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x64
        // 0x588FE854: push edx
        __asm _emit 0x52
        // 0x588FE855: lea edx, [ebx + 0x1d9]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xD9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE85B: push edx
        __asm _emit 0x52
        // 0x588FE85C: lea edx, [ebp + 0x172]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE862: push edx
        __asm _emit 0x52
        // 0x588FE863: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE869: push ecx
        __asm _emit 0x51
        // 0x588FE86A: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE870: push esi
        __asm _emit 0x56
        // 0x588FE871: push ecx
        __asm _emit 0x51
        // 0x588FE872: push edx
        __asm _emit 0x52
        // 0x588FE873: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FE875: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xF5
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588FE87A: jmp 0x588fe87e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE87C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FE87E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE883: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FE885: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588FE88A: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE890: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE895: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE89A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xE3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FE89F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FE8A2: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FE8A6: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588FE8AB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FE8AD: je 0x588fe8ff
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x588FE8AF: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE8B5: cmp dword ptr [ecx + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x588FE8BC: jle 0x588fe8d5
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588FE8BE: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE8C5: je 0x588fe8d5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FE8C7: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE8CD: add ecx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE8D3: jmp 0x588fe8d7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE8D5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FE8D7: lea edx, [edi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x64
        // 0x588FE8DA: push edx
        __asm _emit 0x52
        // 0x588FE8DB: lea edx, [ebx + 0x1d9]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xD9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE8E1: push edx
        __asm _emit 0x52
        // 0x588FE8E2: lea edx, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x78
        // 0x588FE8E5: push edx
        __asm _emit 0x52
        // 0x588FE8E6: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE8EC: push ecx
        __asm _emit 0x51
        // 0x588FE8ED: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE8F3: push esi
        __asm _emit 0x56
        // 0x588FE8F4: push ecx
        __asm _emit 0x51
        // 0x588FE8F5: push edx
        __asm _emit 0x52
        // 0x588FE8F6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FE8F8: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xF4
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588FE8FD: jmp 0x588fe901
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE8FF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FE901: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE906: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FE908: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588FE90D: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE913: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE918: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE91D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xE3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FE922: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FE925: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FE929: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588FE92E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FE930: je 0x588fe985
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x588FE932: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE938: cmp dword ptr [ecx + 0x160], 9
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x588FE93F: jle 0x588fe958
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588FE941: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE948: je 0x588fe958
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FE94A: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE950: add ecx, 0x240
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE956: jmp 0x588fe95a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE958: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FE95A: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE960: add edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x64
        // 0x588FE963: push edi
        __asm _emit 0x57
        // 0x588FE964: add ebx, 0x1d9
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xD9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE96A: push ebx
        __asm _emit 0x53
        // 0x588FE96B: add ebp, 0x168
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE971: push ebp
        __asm _emit 0x55
        // 0x588FE972: push ecx
        __asm _emit 0x51
        // 0x588FE973: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FE979: push esi
        __asm _emit 0x56
        // 0x588FE97A: push ecx
        __asm _emit 0x51
        // 0x588FE97B: push edx
        __asm _emit 0x52
        // 0x588FE97C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FE97E: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xF4
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588FE983: jmp 0x588fe987
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FE985: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FE987: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE98C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FE98E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588FE993: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE999: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE99E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588FE9A0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FE9A4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FE9AB: pop ecx
        __asm _emit 0x59
        // 0x588FE9AC: pop edi
        __asm _emit 0x5F
        // 0x588FE9AD: pop esi
        __asm _emit 0x5E
        // 0x588FE9AE: pop ebp
        __asm _emit 0x5D
        // 0x588FE9AF: pop ebx
        __asm _emit 0x5B
        // 0x588FE9B0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
    }
}
