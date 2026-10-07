// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C6AA0 .. +0x49F bytes.
// Source symbol alias: FUN_588c6aa0.
extern "C" __declspec(naked) void FUN_588c6aa0() {
    __asm {
        // 0x588C6AA0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588C6AA2: push 0x58988abb
        __asm _emit 0x68
        __asm _emit 0xBB
        __asm _emit 0x8A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C6AA7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6AAD: push eax
        __asm _emit 0x50
        // 0x588C6AAE: push ecx
        __asm _emit 0x51
        // 0x588C6AAF: push ebx
        __asm _emit 0x53
        // 0x588C6AB0: push ebp
        __asm _emit 0x55
        // 0x588C6AB1: push esi
        __asm _emit 0x56
        // 0x588C6AB2: push edi
        __asm _emit 0x57
        // 0x588C6AB3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588C6AB8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588C6ABA: push eax
        __asm _emit 0x50
        // 0x588C6ABB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588C6ABF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6AC5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C6AC7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588C6ACB: movsx eax, word ptr [esp + 0x34]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C6AD0: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C6AD4: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588C6AD8: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588C6ADC: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588C6ADE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6AE0: push eax
        __asm _emit 0x50
        // 0x588C6AE1: push ebp
        __asm _emit 0x55
        // 0x588C6AE2: push ebx
        __asm _emit 0x53
        // 0x588C6AE3: push ecx
        __asm _emit 0x51
        // 0x588C6AE4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588C6AE6: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xC6
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6AEB: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588C6AED: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6AF5: mov dword ptr [esi], 0x589a0bf4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xF4
        __asm _emit 0x0B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588C6AFB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x61
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C6B00: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588C6B02: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C6B05: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C6B09: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588C6B0E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588C6B10: je 0x588c6b34
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588C6B12: push 0x44c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6B17: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6B19: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6B1B: push ebp
        __asm _emit 0x55
        // 0x588C6B1C: push ebx
        __asm _emit 0x53
        // 0x588C6B1D: push esi
        __asm _emit 0x56
        // 0x588C6B1E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588C6B20: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xC6
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6B25: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C6B2B: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6B32: jmp 0x588c6b36
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C6B34: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588C6B36: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6B3B: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C6B40: mov dword ptr [esi + 0xb8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6B46: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x61
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C6B4B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C6B4E: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C6B52: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588C6B57: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C6B59: je 0x588c6b8a
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588C6B5B: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x588C6B60: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6B62: push 0xdcdcdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0x00
        // 0x588C6B67: lea edx, [ebp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x588C6B6A: push edx
        __asm _emit 0x52
        // 0x588C6B6B: lea ecx, [ebx + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6B71: push ecx
        __asm _emit 0x51
        // 0x588C6B72: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C6B78: push ebp
        __asm _emit 0x55
        // 0x588C6B79: lea edx, [ebx - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0xF6
        // 0x588C6B7C: push edx
        __asm _emit 0x52
        // 0x588C6B7D: push ecx
        __asm _emit 0x51
        // 0x588C6B7E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6B80: push esi
        __asm _emit 0x56
        // 0x588C6B81: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C6B83: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x88
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C6B88: jmp 0x588c6b8c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C6B8A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C6B8C: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6B91: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C6B96: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6B9C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C6BA1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C6BA4: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C6BA8: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588C6BAD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C6BAF: je 0x588c6be0
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588C6BB1: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x588C6BB6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6BB8: push 0xdcdcdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0x00
        // 0x588C6BBD: lea edx, [ebp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x588C6BC0: push edx
        __asm _emit 0x52
        // 0x588C6BC1: lea ecx, [ebx + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6BC7: push ecx
        __asm _emit 0x51
        // 0x588C6BC8: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C6BCE: push ebp
        __asm _emit 0x55
        // 0x588C6BCF: lea edx, [ebx + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x3C
        // 0x588C6BD2: push edx
        __asm _emit 0x52
        // 0x588C6BD3: push ecx
        __asm _emit 0x51
        // 0x588C6BD4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6BD6: push esi
        __asm _emit 0x56
        // 0x588C6BD7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C6BD9: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x88
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C6BDE: jmp 0x588c6be2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C6BE0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C6BE2: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6BE8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6BEA: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C6BEF: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6BF5: call 0x5875f0d0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C6BFA: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6C00: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6C02: call 0x5875f0d0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C6C07: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588C6C09: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C6C0E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C6C11: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C6C15: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588C6C1A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C6C1C: je 0x588c6c50
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588C6C1E: push 0x282828
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588C6C23: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6C25: push 0x30e030
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xE0
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x588C6C2A: lea edx, [ebp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x588C6C2D: push edx
        __asm _emit 0x52
        // 0x588C6C2E: lea ecx, [ebx + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6C34: push ecx
        __asm _emit 0x51
        // 0x588C6C35: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C6C3B: push ebp
        __asm _emit 0x55
        // 0x588C6C3C: lea edx, [ebx + 0xdd]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6C42: push edx
        __asm _emit 0x52
        // 0x588C6C43: push ecx
        __asm _emit 0x51
        // 0x588C6C44: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6C46: push esi
        __asm _emit 0x56
        // 0x588C6C47: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C6C49: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xC6
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C6C4E: jmp 0x588c6c52
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C6C50: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C6C52: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588C6C54: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C6C59: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6C5F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x5F
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C6C64: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C6C67: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C6C6B: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588C6C70: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C6C72: je 0x588c6ca6
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588C6C74: push 0x282828
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588C6C79: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6C7B: push 0x3030e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x30
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x588C6C80: lea edx, [ebp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x588C6C83: push edx
        __asm _emit 0x52
        // 0x588C6C84: lea ecx, [ebx + 0x1f4]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6C8A: push ecx
        __asm _emit 0x51
        // 0x588C6C8B: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C6C91: push ebp
        __asm _emit 0x55
        // 0x588C6C92: lea edx, [ebx + 0x13f]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6C98: push edx
        __asm _emit 0x52
        // 0x588C6C99: push ecx
        __asm _emit 0x51
        // 0x588C6C9A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6C9C: push esi
        __asm _emit 0x56
        // 0x588C6C9D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C6C9F: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xC5
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C6CA4: jmp 0x588c6ca8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C6CA6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C6CA8: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588C6CAA: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C6CAF: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6CB5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x5F
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C6CBA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C6CBD: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C6CC1: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588C6CC6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C6CC8: je 0x588c6cfc
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588C6CCA: push 0x282828
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588C6CCF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6CD1: push 0x6effff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x6E
        __asm _emit 0x00
        // 0x588C6CD6: lea edx, [ebp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x588C6CD9: push edx
        __asm _emit 0x52
        // 0x588C6CDA: lea ecx, [ebx + 0x1f4]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6CE0: push ecx
        __asm _emit 0x51
        // 0x588C6CE1: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C6CE7: push ebp
        __asm _emit 0x55
        // 0x588C6CE8: lea edx, [ebx + 0x197]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6CEE: push edx
        __asm _emit 0x52
        // 0x588C6CEF: push ecx
        __asm _emit 0x51
        // 0x588C6CF0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6CF2: push esi
        __asm _emit 0x56
        // 0x588C6CF3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C6CF5: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xC5
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C6CFA: jmp 0x588c6cfe
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C6CFC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C6CFE: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588C6D00: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588C6D05: mov dword ptr [esi + 0xdc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6D0B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x5F
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C6D10: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C6D13: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C6D17: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588C6D1C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C6D1E: je 0x588c6d52
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588C6D20: push 0x282828
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588C6D25: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6D27: push 0x6effff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x6E
        __asm _emit 0x00
        // 0x588C6D2C: lea edx, [ebp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x588C6D2F: push edx
        __asm _emit 0x52
        // 0x588C6D30: lea ecx, [ebx + 0x1f4]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6D36: push ecx
        __asm _emit 0x51
        // 0x588C6D37: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C6D3D: push ebp
        __asm _emit 0x55
        // 0x588C6D3E: lea edx, [ebx + 0x165]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6D44: push edx
        __asm _emit 0x52
        // 0x588C6D45: push ecx
        __asm _emit 0x51
        // 0x588C6D46: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6D48: push esi
        __asm _emit 0x56
        // 0x588C6D49: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C6D4B: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xC5
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C6D50: jmp 0x588c6d54
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C6D52: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C6D54: mov edi, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6D5A: mov dword ptr [esi + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6D60: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C6D63: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6D68: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588C6D6D: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588C6D71: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6D73: je 0x588c6d7b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6D75: push edi
        __asm _emit 0x57
        // 0x588C6D76: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xC1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6D7B: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C6D7E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6D80: je 0x588c6d88
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6D82: push edi
        __asm _emit 0x57
        // 0x588C6D83: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xC1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6D88: mov edi, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6D8E: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C6D91: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6D96: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x588C6D9A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6D9C: je 0x588c6da4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6D9E: push edi
        __asm _emit 0x57
        // 0x588C6D9F: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xC1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6DA4: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C6DA7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6DA9: je 0x588c6db1
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6DAB: push edi
        __asm _emit 0x57
        // 0x588C6DAC: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xC1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6DB1: mov edi, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6DB7: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6DBC: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x26
        // 0x588C6DC0: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C6DC3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6DC5: je 0x588c6dcd
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6DC7: push edi
        __asm _emit 0x57
        // 0x588C6DC8: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6DCD: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C6DD0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6DD2: je 0x588c6dda
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6DD4: push edi
        __asm _emit 0x57
        // 0x588C6DD5: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xC1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6DDA: mov edi, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6DE0: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C6DE3: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6DE8: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588C6DEC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6DEE: je 0x588c6df6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6DF0: push edi
        __asm _emit 0x57
        // 0x588C6DF1: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xC1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6DF6: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C6DF9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6DFB: je 0x588c6e03
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6DFD: push edi
        __asm _emit 0x57
        // 0x588C6DFE: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6E03: mov edi, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6E09: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C6E0C: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6E11: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x588C6E15: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6E17: je 0x588c6e1f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6E19: push edi
        __asm _emit 0x57
        // 0x588C6E1A: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xC1
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6E1F: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C6E22: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6E24: je 0x588c6e2c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6E26: push edi
        __asm _emit 0x57
        // 0x588C6E27: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6E2C: lea ecx, [esi + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6E32: lea edx, [ebx + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x64
        // 0x588C6E35: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C6E39: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C6E3D: mov dword ptr [esp + 0x2c], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6E45: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588C6E47: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x5E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C6E4C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C6E4F: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588C6E53: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588C6E58: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C6E5A: je 0x588c6e8e
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588C6E5C: push 0x282828
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588C6E61: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6E63: push 0x30e030
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xE0
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x588C6E68: lea ecx, [ebp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x588C6E6B: push ecx
        __asm _emit 0x51
        // 0x588C6E6C: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588C6E70: lea edx, [ebx + 0x1f4]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6E76: push edx
        __asm _emit 0x52
        // 0x588C6E77: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C6E7D: push ebp
        __asm _emit 0x55
        // 0x588C6E7E: push ecx
        __asm _emit 0x51
        // 0x588C6E7F: push edx
        __asm _emit 0x52
        // 0x588C6E80: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C6E82: push esi
        __asm _emit 0x56
        // 0x588C6E83: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C6E85: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xC3
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C6E8A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588C6E8C: jmp 0x588c6e90
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C6E8E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588C6E90: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C6E94: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6E99: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x588C6E9B: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x26
        // 0x588C6E9F: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C6EA2: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588C6EA7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6EA9: je 0x588c6eb1
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6EAB: push edi
        __asm _emit 0x57
        // 0x588C6EAC: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6EB1: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C6EB4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6EB6: je 0x588c6ebe
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C6EB8: push edi
        __asm _emit 0x57
        // 0x588C6EB9: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C6EBE: add dword ptr [esp + 0x34], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x04
        // 0x588C6EC3: add dword ptr [esp + 0x30], 0x3c
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x3C
        // 0x588C6EC8: sub dword ptr [esp + 0x2c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x588C6ECD: jne 0x588c6e45
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C6ED3: lea edi, [esi + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6ED9: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6EDE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588C6EE0: push 0x68
        __asm _emit 0x6A
        __asm _emit 0x68
        // 0x588C6EE2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x5D
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C6EE7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C6EEA: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C6EEE: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588C6EF0: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588C6EF5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588C6EF7: je 0x588c6f07
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C6EF9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588C6EFB: push ebx
        __asm _emit 0x53
        // 0x588C6EFC: push ebx
        __asm _emit 0x53
        // 0x588C6EFD: push esi
        __asm _emit 0x56
        // 0x588C6EFE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C6F00: call 0x588eb280
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588C6F05: jmp 0x588c6f09
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C6F07: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C6F09: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x588C6F0B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588C6F0E: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588C6F11: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588C6F16: jne 0x588c6ee0
        __asm _emit 0x75
        __asm _emit 0xC8
        // 0x588C6F18: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x588C6F1B: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6F21: mov dword ptr [esi + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6F27: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588C6F29: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588C6F2D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6F34: pop ecx
        __asm _emit 0x59
        // 0x588C6F35: pop edi
        __asm _emit 0x5F
        // 0x588C6F36: pop esi
        __asm _emit 0x5E
        // 0x588C6F37: pop ebp
        __asm _emit 0x5D
        // 0x588C6F38: pop ebx
        __asm _emit 0x5B
        // 0x588C6F39: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588C6F3C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
