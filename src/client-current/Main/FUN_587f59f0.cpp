// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1225 bytes in 5 exact ranges.
// Source symbol alias: FUN_587f59f0.

// Ghidra body range 0x587F59F0..0x587F5A49; 89 mapped bytes.
extern "C" __declspec(naked) void FUN_587f59f0_segment_00() {
    __asm {
        // 0x587F59F0: sub esp, 0x474
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F59F6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F59FB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F59FD: mov dword ptr [esp + 0x470], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5A04: push ebx
        __asm _emit 0x53
        // 0x587F5A05: push ebp
        __asm _emit 0x55
        // 0x587F5A06: push esi
        __asm _emit 0x56
        // 0x587F5A07: push edi
        __asm _emit 0x57
        // 0x587F5A08: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5A0D: lea eax, [esp + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5A14: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587F5A16: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F5A18: push eax
        __asm _emit 0x50
        // 0x587F5A19: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F5A1D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x72
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F5A22: mov esi, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F5A28: mov edi, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5A2E: lea eax, [esp + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5A35: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587F5A37: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587F5A39: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F5A3C: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F5A40: mov esi, 0x400
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5A45: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587F5A47: jmp 0x587f5a50
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x587F5A50..0x587F5D67; 791 mapped bytes.
extern "C" __declspec(naked) void FUN_587f59f0_segment_01() {
    __asm {
        // 0x587F5A50: lea ecx, [esi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587F5A56: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F5A58: je 0x587f5a6b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587F5A5A: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x587F5A5D: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F5A5F: je 0x587f5a6b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587F5A61: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x587F5A63: inc eax
        __asm _emit 0x40
        // 0x587F5A64: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587F5A67: jne 0x587f5a50
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587F5A69: jmp 0x587f5a6f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587F5A6B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F5A6D: jne 0x587f5a70
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587F5A6F: dec eax
        __asm _emit 0x48
        // 0x587F5A70: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5A73: lea eax, [esp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5A7A: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F5A7D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587F5A80: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F5A82: inc eax
        __asm _emit 0x40
        // 0x587F5A83: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F5A85: jne 0x587f5a80
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F5A87: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F5A89: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587F5A8B: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587F5A8D: cmp byte ptr [edi + 2], 0x68
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x02
        __asm _emit 0x68
        // 0x587F5A91: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587F5A93: setne bl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC3
        // 0x587F5A96: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587F5A98: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F5A9B: dec ebx
        __asm _emit 0x4B
        // 0x587F5A9C: and ebx, 6
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x06
        // 0x587F5A9F: add ebx, 3
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x03
        // 0x587F5AA2: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F5AA4: inc eax
        __asm _emit 0x40
        // 0x587F5AA5: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F5AA7: jne 0x587f5aa2
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F5AA9: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F5AAB: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587F5AAD: jbe 0x587f5eb8
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5AB3: cmp byte ptr [edi + ebx - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x1F
        __asm _emit 0xFF
        __asm _emit 0x20
        // 0x587F5AB8: jne 0x587f5eb8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5ABE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F5AC0: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587F5AC2: push eax
        __asm _emit 0x50
        // 0x587F5AC3: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F5AC7: push edx
        __asm _emit 0x52
        // 0x587F5AC8: mov dword ptr [esp + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587F5ACC: mov dword ptr [esp + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x587F5AD0: mov dword ptr [esp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x587F5AD4: mov dword ptr [esp + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587F5AD8: mov dword ptr [esp + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587F5ADC: mov dword ptr [esp + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587F5AE0: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x71
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F5AE5: mov al, byte ptr [esp + ebx + 0x8c]
        __asm _emit 0x8A
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5AEC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F5AEF: cmp al, 0x20
        __asm _emit 0x3C
        __asm _emit 0x20
        // 0x587F5AF1: je 0x587f5b0d
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587F5AF3: mov byte ptr [esp + esi + 0x50], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x50
        // 0x587F5AF7: inc esi
        __asm _emit 0x46
        // 0x587F5AF8: inc ebx
        __asm _emit 0x43
        // 0x587F5AF9: cmp esi, 0xe
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0E
        // 0x587F5AFC: jg 0x587f5eaf
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xAD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5B02: mov al, byte ptr [esp + ebx + 0x80]
        __asm _emit 0x8A
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5B09: cmp al, 0x20
        __asm _emit 0x3C
        __asm _emit 0x20
        // 0x587F5B0B: jne 0x587f5af3
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x587F5B0D: inc esi
        __asm _emit 0x46
        // 0x587F5B0E: inc ebx
        __asm _emit 0x43
        // 0x587F5B0F: cmp esi, 0xe
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0E
        // 0x587F5B12: jge 0x587f5eaf
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5B18: mov eax, 0x31
        __asm _emit 0xB8
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5B1D: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587F5B1F: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x587F5B21: push ebp
        __asm _emit 0x55
        // 0x587F5B22: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F5B26: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xBA
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587F5B2B: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F5B2F: push ecx
        __asm _emit 0x51
        // 0x587F5B30: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587F5B32: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F5B34: push ebp
        __asm _emit 0x55
        // 0x587F5B35: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F5B39: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x71
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F5B3E: mov edx, dword ptr [0x58a0b450]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5B44: mov eax, dword ptr [0x58a0b454]
        __asm _emit 0xA1
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5B49: mov ecx, dword ptr [0x58a0b458]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x58
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5B4F: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F5B53: mov edx, dword ptr [0x58a0b45c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x5C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5B59: mov dword ptr [esp + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587F5B5D: mov edx, dword ptr [esp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x587F5B61: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F5B65: mov eax, dword ptr [0x58a0b460]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5B6A: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F5B6E: mov ecx, dword ptr [0x58a0b464]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x64
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F5B74: mov dword ptr [esp + 0x48], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587F5B78: mov edx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587F5B7C: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587F5B80: mov eax, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x587F5B84: mov dword ptr [esp + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587F5B88: mov ecx, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587F5B8C: mov dword ptr [esp + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587F5B90: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F5B94: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587F5B98: mov eax, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587F5B9C: mov dword ptr [esp + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587F5BA0: mov ecx, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x587F5BA4: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587F5BA8: add edx, -0x30
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0xD0
        // 0x587F5BAB: push edx
        __asm _emit 0x52
        // 0x587F5BAC: lea eax, [esp + ebx + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5BB3: mov dword ptr [esp + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x587F5BB7: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x587F5BB9: push eax
        __asm _emit 0x50
        // 0x587F5BBA: add ebp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x30
        // 0x587F5BBD: mov ecx, 0xc
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5BC2: lea esi, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F5BC6: push ebp
        __asm _emit 0x55
        // 0x587F5BC7: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587F5BC9: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x71
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F5BCE: mov ebp, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F5BD4: lea esi, [ebp + 0x57c]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x7C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5BDA: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587F5BDD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587F5BDF: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F5BE3: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F5BE7: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587F5BE9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5BF0: mov bl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x18
        // 0x587F5BF2: cmp bl, byte ptr [edx]
        __asm _emit 0x3A
        __asm _emit 0x1A
        // 0x587F5BF4: jne 0x587f5c10
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587F5BF6: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x587F5BF8: je 0x587f5c0c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587F5BFA: mov bl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x587F5BFD: cmp bl, byte ptr [edx + 1]
        __asm _emit 0x3A
        __asm _emit 0x5A
        __asm _emit 0x01
        // 0x587F5C00: jne 0x587f5c10
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587F5C02: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587F5C05: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x587F5C08: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x587F5C0A: jne 0x587f5bf0
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x587F5C0C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F5C0E: jmp 0x587f5c15
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587F5C10: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587F5C12: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x587F5C15: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F5C17: je 0x587f5d96
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C1D: inc ecx
        __asm _emit 0x41
        // 0x587F5C1E: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x18
        // 0x587F5C21: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x587F5C24: jl 0x587f5be3
        __asm _emit 0x7C
        __asm _emit 0xBD
        // 0x587F5C26: mov edx, dword ptr [ebp + 0x5c4]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xC4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C2C: mov dword ptr [ebp + 0x5dc], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C32: mov edx, dword ptr [ebp + 0x5c8]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xC8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C38: mov dword ptr [ebp + 0x5e0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xE0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C3E: mov edx, dword ptr [ebp + 0x5cc]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xCC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C44: mov dword ptr [ebp + 0x5e4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C4A: mov edx, dword ptr [ebp + 0x5d0]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C50: mov dword ptr [ebp + 0x5e8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C56: mov edx, dword ptr [ebp + 0x5d4]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xD4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C5C: mov dword ptr [ebp + 0x5ec], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xEC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C62: lea eax, [ebp + 0x5c4]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C68: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x587F5C6B: mov dword ptr [ebp + 0x5f0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C71: lea ecx, [ebp + 0x5dc]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C77: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F5C7D: mov edx, dword ptr [ecx + 0x5ac]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C83: mov dword ptr [ecx + 0x5c4], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xC4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C89: mov edx, dword ptr [ecx + 0x5b0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C8F: mov dword ptr [ecx + 0x5c8], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xC8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C95: mov edx, dword ptr [ecx + 0x5b4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5C9B: mov dword ptr [ecx + 0x5cc], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xCC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CA1: mov edx, dword ptr [ecx + 0x5b8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CA7: mov dword ptr [ecx + 0x5d0], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CAD: mov edx, dword ptr [ecx + 0x5bc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xBC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CB3: mov dword ptr [ecx + 0x5d4], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xD4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CB9: lea eax, [ecx + 0x5ac]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CBF: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x587F5CC2: mov dword ptr [ecx + 0x5d8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CC8: add ecx, 0x5c4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CCE: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F5CD4: mov edx, dword ptr [ecx + 0x594]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CDA: mov dword ptr [ecx + 0x5ac], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CE0: mov edx, dword ptr [ecx + 0x598]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CE6: mov dword ptr [ecx + 0x5b0], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xB0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CEC: mov edx, dword ptr [ecx + 0x59c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CF2: lea eax, [ecx + 0x594]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CF8: mov dword ptr [ecx + 0x5b4], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5CFE: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587F5D01: add ecx, 0x5ac
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5D07: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587F5D0A: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587F5D0D: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587F5D10: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x587F5D13: mov dword ptr [ecx + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x587F5D16: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F5D1C: mov edx, dword ptr [ecx + 0x57c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x7C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5D22: lea eax, [ecx + 0x57c]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5D28: mov dword ptr [ecx + 0x594], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5D2E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587F5D31: add ecx, 0x594
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5D37: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587F5D3A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587F5D3D: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587F5D40: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587F5D43: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587F5D46: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587F5D49: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587F5D4C: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x587F5D4F: mov dword ptr [ecx + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x587F5D52: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F5D57: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F5D5B: mov esi, 0x18
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5D60: add eax, 0x57c
        __asm _emit 0x05
        __asm _emit 0x7C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5D65: jmp 0x587f5d70
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x587F5D70..0x587F5DFD; 141 mapped bytes.
extern "C" __declspec(naked) void FUN_587f59f0_segment_02() {
    __asm {
        // 0x587F5D70: lea ecx, [esi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587F5D76: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F5D78: je 0x587f5e6f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5D7E: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x587F5D80: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F5D82: je 0x587f5e6f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5D88: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x587F5D8A: inc eax
        __asm _emit 0x40
        // 0x587F5D8B: inc edx
        __asm _emit 0x42
        // 0x587F5D8C: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587F5D8F: jne 0x587f5d70
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587F5D91: jmp 0x587f5e73
        __asm _emit 0xE9
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5D96: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F5D9A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F5D9C: mov dword ptr [esp + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587F5DA0: mov dword ptr [esp + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587F5DA4: mov dword ptr [esp + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587F5DA8: mov dword ptr [esp + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x587F5DAC: mov dword ptr [esp + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x587F5DB0: mov dword ptr [esp + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x587F5DB4: lea edi, [eax + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x587F5DB7: lea eax, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587F5DBB: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x587F5DBD: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587F5DBF: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x587F5DC1: lea edx, [edi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587F5DC7: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587F5DC9: je 0x587f5ddc
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587F5DCB: mov dl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x06
        // 0x587F5DCE: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587F5DD0: je 0x587f5ddc
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587F5DD2: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587F5DD4: inc eax
        __asm _emit 0x40
        // 0x587F5DD5: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587F5DD8: jne 0x587f5dc1
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587F5DDA: jmp 0x587f5de0
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587F5DDC: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587F5DDE: jne 0x587f5de1
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587F5DE0: dec eax
        __asm _emit 0x48
        // 0x587F5DE1: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5DE4: lea eax, [ecx + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x49
        // 0x587F5DE7: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587F5DE9: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587F5DEB: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587F5DED: lea esi, [eax + ebp + 0x57c]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x28
        __asm _emit 0x7C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5DF4: mov edi, 0x18
        __asm _emit 0xBF
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5DF9: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587F5DFB: jmp 0x587f5e00
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587F5E00..0x587F5EAA; 170 mapped bytes.
extern "C" __declspec(naked) void FUN_587f59f0_segment_03() {
    __asm {
        // 0x587F5E00: lea edx, [edi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587F5E06: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587F5E08: je 0x587f5e1b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587F5E0A: mov dl, byte ptr [esi]
        __asm _emit 0x8A
        __asm _emit 0x16
        // 0x587F5E0C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587F5E0E: je 0x587f5e1b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587F5E10: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x587F5E12: inc ecx
        __asm _emit 0x41
        // 0x587F5E13: inc esi
        __asm _emit 0x46
        // 0x587F5E14: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587F5E17: jne 0x587f5e00
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587F5E19: jmp 0x587f5e1f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587F5E1B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587F5E1D: jne 0x587f5e20
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587F5E1F: dec ecx
        __asm _emit 0x49
        // 0x587F5E20: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F5E23: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F5E29: lea ecx, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587F5E2D: mov esi, 0x18
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5E32: lea eax, [eax + edx + 0x57c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x7C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5E39: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5E40: lea edx, [esi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587F5E46: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587F5E48: je 0x587f5e62
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587F5E4A: mov dl, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x11
        // 0x587F5E4C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587F5E4E: je 0x587f5e62
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587F5E50: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587F5E52: inc eax
        __asm _emit 0x40
        // 0x587F5E53: inc ecx
        __asm _emit 0x41
        // 0x587F5E54: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587F5E57: jne 0x587f5e40
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587F5E59: dec eax
        __asm _emit 0x48
        // 0x587F5E5A: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5E5D: jmp 0x587f5d52
        __asm _emit 0xE9
        __asm _emit 0xF0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F5E62: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F5E64: jne 0x587f5e67
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587F5E66: dec eax
        __asm _emit 0x48
        // 0x587F5E67: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5E6A: jmp 0x587f5d52
        __asm _emit 0xE9
        __asm _emit 0xE3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F5E6F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F5E71: jne 0x587f5e74
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587F5E73: dec eax
        __asm _emit 0x48
        // 0x587F5E74: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F5E78: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F5E7C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F5E7E: push edx
        __asm _emit 0x52
        // 0x587F5E7F: push esi
        __asm _emit 0x56
        // 0x587F5E80: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F5E82: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5E85: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F5E8B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F5E8D: call 0x587b8110
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F5E92: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F5E96: lea eax, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587F5E9A: push eax
        __asm _emit 0x50
        // 0x587F5E9B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F5E9D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F5E9F: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F5EA4: push esi
        __asm _emit 0x56
        // 0x587F5EA5: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x6D
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587F5EAF..0x587F5ED1; 34 mapped bytes.
extern "C" __declspec(naked) void FUN_587f59f0_segment_04() {
    __asm {
        // 0x587F5EAF: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F5EB3: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x9A
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F5EB8: mov ecx, dword ptr [esp + 0x480]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5EBF: pop edi
        __asm _emit 0x5F
        // 0x587F5EC0: pop esi
        __asm _emit 0x5E
        // 0x587F5EC1: pop ebp
        __asm _emit 0x5D
        // 0x587F5EC2: pop ebx
        __asm _emit 0x5B
        // 0x587F5EC3: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F5EC5: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x6D
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F5ECA: add esp, 0x474
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F5ED0: ret
        __asm _emit 0xC3
    }
}
