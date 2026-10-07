// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 568 bytes in 1 exact ranges.
// Source symbol alias: FUN_58783d20.

// Ghidra body range 0x58783D20..0x58783F58; 568 mapped bytes.
extern "C" __declspec(naked) void FUN_58783d20_segment_00() {
    __asm {
        // 0x58783D20: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58783D22: push 0x5897f8ce
        __asm _emit 0x68
        __asm _emit 0xCE
        __asm _emit 0xF8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58783D27: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783D2D: push eax
        __asm _emit 0x50
        // 0x58783D2E: push ecx
        __asm _emit 0x51
        // 0x58783D2F: push ebx
        __asm _emit 0x53
        // 0x58783D30: push ebp
        __asm _emit 0x55
        // 0x58783D31: push esi
        __asm _emit 0x56
        // 0x58783D32: push edi
        __asm _emit 0x57
        // 0x58783D33: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58783D38: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58783D3A: push eax
        __asm _emit 0x50
        // 0x58783D3B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58783D3F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783D45: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58783D47: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58783D4B: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58783D4F: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58783D53: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58783D57: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58783D59: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58783D5B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58783D5D: push ebx
        __asm _emit 0x53
        // 0x58783D5E: push ebp
        __asm _emit 0x55
        // 0x58783D5F: push eax
        __asm _emit 0x50
        // 0x58783D60: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xF4
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58783D65: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58783D69: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58783D6B: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783D73: mov dword ptr [esi], 0x58996a84
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x84
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58783D79: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x58783D7C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x8E
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58783D81: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58783D84: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58783D88: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58783D8D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58783D8F: je 0x58783de0
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x58783D91: mov edi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x58783D94: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58783D96: and edx, 0x80000001
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58783D9C: jns 0x58783da3
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58783D9E: dec edx
        __asm _emit 0x4A
        // 0x58783D9F: or edx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFE
        // 0x58783DA2: inc edx
        __asm _emit 0x42
        // 0x58783DA3: lea edx, [edx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xD2
        // 0x58783DA6: cmp dword ptr [edi + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x97
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783DAC: jle 0x58783dc3
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x58783DAE: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58783DB0: jl 0x58783dc3
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x58783DB2: mov edi, dword ptr [edi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783DB8: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58783DBA: je 0x58783dc3
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58783DBC: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x58783DBF: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x58783DC1: jmp 0x58783dc5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58783DC3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58783DC5: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58783DCB: mov ecx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58783DD1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58783DD3: push ebx
        __asm _emit 0x53
        // 0x58783DD4: push ebp
        __asm _emit 0x55
        // 0x58783DD5: push edx
        __asm _emit 0x52
        // 0x58783DD6: push ecx
        __asm _emit 0x51
        // 0x58783DD7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58783DD9: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x0C
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58783DDE: jmp 0x58783de2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58783DE0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58783DE2: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58783DE5: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58783DE9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58783DEB: mov word ptr [esi + 0x6e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x6E
        // 0x58783DEF: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58783DF5: push eax
        __asm _emit 0x50
        // 0x58783DF6: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58783DFB: call 0x58778e20
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58783E00: fild dword ptr [esp + 0x3c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58783E04: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58783E08: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58783E0B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58783E0D: jge 0x58783e15
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58783E0F: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58783E15: fdiv qword ptr [0x58996aa0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xA0
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58783E1B: movzx edx, word ptr [eax + 0xaa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783E22: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58783E26: push 0x96
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783E2B: fmul qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58783E31: fadd qword ptr [0x589a3060]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58783E37: fild dword ptr [esp + 0x38]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58783E3B: fnstcw word ptr [esp + 0x38]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58783E3F: movzx eax, word ptr [esp + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58783E44: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783E49: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x58783E4B: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58783E4F: fldcw word ptr [esp + 0x34]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58783E53: fistp dword ptr [esp + 0x34]
        __asm _emit 0xDB
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58783E57: mov ax, word ptr [esp + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58783E5C: mov word ptr [esi + 0x6e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6E
        // 0x58783E60: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x58783E63: fldcw word ptr [esp + 0x38]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58783E67: push eax
        __asm _emit 0x50
        // 0x58783E68: push 0x3e80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783E6D: call 0x5876bf40
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x80
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58783E72: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58783E75: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58783E78: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58783E7A: jge 0x58783e83
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x58783E7C: mov dword ptr [esi + 0x64], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783E83: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58783E85: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x8D
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58783E8A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58783E8D: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58783E91: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58783E96: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58783E98: je 0x58783edd
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x58783E9A: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58783EA0: cmp dword ptr [ecx + 0x160], 0x1c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        // 0x58783EA7: jle 0x58783ec0
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58783EA9: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783EB0: je 0x58783ec0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58783EB2: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783EB8: add edx, 0x700
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783EBE: jmp 0x58783ec2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58783EC0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58783EC2: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58783EC8: mov edi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58783ECE: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58783ED0: push ebx
        __asm _emit 0x53
        // 0x58783ED1: push ebp
        __asm _emit 0x55
        // 0x58783ED2: push edx
        __asm _emit 0x52
        // 0x58783ED3: push edi
        __asm _emit 0x57
        // 0x58783ED4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58783ED6: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x0B
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58783EDB: jmp 0x58783edf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58783EDD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58783EDF: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783EE4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58783EE6: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58783EEB: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58783EEE: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xEE
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58783EF3: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58783EF6: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783EFB: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58783EFF: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58783F04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58783F07: cmp byte ptr [ecx + 0x354], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783F0E: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58783F11: jne 0x58783f19
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58783F13: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58783F17: jmp 0x58783f1e
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58783F19: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58783F1E: movzx ecx, word ptr [esi + 0x6e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x6E
        // 0x58783F22: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58783F27: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58783F29: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58783F2C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58783F2E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58783F31: lea ecx, [edx + eax + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x64
        // 0x58783F35: mov word ptr [esi + 0x6c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58783F39: mov dword ptr [esi + 0x68], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783F40: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58783F42: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58783F46: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58783F4D: pop ecx
        __asm _emit 0x59
        // 0x58783F4E: pop edi
        __asm _emit 0x5F
        // 0x58783F4F: pop esi
        __asm _emit 0x5E
        // 0x58783F50: pop ebp
        __asm _emit 0x5D
        // 0x58783F51: pop ebx
        __asm _emit 0x5B
        // 0x58783F52: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58783F55: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
