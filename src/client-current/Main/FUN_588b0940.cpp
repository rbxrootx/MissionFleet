// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 2592 bytes across one range.

// Ghidra range: 0x588B0940 .. +0xA20 bytes.
extern "C" __declspec(naked) void FUN_588b0940_segment_00() {
    __asm {
        // 0x588B0940: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588B0942: push 0x58988054
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B0947: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B094D: push eax
        __asm _emit 0x50
        // 0x588B094E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588B0951: push ebx
        __asm _emit 0x53
        // 0x588B0952: push ebp
        __asm _emit 0x55
        // 0x588B0953: push esi
        __asm _emit 0x56
        // 0x588B0954: push edi
        __asm _emit 0x57
        // 0x588B0955: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588B095A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588B095C: push eax
        __asm _emit 0x50
        // 0x588B095D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B0961: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0967: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B0969: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B096D: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B0971: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0975: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B0979: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B097D: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B0981: push eax
        __asm _emit 0x50
        // 0x588B0982: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B0986: push ecx
        __asm _emit 0x51
        // 0x588B0987: push edx
        __asm _emit 0x52
        // 0x588B0988: push edi
        __asm _emit 0x57
        // 0x588B0989: push ebp
        __asm _emit 0x55
        // 0x588B098A: push eax
        __asm _emit 0x50
        // 0x588B098B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B098D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0992: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B0998: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588B099D: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B099F: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588B09A2: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588B09A5: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B09AC: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588B09AF: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B09B1: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B09B5: mov dword ptr [esi], 0x589a0828
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588B09BB: mov dword ptr [esi + 0x1e70], 0x70
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B09C5: mov dword ptr [esi + 0x1e74], 0x5d
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B09CF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B09D4: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B09D6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B09D9: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B09DD: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588B09E2: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B09E4: je 0x588b0a09
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588B09E6: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B09EA: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B09EE: add ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0A
        // 0x588B09F1: push ecx
        __asm _emit 0x51
        // 0x588B09F2: push ebx
        __asm _emit 0x53
        // 0x588B09F3: push ebx
        __asm _emit 0x53
        // 0x588B09F4: push edx
        __asm _emit 0x52
        // 0x588B09F5: push ebp
        __asm _emit 0x55
        // 0x588B09F6: push esi
        __asm _emit 0x56
        // 0x588B09F7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B09F9: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B09FE: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B0A04: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B0A07: jmp 0x588b0a0b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0A09: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B0A0B: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B0A0D: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0A11: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x588B0A14: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0A19: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B0A1B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0A1E: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0A22: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588B0A27: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B0A29: je 0x588b0a50
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588B0A2B: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B0A2F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B0A33: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x588B0A36: push eax
        __asm _emit 0x50
        // 0x588B0A37: push ebx
        __asm _emit 0x53
        // 0x588B0A38: push ebx
        __asm _emit 0x53
        // 0x588B0A39: push ecx
        __asm _emit 0x51
        // 0x588B0A3A: push ebp
        __asm _emit 0x55
        // 0x588B0A3B: push esi
        __asm _emit 0x56
        // 0x588B0A3C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B0A3E: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0A43: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B0A49: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B0A4C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B0A4E: jmp 0x588b0a52
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0A50: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B0A52: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B0A57: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0A5B: mov dword ptr [esi + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588B0A5E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0A63: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588B0A66: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0A6B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B0A6F: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B0A71: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xC1
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0A76: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B0A78: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0A7B: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0A7F: mov byte ptr [esp + 0x24], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x588B0A84: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B0A86: je 0x588b0ab9
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x588B0A88: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B0A8C: mov eax, dword ptr [esi + 0x1e74]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0A92: add eax, dword ptr [esp + 0x34]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B0A96: mov ecx, dword ptr [esi + 0x1e70]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0A9C: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x588B0A9F: push edx
        __asm _emit 0x52
        // 0x588B0AA0: push ebx
        __asm _emit 0x53
        // 0x588B0AA1: push ebx
        __asm _emit 0x53
        // 0x588B0AA2: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x588B0AA4: push eax
        __asm _emit 0x50
        // 0x588B0AA5: push ecx
        __asm _emit 0x51
        // 0x588B0AA6: push esi
        __asm _emit 0x56
        // 0x588B0AA7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B0AA9: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0AAE: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B0AB4: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B0AB7: jmp 0x588b0abb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0AB9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B0ABB: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B0ABD: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0AC1: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x588B0AC4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xC1
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0AC9: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B0ACB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0ACE: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0AD2: mov byte ptr [esp + 0x24], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588B0AD7: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B0AD9: je 0x588b0b0f
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588B0ADB: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B0ADF: mov eax, dword ptr [esi + 0x1e74]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0AE5: add eax, dword ptr [esp + 0x34]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B0AE9: mov ecx, dword ptr [esi + 0x1e70]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0AEF: add edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0F
        // 0x588B0AF2: push edx
        __asm _emit 0x52
        // 0x588B0AF3: push ebx
        __asm _emit 0x53
        // 0x588B0AF4: push ebx
        __asm _emit 0x53
        // 0x588B0AF5: push eax
        __asm _emit 0x50
        // 0x588B0AF6: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588B0AF9: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x588B0AFB: push ecx
        __asm _emit 0x51
        // 0x588B0AFC: push eax
        __asm _emit 0x50
        // 0x588B0AFD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B0AFF: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0B04: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B0B0A: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B0B0D: jmp 0x588b0b11
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0B0F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B0B11: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588B0B14: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0B19: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0B1D: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x588B0B20: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0B25: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588B0B28: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0B2D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B0B31: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588B0B34: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B0B39: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0B3E: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588B0B41: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0B46: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B0B4A: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0B4F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0B54: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0B57: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0B5B: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B0B5F: mov byte ptr [esp + 0x24], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588B0B64: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B0B66: je 0x588b0b9c
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588B0B68: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0B6D: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x588B0B71: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x588B0B74: push edx
        __asm _emit 0x52
        // 0x588B0B75: lea ecx, [edi + 0x1ee]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xEE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0B7B: push ecx
        __asm _emit 0x51
        // 0x588B0B7C: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B0B82: lea edx, [ebp + 0x20c]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0B88: push edx
        __asm _emit 0x52
        // 0x588B0B89: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B0B8F: push ebx
        __asm _emit 0x53
        // 0x588B0B90: push esi
        __asm _emit 0x56
        // 0x588B0B91: push ecx
        __asm _emit 0x51
        // 0x588B0B92: push edx
        __asm _emit 0x52
        // 0x588B0B93: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B0B95: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xD2
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B0B9A: jmp 0x588b0b9e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0B9C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B0B9E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0BA3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B0BA5: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0BA9: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588B0BAC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0BB1: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588B0BB4: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0BB9: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B0BBD: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0BC2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0BC7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0BCA: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0BCE: mov byte ptr [esp + 0x24], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x588B0BD3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B0BD5: je 0x588b0c0b
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588B0BD7: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0BDC: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B0BE0: movzx ecx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCA
        // 0x588B0BE3: push ecx
        __asm _emit 0x51
        // 0x588B0BE4: lea edx, [edi + 0x1ee]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xEE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0BEA: push edx
        __asm _emit 0x52
        // 0x588B0BEB: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B0BF1: lea ecx, [ebp + 0x266]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0BF7: push ecx
        __asm _emit 0x51
        // 0x588B0BF8: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B0BFE: push ebx
        __asm _emit 0x53
        // 0x588B0BFF: push esi
        __asm _emit 0x56
        // 0x588B0C00: push edx
        __asm _emit 0x52
        // 0x588B0C01: push ecx
        __asm _emit 0x51
        // 0x588B0C02: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B0C04: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xD1
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B0C09: jmp 0x588b0c0d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0C0B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B0C0D: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0C12: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B0C14: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0C18: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588B0C1B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0C20: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588B0C23: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0C28: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B0C2C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0C31: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0C36: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0C39: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0C3D: mov byte ptr [esp + 0x24], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x588B0C42: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B0C44: je 0x588b0c7a
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588B0C46: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0C4B: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x588B0C4F: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x588B0C52: push edx
        __asm _emit 0x52
        // 0x588B0C53: lea ecx, [edi + 0x1f2]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xF2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0C59: push ecx
        __asm _emit 0x51
        // 0x588B0C5A: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B0C60: lea edx, [ebp + 0x124]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0C66: push edx
        __asm _emit 0x52
        // 0x588B0C67: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B0C6D: push ebx
        __asm _emit 0x53
        // 0x588B0C6E: push esi
        __asm _emit 0x56
        // 0x588B0C6F: push ecx
        __asm _emit 0x51
        // 0x588B0C70: push edx
        __asm _emit 0x52
        // 0x588B0C71: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B0C73: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xD1
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B0C78: jmp 0x588b0c7c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0C7A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B0C7C: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0C81: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B0C83: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0C87: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588B0C8A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0C8F: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588B0C92: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0C97: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B0C9B: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0CA0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xBF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0CA5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0CA8: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0CAC: mov byte ptr [esp + 0x24], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588B0CB1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B0CB3: je 0x588b0ce9
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588B0CB5: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0CBA: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B0CBE: add edi, 0x1f2
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xF2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0CC4: movzx ecx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCA
        // 0x588B0CC7: push ecx
        __asm _emit 0x51
        // 0x588B0CC8: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B0CCE: push edi
        __asm _emit 0x57
        // 0x588B0CCF: lea edx, [ebp + 0x1fe]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xFE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0CD5: push edx
        __asm _emit 0x52
        // 0x588B0CD6: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B0CDC: push ebx
        __asm _emit 0x53
        // 0x588B0CDD: push esi
        __asm _emit 0x56
        // 0x588B0CDE: push ecx
        __asm _emit 0x51
        // 0x588B0CDF: push edx
        __asm _emit 0x52
        // 0x588B0CE0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B0CE2: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xD0
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B0CE7: jmp 0x588b0ceb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0CE9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B0CEB: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0CF0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B0CF2: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0CF6: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0CFC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0D01: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D07: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D0C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B0D10: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B0D12: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xBF
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0D17: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B0D19: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0D1C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0D20: mov byte ptr [esp + 0x24], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x09
        // 0x588B0D25: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B0D27: je 0x588b0d5e
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588B0D29: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D2E: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B0D32: lea ecx, [ebp + 0x124]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D38: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x588B0D3B: push eax
        __asm _emit 0x50
        // 0x588B0D3C: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B0D40: push ebx
        __asm _emit 0x53
        // 0x588B0D41: push ebx
        __asm _emit 0x53
        // 0x588B0D42: add eax, 0x1f2
        __asm _emit 0x05
        __asm _emit 0xF2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D47: push eax
        __asm _emit 0x50
        // 0x588B0D48: push ecx
        __asm _emit 0x51
        // 0x588B0D49: push esi
        __asm _emit 0x56
        // 0x588B0D4A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B0D4C: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0D51: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B0D57: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B0D5A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B0D5C: jmp 0x588b0d60
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0D5E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B0D60: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D65: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0D69: mov dword ptr [esi + 0x84], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D6F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x1F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0D74: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D7A: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D7F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B0D83: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D89: mov ecx, 0xdfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D8E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B0D92: add ebp, 0x1e5
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xE5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D98: lea edi, [esi + 0x2434]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0D9E: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0DA2: mov dword ptr [esp + 0x38], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0DAA: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B0DAC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0DB1: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x588B0DB3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0DB6: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B0DBA: mov byte ptr [esp + 0x24], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0A
        // 0x588B0DBF: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588B0DC1: je 0x588b0df3
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588B0DC3: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0DC7: mov edx, 0x44c
        __asm _emit 0xBA
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0DCC: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B0DD0: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x588B0DD3: push eax
        __asm _emit 0x50
        // 0x588B0DD4: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B0DD8: push ebx
        __asm _emit 0x53
        // 0x588B0DD9: push ebx
        __asm _emit 0x53
        // 0x588B0DDA: add eax, 0x74
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x74
        // 0x588B0DDD: push eax
        __asm _emit 0x50
        // 0x588B0DDE: push ecx
        __asm _emit 0x51
        // 0x588B0DDF: push esi
        __asm _emit 0x56
        // 0x588B0DE0: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588B0DE2: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0DE7: mov dword ptr [ebp], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B0DEE: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x50
        // 0x588B0DF1: jmp 0x588b0df5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0DF3: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588B0DF5: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B0DF7: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0DFB: mov dword ptr [edi - 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0xFC
        // 0x588B0DFE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0E03: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x588B0E05: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0E08: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B0E0C: mov byte ptr [esp + 0x24], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0B
        // 0x588B0E11: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588B0E13: je 0x588b0e47
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588B0E15: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0E19: mov edx, 0x44c
        __asm _emit 0xBA
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0E1E: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B0E22: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x588B0E25: push eax
        __asm _emit 0x50
        // 0x588B0E26: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B0E2A: push ebx
        __asm _emit 0x53
        // 0x588B0E2B: push ebx
        __asm _emit 0x53
        // 0x588B0E2C: add eax, 0x74
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x74
        // 0x588B0E2F: push eax
        __asm _emit 0x50
        // 0x588B0E30: push ecx
        __asm _emit 0x51
        // 0x588B0E31: push esi
        __asm _emit 0x56
        // 0x588B0E32: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588B0E34: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0E39: mov dword ptr [ebp], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B0E40: mov dword ptr [ebp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x50
        // 0x588B0E43: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588B0E45: jmp 0x588b0e49
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0E47: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B0E49: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B0E4E: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0E52: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x588B0E54: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x1E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0E59: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588B0E5B: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0E60: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B0E64: mov eax, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xFC
        // 0x588B0E67: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B0E6A: push eax
        __asm _emit 0x50
        // 0x588B0E6B: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0E70: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588B0E72: push ecx
        __asm _emit 0x51
        // 0x588B0E73: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B0E76: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0E7B: add dword ptr [esp + 0x3c], 0x1d
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x1D
        // 0x588B0E80: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x588B0E83: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x588B0E88: jne 0x588b0daa
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B0E8E: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0E93: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xBD
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0E98: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0E9B: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0E9F: mov byte ptr [esp + 0x24], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588B0EA4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B0EA6: je 0x588b0ee1
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588B0EA8: mov edx, 0x4b0
        __asm _emit 0xBA
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0EAD: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B0EB1: movzx ecx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCA
        // 0x588B0EB4: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B0EB8: push ecx
        __asm _emit 0x51
        // 0x588B0EB9: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B0EBD: add edx, 0x6f
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x6F
        // 0x588B0EC0: push edx
        __asm _emit 0x52
        // 0x588B0EC1: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B0EC7: add ecx, 0x1e1
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0ECD: push ecx
        __asm _emit 0x51
        // 0x588B0ECE: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B0ED4: push ebx
        __asm _emit 0x53
        // 0x588B0ED5: push esi
        __asm _emit 0x56
        // 0x588B0ED6: push edx
        __asm _emit 0x52
        // 0x588B0ED7: push ecx
        __asm _emit 0x51
        // 0x588B0ED8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B0EDA: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xCE
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B0EDF: jmp 0x588b0ee3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0EE1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B0EE3: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0EE8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B0EEA: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0EEE: mov dword ptr [esi + 0x2470], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0EF4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x1E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0EF9: mov eax, dword ptr [esi + 0x2470]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0EFF: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0F04: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B0F08: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588B0F0B: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B0F0E: push eax
        __asm _emit 0x50
        // 0x588B0F0F: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0F14: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588B0F17: push ecx
        __asm _emit 0x51
        // 0x588B0F18: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B0F1B: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0F20: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x588B0F23: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B0F26: push edx
        __asm _emit 0x52
        // 0x588B0F27: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0F2C: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0F32: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B0F35: push eax
        __asm _emit 0x50
        // 0x588B0F36: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0F3B: mov ecx, dword ptr [esi + 0x2470]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0F41: push ecx
        __asm _emit 0x51
        // 0x588B0F42: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B0F45: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0F4A: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0F50: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588B0F53: push edx
        __asm _emit 0x52
        // 0x588B0F54: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x1F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0F59: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0F5E: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B0F62: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588B0F66: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0F6B: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588B0F6E: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0F73: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588B0F76: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588B0F7A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B0F7C: mov byte ptr [esi + 0x230], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0F82: mov dword ptr [esi + 0x22c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0F88: call 0x588ade00
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xCE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B0F8D: mov dword ptr [esp + 0x3c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0F91: lea ebp, [esi + 0x20f8]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0xF8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0F97: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588B0F99: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xBC
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B0F9E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B0FA0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B0FA3: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B0FA7: mov byte ptr [esp + 0x24], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0D
        // 0x588B0FAC: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B0FAE: je 0x588b0fdf
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588B0FB0: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0FB5: add cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x588B0FB9: movzx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC1
        // 0x588B0FBC: push eax
        __asm _emit 0x50
        // 0x588B0FBD: push ebx
        __asm _emit 0x53
        // 0x588B0FBE: push ebx
        __asm _emit 0x53
        // 0x588B0FBF: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0FC4: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0FC9: push esi
        __asm _emit 0x56
        // 0x588B0FCA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B0FCC: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B0FD1: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B0FD7: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B0FDA: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x588B0FDD: jmp 0x588b0fe1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B0FDF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B0FE1: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B0FE5: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x588B0FE8: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B0FED: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x588B0FF1: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588B0FF4: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B0FF6: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B0FFA: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588B0FFD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xBC
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B1002: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B1004: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B1007: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588B100B: mov byte ptr [esp + 0x24], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x588B1010: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B1012: je 0x588b103d
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588B1014: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588B1017: push 0x3e7
        __asm _emit 0x68
        __asm _emit 0xE7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B101C: push ebx
        __asm _emit 0x53
        // 0x588B101D: push ebx
        __asm _emit 0x53
        // 0x588B101E: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1023: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1028: push eax
        __asm _emit 0x50
        // 0x588B1029: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B102B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1030: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B1036: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B1039: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B103B: jmp 0x588b103f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B103D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B103F: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B1044: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B1048: mov dword ptr [ebp + 0x190], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B104E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1053: mov eax, dword ptr [ebp + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1059: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B105E: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B1062: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B1066: inc eax
        __asm _emit 0x40
        // 0x588B1067: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588B106A: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x588B106D: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B1071: jl 0x588b0f97
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B1077: lea eax, [esi + 0x2424]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B107D: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B1081: lea ebp, [esi + 0x238]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1087: mov dword ptr [esp + 0x38], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B108F: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B1091: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xBB
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B1096: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B1098: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B109B: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B109F: mov byte ptr [esp + 0x24], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588B10A4: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B10A6: je 0x588b10e4
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588B10A8: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B10AC: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588B10AF: add eax, dword ptr [esi + 0x1e74]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B10B5: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588B10B8: add ecx, dword ptr [esp + 0x30]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B10BC: add eax, dword ptr [esp + 0x34]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B10C0: add ecx, dword ptr [esi + 0x1e70]
        __asm _emit 0x03
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B10C6: add edx, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B10CC: push edx
        __asm _emit 0x52
        // 0x588B10CD: push ebx
        __asm _emit 0x53
        // 0x588B10CE: push ebx
        __asm _emit 0x53
        // 0x588B10CF: push eax
        __asm _emit 0x50
        // 0x588B10D0: push ecx
        __asm _emit 0x51
        // 0x588B10D1: push esi
        __asm _emit 0x56
        // 0x588B10D2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B10D4: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B10D9: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B10DF: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B10E2: jmp 0x588b10e6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B10E4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B10E6: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B10EA: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B10EC: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B10F0: mov dword ptr [eax - 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0xF4
        // 0x588B10F3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xBB
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B10F8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B10FA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B10FD: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588B1101: mov byte ptr [esp + 0x24], 0x10
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588B1106: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B1108: je 0x588b114f
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588B110A: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B110E: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588B1111: add eax, dword ptr [esi + 0x1e74]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1117: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588B111A: add eax, dword ptr [esp + 0x34]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B111E: add ecx, dword ptr [esp + 0x30]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588B1122: add edx, 0x3e7
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xE7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1128: add ecx, dword ptr [esi + 0x1e70]
        __asm _emit 0x03
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B112E: push edx
        __asm _emit 0x52
        // 0x588B112F: push ebx
        __asm _emit 0x53
        // 0x588B1130: push ebx
        __asm _emit 0x53
        // 0x588B1131: push eax
        __asm _emit 0x50
        // 0x588B1132: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588B1136: mov eax, dword ptr [eax - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0xF4
        // 0x588B1139: push ecx
        __asm _emit 0x51
        // 0x588B113A: push eax
        __asm _emit 0x50
        // 0x588B113B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B113D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1142: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B1148: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B114B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B114D: jmp 0x588b1151
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B114F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B1151: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B1155: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B115A: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B115E: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x588B1160: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x1B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1165: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588B1167: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B116C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B1170: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588B1173: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x588B1176: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x588B117B: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588B117F: jne 0x588b108f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B1185: lea ebp, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B118B: mov dword ptr [esp + 0x34], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1193: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B1195: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xBA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B119A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B119C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B119F: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588B11A3: mov byte ptr [esp + 0x24], 0x11
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x11
        // 0x588B11A8: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B11AA: je 0x588b11da
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x588B11AC: mov edx, 0x44c
        __asm _emit 0xBA
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B11B1: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B11B5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B11B7: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x588B11BA: push eax
        __asm _emit 0x50
        // 0x588B11BB: push ebx
        __asm _emit 0x53
        // 0x588B11BC: push ebx
        __asm _emit 0x53
        // 0x588B11BD: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B11C2: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B11C7: push esi
        __asm _emit 0x56
        // 0x588B11C8: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x1F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B11CD: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B11D3: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B11D6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B11D8: jmp 0x588b11dc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B11DA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B11DC: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B11E1: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B11E5: mov dword ptr [ebp], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588B11E8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x1B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B11ED: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588B11F0: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B11F5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B11F9: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588B11FC: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x588B1201: jne 0x588b1193
        __asm _emit 0x75
        __asm _emit 0x90
        // 0x588B1203: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588B1205: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xBA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B120A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588B120C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B120F: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B1213: mov byte ptr [esp + 0x24], 0x12
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x588B1218: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588B121A: je 0x588b124a
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x588B121C: mov edx, 0x44c
        __asm _emit 0xBA
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1221: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B1225: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B1227: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x588B122A: push eax
        __asm _emit 0x50
        // 0x588B122B: push ebx
        __asm _emit 0x53
        // 0x588B122C: push ebx
        __asm _emit 0x53
        // 0x588B122D: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1232: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1237: push esi
        __asm _emit 0x56
        // 0x588B1238: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x1F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B123D: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588B1243: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588B1246: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B1248: jmp 0x588b124c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B124A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588B124C: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1251: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B1255: mov dword ptr [esi + 0x88], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B125B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x1A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1260: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1266: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B126B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588B126F: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1274: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B1279: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B127C: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B1280: mov byte ptr [esp + 0x24], 0x13
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x588B1285: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B1287: je 0x588b12b9
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588B1289: mov edx, 0x4b0
        __asm _emit 0xBA
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B128E: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x588B1292: movzx ecx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCA
        // 0x588B1295: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B129B: push ecx
        __asm _emit 0x51
        // 0x588B129C: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B12A2: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B12A7: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B12AC: push ebx
        __asm _emit 0x53
        // 0x588B12AD: push esi
        __asm _emit 0x56
        // 0x588B12AE: push edx
        __asm _emit 0x52
        // 0x588B12AF: push ecx
        __asm _emit 0x51
        // 0x588B12B0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B12B2: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xCA
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588B12B7: jmp 0x588b12bb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B12B9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B12BB: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B12C0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B12C2: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588B12C6: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588B12C9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x1A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B12CE: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588B12D1: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B12D6: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B12DA: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B12DF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588B12E4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588B12E7: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588B12EB: mov byte ptr [esp + 0x24], 0x14
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588B12F0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B12F2: je 0x588b1304
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588B12F4: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588B12F8: push ebx
        __asm _emit 0x53
        // 0x588B12F9: push ebx
        __asm _emit 0x53
        // 0x588B12FA: push ecx
        __asm _emit 0x51
        // 0x588B12FB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B12FD: call 0x588b1fe0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1302: jmp 0x588b1306
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588B1304: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B1306: mov dword ptr [esi + 0x2478], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B130C: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1311: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B1315: mov edi, dword ptr [esi + 0x2478]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B131B: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588B131E: mov eax, 0x7d00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1323: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588B1327: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x588B132B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B132D: je 0x588b1335
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588B132F: push edi
        __asm _emit 0x57
        // 0x588B1330: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1335: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588B1338: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B133A: je 0x588b1342
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588B133C: push edi
        __asm _emit 0x57
        // 0x588B133D: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x1B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B1342: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588B1344: mov dword ptr [esi + 0x2474], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B134A: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588B134E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1355: pop ecx
        __asm _emit 0x59
        // 0x588B1356: pop edi
        __asm _emit 0x5F
        // 0x588B1357: pop esi
        __asm _emit 0x5E
        // 0x588B1358: pop ebp
        __asm _emit 0x5D
        // 0x588B1359: pop ebx
        __asm _emit 0x5B
        // 0x588B135A: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588B135D: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
