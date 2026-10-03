// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884E210 .. +0x200 bytes.
extern "C" __declspec(naked) void FUN_5884e210() {
    __asm {
        // 0x5884E210: sub esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x50
        // 0x5884E213: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884E218: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884E21A: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884E21E: push ebx
        __asm _emit 0x53
        // 0x5884E21F: push ebp
        __asm _emit 0x55
        // 0x5884E220: push esi
        __asm _emit 0x56
        // 0x5884E221: push edi
        __asm _emit 0x57
        // 0x5884E222: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5884E224: mov ecx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x70
        // 0x5884E227: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xA5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E22C: mov ecx, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x74
        // 0x5884E22F: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xA5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E234: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x5884E237: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xA5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E23C: mov ecx, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x7C
        // 0x5884E23F: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xA5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E244: mov ebx, 0x58a0b1e4
        __asm _emit 0xBB
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5884E249: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884E24D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5884E250: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5884E252: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5884E255: je 0x5884e393
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E25B: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884E261: push eax
        __asm _emit 0x50
        // 0x5884E262: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x5D
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5884E267: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5884E269: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884E26B: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x5884E26D: je 0x5884e3e3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E273: mov eax, dword ptr [esi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E279: mov ecx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x70
        // 0x5884E27C: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884E281: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884E283: add eax, 0x33c
        __asm _emit 0x05
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E288: push eax
        __asm _emit 0x50
        // 0x5884E289: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xA6
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E28E: mov ecx, dword ptr [esi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E294: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x68
        // 0x5884E297: mov eax, dword ptr [esi + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x4C
        // 0x5884E29A: push edx
        __asm _emit 0x52
        // 0x5884E29B: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5884E2A0: push eax
        __asm _emit 0x50
        // 0x5884E2A1: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884E2A5: push 0x5899b840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xB8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884E2AA: push ecx
        __asm _emit 0x51
        // 0x5884E2AB: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884E2B1: mov ecx, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x74
        // 0x5884E2B4: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5884E2B7: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884E2BC: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884E2BE: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884E2C2: push edx
        __asm _emit 0x52
        // 0x5884E2C3: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xA6
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E2C8: mov eax, dword ptr [esi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E2CE: mov ecx, dword ptr [eax + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E2D4: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884E2D8: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884E2DA: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884E2DE: lea eax, [esi + 0xac2]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E2E4: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884E2E8: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E2ED: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5884E2EF: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x5884E2F1: movzx ecx, word ptr [eax - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0xFE
        // 0x5884E2F5: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E2FB: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5884E2FE: movzx edx, word ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x10
        // 0x5884E301: jne 0x5884e315
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5884E303: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E309: add edx, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884E30D: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5884E30F: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884E313: jmp 0x5884e320
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5884E315: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E31B: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x5884E31D: lea ebx, [edx + ecx]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x0A
        // 0x5884E320: inc ebp
        __asm _emit 0x45
        // 0x5884E321: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5884E324: cmp ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x20
        // 0x5884E327: jl 0x5884e2e4
        __asm _emit 0x7C
        __asm _emit 0xBB
        // 0x5884E329: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884E32D: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884E333: push eax
        __asm _emit 0x50
        // 0x5884E334: push 0x5899e864
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884E339: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5884E33B: mov esi, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884E341: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884E344: push eax
        __asm _emit 0x50
        // 0x5884E345: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884E349: push ecx
        __asm _emit 0x51
        // 0x5884E34A: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5884E34C: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x5884E34F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5884E352: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884E357: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884E359: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884E35D: push edx
        __asm _emit 0x52
        // 0x5884E35E: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xA5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E363: push ebx
        __asm _emit 0x53
        // 0x5884E364: push 0x5899e84c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884E369: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5884E36B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884E36E: push eax
        __asm _emit 0x50
        // 0x5884E36F: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884E373: push eax
        __asm _emit 0x50
        // 0x5884E374: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5884E376: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5884E379: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884E37E: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884E380: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884E384: push ecx
        __asm _emit 0x51
        // 0x5884E385: mov ecx, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x7C
        // 0x5884E388: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xA5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E38D: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884E391: jmp 0x5884e3e3
        __asm _emit 0xEB
        __asm _emit 0x50
        // 0x5884E393: mov ecx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x70
        // 0x5884E396: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884E39B: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884E39D: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884E3A2: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xA5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E3A7: mov ecx, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x74
        // 0x5884E3AA: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884E3AF: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884E3B1: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884E3B6: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xA5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E3BB: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x5884E3BE: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884E3C3: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884E3C5: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884E3CA: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xA5
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E3CF: mov ecx, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x7C
        // 0x5884E3D2: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5884E3D7: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884E3D9: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884E3DE: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xA4
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E3E3: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5884E3E6: cmp ebx, 0x58a0b1f8
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xF8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5884E3EC: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884E3F0: jl 0x5884e250
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x5A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E3F6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884E3F8: call 0x5884e1c0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E3FD: mov ecx, dword ptr [esp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x5884E401: pop edi
        __asm _emit 0x5F
        // 0x5884E402: pop esi
        __asm _emit 0x5E
        // 0x5884E403: pop ebp
        __asm _emit 0x5D
        // 0x5884E404: pop ebx
        __asm _emit 0x5B
        // 0x5884E405: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5884E407: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xE7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884E40C: add esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x50
        // 0x5884E40F: ret
        __asm _emit 0xC3
    }
}
