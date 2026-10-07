// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2321 bytes in 1 exact ranges.
// Source symbol alias: FUN_58790990.

// Ghidra body range 0x58790990..0x587912A1; 2321 mapped bytes.
extern "C" __declspec(naked) void FUN_58790990_segment_00() {
    __asm {
        // 0x58790990: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58790992: push 0x5898030d
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x03
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58790997: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879099D: push eax
        __asm _emit 0x50
        // 0x5879099E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587909A1: push ebx
        __asm _emit 0x53
        // 0x587909A2: push ebp
        __asm _emit 0x55
        // 0x587909A3: push esi
        __asm _emit 0x56
        // 0x587909A4: push edi
        __asm _emit 0x57
        // 0x587909A5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587909AA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587909AC: push eax
        __asm _emit 0x50
        // 0x587909AD: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587909B1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587909B7: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587909BB: mov eax, dword ptr [0x58a24608]
        __asm _emit 0xA1
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587909C0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587909C2: cmp dword ptr [eax + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587909C9: jle 0x587909de
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x587909CB: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587909D1: je 0x587909de
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587909D3: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587909D9: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x587909DC: jmp 0x587909e0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587909DE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587909E0: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587909E6: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587909E9: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587909EB: je 0x58790a15
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587909ED: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587909F0: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587909F3: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x587909F6: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587909F9: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587909FC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587909FE: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58790A01: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58790A03: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58790A06: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58790A09: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58790A0C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58790A0F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58790A12: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58790A15: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58790A17: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xC2
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58790A1C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58790A1F: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58790A23: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58790A27: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58790A29: je 0x58790a75
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x58790A2B: mov ecx, dword ptr [0x58a24608]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790A31: cmp dword ptr [ecx + 0x160], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58790A38: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790A3E: lea edi, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58790A41: jle 0x58790a65
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x58790A43: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790A49: je 0x58790a65
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58790A4B: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790A51: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58790A53: push edi
        __asm _emit 0x57
        // 0x58790A54: add edx, 0xc0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790A5A: push edx
        __asm _emit 0x52
        // 0x58790A5B: push esi
        __asm _emit 0x56
        // 0x58790A5C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58790A5E: call 0x5878d660
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xCB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58790A63: jmp 0x58790a77
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58790A65: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58790A67: push edi
        __asm _emit 0x57
        // 0x58790A68: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58790A6A: push edx
        __asm _emit 0x52
        // 0x58790A6B: push esi
        __asm _emit 0x56
        // 0x58790A6C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58790A6E: call 0x5878d660
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xCB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58790A73: jmp 0x58790a77
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58790A75: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58790A77: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x58790A7A: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58790A7C: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58790A80: mov dword ptr [0x58a24800], eax
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790A85: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xC1
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58790A8A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790A8C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58790A8F: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58790A93: mov dword ptr [esp + 0x24], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790A9B: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58790A9D: je 0x58790ac8
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58790A9F: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790AA4: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58790AA7: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58790AAA: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58790AAC: push ebx
        __asm _emit 0x53
        // 0x58790AAD: push ebx
        __asm _emit 0x53
        // 0x58790AAE: push ecx
        __asm _emit 0x51
        // 0x58790AAF: push edx
        __asm _emit 0x52
        // 0x58790AB0: push eax
        __asm _emit 0x50
        // 0x58790AB1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58790AB3: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790AB8: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58790ABE: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58790AC1: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x58790AC4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58790AC6: jmp 0x58790aca
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58790AC8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58790ACA: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58790ACF: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58790AD3: mov dword ptr [0x58a24804], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790AD9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x22
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790ADE: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58790AE0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xC1
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58790AE5: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790AE7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58790AEA: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58790AEE: mov dword ptr [esp + 0x24], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790AF6: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58790AF8: je 0x58790b23
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58790AFA: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790AFF: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58790B02: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58790B05: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58790B07: push ebx
        __asm _emit 0x53
        // 0x58790B08: push ebx
        __asm _emit 0x53
        // 0x58790B09: push ecx
        __asm _emit 0x51
        // 0x58790B0A: push edx
        __asm _emit 0x52
        // 0x58790B0B: push eax
        __asm _emit 0x50
        // 0x58790B0C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58790B0E: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x26
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790B13: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58790B19: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58790B1C: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x58790B1F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58790B21: jmp 0x58790b25
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58790B23: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58790B25: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58790B2A: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58790B2E: mov dword ptr [0x58a24808], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790B34: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790B39: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790B3E: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x26
        // 0x58790B42: mov esi, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790B48: dec cx
        __asm _emit 0x66
        __asm _emit 0x49
        // 0x58790B4A: movzx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC1
        // 0x58790B4D: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58790B50: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x58790B54: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790B56: je 0x58790b5e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790B58: push esi
        __asm _emit 0x56
        // 0x58790B59: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790B5E: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58790B61: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790B63: je 0x58790b6b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790B65: push esi
        __asm _emit 0x56
        // 0x58790B66: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790B6B: mov edx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790B71: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x26
        // 0x58790B75: mov esi, dword ptr [0x58a24804]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790B7B: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58790B7E: sub ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x58790B82: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x58790B85: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x58790B89: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790B8B: je 0x58790b93
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790B8D: push esi
        __asm _emit 0x56
        // 0x58790B8E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790B93: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58790B96: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790B98: je 0x58790ba0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790B9A: push esi
        __asm _emit 0x56
        // 0x58790B9B: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790BA0: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790BA6: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x26
        // 0x58790BAA: mov esi, dword ptr [0x58a24808]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790BB0: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58790BB3: sub dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x02
        // 0x58790BB7: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x58790BBA: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x58790BBE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790BC0: je 0x58790bc8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790BC2: push esi
        __asm _emit 0x56
        // 0x58790BC3: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790BC8: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58790BCB: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790BCD: je 0x58790bd5
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790BCF: push esi
        __asm _emit 0x56
        // 0x58790BD0: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x23
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790BD5: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58790BD7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xC0
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58790BDC: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790BDE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58790BE1: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58790BE5: mov dword ptr [esp + 0x24], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790BED: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58790BEF: je 0x58790c1d
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x58790BF1: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790BF6: mov di, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x26
        // 0x58790BFA: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58790BFD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58790C00: dec di
        __asm _emit 0x66
        __asm _emit 0x4F
        // 0x58790C02: movzx edi, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xFF
        // 0x58790C05: push edi
        __asm _emit 0x57
        // 0x58790C06: push ebx
        __asm _emit 0x53
        // 0x58790C07: push ebx
        __asm _emit 0x53
        // 0x58790C08: push ecx
        __asm _emit 0x51
        // 0x58790C09: push edx
        __asm _emit 0x52
        // 0x58790C0A: push eax
        __asm _emit 0x50
        // 0x58790C0B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58790C0D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x25
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790C12: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58790C18: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58790C1B: jmp 0x58790c1f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58790C1D: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58790C1F: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790C24: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58790C28: mov dword ptr [0x58a2480c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x0C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790C2E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xC0
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58790C33: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58790C36: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58790C3A: mov dword ptr [esp + 0x24], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790C42: mov ebp, 0xcc
        __asm _emit 0xBD
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790C47: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58790C49: je 0x58790c92
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x58790C4B: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790C51: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790C57: cmp dword ptr [edx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xAA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790C5D: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x58790C60: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x58790C63: jle 0x58790c7b
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58790C65: cmp dword ptr [edx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790C6B: je 0x58790c7b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58790C6D: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790C73: add edx, 0x3300
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790C79: jmp 0x58790c7d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58790C7B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58790C7D: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x10
        // 0x58790C80: push esi
        __asm _emit 0x56
        // 0x58790C81: add edi, 0x1a
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1A
        // 0x58790C84: push edi
        __asm _emit 0x57
        // 0x58790C85: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58790C87: push edx
        __asm _emit 0x52
        // 0x58790C88: push ecx
        __asm _emit 0x51
        // 0x58790C89: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58790C8B: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x64
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790C90: jmp 0x58790c94
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58790C92: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58790C94: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790C99: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58790CA1: mov dword ptr [0x58a0b1bc], eax
        __asm _emit 0xA3
        __asm _emit 0xBC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58790CA6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xBF
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58790CAB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58790CAE: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58790CB2: mov dword ptr [esp + 0x24], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790CBA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58790CBC: je 0x58790d08
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x58790CBE: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790CC4: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790CCA: cmp dword ptr [ecx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790CD0: mov edi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58790CD3: mov ebx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x58790CD6: jle 0x58790cef
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58790CD8: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790CDF: je 0x58790cef
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58790CE1: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790CE7: add edx, 0x3300
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790CED: jmp 0x58790cf1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58790CEF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58790CF1: add edi, 0x1e
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1E
        // 0x58790CF4: push edi
        __asm _emit 0x57
        // 0x58790CF5: add ebx, 0x1a
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x1A
        // 0x58790CF8: push ebx
        __asm _emit 0x53
        // 0x58790CF9: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58790CFB: push edx
        __asm _emit 0x52
        // 0x58790CFC: push esi
        __asm _emit 0x56
        // 0x58790CFD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58790CFF: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x63
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790D04: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58790D06: jmp 0x58790d0a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58790D08: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58790D0A: mov esi, dword ptr [0x58a0b1bc]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xBC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58790D10: mov dword ptr [0x58a0b1c0], eax
        __asm _emit 0xA3
        __asm _emit 0xC0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58790D15: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790D1A: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x26
        // 0x58790D1E: dec cx
        __asm _emit 0x66
        __asm _emit 0x49
        // 0x58790D20: movzx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC1
        // 0x58790D23: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58790D26: mov dword ptr [esp + 0x24], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58790D2E: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x58790D32: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790D34: je 0x58790d3c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790D36: push esi
        __asm _emit 0x56
        // 0x58790D37: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x22
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790D3C: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58790D3F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790D41: je 0x58790d49
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790D43: push esi
        __asm _emit 0x56
        // 0x58790D44: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790D49: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790D4F: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x26
        // 0x58790D53: mov esi, dword ptr [0x58a0b1c0]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58790D59: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58790D5C: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        // 0x58790D5E: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x58790D61: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x58790D65: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790D67: je 0x58790d6f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790D69: push esi
        __asm _emit 0x56
        // 0x58790D6A: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790D6F: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58790D72: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790D74: je 0x58790d7c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790D76: push esi
        __asm _emit 0x56
        // 0x58790D77: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790D7C: mov ecx, dword ptr [0x58a0b1bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58790D82: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790D87: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790D8C: mov ecx, dword ptr [0x58a0b1c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58790D92: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790D97: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790D9C: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790DA1: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58790DA5: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x58790DA8: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790DAD: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58790DB0: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58790DB3: mov eax, dword ptr [0x58a2480c]
        __asm _emit 0xA1
        __asm _emit 0x0C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790DB8: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58790DBC: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x58790DBF: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58790DC2: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58790DC5: mov eax, dword ptr [0x58a0b1bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58790DCA: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58790DCE: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x58790DD1: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58790DD4: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58790DD7: mov eax, dword ptr [0x58a0b1c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58790DDC: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58790DE0: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x58790DE3: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58790DE6: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58790DE9: mov eax, dword ptr [0x58a247fc]
        __asm _emit 0xA1
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790DEE: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790DF4: push eax
        __asm _emit 0x50
        // 0x58790DF5: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790DF7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790DF9: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790DFE: push esi
        __asm _emit 0x56
        // 0x58790DFF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790E01: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790E06: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xAC
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58790E0B: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790E11: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790E13: push esi
        __asm _emit 0x56
        // 0x58790E14: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790E16: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790E1B: push esi
        __asm _emit 0x56
        // 0x58790E1C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790E1E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790E23: mov eax, dword ptr [0x58a245cc]
        __asm _emit 0xA1
        __asm _emit 0xCC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790E28: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790E2E: push eax
        __asm _emit 0x50
        // 0x58790E2F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790E31: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790E33: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790E38: push esi
        __asm _emit 0x56
        // 0x58790E39: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790E3B: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790E40: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790E45: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790E4B: push eax
        __asm _emit 0x50
        // 0x58790E4C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790E4E: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790E50: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790E55: push esi
        __asm _emit 0x56
        // 0x58790E56: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790E58: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790E5D: mov esi, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790E63: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58790E66: mov eax, 0x44c
        __asm _emit 0xB8
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58790E6B: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x58790E6F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790E71: je 0x58790e79
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790E73: push esi
        __asm _emit 0x56
        // 0x58790E74: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790E79: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58790E7C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58790E7E: je 0x58790e86
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58790E80: push esi
        __asm _emit 0x56
        // 0x58790E81: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790E86: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790E8B: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790E91: push eax
        __asm _emit 0x50
        // 0x58790E92: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790E94: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790E96: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790E9B: push esi
        __asm _emit 0x56
        // 0x58790E9C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790E9E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790EA3: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790EA8: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790EAE: push eax
        __asm _emit 0x50
        // 0x58790EAF: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790EB1: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790EB3: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790EB8: push esi
        __asm _emit 0x56
        // 0x58790EB9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790EBB: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790EC0: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790EC5: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790ECB: push eax
        __asm _emit 0x50
        // 0x58790ECC: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790ECE: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790ED0: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790ED5: push esi
        __asm _emit 0x56
        // 0x58790ED6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790ED8: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790EDD: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790EE2: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790EE8: push eax
        __asm _emit 0x50
        // 0x58790EE9: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790EEB: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790EED: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790EF2: push esi
        __asm _emit 0x56
        // 0x58790EF3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790EF5: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790EFA: mov eax, dword ptr [0x58a245a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790EFF: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790F05: push eax
        __asm _emit 0x50
        // 0x58790F06: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790F08: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790F0A: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790F0F: push esi
        __asm _emit 0x56
        // 0x58790F10: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790F12: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790F17: mov eax, dword ptr [0x58a0adbc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58790F1C: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790F22: push eax
        __asm _emit 0x50
        // 0x58790F23: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790F25: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790F27: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790F2C: push esi
        __asm _emit 0x56
        // 0x58790F2D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790F2F: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790F34: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790F39: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790F3F: push eax
        __asm _emit 0x50
        // 0x58790F40: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790F42: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790F44: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790F49: push esi
        __asm _emit 0x56
        // 0x58790F4A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790F4C: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790F51: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790F56: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790F5C: push eax
        __asm _emit 0x50
        // 0x58790F5D: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790F5F: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790F61: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790F66: push esi
        __asm _emit 0x56
        // 0x58790F67: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790F69: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790F6E: mov eax, dword ptr [0x58a245bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790F73: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790F79: push eax
        __asm _emit 0x50
        // 0x58790F7A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790F7C: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790F7E: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790F83: push esi
        __asm _emit 0x56
        // 0x58790F84: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790F86: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790F8B: mov eax, dword ptr [0x58a245d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790F90: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790F96: push eax
        __asm _emit 0x50
        // 0x58790F97: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790F99: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790F9B: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790FA0: push esi
        __asm _emit 0x56
        // 0x58790FA1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790FA3: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790FA8: mov eax, dword ptr [0x58a248cc]
        __asm _emit 0xA1
        __asm _emit 0xCC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790FAD: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790FB3: push eax
        __asm _emit 0x50
        // 0x58790FB4: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790FB6: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790FB8: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790FBD: push esi
        __asm _emit 0x56
        // 0x58790FBE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790FC0: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790FC5: mov eax, dword ptr [0x58a2462c]
        __asm _emit 0xA1
        __asm _emit 0x2C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790FCA: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790FD0: push eax
        __asm _emit 0x50
        // 0x58790FD1: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790FD3: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790FD5: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790FDA: push esi
        __asm _emit 0x56
        // 0x58790FDB: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790FDD: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790FE2: mov eax, dword ptr [0x58a245b0]
        __asm _emit 0xA1
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790FE7: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58790FED: push eax
        __asm _emit 0x50
        // 0x58790FEE: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58790FF0: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58790FF2: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790FF7: push esi
        __asm _emit 0x56
        // 0x58790FF8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58790FFA: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58790FFF: mov eax, dword ptr [0x58a245e4]
        __asm _emit 0xA1
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791004: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879100A: push eax
        __asm _emit 0x50
        // 0x5879100B: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5879100D: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5879100F: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791014: push esi
        __asm _emit 0x56
        // 0x58791015: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58791017: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879101C: mov eax, dword ptr [0x58a245d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791021: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791027: push eax
        __asm _emit 0x50
        // 0x58791028: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5879102A: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5879102C: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791031: push esi
        __asm _emit 0x56
        // 0x58791032: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58791034: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x1F
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791039: mov eax, dword ptr [0x58a245ec]
        __asm _emit 0xA1
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879103E: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791044: push eax
        __asm _emit 0x50
        // 0x58791045: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58791047: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58791049: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879104E: push esi
        __asm _emit 0x56
        // 0x5879104F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58791051: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791056: mov eax, dword ptr [0x58a245f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879105B: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791061: push eax
        __asm _emit 0x50
        // 0x58791062: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58791064: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58791066: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879106B: push esi
        __asm _emit 0x56
        // 0x5879106C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5879106E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791073: mov eax, dword ptr [0x58a245f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791078: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879107E: push eax
        __asm _emit 0x50
        // 0x5879107F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58791081: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58791083: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791088: push esi
        __asm _emit 0x56
        // 0x58791089: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5879108B: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791090: push 0xb0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791095: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xBB
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5879109A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5879109D: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587910A1: mov dword ptr [esp + 0x24], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587910A9: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587910AB: je 0x587910bf
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587910AD: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587910AF: push ebx
        __asm _emit 0x53
        // 0x587910B0: push ebx
        __asm _emit 0x53
        // 0x587910B1: push ebx
        __asm _emit 0x53
        // 0x587910B2: push ebx
        __asm _emit 0x53
        // 0x587910B3: push ebx
        __asm _emit 0x53
        // 0x587910B4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587910B6: call 0x58877370
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x62
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587910BB: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587910BD: jmp 0x587910c1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587910BF: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587910C1: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587910C7: push esi
        __asm _emit 0x56
        // 0x587910C8: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587910D0: mov dword ptr [0x58a245d4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xD4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587910D6: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587910D8: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587910DD: push esi
        __asm _emit 0x56
        // 0x587910DE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587910E0: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587910E5: mov eax, dword ptr [0x58a245d4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587910EA: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587910EF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587910F3: mov ecx, dword ptr [0x58a245d4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587910F9: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x587910FB: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791100: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791105: mov esi, dword ptr [0x58a245d4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xD4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879110B: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5879110E: mov edx, 0xfa0
        __asm _emit 0xBA
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791113: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x58791117: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58791119: je 0x58791121
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5879111B: push esi
        __asm _emit 0x56
        // 0x5879111C: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x1E
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791121: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58791124: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58791126: je 0x5879112e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58791128: push esi
        __asm _emit 0x56
        // 0x58791129: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879112E: mov ecx, dword ptr [0x58a245d0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791134: push ebx
        __asm _emit 0x53
        // 0x58791135: push ebx
        __asm _emit 0x53
        // 0x58791136: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879113B: mov esi, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791141: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58791144: mov eax, 0x7d0
        __asm _emit 0xB8
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791149: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5879114D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5879114F: je 0x58791157
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58791151: push esi
        __asm _emit 0x56
        // 0x58791152: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791157: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5879115A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5879115C: je 0x58791164
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5879115E: push esi
        __asm _emit 0x56
        // 0x5879115F: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791164: mov esi, dword ptr [0x58a245c8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879116A: mov ecx, 0xb54
        __asm _emit 0xB9
        __asm _emit 0x54
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879116F: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x58791173: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58791176: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58791178: je 0x58791180
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5879117A: push esi
        __asm _emit 0x56
        // 0x5879117B: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791180: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58791183: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58791185: je 0x5879118d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58791187: push esi
        __asm _emit 0x56
        // 0x58791188: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879118D: mov esi, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58791193: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58791196: mov edx, 0xbb8
        __asm _emit 0xBA
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879119B: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5879119F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587911A1: je 0x587911a9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587911A3: push esi
        __asm _emit 0x56
        // 0x587911A4: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587911A9: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587911AC: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587911AE: je 0x587911b6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587911B0: push esi
        __asm _emit 0x56
        // 0x587911B1: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587911B6: mov esi, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587911BC: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x587911BF: mov eax, 0xfa0
        __asm _emit 0xB8
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587911C4: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x587911C8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587911CA: je 0x587911d2
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587911CC: push esi
        __asm _emit 0x56
        // 0x587911CD: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587911D2: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587911D5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587911D7: je 0x587911df
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587911D9: push esi
        __asm _emit 0x56
        // 0x587911DA: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587911DF: mov esi, dword ptr [0x58a245d0]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xD0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587911E5: mov ecx, 0x39d0
        __asm _emit 0xB9
        __asm _emit 0xD0
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587911EA: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x587911EE: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x587911F1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587911F3: je 0x587911fb
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587911F5: push esi
        __asm _emit 0x56
        // 0x587911F6: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587911FB: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587911FE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58791200: je 0x58791208
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58791202: push esi
        __asm _emit 0x56
        // 0x58791203: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791208: mov esi, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879120E: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58791211: mov edx, 0xfa0
        __asm _emit 0xBA
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791216: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5879121A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5879121C: je 0x58791224
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5879121E: push esi
        __asm _emit 0x56
        // 0x5879121F: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791224: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58791227: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58791229: je 0x58791231
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5879122B: push esi
        __asm _emit 0x56
        // 0x5879122C: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58791231: mov esi, dword ptr [0x58a0adbc]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xBC
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58791237: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5879123A: mov eax, 0x4e20
        __asm _emit 0xB8
        __asm _emit 0x20
        __asm _emit 0x4E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879123F: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x58791243: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58791245: je 0x5879124d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58791247: push esi
        __asm _emit 0x56
        // 0x58791248: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879124D: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58791250: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58791252: je 0x5879125a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58791254: push esi
        __asm _emit 0x56
        // 0x58791255: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5879125A: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879125E: or word ptr [ecx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58791263: mov eax, dword ptr [ecx + 0x12120]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58791269: mov dword ptr [eax + 0x28], 0x100
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791270: mov dword ptr [eax + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791276: mov dword ptr [eax + 0x8c], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58791280: mov ecx, dword ptr [ecx + 0x12120]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58791286: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58791288: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5879128B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879128D: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58791291: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791298: pop ecx
        __asm _emit 0x59
        // 0x58791299: pop edi
        __asm _emit 0x5F
        // 0x5879129A: pop esi
        __asm _emit 0x5E
        // 0x5879129B: pop ebp
        __asm _emit 0x5D
        // 0x5879129C: pop ebx
        __asm _emit 0x5B
        // 0x5879129D: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587912A0: ret
        __asm _emit 0xC3
    }
}
