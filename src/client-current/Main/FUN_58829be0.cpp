// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1490 bytes in 1 exact ranges.
// Source symbol alias: FUN_58829be0.

// Ghidra body range 0x58829BE0..0x5882A1B2; 1490 mapped bytes.
extern "C" __declspec(naked) void FUN_58829be0_segment_00() {
    __asm {
        // 0x58829BE0: push ebp
        __asm _emit 0x55
        // 0x58829BE1: push esi
        __asm _emit 0x56
        // 0x58829BE2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58829BE4: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58829BE8: push edi
        __asm _emit 0x57
        // 0x58829BE9: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x58829BEB: je 0x5882a1a9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829BF1: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58829BF4: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58829BF8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829BFA: je 0x58829c21
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x58829BFC: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x58829BFF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829C01: je 0x58829c19
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58829C03: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58829C05: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58829C07: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58829C0A: push edi
        __asm _emit 0x57
        // 0x58829C0B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58829C0D: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58829C10: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58829C13: je 0x58829c21
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58829C15: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829C17: jne 0x58829c03
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58829C19: pop edi
        __asm _emit 0x5F
        // 0x58829C1A: pop esi
        __asm _emit 0x5E
        // 0x58829C1B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58829C1D: pop ebp
        __asm _emit 0x5D
        // 0x58829C1E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58829C21: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58829C24: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829C29: je 0x58829f98
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829C2F: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829C34: jne 0x5882a1a9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6F
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829C3A: mov ebp, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829C40: mov edi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x58829C43: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58829C46: push ebp
        __asm _emit 0x55
        // 0x58829C47: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58829C49: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829C4E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829C50: je 0x58829ccf
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x58829C52: cmp byte ptr [esi + 0x60], 1
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x60
        __asm _emit 0x01
        // 0x58829C56: jne 0x58829ccf
        __asm _emit 0x75
        __asm _emit 0x77
        // 0x58829C58: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829C5A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58829C5C: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829C61: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829C63: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829C66: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829C6B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829C6D: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829C73: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829C78: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829C7A: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829C80: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829C85: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829C87: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829C8D: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829C92: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829C94: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829C9A: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829C9F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829CA1: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829CA7: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829CAC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829CAE: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829CB4: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829CB9: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829CBF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829CC1: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829CC6: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58829CC9: pop edi
        __asm _emit 0x5F
        // 0x58829CCA: pop esi
        __asm _emit 0x5E
        // 0x58829CCB: pop ebp
        __asm _emit 0x5D
        // 0x58829CCC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58829CCF: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829CD5: push ebp
        __asm _emit 0x55
        // 0x58829CD6: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829CDB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829CDD: je 0x58829d2b
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x58829CDF: mov al, byte ptr [esi + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58829CE2: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x58829CE4: je 0x58829cea
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58829CE6: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58829CE8: jne 0x58829d2b
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x58829CEA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829CEC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58829CEE: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829CF3: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829CF6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829CF8: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829CFD: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829D03: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829D05: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829D0A: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829D10: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829D12: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829D17: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829D1D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829D1F: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829D24: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829D26: jmp 0x58829c94
        __asm _emit 0xE9
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58829D2B: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829D2E: push ebp
        __asm _emit 0x55
        // 0x58829D2F: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829D34: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829D36: je 0x58829d4e
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58829D38: cmp byte ptr [esi + 0x60], 1
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x60
        __asm _emit 0x01
        // 0x58829D3C: jne 0x58829d4e
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58829D3E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829D40: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58829D42: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829D47: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829D49: jmp 0x58829c63
        __asm _emit 0xE9
        __asm _emit 0x15
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58829D4E: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829D54: push ebp
        __asm _emit 0x55
        // 0x58829D55: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829D5A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829D5C: je 0x58829d87
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58829D5E: mov al, byte ptr [esi + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58829D61: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x58829D63: je 0x58829d6d
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58829D65: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58829D67: je 0x58829d6d
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58829D69: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58829D6B: jne 0x58829d87
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58829D6D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829D6F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58829D71: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829D76: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829D79: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829D7B: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829D80: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829D82: jmp 0x58829c6d
        __asm _emit 0xE9
        __asm _emit 0xE6
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58829D87: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829D8D: push ebp
        __asm _emit 0x55
        // 0x58829D8E: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829D93: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829D95: je 0x58829df4
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x58829D97: mov al, byte ptr [esi + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58829D9A: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x58829D9C: je 0x58829da6
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58829D9E: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x58829DA0: je 0x58829da6
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58829DA2: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58829DA4: jne 0x58829df4
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x58829DA6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829DA8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58829DAA: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829DAF: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829DB2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829DB4: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829DB9: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829DBF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829DC1: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829DC6: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829DCC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829DCE: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829DD3: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829DD9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829DDB: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829DE0: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829DE6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829DE8: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829DED: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829DEF: jmp 0x58829ca1
        __asm _emit 0xE9
        __asm _emit 0xAD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58829DF4: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829DFA: push ebp
        __asm _emit 0x55
        // 0x58829DFB: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829E00: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829E02: je 0x58829e3a
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58829E04: mov al, byte ptr [esi + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58829E07: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x58829E09: je 0x58829e13
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58829E0B: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58829E0D: je 0x58829e13
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58829E0F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58829E11: jne 0x58829e3a
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x58829E13: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829E15: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58829E17: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829E1C: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829E1F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829E21: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829E26: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829E2C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829E2E: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829E33: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829E35: jmp 0x58829c7a
        __asm _emit 0xE9
        __asm _emit 0x40
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58829E3A: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829E40: push ebp
        __asm _emit 0x55
        // 0x58829E41: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829E46: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829E48: je 0x58829eb4
        __asm _emit 0x74
        __asm _emit 0x6A
        // 0x58829E4A: mov al, byte ptr [esi + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58829E4D: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x58829E4F: je 0x58829e59
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58829E51: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x58829E53: je 0x58829e59
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58829E55: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58829E57: jne 0x58829eb4
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x58829E59: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829E5B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58829E5D: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829E62: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829E65: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829E67: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829E6C: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829E72: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829E74: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829E79: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829E7F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829E81: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829E86: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829E8C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829E8E: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829E93: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829E99: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829E9B: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829EA0: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829EA6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829EA8: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829EAD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829EAF: jmp 0x58829cae
        __asm _emit 0xE9
        __asm _emit 0xFA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58829EB4: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829EBA: push ebp
        __asm _emit 0x55
        // 0x58829EBB: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829EC0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829EC2: je 0x58829efe
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x58829EC4: cmp byte ptr [esi + 0x60], 1
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x60
        __asm _emit 0x01
        // 0x58829EC8: jne 0x58829efe
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x58829ECA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829ECC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58829ECE: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829ED3: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829ED6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829ED8: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829EDD: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829EE3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829EE5: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829EEA: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829EF0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829EF2: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x77
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829EF7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829EF9: jmp 0x58829c87
        __asm _emit 0xE9
        __asm _emit 0x89
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58829EFE: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829F04: push ebp
        __asm _emit 0x55
        // 0x58829F05: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829F0A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829F0C: je 0x5882a1a9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829F12: mov al, byte ptr [esi + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58829F15: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x58829F17: je 0x58829f21
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58829F19: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58829F1B: jne 0x5882a1a9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829F21: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829F23: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58829F25: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829F2A: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829F2D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829F2F: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829F34: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829F3A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829F3C: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829F41: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829F47: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829F49: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829F4E: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829F54: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829F56: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829F5B: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829F61: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829F63: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829F68: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829F6E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829F70: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829F75: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829F7B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829F7D: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829F82: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829F88: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58829F8A: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829F8F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58829F92: pop edi
        __asm _emit 0x5F
        // 0x58829F93: pop esi
        __asm _emit 0x5E
        // 0x58829F94: pop ebp
        __asm _emit 0x5D
        // 0x58829F95: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58829F98: cmp dword ptr [edi + 8], 9
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x08
        __asm _emit 0x09
        // 0x58829F9C: jne 0x5882a1a9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829FA2: mov edx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x58829FA5: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x58829FA9: shr al, 1
        __asm _emit 0xD0
        __asm _emit 0xE8
        // 0x58829FAB: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58829FAD: je 0x58829fed
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58829FAF: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58829FB2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829FB4: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829FB9: mov ecx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58829FBF: mov edx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58829FC5: push ecx
        __asm _emit 0x51
        // 0x58829FC6: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829FCC: push edx
        __asm _emit 0x52
        // 0x58829FCD: call 0x58753bf0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x9C
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58829FD2: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829FD5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58829FD7: je 0x5882a1a2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829FDD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829FDF: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58829FE4: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58829FE7: pop edi
        __asm _emit 0x5F
        // 0x58829FE8: pop esi
        __asm _emit 0x5E
        // 0x58829FE9: pop ebp
        __asm _emit 0x5D
        // 0x58829FEA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58829FED: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58829FF0: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58829FF4: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x58829FF6: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x58829FF9: je 0x5882a00a
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58829FFB: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829FFE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A000: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x76
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A005: jmp 0x5882a19c
        __asm _emit 0xE9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A00A: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A010: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5882A014: shr al, 1
        __asm _emit 0xD0
        __asm _emit 0xE8
        // 0x5882A016: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5882A018: je 0x5882a03d
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5882A01A: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A020: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A022: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x75
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A027: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A02D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882A02F: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x75
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A034: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5882A037: pop edi
        __asm _emit 0x5F
        // 0x5882A038: pop esi
        __asm _emit 0x5E
        // 0x5882A039: pop ebp
        __asm _emit 0x5D
        // 0x5882A03A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882A03D: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A043: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5882A047: shr dl, 1
        __asm _emit 0xD0
        __asm _emit 0xEA
        // 0x5882A049: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5882A04C: je 0x5882a071
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5882A04E: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A054: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A056: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x75
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A05B: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A061: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882A063: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x75
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A068: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5882A06B: pop edi
        __asm _emit 0x5F
        // 0x5882A06C: pop esi
        __asm _emit 0x5E
        // 0x5882A06D: pop ebp
        __asm _emit 0x5D
        // 0x5882A06E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882A071: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A077: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882A07B: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x5882A07D: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5882A080: je 0x5882a0be
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5882A082: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A088: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A08A: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x75
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A08F: mov edx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882A095: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882A09A: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882A0A0: push edx
        __asm _emit 0x52
        // 0x5882A0A1: push eax
        __asm _emit 0x50
        // 0x5882A0A2: call 0x58753bf0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x9B
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5882A0A7: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5882A0AA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882A0AC: je 0x5882a1a2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A0B2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A0B4: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x75
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A0B9: jmp 0x5882a19c
        __asm _emit 0xE9
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A0BE: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A0C4: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5882A0C8: shr dl, 1
        __asm _emit 0xD0
        __asm _emit 0xEA
        // 0x5882A0CA: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5882A0CD: je 0x5882a0f2
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5882A0CF: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A0D5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A0D7: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x75
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A0DC: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A0E2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882A0E4: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x75
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A0E9: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5882A0EC: pop edi
        __asm _emit 0x5F
        // 0x5882A0ED: pop esi
        __asm _emit 0x5E
        // 0x5882A0EE: pop ebp
        __asm _emit 0x5D
        // 0x5882A0EF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882A0F2: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A0F8: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882A0FC: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x5882A0FE: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5882A101: je 0x5882a126
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5882A103: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A109: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A10B: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x75
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A110: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A116: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882A118: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A11D: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5882A120: pop edi
        __asm _emit 0x5F
        // 0x5882A121: pop esi
        __asm _emit 0x5E
        // 0x5882A122: pop ebp
        __asm _emit 0x5D
        // 0x5882A123: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882A126: mov edx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A12C: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5882A130: shr al, 1
        __asm _emit 0xD0
        __asm _emit 0xE8
        // 0x5882A132: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5882A134: jne 0x58829f75
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882A13A: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A140: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5882A144: shr dl, 1
        __asm _emit 0xD0
        __asm _emit 0xEA
        // 0x5882A146: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5882A149: je 0x5882a16e
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5882A14B: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A151: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882A153: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x74
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A158: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A15E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882A160: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x74
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A165: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5882A168: pop edi
        __asm _emit 0x5F
        // 0x5882A169: pop esi
        __asm _emit 0x5E
        // 0x5882A16A: pop ebp
        __asm _emit 0x5D
        // 0x5882A16B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882A16E: mov al, byte ptr [esi + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5882A171: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5882A173: jne 0x5882a188
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5882A175: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5882A178: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882A17A: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x74
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A17F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5882A182: pop edi
        __asm _emit 0x5F
        // 0x5882A183: pop esi
        __asm _emit 0x5E
        // 0x5882A184: pop ebp
        __asm _emit 0x5D
        // 0x5882A185: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882A188: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x5882A18A: je 0x5882a158
        __asm _emit 0x74
        __asm _emit 0xCC
        // 0x5882A18C: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5882A18E: je 0x5882a19c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5882A190: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5882A192: je 0x5882a0dc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882A198: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5882A19A: jne 0x5882a1a9
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5882A19C: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A1A2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5882A1A4: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x74
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882A1A9: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5882A1AC: pop edi
        __asm _emit 0x5F
        // 0x5882A1AD: pop esi
        __asm _emit 0x5E
        // 0x5882A1AE: pop ebp
        __asm _emit 0x5D
        // 0x5882A1AF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
