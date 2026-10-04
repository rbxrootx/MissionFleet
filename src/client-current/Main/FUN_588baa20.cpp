// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588BAA20 .. +0x6C9 bytes.
// Source symbol alias: FUN_588baa20.
extern "C" __declspec(naked) void FUN_588baa20() {
    __asm {
        // 0x588BAA20: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588BAA22: push 0x58988616
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BAA27: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAA2D: push eax
        __asm _emit 0x50
        // 0x588BAA2E: push ecx
        __asm _emit 0x51
        // 0x588BAA2F: push ebx
        __asm _emit 0x53
        // 0x588BAA30: push ebp
        __asm _emit 0x55
        // 0x588BAA31: push esi
        __asm _emit 0x56
        // 0x588BAA32: push edi
        __asm _emit 0x57
        // 0x588BAA33: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588BAA38: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588BAA3A: push eax
        __asm _emit 0x50
        // 0x588BAA3B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588BAA3F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAA45: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588BAA47: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588BAA4B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BAA4F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588BAA53: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588BAA57: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588BAA5B: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588BAA5F: push eax
        __asm _emit 0x50
        // 0x588BAA60: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588BAA64: push ecx
        __asm _emit 0x51
        // 0x588BAA65: push edx
        __asm _emit 0x52
        // 0x588BAA66: push edi
        __asm _emit 0x57
        // 0x588BAA67: push ebp
        __asm _emit 0x55
        // 0x588BAA68: push eax
        __asm _emit 0x50
        // 0x588BAA69: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588BAA6B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BAA70: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BAA76: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588BAA7B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588BAA7D: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588BAA80: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588BAA83: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAA8A: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588BAA8D: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAA92: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588BAA96: mov dword ptr [esi], 0x589a09a4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588BAA9C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x21
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BAAA1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BAAA4: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BAAA8: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588BAAAD: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BAAAF: je 0x588baac2
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588BAAB1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588BAAB3: push ebx
        __asm _emit 0x53
        // 0x588BAAB4: push 0x589a09c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588BAAB9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BAABB: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588BAAC0: jmp 0x588baac4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAAC2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BAAC4: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588BAAC6: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BAACB: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588BAACE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x21
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BAAD3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BAAD6: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BAADA: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588BAADF: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BAAE1: je 0x588bab1f
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588BAAE3: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BAAE6: cmp dword ptr [ecx + 0x160], 0xa
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x588BAAED: jle 0x588bab0e
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588BAAEF: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAAF5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588BAAF7: je 0x588bab0e
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588BAAF9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BAAFB: push edi
        __asm _emit 0x57
        // 0x588BAAFC: add ecx, 0x280
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAB02: push ebp
        __asm _emit 0x55
        // 0x588BAB03: push ecx
        __asm _emit 0x51
        // 0x588BAB04: push esi
        __asm _emit 0x56
        // 0x588BAB05: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BAB07: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x9F
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BAB0C: jmp 0x588bab21
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588BAB0E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BAB10: push edi
        __asm _emit 0x57
        // 0x588BAB11: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BAB13: push ebp
        __asm _emit 0x55
        // 0x588BAB14: push ecx
        __asm _emit 0x51
        // 0x588BAB15: push esi
        __asm _emit 0x56
        // 0x588BAB16: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BAB18: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x9F
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BAB1D: jmp 0x588bab21
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAB1F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BAB21: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAB26: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BAB28: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BAB2D: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588BAB30: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BAB35: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588BAB38: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAB3D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BAB41: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAB46: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x21
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BAB4B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BAB4E: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BAB52: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588BAB57: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BAB59: je 0x588babb1
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x588BAB5B: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BAB5E: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAB64: jle 0x588bab74
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x588BAB66: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAB6C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588BAB6E: je 0x588bab74
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588BAB70: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588BAB72: jmp 0x588bab76
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAB74: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BAB76: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAB7C: cmp dword ptr [ecx + 0x170], 0x19
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x588BAB83: jle 0x588bab98
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588BAB85: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAB8B: je 0x588bab98
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588BAB8D: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAB93: mov ecx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x64
        // 0x588BAB96: jmp 0x588bab9a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAB98: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BAB9A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BAB9C: push edi
        __asm _emit 0x57
        // 0x588BAB9D: push ebp
        __asm _emit 0x55
        // 0x588BAB9E: push edx
        __asm _emit 0x52
        // 0x588BAB9F: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BABA5: push esi
        __asm _emit 0x56
        // 0x588BABA6: push edx
        __asm _emit 0x52
        // 0x588BABA7: push ecx
        __asm _emit 0x51
        // 0x588BABA8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BABAA: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x31
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BABAF: jmp 0x588babb3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BABB1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BABB3: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BABB8: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BABBD: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588BABC0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BABC5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BABC8: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BABCC: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588BABD1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BABD3: je 0x588bac2d
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x588BABD5: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BABD8: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588BABDF: jle 0x588babf0
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588BABE1: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BABE7: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588BABE9: je 0x588babf0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588BABEB: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x40
        // 0x588BABEE: jmp 0x588babf2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BABF0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BABF2: mov edx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BABF8: cmp dword ptr [edx + 0x170], 0x19
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x588BABFF: jle 0x588bac14
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588BAC01: cmp dword ptr [edx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAC07: je 0x588bac14
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588BAC09: mov edx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAC0F: mov edx, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x64
        // 0x588BAC12: jmp 0x588bac16
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAC14: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BAC16: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BAC18: push edi
        __asm _emit 0x57
        // 0x588BAC19: push ebp
        __asm _emit 0x55
        // 0x588BAC1A: push ecx
        __asm _emit 0x51
        // 0x588BAC1B: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAC21: push esi
        __asm _emit 0x56
        // 0x588BAC22: push ecx
        __asm _emit 0x51
        // 0x588BAC23: push edx
        __asm _emit 0x52
        // 0x588BAC24: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BAC26: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x31
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BAC2B: jmp 0x588bac2f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAC2D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BAC2F: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAC34: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BAC39: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAC3F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x20
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BAC44: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BAC47: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BAC4B: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAC50: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588BAC54: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BAC56: je 0x588bacb1
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x588BAC58: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BAC5B: cmp dword ptr [ecx + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588BAC62: jle 0x588bac73
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588BAC64: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAC6A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BAC6C: je 0x588bac73
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588BAC6E: sub ecx, -0x80
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x80
        // 0x588BAC71: jmp 0x588bac75
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAC73: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BAC75: mov edx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAC7B: cmp dword ptr [edx + 0x170], 0x19
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x588BAC82: jle 0x588bac98
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588BAC84: cmp dword ptr [edx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAC8B: je 0x588bac98
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588BAC8D: mov edx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAC93: mov edx, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x64
        // 0x588BAC96: jmp 0x588bac9a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAC98: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BAC9A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BAC9C: push edi
        __asm _emit 0x57
        // 0x588BAC9D: push ebp
        __asm _emit 0x55
        // 0x588BAC9E: push ecx
        __asm _emit 0x51
        // 0x588BAC9F: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BACA5: push esi
        __asm _emit 0x56
        // 0x588BACA6: push ecx
        __asm _emit 0x51
        // 0x588BACA7: push edx
        __asm _emit 0x52
        // 0x588BACA8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BACAA: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x30
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BACAF: jmp 0x588bacb3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BACB1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BACB3: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BACB8: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BACBD: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BACC3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x1F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BACC8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BACCB: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BACCF: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588BACD4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BACD6: je 0x588bad34
        __asm _emit 0x74
        __asm _emit 0x5C
        // 0x588BACD8: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BACDB: cmp dword ptr [ecx + 0x160], 4
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588BACE2: jle 0x588bacf6
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BACE4: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BACEA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BACEC: je 0x588bacf6
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BACEE: add ecx, 0x100
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BACF4: jmp 0x588bacf8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BACF6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BACF8: mov edx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BACFE: cmp dword ptr [edx + 0x170], 0x19
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x588BAD05: jle 0x588bad1b
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588BAD07: cmp dword ptr [edx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAD0E: je 0x588bad1b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588BAD10: mov edx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAD16: mov edx, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x64
        // 0x588BAD19: jmp 0x588bad1d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAD1B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BAD1D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BAD1F: push edi
        __asm _emit 0x57
        // 0x588BAD20: push ebp
        __asm _emit 0x55
        // 0x588BAD21: push ecx
        __asm _emit 0x51
        // 0x588BAD22: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAD28: push esi
        __asm _emit 0x56
        // 0x588BAD29: push ecx
        __asm _emit 0x51
        // 0x588BAD2A: push edx
        __asm _emit 0x52
        // 0x588BAD2B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BAD2D: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x30
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BAD32: jmp 0x588bad36
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAD34: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BAD36: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAD3B: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BAD40: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588BAD43: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x1F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BAD48: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BAD4B: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BAD4F: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588BAD54: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BAD56: je 0x588badb3
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x588BAD58: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BAD5B: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAD61: jle 0x588bad75
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BAD63: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAD69: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BAD6B: je 0x588bad75
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BAD6D: add ecx, 0x140
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAD73: jmp 0x588bad77
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAD75: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BAD77: mov edx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAD7D: cmp dword ptr [edx + 0x170], 0x19
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x588BAD84: jle 0x588bad9a
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588BAD86: cmp dword ptr [edx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAD8D: je 0x588bad9a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588BAD8F: mov edx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAD95: mov edx, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x64
        // 0x588BAD98: jmp 0x588bad9c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAD9A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BAD9C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BAD9E: push edi
        __asm _emit 0x57
        // 0x588BAD9F: push ebp
        __asm _emit 0x55
        // 0x588BADA0: push ecx
        __asm _emit 0x51
        // 0x588BADA1: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BADA7: push esi
        __asm _emit 0x56
        // 0x588BADA8: push ecx
        __asm _emit 0x51
        // 0x588BADA9: push edx
        __asm _emit 0x52
        // 0x588BADAA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BADAC: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x2F
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BADB1: jmp 0x588badb5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BADB3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BADB5: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BADBA: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BADBF: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588BADC2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x1E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BADC7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BADCA: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BADCE: mov ebx, 8
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BADD3: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588BADD7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BADD9: je 0x588bae37
        __asm _emit 0x74
        __asm _emit 0x5C
        // 0x588BADDB: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BADDE: cmp dword ptr [ecx + 0x160], 6
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x588BADE5: jle 0x588badf9
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BADE7: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BADED: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BADEF: je 0x588badf9
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BADF1: add ecx, 0x180
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BADF7: jmp 0x588badfb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BADF9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BADFB: mov edx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAE01: cmp dword ptr [edx + 0x170], 0x19
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x588BAE08: jle 0x588bae1e
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588BAE0A: cmp dword ptr [edx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAE11: je 0x588bae1e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588BAE13: mov edx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAE19: mov edx, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x64
        // 0x588BAE1C: jmp 0x588bae20
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAE1E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BAE20: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BAE22: push edi
        __asm _emit 0x57
        // 0x588BAE23: push ebp
        __asm _emit 0x55
        // 0x588BAE24: push ecx
        __asm _emit 0x51
        // 0x588BAE25: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAE2B: push esi
        __asm _emit 0x56
        // 0x588BAE2C: push ecx
        __asm _emit 0x51
        // 0x588BAE2D: push edx
        __asm _emit 0x52
        // 0x588BAE2E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BAE30: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x2F
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BAE35: jmp 0x588bae39
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAE37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BAE39: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAE3E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BAE43: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588BAE46: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x1E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BAE4B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BAE4E: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BAE52: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588BAE57: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BAE59: je 0x588baeb7
        __asm _emit 0x74
        __asm _emit 0x5C
        // 0x588BAE5B: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BAE5E: cmp dword ptr [ecx + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588BAE65: jle 0x588bae79
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BAE67: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAE6D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BAE6F: je 0x588bae79
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BAE71: add ecx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAE77: jmp 0x588bae7b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAE79: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BAE7B: mov edx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAE81: cmp dword ptr [edx + 0x170], 0x19
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x588BAE88: jle 0x588bae9e
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588BAE8A: cmp dword ptr [edx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAE91: je 0x588bae9e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588BAE93: mov edx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAE99: mov edx, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x64
        // 0x588BAE9C: jmp 0x588baea0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAE9E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BAEA0: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BAEA2: push edi
        __asm _emit 0x57
        // 0x588BAEA3: push ebp
        __asm _emit 0x55
        // 0x588BAEA4: push ecx
        __asm _emit 0x51
        // 0x588BAEA5: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAEAB: push esi
        __asm _emit 0x56
        // 0x588BAEAC: push ecx
        __asm _emit 0x51
        // 0x588BAEAD: push edx
        __asm _emit 0x52
        // 0x588BAEAE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BAEB0: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x2E
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BAEB5: jmp 0x588baeb9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAEB7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BAEB9: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAEBE: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BAEC3: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588BAEC6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x1D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588BAECB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BAECE: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BAED2: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x588BAED7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BAED9: je 0x588baf37
        __asm _emit 0x74
        __asm _emit 0x5C
        // 0x588BAEDB: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BAEDE: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAEE4: jle 0x588baef8
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BAEE6: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAEEC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BAEEE: je 0x588baef8
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BAEF0: add ecx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAEF6: jmp 0x588baefa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAEF8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BAEFA: mov edx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAF00: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588BAF02: cmp dword ptr [edx + 0x170], 0x19
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x588BAF09: jle 0x588baf1e
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588BAF0B: cmp dword ptr [edx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAF11: je 0x588baf1e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588BAF13: mov edx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAF19: mov edx, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x64
        // 0x588BAF1C: jmp 0x588baf20
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAF1E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BAF20: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BAF22: push edi
        __asm _emit 0x57
        // 0x588BAF23: push ebp
        __asm _emit 0x55
        // 0x588BAF24: push ecx
        __asm _emit 0x51
        // 0x588BAF25: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BAF2B: push esi
        __asm _emit 0x56
        // 0x588BAF2C: push ecx
        __asm _emit 0x51
        // 0x588BAF2D: push edx
        __asm _emit 0x52
        // 0x588BAF2E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BAF30: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x2E
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BAF35: jmp 0x588baf3b
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588BAF37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BAF39: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588BAF3B: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x588BAF3E: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588BAF41: mov dword ptr [edx + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x70
        // 0x588BAF44: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588BAF47: mov dword ptr [eax + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x70
        // 0x588BAF4A: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588BAF4D: mov dword ptr [ecx + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x70
        // 0x588BAF50: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588BAF53: mov dword ptr [edx + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x70
        // 0x588BAF56: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588BAF59: mov dword ptr [eax + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x70
        // 0x588BAF5C: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588BAF5F: mov dword ptr [ecx + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x70
        // 0x588BAF62: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAF68: mov dword ptr [edx + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x70
        // 0x588BAF6B: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAF71: mov dword ptr [eax + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x70
        // 0x588BAF74: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588BAF77: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAF7C: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAF82: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588BAF87: jle 0x588baf9a
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588BAF89: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAF8F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BAF91: je 0x588baf9a
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BAF93: add eax, 0xc0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAF98: jmp 0x588baf9c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAF9A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BAF9C: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588BAF9F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588BAFA1: push eax
        __asm _emit 0x50
        // 0x588BAFA2: call 0x5875dd20
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x2D
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BAFA7: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588BAFAA: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAFB0: jle 0x588bafc3
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588BAFB2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAFB8: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BAFBA: je 0x588bafc3
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BAFBC: add eax, 0xc0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAFC1: jmp 0x588bafc5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAFC3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BAFC5: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAFCB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588BAFCD: push eax
        __asm _emit 0x50
        // 0x588BAFCE: call 0x5875dd20
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x2D
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BAFD3: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588BAFD6: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAFDC: jle 0x588bafef
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588BAFDE: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAFE4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BAFE6: je 0x588bafef
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BAFE8: add eax, 0xc0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAFED: jmp 0x588baff1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BAFEF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BAFF1: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BAFF7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588BAFF9: push eax
        __asm _emit 0x50
        // 0x588BAFFA: call 0x5875dd20
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x2D
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BAFFF: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588BB002: mov edi, 9
        __asm _emit 0xBF
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB007: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB00D: jle 0x588bb020
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588BB00F: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB015: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BB017: je 0x588bb020
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BB019: add eax, 0x240
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB01E: jmp 0x588bb022
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB020: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB022: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588BB025: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588BB027: push eax
        __asm _emit 0x50
        // 0x588BB028: call 0x5875dd20
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x2C
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BB02D: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588BB030: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB036: jle 0x588bb049
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588BB038: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB03E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BB040: je 0x588bb049
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BB042: add eax, 0x240
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB047: jmp 0x588bb04b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB049: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB04B: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588BB04E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588BB050: push eax
        __asm _emit 0x50
        // 0x588BB051: call 0x5875dd20
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x2C
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BB056: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588BB059: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB05F: jle 0x588bb072
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588BB061: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB067: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BB069: je 0x588bb072
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BB06B: add eax, 0x240
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB070: jmp 0x588bb074
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB072: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB074: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588BB077: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588BB079: push eax
        __asm _emit 0x50
        // 0x588BB07A: call 0x5875dd20
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x2C
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BB07F: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588BB082: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB088: jle 0x588bb09b
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588BB08A: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB090: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BB092: je 0x588bb09b
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BB094: add eax, 0x240
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB099: jmp 0x588bb09d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB09B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB09D: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588BB0A0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588BB0A2: push eax
        __asm _emit 0x50
        // 0x588BB0A3: call 0x5875dd20
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x2C
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BB0A8: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588BB0AB: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB0B1: jle 0x588bb0c4
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588BB0B3: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB0B9: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BB0BB: je 0x588bb0c4
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588BB0BD: add eax, 0x240
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB0C2: jmp 0x588bb0c6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BB0C4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB0C6: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588BB0C9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588BB0CB: push eax
        __asm _emit 0x50
        // 0x588BB0CC: call 0x5875dd20
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x2C
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BB0D1: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588BB0D3: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588BB0D7: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB0DE: pop ecx
        __asm _emit 0x59
        // 0x588BB0DF: pop edi
        __asm _emit 0x5F
        // 0x588BB0E0: pop esi
        __asm _emit 0x5E
        // 0x588BB0E1: pop ebp
        __asm _emit 0x5D
        // 0x588BB0E2: pop ebx
        __asm _emit 0x5B
        // 0x588BB0E3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588BB0E6: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
