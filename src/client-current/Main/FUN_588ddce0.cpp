// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 808 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ddce0.

// Ghidra body range 0x588DDCE0..0x588DE008; 808 mapped bytes.
extern "C" __declspec(naked) void FUN_588ddce0_segment_00() {
    __asm {
        // 0x588DDCE0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588DDCE2: push 0x589809ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x09
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DDCE7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDCED: push eax
        __asm _emit 0x50
        // 0x588DDCEE: push ecx
        __asm _emit 0x51
        // 0x588DDCEF: push ebx
        __asm _emit 0x53
        // 0x588DDCF0: push ebp
        __asm _emit 0x55
        // 0x588DDCF1: push esi
        __asm _emit 0x56
        // 0x588DDCF2: push edi
        __asm _emit 0x57
        // 0x588DDCF3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588DDCF8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588DDCFA: push eax
        __asm _emit 0x50
        // 0x588DDCFB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DDCFF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDD05: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DDD07: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588DDD09: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x588DDD0C: cmp dword ptr [esi + 0x1364], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDD12: jne 0x588ddd48
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x588DDD14: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDD19: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xEF
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588DDD1E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588DDD21: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DDD25: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DDD29: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588DDD2B: je 0x588ddd3c
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588DDD2D: push ebx
        __asm _emit 0x53
        // 0x588DDD2E: push 0x589a10b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588DDD33: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588DDD35: call 0x58906de0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DDD3A: jmp 0x588ddd3e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DDD3C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DDD3E: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DDD42: mov dword ptr [esi + 0x1364], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDD48: cmp dword ptr [esi + 0x1358], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDD4E: jne 0x588dddad
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x588DDD50: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588DDD52: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xEE
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588DDD57: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588DDD59: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588DDD5C: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DDD60: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDD68: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588DDD6A: je 0x588ddda1
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588DDD6C: mov ax, word ptr [esi + 0x42ae]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAE
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDD73: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588DDD76: sub ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x32
        // 0x588DDD7A: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x588DDD7D: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588DDD80: push edx
        __asm _emit 0x52
        // 0x588DDD81: push ebx
        __asm _emit 0x53
        // 0x588DDD82: push ebx
        __asm _emit 0x53
        // 0x588DDD83: sub eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x3F
        // 0x588DDD86: sub ecx, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x7F
        // 0x588DDD89: push eax
        __asm _emit 0x50
        // 0x588DDD8A: push ecx
        __asm _emit 0x51
        // 0x588DDD8B: push esi
        __asm _emit 0x56
        // 0x588DDD8C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DDD8E: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DDD93: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DDD99: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588DDD9C: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x588DDD9F: jmp 0x588ddda3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DDDA1: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588DDDA3: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DDDA7: mov dword ptr [esi + 0x1358], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDDAD: cmp dword ptr [esi + 0x135c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDDB3: jne 0x588dde0d
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x588DDDB5: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588DDDB7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xEE
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588DDDBC: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588DDDBE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588DDDC1: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DDDC5: mov dword ptr [esp + 0x20], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDDCD: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588DDDCF: je 0x588dde01
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588DDDD1: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588DDDD4: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588DDDD7: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDDDC: push ebx
        __asm _emit 0x53
        // 0x588DDDDD: push ebx
        __asm _emit 0x53
        // 0x588DDDDE: sub eax, 0x122
        __asm _emit 0x2D
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDDE3: sub ecx, 0x82
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDDE9: push eax
        __asm _emit 0x50
        // 0x588DDDEA: push ecx
        __asm _emit 0x51
        // 0x588DDDEB: push esi
        __asm _emit 0x56
        // 0x588DDDEC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DDDEE: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DDDF3: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DDDF9: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588DDDFC: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x588DDDFF: jmp 0x588dde03
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DDE01: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588DDE03: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DDE07: mov dword ptr [esi + 0x135c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE0D: mov eax, dword ptr [esi + 0x1358]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE13: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE18: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DDE1C: mov eax, dword ptr [esi + 0x135c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE22: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588DDE24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DDE28: mov ecx, dword ptr [esi + 0x1358]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE2E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE33: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DDE38: mov ecx, dword ptr [esi + 0x135c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE3E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE43: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x4E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DDE48: mov eax, dword ptr [esi + 0x1358]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE4E: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE53: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DDE57: mov eax, dword ptr [esi + 0x135c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE5D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588DDE5F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DDE63: cmp dword ptr [esi + 0x1360], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE69: jne 0x588ddecd
        __asm _emit 0x75
        __asm _emit 0x62
        // 0x588DDE6B: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588DDE6D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xED
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588DDE72: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588DDE74: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588DDE77: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DDE7B: mov dword ptr [esp + 0x20], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE83: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588DDE85: je 0x588ddec1
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x588DDE87: mov ax, word ptr [esi + 0x42ae]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAE
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDE8E: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588DDE91: sub ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x32
        // 0x588DDE95: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x588DDE98: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588DDE9B: push edx
        __asm _emit 0x52
        // 0x588DDE9C: push ebx
        __asm _emit 0x53
        // 0x588DDE9D: push ebx
        __asm _emit 0x53
        // 0x588DDE9E: sub eax, 0x122
        __asm _emit 0x2D
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDEA3: sub ecx, 0x82
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDEA9: push eax
        __asm _emit 0x50
        // 0x588DDEAA: push ecx
        __asm _emit 0x51
        // 0x588DDEAB: push esi
        __asm _emit 0x56
        // 0x588DDEAC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DDEAE: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DDEB3: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DDEB9: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588DDEBC: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x588DDEBF: jmp 0x588ddec3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DDEC1: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588DDEC3: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DDEC7: mov dword ptr [esi + 0x1360], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDECD: mov eax, dword ptr [esi + 0x1360]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDED3: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDED8: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DDEDC: mov ecx, dword ptr [esi + 0x1360]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDEE2: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDEE7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x4E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DDEEC: mov eax, dword ptr [esi + 0x1360]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDEF2: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDEF7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DDEFB: mov eax, dword ptr [esi + 0x1364]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDF01: cmp dword ptr [eax + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDF07: jle 0x588ddf13
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x588DDF09: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDF0F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588DDF11: jne 0x588ddf15
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588DDF13: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DDF15: mov ecx, dword ptr [esi + 0x1358]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDF1B: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DDF1E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588DDF20: je 0x588ddf4a
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DDF22: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DDF25: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DDF28: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DDF2B: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DDF2E: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DDF31: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DDF33: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DDF36: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DDF38: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DDF3B: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DDF3E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DDF41: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DDF44: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DDF47: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DDF4A: mov eax, dword ptr [esi + 0x1364]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDF50: cmp dword ptr [eax + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588DDF57: jle 0x588ddf68
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588DDF59: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDF5F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588DDF61: je 0x588ddf68
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588DDF63: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x588DDF66: jmp 0x588ddf6a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DDF68: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DDF6A: mov ecx, dword ptr [esi + 0x135c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDF70: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DDF73: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588DDF75: je 0x588ddf9f
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DDF77: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DDF7A: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DDF7D: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DDF80: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DDF83: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DDF86: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DDF88: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DDF8B: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DDF8D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DDF90: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DDF93: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DDF96: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DDF99: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DDF9C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DDF9F: mov eax, dword ptr [esi + 0x1364]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDFA5: cmp dword ptr [eax + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588DDFAC: jle 0x588ddfbd
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588DDFAE: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDFB4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588DDFB6: je 0x588ddfbd
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588DDFB8: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x588DDFBB: jmp 0x588ddfbf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DDFBD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DDFBF: mov esi, dword ptr [esi + 0x1360]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDFC5: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588DDFC8: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588DDFCA: je 0x588ddff4
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DDFCC: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x588DDFCF: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588DDFD2: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DDFD5: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DDFD8: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x588DDFDB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DDFDD: lea ecx, [esi + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x588DDFE0: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DDFE2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DDFE5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DDFE8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DDFEB: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DDFEE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DDFF1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DDFF4: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DDFF8: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DDFFF: pop ecx
        __asm _emit 0x59
        // 0x588DE000: pop edi
        __asm _emit 0x5F
        // 0x588DE001: pop esi
        __asm _emit 0x5E
        // 0x588DE002: pop ebp
        __asm _emit 0x5D
        // 0x588DE003: pop ebx
        __asm _emit 0x5B
        // 0x588DE004: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588DE007: ret
        __asm _emit 0xC3
    }
}
