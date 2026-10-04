// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B7130 .. +0x12F bytes.
// Source symbol alias: FUN_587b7130.
extern "C" __declspec(naked) void FUN_587b7130() {
    __asm {
        // 0x587B7130: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587B7132: push 0x5898103e
        __asm _emit 0x68
        __asm _emit 0x3E
        __asm _emit 0x10
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7137: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B713D: push eax
        __asm _emit 0x50
        // 0x587B713E: push ecx
        __asm _emit 0x51
        // 0x587B713F: push ebx
        __asm _emit 0x53
        // 0x587B7140: push ebp
        __asm _emit 0x55
        // 0x587B7141: push esi
        __asm _emit 0x56
        // 0x587B7142: push edi
        __asm _emit 0x57
        // 0x587B7143: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B7148: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B714A: push eax
        __asm _emit 0x50
        // 0x587B714B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B714F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7155: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B7157: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B715B: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587B715F: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587B7163: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B7167: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B716B: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B716F: push eax
        __asm _emit 0x50
        // 0x587B7170: push edi
        __asm _emit 0x57
        // 0x587B7171: push ebp
        __asm _emit 0x55
        // 0x587B7172: push ecx
        __asm _emit 0x51
        // 0x587B7173: push edx
        __asm _emit 0x52
        // 0x587B7174: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B7176: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xD8
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587B717B: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B717F: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587B7181: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B7185: mov dword ptr [esi], 0x5899a118
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0xA1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B718B: mov dword ptr [esi + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x58
        // 0x587B718E: mov dword ptr [esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x587B7191: mov dword ptr [esi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587B7194: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587B7196: jne 0x587b7236
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B719C: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B71A0: lea eax, [edi - 7]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xF9
        // 0x587B71A3: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x587B71A5: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587B71A8: ja 0x587b71e2
        __asm _emit 0x77
        __asm _emit 0x38
        // 0x587B71AA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x5A
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B71AF: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587B71B1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B71B4: mov dword ptr [esp + 0x40], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587B71B8: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587B71BD: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587B71BF: je 0x587b7230
        __asm _emit 0x74
        __asm _emit 0x6F
        // 0x587B71C1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587B71C3: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x587B71C6: setg cl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC1
        // 0x587B71C9: add ecx, 0x2d
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x2D
        // 0x587B71CC: push ecx
        __asm _emit 0x51
        // 0x587B71CD: mov ecx, dword ptr [0x58a248d0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B71D3: call 0x58731810
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xA6
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587B71D8: push eax
        __asm _emit 0x50
        // 0x587B71D9: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587B71DB: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B71E0: jmp 0x587b7232
        __asm _emit 0xEB
        __asm _emit 0x50
        // 0x587B71E2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x5A
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B71E7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B71EA: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587B71EE: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x587B71F3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587B71F5: je 0x587b7230
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x587B71F7: mov edx, dword ptr [0x58a246dc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B71FD: cmp dword ptr [edx + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xBA
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7203: jle 0x587b7224
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x587B7205: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587B7207: jl 0x587b7224
        __asm _emit 0x7C
        __asm _emit 0x1B
        // 0x587B7209: cmp dword ptr [edx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B720F: je 0x587b7224
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587B7211: mov edx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7217: mov edx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xBA
        // 0x587B721A: push edx
        __asm _emit 0x52
        // 0x587B721B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B721D: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7222: jmp 0x587b7232
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587B7224: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B7226: push edx
        __asm _emit 0x52
        // 0x587B7227: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B7229: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B722E: jmp 0x587b7232
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B7230: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B7232: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B7236: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B7238: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x587B723B: mov dword ptr [esi + 0x5c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x5C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B7242: call 0x587b70a0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B7247: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B7249: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B724D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7254: pop ecx
        __asm _emit 0x59
        // 0x587B7255: pop edi
        __asm _emit 0x5F
        // 0x587B7256: pop esi
        __asm _emit 0x5E
        // 0x587B7257: pop ebp
        __asm _emit 0x5D
        // 0x587B7258: pop ebx
        __asm _emit 0x5B
        // 0x587B7259: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587B725C: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
