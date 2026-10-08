// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1773 bytes in 4 exact ranges.
// Source symbol alias: FUN_58773ab0.

// Ghidra body range 0x58773AB0..0x5877400D; 1373 mapped bytes.
extern "C" __declspec(naked) void FUN_58773ab0_segment_00() {
    __asm {
        // 0x58773AB0: push ebp
        __asm _emit 0x55
        // 0x58773AB1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58773AB3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58773AB6: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58773AB8: push 0x5897f18b
        __asm _emit 0x68
        __asm _emit 0x8B
        __asm _emit 0xF1
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58773ABD: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773AC3: push eax
        __asm _emit 0x50
        // 0x58773AC4: sub esp, 0x598
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773ACA: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58773ACF: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58773AD1: mov dword ptr [esp + 0x590], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773AD8: push ebx
        __asm _emit 0x53
        // 0x58773AD9: push esi
        __asm _emit 0x56
        // 0x58773ADA: push edi
        __asm _emit 0x57
        // 0x58773ADB: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58773AE0: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58773AE2: push eax
        __asm _emit 0x50
        // 0x58773AE3: lea eax, [esp + 0x5a8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773AEA: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773AF0: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58773AF3: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58773AF6: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58773AF8: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58773AFC: call 0x58772720
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773B01: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58773B03: jne 0x58773b0f
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58773B05: mov eax, 7
        __asm _emit 0xB8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773B0A: jmp 0x58774182
        __asm _emit 0xE9
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773B0F: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773B14: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xDA
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58773B19: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58773B1B: push esi
        __asm _emit 0x56
        // 0x58773B1C: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58773B20: call 0x5897ceb6
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x93
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773B25: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773B2A: push edi
        __asm _emit 0x57
        // 0x58773B2B: call 0x5897ceb0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x93
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773B30: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58773B33: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58773B37: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58773B3C: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58773B40: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58773B44: mov dword ptr [esp + 0x5b0], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773B4F: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58773B53: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58773B55: jbe 0x58773b64
        __asm _emit 0x76
        __asm _emit 0x0D
        // 0x58773B57: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x91
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773B5C: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58773B60: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58773B64: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58773B68: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58773B6A: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58773B6C: jbe 0x58773b73
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58773B6E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773B73: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58773B77: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58773B7B: push ecx
        __asm _emit 0x51
        // 0x58773B7C: push esi
        __asm _emit 0x56
        // 0x58773B7D: push edi
        __asm _emit 0x57
        // 0x58773B7E: push edx
        __asm _emit 0x52
        // 0x58773B7F: lea eax, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58773B83: push eax
        __asm _emit 0x50
        // 0x58773B84: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58773B88: call 0x58772d30
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773B8D: lea ecx, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58773B91: push ecx
        __asm _emit 0x51
        // 0x58773B92: push 0x589963b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773B97: call 0x5897ceaa
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x93
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773B9C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58773B9E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58773BA1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58773BA3: je 0x58773c8a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773BA9: mov edi, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773BAF: push 0x589963b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773BB4: lea edx, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773BB8: push edx
        __asm _emit 0x52
        // 0x58773BB9: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58773BBB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773BBD: je 0x58773c07
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x58773BBF: push 0x589963ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773BC4: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773BC8: push eax
        __asm _emit 0x50
        // 0x58773BC9: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58773BCB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773BCD: je 0x58773c07
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58773BCF: cmp dword ptr [esp + 0x64], 0x10
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x10
        // 0x58773BD4: jne 0x58773c07
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x58773BD6: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58773BDA: lea ecx, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58773BDE: push ecx
        __asm _emit 0x51
        // 0x58773BDF: push edx
        __asm _emit 0x52
        // 0x58773BE0: lea eax, [esp + 0x29c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773BE7: push 0x58996310
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773BEC: push eax
        __asm _emit 0x50
        // 0x58773BED: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773BF3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58773BF6: lea ecx, [esp + 0x294]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773BFD: push ecx
        __asm _emit 0x51
        // 0x58773BFE: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58773C02: call 0x58773950
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773C07: lea edx, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58773C0B: push edx
        __asm _emit 0x52
        // 0x58773C0C: push esi
        __asm _emit 0x56
        // 0x58773C0D: call 0x5897cea4
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x92
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773C12: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58773C15: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773C17: jne 0x58773c8a
        __asm _emit 0x75
        __asm _emit 0x71
        // 0x58773C19: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773C20: push 0x589963b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773C25: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773C29: push eax
        __asm _emit 0x50
        // 0x58773C2A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58773C2C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773C2E: je 0x58773c78
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x58773C30: push 0x589963ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773C35: lea ecx, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773C39: push ecx
        __asm _emit 0x51
        // 0x58773C3A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58773C3C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773C3E: je 0x58773c78
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58773C40: cmp dword ptr [esp + 0x64], 0x10
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x10
        // 0x58773C45: jne 0x58773c78
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x58773C47: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58773C4B: lea edx, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58773C4F: push edx
        __asm _emit 0x52
        // 0x58773C50: push eax
        __asm _emit 0x50
        // 0x58773C51: lea ecx, [esp + 0x29c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773C58: push 0x58996310
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773C5D: push ecx
        __asm _emit 0x51
        // 0x58773C5E: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773C64: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58773C67: lea edx, [esp + 0x294]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773C6E: push edx
        __asm _emit 0x52
        // 0x58773C6F: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58773C73: call 0x58773950
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773C78: lea eax, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58773C7C: push eax
        __asm _emit 0x50
        // 0x58773C7D: push esi
        __asm _emit 0x56
        // 0x58773C7E: call 0x5897cea4
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x92
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773C83: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58773C86: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773C88: je 0x58773c20
        __asm _emit 0x74
        __asm _emit 0x96
        // 0x58773C8A: push esi
        __asm _emit 0x56
        // 0x58773C8B: call 0x5897ce9e
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x92
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773C90: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58773C94: mov esi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58773C98: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58773C9A: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x58773C9C: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x58773CA1: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58773CA3: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58773CA6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58773CA8: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58773CAB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58773CAE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58773CB0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58773CB2: je 0x58773d11
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x58773CB4: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58773CB8: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58773CBA: jb 0x58773cc5
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x58773CBC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773CC1: mov esi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58773CC5: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58773CC9: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58773CCD: push ecx
        __asm _emit 0x51
        // 0x58773CCE: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x58773CD0: push edx
        __asm _emit 0x52
        // 0x58773CD1: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58773CD3: call 0x58773ab0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773CD8: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58773CDC: push eax
        __asm _emit 0x50
        // 0x58773CDD: call 0x5897ceb6
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x91
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773CE2: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58773CE6: mov esi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58773CEA: add dword ptr [esp + 0x18], 0x108
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773CF2: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58773CF4: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x58773CF9: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58773CFB: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58773CFE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58773D00: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58773D03: inc edi
        __asm _emit 0x47
        // 0x58773D04: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58773D06: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58773D09: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58773D0B: jb 0x58773cc5
        __asm _emit 0x72
        __asm _emit 0xB8
        // 0x58773D0D: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58773D11: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58773D15: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x58773D17: jbe 0x58773d26
        __asm _emit 0x76
        __asm _emit 0x0D
        // 0x58773D19: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773D1E: mov esi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58773D22: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58773D26: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58773D2A: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x58773D2C: jbe 0x58773d33
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58773D2E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773D33: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58773D37: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58773D3B: push ecx
        __asm _emit 0x51
        // 0x58773D3C: push edi
        __asm _emit 0x57
        // 0x58773D3D: push esi
        __asm _emit 0x56
        // 0x58773D3E: push edx
        __asm _emit 0x52
        // 0x58773D3F: lea eax, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58773D43: push eax
        __asm _emit 0x50
        // 0x58773D44: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58773D48: call 0x58772d30
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773D4D: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58773D51: lea ecx, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58773D55: push ecx
        __asm _emit 0x51
        // 0x58773D56: push edx
        __asm _emit 0x52
        // 0x58773D57: mov dword ptr [esp + 0x54], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773D5F: call 0x5897ceaa
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x91
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773D64: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58773D66: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773D6B: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58773D6F: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xD7
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58773D74: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58773D77: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58773D7B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58773D7D: je 0x5877413a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773D83: mov esi, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773D89: push 0x589963b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773D8E: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773D92: push eax
        __asm _emit 0x50
        // 0x58773D93: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58773D95: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773D97: je 0x58773da5
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58773D99: push 0x589963ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773D9E: lea ecx, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773DA2: push ecx
        __asm _emit 0x51
        // 0x58773DA3: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58773DA5: cmp dword ptr [esp + 0x64], 0x10
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x10
        // 0x58773DAA: je 0x58773f46
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773DB0: mov ecx, 0x46
        __asm _emit 0xB9
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773DB5: lea esi, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58773DB9: lea edi, [esp + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773DC0: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58773DC2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58773DC4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58773DC6: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773DCB: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58773DCE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58773DD0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58773DD2: inc eax
        __asm _emit 0x40
        // 0x58773DD3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58773DD5: jne 0x58773dd0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58773DD7: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58773DDB: mov esi, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773DE1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58773DE3: lea edx, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58773DE7: push edx
        __asm _emit 0x52
        // 0x58773DE8: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x58773DEC: push edx
        __asm _emit 0x52
        // 0x58773DED: lea eax, [esp + 0x198]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773DF4: push 0x58996310
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773DF9: push eax
        __asm _emit 0x50
        // 0x58773DFA: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58773DFC: mov edi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x08
        // 0x58773DFF: push 0x5898d68c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773E04: lea ecx, [esp + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773E0B: push ecx
        __asm _emit 0x51
        // 0x58773E0C: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58773E10: push edx
        __asm _emit 0x52
        // 0x58773E11: call 0x5897ce4a
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773E16: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58773E19: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773E1B: je 0x58773e21
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58773E1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58773E1F: jmp 0x58773e3e
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x58773E21: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58773E25: push eax
        __asm _emit 0x50
        // 0x58773E26: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58773E28: call 0x587727b0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773E2D: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58773E31: push ecx
        __asm _emit 0x51
        // 0x58773E32: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58773E34: call 0x5897ce3e
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773E39: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58773E3C: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58773E3E: lea edx, [esp + 0x294]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773E45: push edx
        __asm _emit 0x52
        // 0x58773E46: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58773E4A: mov dword ptr [esp + 0x190], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773E51: call 0x58773950
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773E56: mov edx, dword ptr [0x589cfc90]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58773E5C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58773E5E: lea eax, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58773E62: push eax
        __asm _emit 0x50
        // 0x58773E63: push 0x118
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773E68: lea ecx, [esp + 0x188]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773E6F: push ecx
        __asm _emit 0x51
        // 0x58773E70: push edx
        __asm _emit 0x52
        // 0x58773E71: call dword ptr [0x5898c1a0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773E77: mov eax, dword ptr [esp + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773E7E: push eax
        __asm _emit 0x50
        // 0x58773E7F: lea ecx, [esp + 0x194]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773E86: push ecx
        __asm _emit 0x51
        // 0x58773E87: lea edx, [esp + 0x3a4]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773E8E: push 0x58996394
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773E93: push edx
        __asm _emit 0x52
        // 0x58773E94: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58773E96: inc dword ptr [0x589cfca4]
        __asm _emit 0xFF
        __asm _emit 0x05
        __asm _emit 0xA4
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58773E9C: lea eax, [esp + 0x3ac]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773EA3: mov dword ptr [esp + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x58773EA7: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58773EAA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58773EAC: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58773EAF: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x58773EB1: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773EB6: lea esi, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58773EBA: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58773EBC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58773EBE: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58773EC0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58773EC2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58773EC4: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773EC9: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58773ECB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58773ECD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58773ECF: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58773ED4: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58773ED6: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58773ED8: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773EDD: push eax
        __asm _emit 0x50
        // 0x58773EDE: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773EE4: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58773EE6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58773EE8: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58773EEA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58773EEC: push esi
        __asm _emit 0x56
        // 0x58773EED: call dword ptr [0x5898c164]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773EF3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58773EF5: lea ecx, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58773EF9: push ecx
        __asm _emit 0x51
        // 0x58773EFA: lea edx, [esp + 0x3a4]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773F01: push edx
        __asm _emit 0x52
        // 0x58773F02: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773F08: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773F0E: push eax
        __asm _emit 0x50
        // 0x58773F0F: lea eax, [esp + 0x3a8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773F16: push eax
        __asm _emit 0x50
        // 0x58773F17: push esi
        __asm _emit 0x56
        // 0x58773F18: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58773F1A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58773F1C: lea ecx, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58773F20: push ecx
        __asm _emit 0x51
        // 0x58773F21: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773F26: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773F2C: push eax
        __asm _emit 0x50
        // 0x58773F2D: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773F32: push esi
        __asm _emit 0x56
        // 0x58773F33: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58773F35: push esi
        __asm _emit 0x56
        // 0x58773F36: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773F3C: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58773F40: mov esi, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58773F46: lea edx, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58773F4A: push edx
        __asm _emit 0x52
        // 0x58773F4B: push edi
        __asm _emit 0x57
        // 0x58773F4C: call 0x5897cea4
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773F51: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58773F54: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773F56: jne 0x5877413a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773F5C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58773F60: push 0x589963b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773F65: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773F69: push eax
        __asm _emit 0x50
        // 0x58773F6A: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58773F6C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773F6E: je 0x58774124
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773F74: push 0x589963ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773F79: lea ecx, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773F7D: push ecx
        __asm _emit 0x51
        // 0x58773F7E: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58773F80: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773F82: je 0x58774124
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773F88: push 0x5899638c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773F8D: lea edx, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773F91: push edx
        __asm _emit 0x52
        // 0x58773F92: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58773F94: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773F96: je 0x58774124
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773F9C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58773F9E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58773FA0: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773FA5: push eax
        __asm _emit 0x50
        // 0x58773FA6: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773FAA: push eax
        __asm _emit 0x50
        // 0x58773FAB: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58773FAD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773FAF: je 0x58774124
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773FB5: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58773FB7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58773FB9: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773FBE: push eax
        __asm _emit 0x50
        // 0x58773FBF: lea ecx, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773FC3: push ecx
        __asm _emit 0x51
        // 0x58773FC4: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58773FC6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773FC8: je 0x58774124
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773FCE: push 0x58996384
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58773FD3: lea edx, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58773FD7: push edx
        __asm _emit 0x52
        // 0x58773FD8: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58773FDA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58773FDC: je 0x58774124
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773FE2: cmp dword ptr [esp + 0x64], 0x10
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        __asm _emit 0x10
        // 0x58773FE7: je 0x58774124
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773FED: mov ecx, 0x46
        __asm _emit 0xB9
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773FF2: lea esi, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58773FF6: lea edi, [esp + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773FFD: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58773FFF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774001: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58774003: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774008: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x5877400B: jmp 0x58774010
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58774010..0x58774164; 340 mapped bytes.
extern "C" __declspec(naked) void FUN_58773ab0_segment_01() {
    __asm {
        // 0x58774010: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58774012: inc eax
        __asm _emit 0x40
        // 0x58774013: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58774015: jne 0x58774010
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58774017: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5877401B: mov esi, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774021: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58774023: lea ecx, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58774027: push ecx
        __asm _emit 0x51
        // 0x58774028: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5877402A: push eax
        __asm _emit 0x50
        // 0x5877402B: lea edx, [esp + 0x4a4]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774032: push 0x58996310
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58774037: push edx
        __asm _emit 0x52
        // 0x58774038: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5877403A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5877403D: cmp byte ptr [esp + 0x49c], 0x5c
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5C
        // 0x58774045: jne 0x5877405e
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58774047: lea eax, [esp + 0x49d]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877404E: push eax
        __asm _emit 0x50
        // 0x5877404F: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774054: lea ecx, [esp + 0x198]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877405B: push ecx
        __asm _emit 0x51
        // 0x5877405C: jmp 0x58774073
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5877405E: lea edx, [esp + 0x49c]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774065: push edx
        __asm _emit 0x52
        // 0x58774066: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877406B: lea eax, [esp + 0x198]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774072: push eax
        __asm _emit 0x50
        // 0x58774073: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58774075: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58774078: lea ecx, [esp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x5877407C: push ecx
        __asm _emit 0x51
        // 0x5877407D: push edi
        __asm _emit 0x57
        // 0x5877407E: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58774082: push 0x58996310
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58774087: push edi
        __asm _emit 0x57
        // 0x58774088: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5877408A: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x5877408D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58774090: push edi
        __asm _emit 0x57
        // 0x58774091: call 0x58772ac0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774096: mov ecx, dword ptr [0x589cfc90]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877409C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877409E: lea edx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587740A2: push edx
        __asm _emit 0x52
        // 0x587740A3: mov dword ptr [esp + 0x194], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587740AA: push 0x118
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587740AF: lea eax, [esp + 0x188]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587740B6: push eax
        __asm _emit 0x50
        // 0x587740B7: push ecx
        __asm _emit 0x51
        // 0x587740B8: call dword ptr [0x5898c1a0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587740BE: mov edx, dword ptr [esp + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587740C5: push edx
        __asm _emit 0x52
        // 0x587740C6: lea eax, [esp + 0x194]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587740CD: push eax
        __asm _emit 0x50
        // 0x587740CE: lea ecx, [esp + 0x3a4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587740D5: push 0x5899636c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587740DA: push ecx
        __asm _emit 0x51
        // 0x587740DB: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587740DD: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587740E0: inc dword ptr [0x589cfca4]
        __asm _emit 0xFF
        __asm _emit 0x05
        __asm _emit 0xA4
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587740E6: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587740E9: lea edx, [esp + 0x3b8]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587740F0: mov dword ptr [esp + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587740F4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587740F6: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x587740F8: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587740FD: lea esi, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58774101: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58774103: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58774105: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58774107: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58774109: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877410B: lea ecx, [esp + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774112: push ecx
        __asm _emit 0x51
        // 0x58774113: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58774115: call 0x58772210
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877411A: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877411E: mov esi, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774124: lea edx, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58774128: push edx
        __asm _emit 0x52
        // 0x58774129: push edi
        __asm _emit 0x57
        // 0x5877412A: call 0x5897cea4
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x8D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877412F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58774132: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58774134: je 0x58773f60
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877413A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877413E: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58774140: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58774142: je 0x5877414d
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58774144: push eax
        __asm _emit 0x50
        // 0x58774145: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x8C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877414A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877414D: push edi
        __asm _emit 0x57
        // 0x5877414E: call 0x5897ce9e
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x8D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774153: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58774157: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877415A: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5877415C: je 0x58774167
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5877415E: push eax
        __asm _emit 0x50
        // 0x5877415F: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x8A
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58774167..0x5877417D; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_58773ab0_segment_02() {
    __asm {
        // 0x58774167: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877416B: push eax
        __asm _emit 0x50
        // 0x5877416C: mov dword ptr [esp + 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58774170: mov dword ptr [esp + 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58774174: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58774178: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x8A
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58774182..0x587741A8; 38 mapped bytes.
extern "C" __declspec(naked) void FUN_58773ab0_segment_03() {
    __asm {
        // 0x58774182: mov ecx, dword ptr [esp + 0x5a8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774189: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774190: pop ecx
        __asm _emit 0x59
        // 0x58774191: pop edi
        __asm _emit 0x5F
        // 0x58774192: pop esi
        __asm _emit 0x5E
        // 0x58774193: pop ebx
        __asm _emit 0x5B
        // 0x58774194: mov ecx, dword ptr [esp + 0x590]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877419B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5877419D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x8A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587741A2: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587741A4: pop ebp
        __asm _emit 0x5D
        // 0x587741A5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
