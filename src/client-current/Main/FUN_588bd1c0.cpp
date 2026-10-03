// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588BD1C0 .. +0x70C bytes.
extern "C" __declspec(naked) void FUN_588bd1c0() {
    __asm {
        // 0x588BD1C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588BD1C2: push 0x589887b2
        __asm _emit 0x68
        __asm _emit 0xB2
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BD1C7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD1CD: push eax
        __asm _emit 0x50
        // 0x588BD1CE: push ecx
        __asm _emit 0x51
        // 0x588BD1CF: push ebx
        __asm _emit 0x53
        // 0x588BD1D0: push ebp
        __asm _emit 0x55
        // 0x588BD1D1: push esi
        __asm _emit 0x56
        // 0x588BD1D2: push edi
        __asm _emit 0x57
        // 0x588BD1D3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588BD1D8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588BD1DA: push eax
        __asm _emit 0x50
        // 0x588BD1DB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588BD1DF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD1E5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588BD1E7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588BD1EB: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD1EF: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588BD1F3: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588BD1F7: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588BD1FB: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588BD1FF: push eax
        __asm _emit 0x50
        // 0x588BD200: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588BD204: push ecx
        __asm _emit 0x51
        // 0x588BD205: push edx
        __asm _emit 0x52
        // 0x588BD206: push ebp
        __asm _emit 0x55
        // 0x588BD207: push edi
        __asm _emit 0x57
        // 0x588BD208: push eax
        __asm _emit 0x50
        // 0x588BD209: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588BD20B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x5F
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD210: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BD216: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588BD21B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588BD21D: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x588BD220: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x588BD223: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD22A: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588BD22D: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588BD231: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588BD233: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588BD237: mov dword ptr [esi], 0x589a09f8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xF8
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588BD23D: mov dword ptr [esi + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BD240: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xFA
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD245: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD248: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD24C: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588BD251: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BD253: je 0x588bd291
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588BD255: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BD258: cmp dword ptr [ecx + 0x164], 0x31
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x31
        // 0x588BD25F: jle 0x588bd280
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588BD261: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD267: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588BD269: je 0x588bd280
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588BD26B: mov ecx, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD271: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD273: push ebp
        __asm _emit 0x55
        // 0x588BD274: push edi
        __asm _emit 0x57
        // 0x588BD275: push ecx
        __asm _emit 0x51
        // 0x588BD276: push esi
        __asm _emit 0x56
        // 0x588BD277: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD279: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x49
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BD27E: jmp 0x588bd293
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588BD280: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD282: push ebp
        __asm _emit 0x55
        // 0x588BD283: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BD285: push edi
        __asm _emit 0x57
        // 0x588BD286: push ecx
        __asm _emit 0x51
        // 0x588BD287: push esi
        __asm _emit 0x56
        // 0x588BD288: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD28A: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x49
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BD28F: jmp 0x588bd293
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD291: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD293: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588BD295: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD29A: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588BD29D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xF9
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD2A2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD2A5: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD2A9: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588BD2AE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BD2B0: je 0x588bd2ee
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588BD2B2: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BD2B5: cmp dword ptr [ecx + 0x164], 0x30
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x30
        // 0x588BD2BC: jle 0x588bd2dd
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588BD2BE: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD2C4: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588BD2C6: je 0x588bd2dd
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588BD2C8: mov ecx, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD2CE: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD2D0: push ebp
        __asm _emit 0x55
        // 0x588BD2D1: push edi
        __asm _emit 0x57
        // 0x588BD2D2: push ecx
        __asm _emit 0x51
        // 0x588BD2D3: push esi
        __asm _emit 0x56
        // 0x588BD2D4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD2D6: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BD2DB: jmp 0x588bd2f0
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588BD2DD: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD2DF: push ebp
        __asm _emit 0x55
        // 0x588BD2E0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BD2E2: push edi
        __asm _emit 0x57
        // 0x588BD2E3: push ecx
        __asm _emit 0x51
        // 0x588BD2E4: push esi
        __asm _emit 0x56
        // 0x588BD2E5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD2E7: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x49
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BD2EC: jmp 0x588bd2f0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD2EE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD2F0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588BD2F2: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD2F7: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588BD2FA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xF9
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD2FF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD302: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD306: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588BD30B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BD30D: je 0x588bd34b
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588BD30F: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BD312: cmp dword ptr [ecx + 0x164], 0x33
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        // 0x588BD319: jle 0x588bd33a
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588BD31B: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD321: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588BD323: je 0x588bd33a
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588BD325: mov ecx, dword ptr [ecx + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD32B: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD32D: push ebp
        __asm _emit 0x55
        // 0x588BD32E: push edi
        __asm _emit 0x57
        // 0x588BD32F: push ecx
        __asm _emit 0x51
        // 0x588BD330: push esi
        __asm _emit 0x56
        // 0x588BD331: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD333: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x49
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BD338: jmp 0x588bd34d
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588BD33A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD33C: push ebp
        __asm _emit 0x55
        // 0x588BD33D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BD33F: push edi
        __asm _emit 0x57
        // 0x588BD340: push ecx
        __asm _emit 0x51
        // 0x588BD341: push esi
        __asm _emit 0x56
        // 0x588BD342: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD344: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x49
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BD349: jmp 0x588bd34d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD34B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD34D: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588BD34F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD354: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588BD357: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xF8
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD35C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD35F: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD363: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588BD368: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BD36A: je 0x588bd3a8
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588BD36C: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BD36F: cmp dword ptr [ecx + 0x164], 0x32
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x588BD376: jle 0x588bd397
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588BD378: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD37E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588BD380: je 0x588bd397
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588BD382: mov ecx, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD388: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD38A: push ebp
        __asm _emit 0x55
        // 0x588BD38B: push edi
        __asm _emit 0x57
        // 0x588BD38C: push ecx
        __asm _emit 0x51
        // 0x588BD38D: push esi
        __asm _emit 0x56
        // 0x588BD38E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD390: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x48
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BD395: jmp 0x588bd3aa
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588BD397: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD399: push ebp
        __asm _emit 0x55
        // 0x588BD39A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BD39C: push edi
        __asm _emit 0x57
        // 0x588BD39D: push ecx
        __asm _emit 0x51
        // 0x588BD39E: push esi
        __asm _emit 0x56
        // 0x588BD39F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD3A1: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x48
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BD3A6: jmp 0x588bd3aa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD3A8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD3AA: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588BD3AD: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BD3B2: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD3B7: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588BD3BA: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD3BF: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588BD3C2: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BD3C7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD3CC: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588BD3CF: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD3D4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD3D9: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588BD3DB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xF8
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD3E0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD3E3: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD3E7: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588BD3EC: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BD3EE: je 0x588bd425
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588BD3F0: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BD3F3: cmp dword ptr [ecx + 0x164], 0x35
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x35
        // 0x588BD3FA: jle 0x588bd40e
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BD3FC: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD402: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588BD404: je 0x588bd40e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BD406: mov ecx, dword ptr [ecx + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD40C: jmp 0x588bd410
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD40E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BD410: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD412: lea edx, [ebp + 0x37]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x37
        // 0x588BD415: push edx
        __asm _emit 0x52
        // 0x588BD416: lea edx, [edi + 0x17]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x17
        // 0x588BD419: push edx
        __asm _emit 0x52
        // 0x588BD41A: push ecx
        __asm _emit 0x51
        // 0x588BD41B: push esi
        __asm _emit 0x56
        // 0x588BD41C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD41E: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x48
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588BD423: jmp 0x588bd427
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD425: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD427: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD42C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD42E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD433: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588BD436: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD43B: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD440: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xF8
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD445: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD448: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD44C: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588BD451: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BD453: je 0x588bd49e
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x588BD455: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BD458: cmp dword ptr [ecx + 0x160], 0xa
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x588BD45F: jle 0x588bd473
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BD461: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD467: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588BD469: je 0x588bd473
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BD46B: add ecx, 0x280
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD471: jmp 0x588bd475
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD473: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BD475: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD477: lea edx, [ebp + 0x9f]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD47D: push edx
        __asm _emit 0x52
        // 0x588BD47E: lea edx, [edi + 0x111]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD484: push edx
        __asm _emit 0x52
        // 0x588BD485: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD48B: push ecx
        __asm _emit 0x51
        // 0x588BD48C: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD492: push esi
        __asm _emit 0x56
        // 0x588BD493: push ecx
        __asm _emit 0x51
        // 0x588BD494: push edx
        __asm _emit 0x52
        // 0x588BD495: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD497: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BD49C: jmp 0x588bd4a0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD49E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD4A0: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD4A5: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD4AA: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD4B0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xF7
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD4B5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD4B8: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD4BC: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588BD4C1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588BD4C3: je 0x588bd50e
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x588BD4C5: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BD4C8: cmp dword ptr [ecx + 0x160], 0xb
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x588BD4CF: jle 0x588bd4e3
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BD4D1: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD4D7: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588BD4D9: je 0x588bd4e3
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BD4DB: add ecx, 0x2c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD4E1: jmp 0x588bd4e5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD4E3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BD4E5: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD4E7: lea edx, [ebp + 0x9f]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD4ED: push edx
        __asm _emit 0x52
        // 0x588BD4EE: lea edx, [edi + 0x141]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD4F4: push edx
        __asm _emit 0x52
        // 0x588BD4F5: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD4FB: push ecx
        __asm _emit 0x51
        // 0x588BD4FC: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD502: push esi
        __asm _emit 0x56
        // 0x588BD503: push ecx
        __asm _emit 0x51
        // 0x588BD504: push edx
        __asm _emit 0x52
        // 0x588BD505: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD507: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BD50C: jmp 0x588bd510
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD50E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD510: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD515: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD51A: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD520: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xF7
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD525: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD528: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD52C: mov ebx, 8
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD531: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588BD535: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BD537: je 0x588bd57f
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x588BD539: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BD53C: cmp dword ptr [ecx + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588BD543: jle 0x588bd557
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BD545: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD54B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BD54D: je 0x588bd557
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BD54F: add ecx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD555: jmp 0x588bd559
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD557: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BD559: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD55B: lea edx, [ebp + 0x33]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x33
        // 0x588BD55E: push edx
        __asm _emit 0x52
        // 0x588BD55F: lea edx, [edi + 0x173]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD565: push edx
        __asm _emit 0x52
        // 0x588BD566: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD56C: push ecx
        __asm _emit 0x51
        // 0x588BD56D: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD573: push esi
        __asm _emit 0x56
        // 0x588BD574: push ecx
        __asm _emit 0x51
        // 0x588BD575: push edx
        __asm _emit 0x52
        // 0x588BD576: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD578: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BD57D: jmp 0x588bd581
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD57F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD581: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD586: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD58B: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD591: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xF6
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD596: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD599: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD59D: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588BD5A2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BD5A4: je 0x588bd5ee
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x588BD5A6: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588BD5A9: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD5AF: jle 0x588bd5c3
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BD5B1: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD5B7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588BD5B9: je 0x588bd5c3
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BD5BB: add ecx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD5C1: jmp 0x588bd5c5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD5C3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BD5C5: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD5C7: lea edx, [ebp + 0x93]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD5CD: push edx
        __asm _emit 0x52
        // 0x588BD5CE: lea edx, [edi + 0x173]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD5D4: push edx
        __asm _emit 0x52
        // 0x588BD5D5: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD5DB: push ecx
        __asm _emit 0x51
        // 0x588BD5DC: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD5E2: push esi
        __asm _emit 0x56
        // 0x588BD5E3: push ecx
        __asm _emit 0x51
        // 0x588BD5E4: push edx
        __asm _emit 0x52
        // 0x588BD5E5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD5E7: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x07
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BD5EC: jmp 0x588bd5f0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD5EE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD5F0: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD5F5: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD5FA: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD600: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xF6
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD605: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD608: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD60C: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x588BD611: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BD613: je 0x588bd645
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588BD615: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BD617: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BD619: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588BD61E: lea ecx, [ebp + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD624: push ecx
        __asm _emit 0x51
        // 0x588BD625: lea edx, [edi + 0xd1]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD62B: push edx
        __asm _emit 0x52
        // 0x588BD62C: lea ecx, [ebp + 0x39]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x39
        // 0x588BD62F: push ecx
        __asm _emit 0x51
        // 0x588BD630: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD636: lea edx, [edi + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x44
        // 0x588BD639: push edx
        __asm _emit 0x52
        // 0x588BD63A: push ecx
        __asm _emit 0x51
        // 0x588BD63B: push esi
        __asm _emit 0x56
        // 0x588BD63C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD63E: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xA9
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD643: jmp 0x588bd647
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD645: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD647: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD64C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD651: mov dword ptr [esi + 0x3d4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD657: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xF5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD65C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD65F: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD663: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x588BD668: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BD66A: je 0x588bd69f
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x588BD66C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BD66E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BD670: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588BD675: lea edx, [ebp + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD67B: push edx
        __asm _emit 0x52
        // 0x588BD67C: lea ecx, [edi + 0x15e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD682: push ecx
        __asm _emit 0x51
        // 0x588BD683: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD689: lea edx, [ebp + 0x39]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x39
        // 0x588BD68C: push edx
        __asm _emit 0x52
        // 0x588BD68D: add edi, 0xd7
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD693: push edi
        __asm _emit 0x57
        // 0x588BD694: push ecx
        __asm _emit 0x51
        // 0x588BD695: push esi
        __asm _emit 0x56
        // 0x588BD696: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD698: call 0x58907fd0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xA9
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD69D: jmp 0x588bd6a1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD69F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD6A1: lea edx, [ebp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x38
        // 0x588BD6A4: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588BD6A9: mov dword ptr [esi + 0x3d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD6AF: lea ebx, [esi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x588BD6B2: mov dword ptr [esp + 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD6B6: mov dword ptr [esp + 0x3c], 7
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD6BE: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588BD6C0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xF5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD6C5: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588BD6C7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD6CA: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588BD6CE: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x588BD6D3: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588BD6D5: je 0x588bd74e
        __asm _emit 0x74
        __asm _emit 0x77
        // 0x588BD6D7: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588BD6DA: cmp dword ptr [eax + 0x164], 0x3e
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3E
        // 0x588BD6E1: jle 0x588bd6f5
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588BD6E3: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD6E9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BD6EB: je 0x588bd6f5
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BD6ED: mov ebp, dword ptr [eax + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD6F3: jmp 0x588bd6f7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD6F5: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588BD6F7: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588BD6FB: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588BD6FF: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD701: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BD703: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588BD705: push eax
        __asm _emit 0x50
        // 0x588BD706: add ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x1F
        // 0x588BD709: push ecx
        __asm _emit 0x51
        // 0x588BD70A: push esi
        __asm _emit 0x56
        // 0x588BD70B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588BD70D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x5A
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD712: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BD718: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588BD71B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588BD71D: je 0x588bd746
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588BD71F: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x588BD722: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x588BD725: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x588BD728: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x588BD72B: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x588BD72E: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588BD731: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588BD734: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588BD737: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588BD73A: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588BD73D: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x588BD740: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588BD743: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x588BD746: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588BD74A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588BD74C: jmp 0x588bd750
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD74E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588BD750: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD755: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD75A: mov dword ptr [ebx], ecx
        __asm _emit 0x89
        __asm _emit 0x0B
        // 0x588BD75C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD761: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588BD763: add dword ptr [esp + 0x40], 0xd
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x0D
        // 0x588BD768: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD76D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BD771: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588BD774: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588BD779: jne 0x588bd6be
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BD77F: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD784: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xF4
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD789: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD78C: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588BD790: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x588BD795: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BD797: je 0x588bd7eb
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x588BD799: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD79F: cmp dword ptr [ecx + 0x160], 6
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x588BD7A6: jle 0x588bd7bf
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588BD7A8: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD7AF: je 0x588bd7bf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588BD7B1: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD7B7: add edx, 0x180
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD7BD: jmp 0x588bd7c1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD7BF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BD7C1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD7C3: lea ecx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588BD7C6: push ecx
        __asm _emit 0x51
        // 0x588BD7C7: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588BD7CB: add ecx, 0x107
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD7D1: push ecx
        __asm _emit 0x51
        // 0x588BD7D2: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD7D8: push edx
        __asm _emit 0x52
        // 0x588BD7D9: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD7DF: push esi
        __asm _emit 0x56
        // 0x588BD7E0: push edx
        __asm _emit 0x52
        // 0x588BD7E1: push ecx
        __asm _emit 0x51
        // 0x588BD7E2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD7E4: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x05
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BD7E9: jmp 0x588bd7ed
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD7EB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD7ED: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD7F2: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588BD7F7: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD7FD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xF4
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD802: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD805: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588BD809: mov byte ptr [esp + 0x20], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0E
        // 0x588BD80E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588BD810: je 0x588bd864
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x588BD812: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD818: cmp dword ptr [ecx + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588BD81F: jle 0x588bd838
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588BD821: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD828: je 0x588bd838
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588BD82A: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD830: add edx, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD836: jmp 0x588bd83a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD838: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BD83A: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588BD83E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588BD840: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588BD843: push ebp
        __asm _emit 0x55
        // 0x588BD844: add ecx, 0x141
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD84A: push ecx
        __asm _emit 0x51
        // 0x588BD84B: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD851: push edx
        __asm _emit 0x52
        // 0x588BD852: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD858: push esi
        __asm _emit 0x56
        // 0x588BD859: push edx
        __asm _emit 0x52
        // 0x588BD85A: push ecx
        __asm _emit 0x51
        // 0x588BD85B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588BD85D: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x05
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588BD862: jmp 0x588bd866
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588BD864: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BD866: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD86C: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD872: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD877: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588BD87B: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD881: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588BD883: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588BD887: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588BD88B: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588BD88F: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD894: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588BD897: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD89C: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588BD89F: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588BD8A3: mov byte ptr [esi + 0xac], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD8AA: mov dword ptr [esi + 0x3d0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD8B4: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588BD8B6: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588BD8BA: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD8C1: pop ecx
        __asm _emit 0x59
        // 0x588BD8C2: pop edi
        __asm _emit 0x5F
        // 0x588BD8C3: pop esi
        __asm _emit 0x5E
        // 0x588BD8C4: pop ebp
        __asm _emit 0x5D
        // 0x588BD8C5: pop ebx
        __asm _emit 0x5B
        // 0x588BD8C6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588BD8C9: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
