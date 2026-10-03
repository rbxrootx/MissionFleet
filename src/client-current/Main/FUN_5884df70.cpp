// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884DF70 .. +0x24E bytes.
extern "C" __declspec(naked) void FUN_5884df70() {
    __asm {
        // 0x5884DF70: push ebp
        __asm _emit 0x55
        // 0x5884DF71: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5884DF73: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5884DF77: push esi
        __asm _emit 0x56
        // 0x5884DF78: push edi
        __asm _emit 0x57
        // 0x5884DF79: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5884DF7B: je 0x5884e1b5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DF81: mov eax, dword ptr [ebp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x3C
        // 0x5884DF84: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884DF88: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5884DF8A: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5884DF8C: je 0x5884dfb3
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5884DF8E: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5884DF91: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5884DF93: je 0x5884dfab
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5884DF95: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5884DF97: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884DF99: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5884DF9C: push edi
        __asm _emit 0x57
        // 0x5884DF9D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5884DF9F: mov ecx, dword ptr [ebp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x3C
        // 0x5884DFA2: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x5884DFA5: je 0x5884dfb3
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5884DFA7: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5884DFA9: jne 0x5884df95
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5884DFAB: pop edi
        __asm _emit 0x5F
        // 0x5884DFAC: pop esi
        __asm _emit 0x5E
        // 0x5884DFAD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884DFAF: pop ebp
        __asm _emit 0x5D
        // 0x5884DFB0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884DFB3: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5884DFB6: push ebx
        __asm _emit 0x53
        // 0x5884DFB7: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DFBC: jne 0x5884e074
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DFC2: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884DFC6: lea edi, [ebp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DFCC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5884DFD0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884DFD2: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884DFD8: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5884DFDB: mov esi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x14
        // 0x5884DFDE: mov edx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x5884DFE1: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x5884DFE3: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5884DFE5: jl 0x5884e03a
        __asm _emit 0x7C
        __asm _emit 0x53
        // 0x5884DFE7: mov esi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x1C
        // 0x5884DFEA: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x5884DFEC: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5884DFEE: jge 0x5884e03a
        __asm _emit 0x7D
        __asm _emit 0x4A
        // 0x5884DFF0: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5884DFF3: mov esi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x18
        // 0x5884DFF6: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x5884DFF9: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x5884DFFB: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5884DFFD: jl 0x5884e03a
        __asm _emit 0x7C
        __asm _emit 0x3B
        // 0x5884DFFF: mov esi, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x20
        // 0x5884E002: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x5884E004: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5884E006: jge 0x5884e03a
        __asm _emit 0x7D
        __asm _emit 0x32
        // 0x5884E008: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5884E00C: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5884E00F: jne 0x5884e05a
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x5884E011: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884E013: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5884E018: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884E01D: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884E023: push eax
        __asm _emit 0x50
        // 0x5884E024: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x99
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E029: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884E02F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5884E031: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5884E034: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884E036: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5884E038: jmp 0x5884e05a
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x5884E03A: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5884E03E: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5884E041: je 0x5884e05a
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5884E043: mov edx, dword ptr [ebp + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E049: cmp edx, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884E04D: je 0x5884e05a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884E04F: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884E051: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E056: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5884E05A: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884E05E: inc eax
        __asm _emit 0x40
        // 0x5884E05F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5884E062: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5884E065: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884E069: jl 0x5884dfd0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x61
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E06F: jmp 0x5884e16e
        __asm _emit 0xE9
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E074: cmp eax, 0x203
        __asm _emit 0x3D
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E079: jne 0x5884e0e8
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x5884E07B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884E07D: lea edi, [ebp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E083: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884E088: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5884E08A: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5884E08D: push eax
        __asm _emit 0x50
        // 0x5884E08E: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x34
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884E093: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884E095: je 0x5884e0a3
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5884E097: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCE
        __asm _emit 0xFF
        // 0x5884E09A: cmp dword ptr [ebx*4 + 0x58a0b1e4], esi
        __asm _emit 0x39
        __asm _emit 0x34
        __asm _emit 0x9D
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5884E0A1: jne 0x5884e0b1
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5884E0A3: inc ebx
        __asm _emit 0x43
        // 0x5884E0A4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5884E0A7: cmp ebx, 5
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x05
        // 0x5884E0AA: jl 0x5884e083
        __asm _emit 0x7C
        __asm _emit 0xD7
        // 0x5884E0AC: jmp 0x5884e16e
        __asm _emit 0xE9
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E0B1: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884E0B7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884E0B9: push edi
        __asm _emit 0x57
        // 0x5884E0BA: push edi
        __asm _emit 0x57
        // 0x5884E0BB: push edi
        __asm _emit 0x57
        // 0x5884E0BC: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x5884E0BF: push edi
        __asm _emit 0x57
        // 0x5884E0C0: push edx
        __asm _emit 0x52
        // 0x5884E0C1: push 0x8001f003
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x5884E0C6: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x2B
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884E0CB: mov eax, dword ptr [ebp + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E0D1: mov dword ptr [ebp + 0xdc], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E0D7: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5884E0DA: mov ecx, dword ptr [ebp + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E0E0: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x5884E0E3: jmp 0x5884e16e
        __asm _emit 0xE9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E0E8: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E0ED: jne 0x5884e16e
        __asm _emit 0x75
        __asm _emit 0x7F
        // 0x5884E0EF: mov edx, dword ptr [ebp + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E0F5: mov dword ptr [ebp + 0xdc], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E0FF: mov dword ptr [edx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x50
        // 0x5884E102: mov eax, dword ptr [ebp + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E108: mov dword ptr [eax + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x50
        // 0x5884E10B: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884E111: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5884E114: lea edi, [ebp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E11A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E120: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5884E122: push ebx
        __asm _emit 0x53
        // 0x5884E123: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x34
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884E128: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884E12A: jne 0x5884e137
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5884E12C: inc esi
        __asm _emit 0x46
        // 0x5884E12D: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5884E130: cmp esi, 5
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x05
        // 0x5884E133: jl 0x5884e120
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x5884E135: jmp 0x5884e16e
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x5884E137: mov dword ptr [ebp + 0xdc], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E13D: movzx ecx, byte ptr [0x58a0b1fd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x0D
        __asm _emit 0xFD
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5884E144: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x5884E146: jne 0x5884e157
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5884E148: mov edx, dword ptr [ebp + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E14E: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E155: jmp 0x5884e16e
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x5884E157: cmp dword ptr [esi*4 + 0x58a0b1e4], -1
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB5
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x5884E15F: je 0x5884e16e
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5884E161: mov eax, dword ptr [ebp + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E167: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E16E: cmp byte ptr [ebp + 0xd4], 1
        __asm _emit 0x80
        __asm _emit 0xBD
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5884E175: pop ebx
        __asm _emit 0x5B
        // 0x5884E176: jne 0x5884e1b5
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x5884E178: mov eax, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x6C
        // 0x5884E17B: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5884E17E: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884E184: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x5884E187: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5884E18A: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x5884E18C: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x5884E18E: jl 0x5884e1b5
        __asm _emit 0x7C
        __asm _emit 0x25
        // 0x5884E190: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x5884E193: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x5884E195: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x5884E197: jge 0x5884e1b5
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x5884E199: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5884E19C: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5884E19F: mov esi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x18
        // 0x5884E1A2: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x5884E1A4: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5884E1A6: jl 0x5884e1b5
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x5884E1A8: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x5884E1AB: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5884E1AD: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5884E1AF: jl 0x5884dfab
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF6
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E1B5: mov eax, dword ptr [ebp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x34
        // 0x5884E1B8: pop edi
        __asm _emit 0x5F
        // 0x5884E1B9: pop esi
        __asm _emit 0x5E
        // 0x5884E1BA: pop ebp
        __asm _emit 0x5D
        // 0x5884E1BB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
