// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5881B960 .. +0xFD bytes.
// Source symbol alias: FUN_5881b960.
extern "C" __declspec(naked) void FUN_5881b960() {
    __asm {
        // 0x5881B960: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5881B962: push 0x5898351e
        __asm _emit 0x68
        __asm _emit 0x1E
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881B967: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B96D: push eax
        __asm _emit 0x50
        // 0x5881B96E: push ecx
        __asm _emit 0x51
        // 0x5881B96F: push ebx
        __asm _emit 0x53
        // 0x5881B970: push ebp
        __asm _emit 0x55
        // 0x5881B971: push esi
        __asm _emit 0x56
        // 0x5881B972: push edi
        __asm _emit 0x57
        // 0x5881B973: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5881B978: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5881B97A: push eax
        __asm _emit 0x50
        // 0x5881B97B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881B97F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B985: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5881B987: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5881B98B: mov edi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881B98F: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5881B993: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5881B997: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881B999: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5881B99B: push ebx
        __asm _emit 0x53
        // 0x5881B99C: push ebx
        __asm _emit 0x53
        // 0x5881B99D: push edi
        __asm _emit 0x57
        // 0x5881B99E: push ebp
        __asm _emit 0x55
        // 0x5881B99F: push eax
        __asm _emit 0x50
        // 0x5881B9A0: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x77
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881B9A5: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881B9AB: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5881B9B0: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x5881B9B3: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5881B9B6: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881B9BD: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x5881B9C0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881B9C2: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881B9C6: mov dword ptr [esi], 0x5899d914
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x14
        __asm _emit 0xD9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5881B9CC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x12
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881B9D1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881B9D4: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881B9D8: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5881B9DD: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881B9DF: je 0x5881b9f4
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5881B9E1: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5881B9E5: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881B9E7: push edi
        __asm _emit 0x57
        // 0x5881B9E8: push ebp
        __asm _emit 0x55
        // 0x5881B9E9: push ecx
        __asm _emit 0x51
        // 0x5881B9EA: push esi
        __asm _emit 0x56
        // 0x5881B9EB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881B9ED: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x62
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881B9F2: jmp 0x5881b9f6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5881B9F4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5881B9F6: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881B9FB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881B9FD: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5881BA01: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5881BA04: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x73
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881BA09: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5881BA0C: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881BA11: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5881BA15: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5881BA17: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x12
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5881BA1C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5881BA1F: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5881BA23: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5881BA28: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5881BA2A: je 0x5881ba42
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5881BA2C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5881BA30: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5881BA32: push edi
        __asm _emit 0x57
        // 0x5881BA33: push ebp
        __asm _emit 0x55
        // 0x5881BA34: push ecx
        __asm _emit 0x51
        // 0x5881BA35: push esi
        __asm _emit 0x56
        // 0x5881BA36: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5881BA38: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x62
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881BA3D: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5881BA40: jmp 0x5881ba45
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5881BA42: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x5881BA45: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5881BA47: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5881BA4B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881BA52: pop ecx
        __asm _emit 0x59
        // 0x5881BA53: pop edi
        __asm _emit 0x5F
        // 0x5881BA54: pop esi
        __asm _emit 0x5E
        // 0x5881BA55: pop ebp
        __asm _emit 0x5D
        // 0x5881BA56: pop ebx
        __asm _emit 0x5B
        // 0x5881BA57: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5881BA5A: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
