// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 947 bytes in 2 exact ranges.
// Source symbol alias: FUN_587f6c40.

// Ghidra body range 0x587F6C40..0x587F6F35; 757 mapped bytes.
extern "C" __declspec(naked) void FUN_587f6c40_segment_00() {
    __asm {
        // 0x587F6C40: sub esp, 0x440
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6C46: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F6C4B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F6C4D: mov dword ptr [esp + 0x43c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6C54: push ebx
        __asm _emit 0x53
        // 0x587F6C55: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587F6C57: mov eax, dword ptr [ebx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6C5D: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6C63: push ebp
        __asm _emit 0x55
        // 0x587F6C64: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6C69: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587F6C6B: cmp byte ptr [ecx + 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x20
        // 0x587F6C6F: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F6C73: mov dword ptr [esp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587F6C77: je 0x587f6caf
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x587F6C79: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6C80: mov al, byte ptr [ecx + edx]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x11
        // 0x587F6C83: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587F6C85: je 0x587f6cab
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587F6C87: cmp al, 0x30
        __asm _emit 0x3C
        __asm _emit 0x30
        // 0x587F6C89: jl 0x587f6fe4
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6C8F: cmp al, 0x39
        __asm _emit 0x3C
        __asm _emit 0x39
        // 0x587F6C91: jg 0x587f6fe4
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x4D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6C97: mov eax, dword ptr [ebx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6C9D: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6CA3: inc edx
        __asm _emit 0x42
        // 0x587F6CA4: inc ebp
        __asm _emit 0x45
        // 0x587F6CA5: cmp byte ptr [edx + eax], 0x20
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x20
        // 0x587F6CA9: jne 0x587f6c80
        __asm _emit 0x75
        __asm _emit 0xD5
        // 0x587F6CAB: mov dword ptr [esp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587F6CAF: push esi
        __asm _emit 0x56
        // 0x587F6CB0: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6CB5: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x587F6CB7: push edi
        __asm _emit 0x57
        // 0x587F6CB8: mov dword ptr [ebx + 0x21d1c], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6CC2: jl 0x587f6d2b
        __asm _emit 0x7C
        __asm _emit 0x67
        // 0x587F6CC4: fld qword ptr [0x5898cb38]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6CCA: lea edi, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0xFF
        // 0x587F6CCD: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x587F6CCF: mov eax, dword ptr [ebx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6CD5: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x587F6CD7: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6CDD: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587F6CDF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587F6CE1: jge 0x587f6ce5
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587F6CE3: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587F6CE5: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x587F6CE7: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587F6CE9: je 0x587f6ced
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x587F6CEB: fmul st(1)
        __asm _emit 0xD8
        __asm _emit 0xC9
        // 0x587F6CED: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x587F6CEF: je 0x587f6cf7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587F6CF1: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x587F6CF3: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x587F6CF5: jmp 0x587f6ce7
        __asm _emit 0xEB
        __asm _emit 0xF0
        // 0x587F6CF7: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x587F6CF9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587F6CFB: jge 0x587f6cff
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587F6CFD: fdivr st(1)
        __asm _emit 0xD8
        __asm _emit 0xF9
        // 0x587F6CFF: movsx ecx, byte ptr [ecx + esi]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x31
        // 0x587F6D03: sub ecx, 0x30
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x30
        // 0x587F6D06: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F6D0A: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F6D0E: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x587F6D10: fiadd dword ptr [ebx + 0x21d1c]
        __asm _emit 0xDA
        __asm _emit 0x83
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6D16: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x5F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6D1B: inc esi
        __asm _emit 0x46
        // 0x587F6D1C: dec edi
        __asm _emit 0x4F
        // 0x587F6D1D: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587F6D1F: mov dword ptr [ebx + 0x21d1c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6D25: jle 0x587f6ccf
        __asm _emit 0x7E
        __asm _emit 0xA8
        // 0x587F6D27: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x587F6D29: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x587F6D2B: lea ebp, [ebx + 0x21cec]
        __asm _emit 0x8D
        __asm _emit 0xAB
        __asm _emit 0xEC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6D31: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F6D33: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587F6D36: mov dword ptr [ebp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587F6D39: mov dword ptr [ebp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x587F6D3C: mov dword ptr [ebp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587F6D3F: mov dword ptr [ebp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x587F6D42: mov dword ptr [ebp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587F6D45: mov edx, dword ptr [ebx + 0x21d1c]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6D4B: push edx
        __asm _emit 0x52
        // 0x587F6D4C: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6D51: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x587F6D53: push ebp
        __asm _emit 0x55
        // 0x587F6D54: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x4D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587F6D59: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6D5E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587F6D61: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587F6D63: mov esi, 0x18
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6D68: add eax, 0xc0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6D6D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587F6D70: lea edx, [esi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587F6D76: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587F6D78: je 0x587f6d8b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587F6D7A: mov dl, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x11
        // 0x587F6D7C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587F6D7E: je 0x587f6d8b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587F6D80: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587F6D82: inc eax
        __asm _emit 0x40
        // 0x587F6D83: inc ecx
        __asm _emit 0x41
        // 0x587F6D84: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587F6D87: jne 0x587f6d70
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587F6D89: jmp 0x587f6d8f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587F6D8B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587F6D8D: jne 0x587f6d90
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587F6D8F: dec eax
        __asm _emit 0x48
        // 0x587F6D90: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6D93: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6D99: push ebp
        __asm _emit 0x55
        // 0x587F6D9A: call 0x587b7870
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x0A
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F6D9F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F6DA1: je 0x587f6f9b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6DA7: mov edi, dword ptr [ebx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6DAD: mov edx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6DB3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587F6DB5: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x587F6DB8: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F6DBA: inc eax
        __asm _emit 0x40
        // 0x587F6DBB: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F6DBD: jne 0x587f6db8
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F6DBF: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587F6DC1: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F6DC5: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587F6DC7: jbe 0x587f6f3d
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6DCD: cmp byte ptr [edx + esi], 0x20
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x32
        __asm _emit 0x20
        // 0x587F6DD1: jne 0x587f6f3d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6DD7: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587F6DD9: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F6DDD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F6DDF: push eax
        __asm _emit 0x50
        // 0x587F6DE0: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x5E
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6DE5: mov eax, dword ptr [0x58a0b458]
        __asm _emit 0xA1
        __asm _emit 0x58
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6DEA: mov ecx, dword ptr [0x58a0b450]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6DF0: mov edx, dword ptr [0x58a0b454]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6DF6: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F6DFA: mov eax, dword ptr [0x58a0b464]
        __asm _emit 0xA1
        __asm _emit 0x64
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6DFF: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F6E03: mov ecx, dword ptr [0x58a0b45c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x5C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6E09: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F6E0D: mov edx, dword ptr [0x58a0b460]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6E13: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587F6E17: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x587F6E1A: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F6E1E: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587F6E21: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F6E25: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x587F6E28: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587F6E2C: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587F6E2F: mov dword ptr [esp + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587F6E33: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x587F6E36: mov dword ptr [esp + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587F6E3A: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x587F6E3D: mov dword ptr [esp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587F6E41: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6E47: mov dword ptr [esp + 0x4c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587F6E4B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F6E4E: mov dword ptr [esp + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587F6E52: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x587F6E55: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587F6E57: inc eax
        __asm _emit 0x40
        // 0x587F6E58: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587F6E5A: jne 0x587f6e55
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F6E5C: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587F6E5E: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587F6E60: add eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x30
        // 0x587F6E63: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587F6E65: push esi
        __asm _emit 0x56
        // 0x587F6E66: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F6E6A: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xA6
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587F6E6F: push esi
        __asm _emit 0x56
        // 0x587F6E70: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587F6E72: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F6E74: push ebx
        __asm _emit 0x53
        // 0x587F6E75: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x5D
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6E7A: mov ecx, 0xc
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6E7F: lea esi, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F6E83: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x587F6E85: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587F6E87: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F6E8B: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F6E8F: mov edx, dword ptr [edi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6E95: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6E9B: lea ecx, [esi - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0xD0
        // 0x587F6E9E: push ecx
        __asm _emit 0x51
        // 0x587F6E9F: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F6EA3: lea edx, [eax + ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x587F6EA7: push edx
        __asm _emit 0x52
        // 0x587F6EA8: lea eax, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x30
        // 0x587F6EAB: push eax
        __asm _emit 0x50
        // 0x587F6EAC: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x5E
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6EB1: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6EB7: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587F6EBA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F6EBC: push esi
        __asm _emit 0x56
        // 0x587F6EBD: push ebx
        __asm _emit 0x53
        // 0x587F6EBE: call 0x587b81a0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x12
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F6EC3: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6EC9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F6ECB: jne 0x587f6ee8
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587F6ECD: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6ED2: push 0x5899c598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6ED7: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F6ED9: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6EDF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6EE2: push eax
        __asm _emit 0x50
        // 0x587F6EE3: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F6EE8: push 0x3ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6EED: lea ecx, [esp + 0x51]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x51
        // 0x587F6EF1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F6EF3: push ecx
        __asm _emit 0x51
        // 0x587F6EF4: mov byte ptr [esp + 0x58], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587F6EF9: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x5D
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6EFE: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F6F01: push ebp
        __asm _emit 0x55
        // 0x587F6F02: push 0x5899c0b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6F07: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F6F09: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6F0C: push eax
        __asm _emit 0x50
        // 0x587F6F0D: lea edx, [esp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587F6F11: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6F16: push edx
        __asm _emit 0x52
        // 0x587F6F17: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x4B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587F6F1C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587F6F1F: lea eax, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587F6F23: push eax
        __asm _emit 0x50
        // 0x587F6F24: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x587F6F26: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F6F28: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587F6F2A: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x73
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F6F2F: push ebx
        __asm _emit 0x53
        // 0x587F6F30: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x5D
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587F6F3D..0x587F6FFB; 190 mapped bytes.
extern "C" __declspec(naked) void FUN_587f6c40_segment_01() {
    __asm {
        // 0x587F6F3D: mov dl, byte ptr [edx + esi + 1]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x32
        __asm _emit 0x01
        // 0x587F6F41: cmp dl, 0x20
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x587F6F44: je 0x587f6f4e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587F6F46: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587F6F48: jne 0x587f6fe2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6F4E: push 0x3ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6F53: lea ecx, [esp + 0x51]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x51
        // 0x587F6F57: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F6F59: push ecx
        __asm _emit 0x51
        // 0x587F6F5A: mov byte ptr [esp + 0x58], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587F6F5F: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x5C
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6F64: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F6F67: push ebp
        __asm _emit 0x55
        // 0x587F6F68: push 0x5899c0b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6F6D: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6F73: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6F76: push eax
        __asm _emit 0x50
        // 0x587F6F77: lea edx, [esp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587F6F7B: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6F80: push edx
        __asm _emit 0x52
        // 0x587F6F81: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x4A
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587F6F86: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587F6F89: lea eax, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587F6F8D: push eax
        __asm _emit 0x50
        // 0x587F6F8E: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x587F6F90: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F6F92: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587F6F94: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F6F99: jmp 0x587f6fe2
        __asm _emit 0xEB
        __asm _emit 0x47
        // 0x587F6F9B: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6FA1: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6FA6: push 0x5899c680
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xC6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6FAB: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F6FAD: mov ecx, dword ptr [ebx + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6FB3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6FB6: push eax
        __asm _emit 0x50
        // 0x587F6FB7: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x4D
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F6FBC: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6FC1: push 0x5899c680
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xC6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6FC6: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F6FC8: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6FCE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6FD1: push eax
        __asm _emit 0x50
        // 0x587F6FD2: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x62
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F6FD7: mov ecx, dword ptr [ebx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6FDD: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x89
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F6FE2: pop edi
        __asm _emit 0x5F
        // 0x587F6FE3: pop esi
        __asm _emit 0x5E
        // 0x587F6FE4: mov ecx, dword ptr [esp + 0x444]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6FEB: pop ebp
        __asm _emit 0x5D
        // 0x587F6FEC: pop ebx
        __asm _emit 0x5B
        // 0x587F6FED: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F6FEF: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x5B
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6FF4: add esp, 0x440
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6FFA: ret
        __asm _emit 0xC3
    }
}
