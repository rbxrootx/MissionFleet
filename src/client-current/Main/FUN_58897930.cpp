// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1528 bytes in 1 exact ranges.
// Source symbol alias: FUN_58897930.

// Ghidra body range 0x58897930..0x58897F28; 1528 mapped bytes.
extern "C" __declspec(naked) void FUN_58897930_segment_00() {
    __asm {
        // 0x58897930: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58897932: push 0x589872e6
        __asm _emit 0x68
        __asm _emit 0xE6
        __asm _emit 0x72
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58897937: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889793D: push eax
        __asm _emit 0x50
        // 0x5889793E: push ecx
        __asm _emit 0x51
        // 0x5889793F: push ebx
        __asm _emit 0x53
        // 0x58897940: push ebp
        __asm _emit 0x55
        // 0x58897941: push esi
        __asm _emit 0x56
        // 0x58897942: push edi
        __asm _emit 0x57
        // 0x58897943: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58897948: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5889794A: push eax
        __asm _emit 0x50
        // 0x5889794B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889794F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897955: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58897957: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889795B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5889795F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58897963: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58897967: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5889796B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5889796F: push eax
        __asm _emit 0x50
        // 0x58897970: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58897974: push ecx
        __asm _emit 0x51
        // 0x58897975: push edx
        __asm _emit 0x52
        // 0x58897976: push edi
        __asm _emit 0x57
        // 0x58897977: push ebx
        __asm _emit 0x53
        // 0x58897978: push eax
        __asm _emit 0x50
        // 0x58897979: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889797B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xB8
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897980: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58897986: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5889798B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5889798D: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58897990: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x58897993: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889799A: mov dword ptr [esi + 0x5c], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x5C
        // 0x5889799D: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588979A1: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588979A3: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588979A7: mov dword ptr [esi], 0x589a00bc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588979AD: mov dword ptr [esi + 0x1a4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588979B3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x52
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588979B8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588979BB: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588979BF: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588979C4: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588979C6: je 0x58897a04
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588979C8: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588979CE: cmp dword ptr [ecx + 0x164], 0x63
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x63
        // 0x588979D5: jle 0x588979ed
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588979D7: cmp dword ptr [ecx + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588979DD: je 0x588979ed
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588979DF: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588979E5: mov ecx, dword ptr [edx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588979EB: jmp 0x588979ef
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588979ED: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588979EF: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588979F1: lea edx, [edi + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x28
        // 0x588979F4: push edx
        __asm _emit 0x52
        // 0x588979F5: lea edx, [ebx + 5]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x05
        // 0x588979F8: push edx
        __asm _emit 0x52
        // 0x588979F9: push ecx
        __asm _emit 0x51
        // 0x588979FA: push esi
        __asm _emit 0x56
        // 0x588979FB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588979FD: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xA2
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58897A02: jmp 0x58897a06
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897A04: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58897A06: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58897A08: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58897A0D: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58897A10: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x52
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58897A15: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58897A18: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897A1C: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58897A21: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58897A23: je 0x58897a61
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x58897A25: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897A2B: cmp dword ptr [ecx + 0x164], 0x62
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x62
        // 0x58897A32: jle 0x58897a4a
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58897A34: cmp dword ptr [ecx + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897A3A: je 0x58897a4a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58897A3C: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897A42: mov ecx, dword ptr [ecx + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897A48: jmp 0x58897a4c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897A4A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58897A4C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58897A4E: lea edx, [edi + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x28
        // 0x58897A51: push edx
        __asm _emit 0x52
        // 0x58897A52: add ebx, 5
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x05
        // 0x58897A55: push ebx
        __asm _emit 0x53
        // 0x58897A56: push ecx
        __asm _emit 0x51
        // 0x58897A57: push esi
        __asm _emit 0x56
        // 0x58897A58: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58897A5A: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xA2
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58897A5F: jmp 0x58897a63
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897A61: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58897A63: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58897A66: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58897A69: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897A6E: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58897A72: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58897A75: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58897A7A: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58897A7F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xB2
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897A84: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58897A87: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58897A8B: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58897A8E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897A93: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xB2
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897A98: cmp dword ptr [esi + 0x1a4], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897A9E: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58897AA2: jle 0x58897ef1
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897AA8: lea ebp, [edi + 0x42]
        __asm _emit 0x8D
        __asm _emit 0x6F
        __asm _emit 0x42
        // 0x58897AAB: lea ebx, [esi + 0xf4]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897AB1: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897AB5: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897ABA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x51
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58897ABF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58897AC2: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58897AC6: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x58897ACB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58897ACD: je 0x58897b10
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x58897ACF: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897AD5: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x58897ADC: jle 0x58897af5
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58897ADE: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897AE5: je 0x58897af5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58897AE7: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897AED: add edx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897AF3: jmp 0x58897af7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897AF5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58897AF7: lea ecx, [ebp + 2]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x02
        // 0x58897AFA: push ecx
        __asm _emit 0x51
        // 0x58897AFB: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58897AFF: add ecx, 0x53
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x53
        // 0x58897B02: push ecx
        __asm _emit 0x51
        // 0x58897B03: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58897B05: push edx
        __asm _emit 0x52
        // 0x58897B06: push esi
        __asm _emit 0x56
        // 0x58897B07: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58897B09: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xF5
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897B0E: jmp 0x58897b12
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897B10: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58897B12: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897B17: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58897B1C: mov dword ptr [ebx - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0xE4
        // 0x58897B1F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x51
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58897B24: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58897B27: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58897B2B: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x58897B30: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58897B32: je 0x58897b78
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x58897B34: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897B3A: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x58897B41: jle 0x58897b5a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58897B43: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897B4A: je 0x58897b5a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58897B4C: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897B52: add edx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897B58: jmp 0x58897b5c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897B5A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58897B5C: lea ecx, [ebp + 2]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x02
        // 0x58897B5F: push ecx
        __asm _emit 0x51
        // 0x58897B60: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58897B64: add ecx, 0x94
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897B6A: push ecx
        __asm _emit 0x51
        // 0x58897B6B: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58897B6D: push edx
        __asm _emit 0x52
        // 0x58897B6E: push esi
        __asm _emit 0x56
        // 0x58897B6F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58897B71: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xF5
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897B76: jmp 0x58897b7a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897B78: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58897B7A: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58897B7C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58897B81: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x58897B83: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x50
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58897B88: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58897B8A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58897B8D: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58897B91: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x58897B96: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58897B98: je 0x58897c19
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x58897B9A: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897B9F: cmp dword ptr [eax + 0x164], 0x61
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x61
        // 0x58897BA6: jle 0x58897bbf
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58897BA8: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897BAF: je 0x58897bbf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58897BB1: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897BB7: mov ebp, dword ptr [edx + 0x184]
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897BBD: jmp 0x58897bc1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897BBF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58897BC1: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897BC5: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58897BC9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58897BCB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58897BCD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58897BCF: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFE
        // 0x58897BD2: push eax
        __asm _emit 0x50
        // 0x58897BD3: add ecx, 0x4c
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x4C
        // 0x58897BD6: push ecx
        __asm _emit 0x51
        // 0x58897BD7: push esi
        __asm _emit 0x56
        // 0x58897BD8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58897BDA: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xB5
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897BDF: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58897BE5: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58897BE8: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58897BEA: je 0x58897c13
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58897BEC: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x58897BEF: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x58897BF2: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58897BF5: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x58897BF8: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58897BFB: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58897BFE: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58897C01: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58897C04: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58897C07: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58897C0A: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58897C0D: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58897C10: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58897C13: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897C17: jmp 0x58897c1b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897C19: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58897C1B: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897C20: mov dword ptr [ebx + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x1C
        // 0x58897C23: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58897C27: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58897C29: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58897C2E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x50
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58897C33: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58897C35: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58897C38: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58897C3C: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x58897C41: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58897C43: je 0x58897cc9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897C49: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897C4E: cmp dword ptr [eax + 0x164], 0x61
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x61
        // 0x58897C55: jle 0x58897c6e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58897C57: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897C5E: je 0x58897c6e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58897C60: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897C66: mov ebp, dword ptr [ecx + 0x184]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897C6C: jmp 0x58897c70
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897C6E: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58897C70: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897C74: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58897C78: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58897C7A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58897C7C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58897C7E: add edx, -2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0xFE
        // 0x58897C81: push edx
        __asm _emit 0x52
        // 0x58897C82: add eax, 0x8d
        __asm _emit 0x05
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897C87: push eax
        __asm _emit 0x50
        // 0x58897C88: push esi
        __asm _emit 0x56
        // 0x58897C89: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58897C8B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xB5
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897C90: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58897C96: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58897C99: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58897C9B: je 0x58897cc3
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58897C9D: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x58897CA0: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58897CA3: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58897CA6: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58897CA9: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58897CAC: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58897CAE: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58897CB1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58897CB4: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58897CB7: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58897CBA: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58897CBD: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58897CC0: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58897CC3: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897CC7: jmp 0x58897ccb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897CC9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58897CCB: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897CD0: mov dword ptr [ebx + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x38
        // 0x58897CD3: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58897CD7: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897CDC: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58897CE1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x4F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58897CE6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58897CE9: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897CED: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x58897CF2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58897CF4: je 0x58897d3c
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x58897CF6: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897CFC: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897D03: jle 0x58897d16
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58897D05: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897D0C: je 0x58897d16
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58897D0E: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897D14: jmp 0x58897d18
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897D16: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58897D18: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58897D1C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58897D1E: push ebp
        __asm _emit 0x55
        // 0x58897D1F: lea edx, [edi + 0x6e]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x6E
        // 0x58897D22: push edx
        __asm _emit 0x52
        // 0x58897D23: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897D29: push ecx
        __asm _emit 0x51
        // 0x58897D2A: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897D30: push esi
        __asm _emit 0x56
        // 0x58897D31: push ecx
        __asm _emit 0x51
        // 0x58897D32: push edx
        __asm _emit 0x52
        // 0x58897D33: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58897D35: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x60
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58897D3A: jmp 0x58897d42
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58897D3C: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58897D40: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58897D42: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897D47: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58897D49: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58897D4E: mov dword ptr [ebx - 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58897D54: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xAF
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897D59: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897D5E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x4E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58897D63: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58897D66: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897D6A: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x58897D6F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58897D71: je 0x58897dbb
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x58897D73: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897D79: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58897D80: jle 0x58897d96
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58897D82: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897D89: je 0x58897d96
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58897D8B: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897D91: add edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x40
        // 0x58897D94: jmp 0x58897d98
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897D96: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58897D98: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58897D9A: lea ecx, [ebp + 7]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x07
        // 0x58897D9D: push ecx
        __asm _emit 0x51
        // 0x58897D9E: lea ecx, [edi + 0x6e]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x6E
        // 0x58897DA1: push ecx
        __asm _emit 0x51
        // 0x58897DA2: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897DA8: push edx
        __asm _emit 0x52
        // 0x58897DA9: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897DAF: push esi
        __asm _emit 0x56
        // 0x58897DB0: push edx
        __asm _emit 0x52
        // 0x58897DB1: push ecx
        __asm _emit 0x51
        // 0x58897DB2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58897DB4: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x5F
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58897DB9: jmp 0x58897dbd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897DBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58897DBD: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897DC2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58897DC4: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58897DC9: mov dword ptr [ebx - 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0xAC
        // 0x58897DCC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xAF
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897DD1: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897DD6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x4E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58897DDB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58897DDE: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897DE2: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x58897DE7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58897DE9: je 0x58897e30
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x58897DEB: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897DF1: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897DF8: jle 0x58897e0b
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58897DFA: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897E01: je 0x58897e0b
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58897E03: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897E09: jmp 0x58897e0d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897E0B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58897E0D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58897E0F: push ebp
        __asm _emit 0x55
        // 0x58897E10: lea edx, [edi + 0xaf]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897E16: push edx
        __asm _emit 0x52
        // 0x58897E17: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897E1D: push ecx
        __asm _emit 0x51
        // 0x58897E1E: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897E24: push esi
        __asm _emit 0x56
        // 0x58897E25: push ecx
        __asm _emit 0x51
        // 0x58897E26: push edx
        __asm _emit 0x52
        // 0x58897E27: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58897E29: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x5F
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58897E2E: jmp 0x58897e32
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897E30: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58897E32: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897E37: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58897E39: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58897E3E: mov dword ptr [ebx - 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x90
        // 0x58897E41: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xAE
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897E46: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897E4B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x4D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58897E50: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58897E53: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897E57: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x58897E5C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58897E5E: je 0x58897eab
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x58897E60: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897E66: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58897E6D: jle 0x58897e83
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58897E6F: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897E76: je 0x58897e83
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58897E78: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897E7E: add edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x40
        // 0x58897E81: jmp 0x58897e85
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897E83: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58897E85: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58897E87: lea ecx, [ebp + 7]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x07
        // 0x58897E8A: push ecx
        __asm _emit 0x51
        // 0x58897E8B: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897E91: add edi, 0xaf
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897E97: push edi
        __asm _emit 0x57
        // 0x58897E98: push edx
        __asm _emit 0x52
        // 0x58897E99: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58897E9F: push esi
        __asm _emit 0x56
        // 0x58897EA0: push edx
        __asm _emit 0x52
        // 0x58897EA1: push ecx
        __asm _emit 0x51
        // 0x58897EA2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58897EA4: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x5E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58897EA9: jmp 0x58897ead
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58897EAB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58897EAD: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897EB2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58897EB4: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58897EB9: mov dword ptr [ebx - 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0xC8
        // 0x58897EBC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xAE
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58897EC1: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58897EC5: mov dword ptr [ebx + 0x94], 0x80
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897ECF: inc eax
        __asm _emit 0x40
        // 0x58897ED0: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x18
        // 0x58897ED3: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58897ED6: cmp eax, dword ptr [esi + 0x1a4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897EDC: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58897EE0: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58897EE4: jl 0x58897ab5
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xCB
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58897EEA: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58897EEC: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897EF1: mov dword ptr [esi + 0x148], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897EF7: mov dword ptr [esi + 0x184], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897EFD: mov byte ptr [esi + 0x1a8], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897F04: mov dword ptr [esi + 0x1ac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897F0A: mov dword ptr [esi + 0x1b0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897F10: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58897F12: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58897F16: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58897F1D: pop ecx
        __asm _emit 0x59
        // 0x58897F1E: pop edi
        __asm _emit 0x5F
        // 0x58897F1F: pop esi
        __asm _emit 0x5E
        // 0x58897F20: pop ebp
        __asm _emit 0x5D
        // 0x58897F21: pop ebx
        __asm _emit 0x5B
        // 0x58897F22: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58897F25: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
