// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1429 bytes in 1 exact ranges.
// Source symbol alias: FUN_58776050.

// Ghidra body range 0x58776050..0x587765E5; 1429 mapped bytes.
extern "C" __declspec(naked) void FUN_58776050_segment_00() {
    __asm {
        // 0x58776050: mov eax, 0x1254
        __asm _emit 0xB8
        __asm _emit 0x54
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776055: call 0x5897ce60
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x6E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877605A: push ebx
        __asm _emit 0x53
        // 0x5877605B: push ebp
        __asm _emit 0x55
        // 0x5877605C: push esi
        __asm _emit 0x56
        // 0x5877605D: push edi
        __asm _emit 0x57
        // 0x5877605E: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58776060: push 0x1200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776065: lea eax, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58776069: push ebx
        __asm _emit 0x53
        // 0x5877606A: push eax
        __asm _emit 0x50
        // 0x5877606B: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877606F: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58776073: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x6B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776078: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877607B: lea eax, [esp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x5877607F: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776084: mov dword ptr [eax - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0xFC
        // 0x58776087: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        // 0x58776089: add eax, 0x90
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877608E: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x58776091: jne 0x58776084
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58776093: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58776099: mov edi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x5877609C: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587760A0: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587760A2: je 0x58776158
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587760A8: lea ebp, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587760AC: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587760B0: mov edx, dword ptr [esp + 0x1268]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587760B7: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587760BB: push edi
        __asm _emit 0x57
        // 0x587760BC: push edx
        __asm _emit 0x52
        // 0x587760BD: call 0x587752d0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587760C2: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587760C5: jne 0x58776145
        __asm _emit 0x75
        __asm _emit 0x7E
        // 0x587760C7: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587760C9: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587760CB: jle 0x5877610d
        __asm _emit 0x7E
        __asm _emit 0x40
        // 0x587760CD: mov ebx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x587760D0: lea ecx, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587760D4: mov eax, dword ptr [ecx - 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0xFC
        // 0x587760D7: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587760D9: cdq
        __asm _emit 0x99
        // 0x587760DA: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587760DC: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587760DE: cmp eax, 0xc8
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587760E3: jge 0x58776100
        __asm _emit 0x7D
        __asm _emit 0x1B
        // 0x587760E5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587760E7: sub eax, dword ptr [edi + 8]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587760EA: cdq
        __asm _emit 0x99
        // 0x587760EB: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587760ED: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587760EF: cmp eax, 0xc8
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587760F4: jge 0x58776100
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x587760F6: cmp dword ptr [ecx + 4], 0x20
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x20
        // 0x587760FA: jl 0x58776183
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776100: inc esi
        __asm _emit 0x46
        // 0x58776101: add ecx, 0x90
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776107: cmp esi, dword ptr [esp + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877610B: jl 0x587760d4
        __asm _emit 0x7C
        __asm _emit 0xC7
        // 0x5877610D: cmp dword ptr [esp + 0x18], 0x20
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x20
        // 0x58776112: jge 0x58776145
        __asm _emit 0x7D
        __asm _emit 0x31
        // 0x58776114: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58776117: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5877611A: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x5877611D: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776122: add dword ptr [esp + 0x18], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776126: mov dword ptr [ebp], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58776129: mov dword ptr [ebp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x5877612C: mov dword ptr [ebp + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5877612F: mov ecx, dword ptr [edi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776135: mov edx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x58776138: mov dword ptr [ebp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x5877613B: add ebp, 0x90
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776141: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58776145: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x58776148: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877614C: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58776150: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58776152: jne 0x587760b0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776158: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5877615A: jle 0x58776405
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776160: lea eax, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58776164: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x58776166: mov esi, 0x31ff
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877616B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5877616D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58776170: mov ecx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xFC
        // 0x58776173: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58776175: jge 0x587763d4
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877617B: mov dword ptr [eax - 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0xFC
        // 0x5877617E: jmp 0x587763df
        __asm _emit 0xE9
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776183: lea eax, [esi + esi*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xF6
        // 0x58776186: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x58776189: mov edx, dword ptr [esp + eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x6C
        // 0x5877618D: lea ecx, [esp + eax + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x64
        // 0x58776191: mov dword ptr [ecx + edx*4 + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x91
        __asm _emit 0x10
        // 0x58776195: mov edx, dword ptr [edi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877619B: mov edx, dword ptr [edx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x60
        // 0x5877619E: add dword ptr [ecx + 0xc], edx
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587761A1: inc dword ptr [ecx + 8]
        __asm _emit 0xFF
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587761A4: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587761A7: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587761AA: jge 0x587761ef
        __asm _emit 0x7D
        __asm _emit 0x43
        // 0x587761AC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587761AE: lea esi, [esp + eax + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x6C
        // 0x587761B2: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587761B4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587761B7: cmp dword ptr [esi], edx
        __asm _emit 0x39
        __asm _emit 0x16
        // 0x587761B9: jle 0x587761d7
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x587761BB: lea eax, [ecx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x587761BE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587761C0: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x587761C2: mov ebx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x04
        // 0x587761C5: add dword ptr [ecx], ebx
        __asm _emit 0x01
        __asm _emit 0x19
        // 0x587761C7: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x587761C9: mov ebx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x08
        // 0x587761CC: add dword ptr [ecx + 4], ebx
        __asm _emit 0x01
        __asm _emit 0x59
        __asm _emit 0x04
        // 0x587761CF: inc edx
        __asm _emit 0x42
        // 0x587761D0: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587761D3: cmp edx, dword ptr [esi]
        __asm _emit 0x3B
        __asm _emit 0x16
        // 0x587761D5: jl 0x587761c0
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x587761D7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587761D9: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x587761DC: cdq
        __asm _emit 0x99
        // 0x587761DD: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x587761DF: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x587761E1: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587761E4: cdq
        __asm _emit 0x99
        // 0x587761E5: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x587761E7: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587761EA: jmp 0x58776145
        __asm _emit 0xE9
        __asm _emit 0x56
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587761EF: mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x587761F2: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587761F5: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x08
        // 0x587761F8: lea esi, [ecx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x10
        // 0x587761FB: mov dword ptr [esp + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587761FF: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58776203: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58776207: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877620B: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5877620D: jle 0x58776252
        __asm _emit 0x7E
        __asm _emit 0x43
        // 0x5877620F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58776211: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58776213: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58776217: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5877621A: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5877621D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5877621F: jge 0x58776223
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58776221: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58776223: cmp eax, dword ptr [esp + 0x40]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58776227: jle 0x5877622d
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58776229: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5877622D: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58776230: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58776232: jge 0x58776236
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58776234: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58776236: cmp eax, dword ptr [esp + 0x24]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877623A: jle 0x58776240
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5877623C: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58776240: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58776243: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x58776248: jne 0x58776217
        __asm _emit 0x75
        __asm _emit 0xCD
        // 0x5877624A: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5877624E: mov dword ptr [esp + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58776252: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776254: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58776256: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58776258: cmp dword ptr [ecx + 8], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5877625B: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5877625F: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58776263: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58776267: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877626B: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5877626F: jle 0x587765d8
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776275: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58776278: mov dword ptr [esp + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5877627C: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58776280: jmp 0x58776286
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58776282: mov edi, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58776286: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5877628A: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x5877628C: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x5877628F: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58776291: jne 0x5877629a
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58776293: add eax, dword ptr [edx + 8]
        __asm _emit 0x03
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58776296: inc dword ptr [esp + 0x3c]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5877629A: cmp esi, dword ptr [esp + 0x40]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5877629E: jne 0x587762a4
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587762A0: add ebp, dword ptr [edx + 8]
        __asm _emit 0x03
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587762A3: inc ebx
        __asm _emit 0x43
        // 0x587762A4: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x587762A7: cmp edx, dword ptr [esp + 0x38]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587762AB: jne 0x587762b5
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587762AD: add dword ptr [esp + 0x34], esi
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587762B1: inc dword ptr [esp + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587762B5: cmp edx, dword ptr [esp + 0x24]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587762B9: jne 0x587762c3
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587762BB: add dword ptr [esp + 0x20], esi
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587762BF: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587762C3: add dword ptr [esp + 0x50], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587762C8: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587762CD: jne 0x58776282
        __asm _emit 0x75
        __asm _emit 0xB3
        // 0x587762CF: mov esi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587762D3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587762D5: je 0x587765d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587762DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587762DD: je 0x587765d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587762E3: cmp dword ptr [esp + 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587762E8: je 0x587765d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587762EE: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587762F3: je 0x587765d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587762F9: cdq
        __asm _emit 0x99
        // 0x587762FA: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x587762FC: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587762FE: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58776300: cdq
        __asm _emit 0x99
        // 0x58776301: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58776303: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58776305: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58776309: cdq
        __asm _emit 0x99
        // 0x5877630A: idiv dword ptr [esp + 0x2c]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5877630E: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58776310: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58776314: cdq
        __asm _emit 0x99
        // 0x58776315: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58776317: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58776319: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5877631D: cmp dword ptr [esp + 0x54], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58776321: jne 0x58776348
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58776323: mov edx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58776327: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877632B: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5877632F: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58776333: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58776335: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58776339: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5877633B: cdq
        __asm _emit 0x99
        // 0x5877633C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5877633E: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58776340: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58776343: jmp 0x58776145
        __asm _emit 0xE9
        __asm _emit 0xFD
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776348: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5877634A: jne 0x58776376
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x5877634C: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5877634E: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        // 0x58776350: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58776354: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x58776356: sub ebx, dword ptr [esp + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5877635A: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5877635C: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x5877635E: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x58776361: cdq
        __asm _emit 0x99
        // 0x58776362: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58776364: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58776368: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877636C: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x5877636E: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58776371: jmp 0x58776145
        __asm _emit 0xE9
        __asm _emit 0xCF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776376: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58776378: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5877637A: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5877637E: sub edi, dword ptr [esp + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58776382: cdq
        __asm _emit 0x99
        // 0x58776383: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58776385: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x58776387: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x58776389: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x5877638B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5877638D: imul eax, dword ptr [esp + 0x40]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58776392: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x58776394: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58776398: sub eax, dword ptr [esp + 0x38]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5877639C: cdq
        __asm _emit 0x99
        // 0x5877639D: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x5877639F: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587763A1: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x587763A3: je 0x587765d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587763A9: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587763AD: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587763AF: imul ebp, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xEB
        // 0x587763B2: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587763B4: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587763B6: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x587763B8: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x587763BA: cdq
        __asm _emit 0x99
        // 0x587763BB: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587763BD: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587763C1: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x587763C3: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x587763C6: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587763CA: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587763CC: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587763CF: jmp 0x58776145
        __asm _emit 0xE9
        __asm _emit 0x71
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587763D4: cmp ecx, 0x3200
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587763DA: jl 0x587763df
        __asm _emit 0x7C
        __asm _emit 0x03
        // 0x587763DC: mov dword ptr [eax - 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0xFC
        // 0x587763DF: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587763E1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587763E3: jge 0x587763e9
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587763E5: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x587763E7: jmp 0x587763f7
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587763E9: cmp ecx, 0x1900
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587763EF: jl 0x587763f7
        __asm _emit 0x7C
        __asm _emit 0x06
        // 0x587763F1: mov dword ptr [eax], 0x18ff
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587763F7: add eax, 0x90
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587763FC: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587763FF: jne 0x58776170
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6B
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58776405: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58776407: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5877640A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5877640C: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x5877640E: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58776412: mov dword ptr [esp + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58776416: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5877641A: mov dword ptr [esp + 0x58], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x5877641E: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58776422: mov dword ptr [esp + 0x5c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58776426: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5877642A: mov dword ptr [esp + 0x60], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x5877642E: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58776432: jle 0x587764b0
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776438: lea edi, [esp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x5877643C: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58776440: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58776442: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58776444: cmp eax, dword ptr [esp + edx*4 + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x94
        __asm _emit 0x54
        // 0x58776448: ja 0x58776452
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x5877644A: inc edx
        __asm _emit 0x42
        // 0x5877644B: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5877644E: jl 0x58776444
        __asm _emit 0x7C
        __asm _emit 0xF4
        // 0x58776450: jmp 0x5877649d
        __asm _emit 0xEB
        __asm _emit 0x4B
        // 0x58776452: lea ecx, [edx + 1]
        __asm _emit 0x8D
        __asm _emit 0x4A
        __asm _emit 0x01
        // 0x58776455: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x58776458: jge 0x5877648f
        __asm _emit 0x7D
        __asm _emit 0x35
        // 0x5877645A: lea ebx, [esp + ecx*4 + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0x8C
        __asm _emit 0x54
        // 0x5877645E: mov eax, 4
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776463: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58776465: lea edi, [esp + ecx*4 + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x8C
        __asm _emit 0x40
        // 0x58776469: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5877646B: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5877646D: lea esi, [edi - 4]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0xFC
        // 0x58776470: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58776472: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58776475: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58776477: lea ebp, [ebx - 4]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0xFC
        // 0x5877647A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877647C: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x5877647F: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58776481: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x58776483: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58776485: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58776489: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877648D: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5877648F: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58776491: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776495: mov dword ptr [esp + edx*4 + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x94
        __asm _emit 0x54
        // 0x58776499: mov dword ptr [esp + edx*4 + 0x40], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x94
        __asm _emit 0x40
        // 0x5877649D: inc esi
        __asm _emit 0x46
        // 0x5877649E: add edi, 0x90
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587764A4: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x587764A6: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587764AA: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587764AE: jl 0x58776440
        __asm _emit 0x7C
        __asm _emit 0x90
        // 0x587764B0: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587764B4: mov esi, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x64
        // 0x587764B7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587764B9: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587764BD: mov dword ptr [esp + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587764C5: cmp esi, dword ptr [eax + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x68
        // 0x587764C8: jbe 0x587764cf
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587764CA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587764CF: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587764D3: mov ebp, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x58
        // 0x587764D6: mov ebx, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x68
        // 0x587764D9: cmp dword ptr [eax + 0x64], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x64
        // 0x587764DC: jbe 0x587764e7
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x587764DE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587764E3: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587764E7: mov eax, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x58
        // 0x587764EA: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587764EC: je 0x587764f2
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587764EE: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587764F0: je 0x587764f7
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587764F2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587764F7: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x587764F9: je 0x587765d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587764FF: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58776501: jne 0x5877659f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776507: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877650C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877650E: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58776511: jb 0x58776518
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58776513: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776518: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5877651A: mov ecx, dword ptr [esp + 0x1268]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776521: cmp dword ptr [eax + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58776524: jne 0x587765b2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877652A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5877652C: jne 0x587765a7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58776532: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776537: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58776539: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x5877653C: jb 0x58776543
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5877653E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58776543: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58776547: push edx
        __asm _emit 0x52
        // 0x58776548: lea eax, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x5877654C: push eax
        __asm _emit 0x50
        // 0x5877654D: mov eax, dword ptr [esp + edi*4 + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xBC
        __asm _emit 0x48
        // 0x58776551: lea ecx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC0
        // 0x58776554: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58776557: lea edx, [esp + ecx + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x0C
        __asm _emit 0x6C
        // 0x5877655B: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5877655D: push edx
        __asm _emit 0x52
        // 0x5877655E: call 0x587351f0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xEC
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58776563: mov ecx, dword ptr [esp + edi*4 + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xBC
        __asm _emit 0x54
        // 0x58776567: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877656B: imul ecx, ecx, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x0D
        // 0x5877656E: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x58776570: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58776575: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58776577: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5877657A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5877657C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5877657F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58776581: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58776583: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58776587: jl 0x587765b2
        __asm _emit 0x7C
        __asm _emit 0x29
        // 0x58776589: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5877658E: je 0x587765b2
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58776590: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x58776593: jge 0x587765ac
        __asm _emit 0x7D
        __asm _emit 0x17
        // 0x58776595: cmp dword ptr [esp + edi*4 + 0x44], -1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xFF
        // 0x5877659A: je 0x587765b2
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5877659C: inc edi
        __asm _emit 0x47
        // 0x5877659D: jmp 0x587765b2
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5877659F: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587765A2: jmp 0x5877650e
        __asm _emit 0xE9
        __asm _emit 0x67
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587765A7: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587765AA: jmp 0x58776539
        __asm _emit 0xEB
        __asm _emit 0x8D
        // 0x587765AC: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587765AE: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587765B2: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587765B4: jne 0x587765d3
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587765B6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587765BB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587765BD: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587765C0: jb 0x587765c7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587765C2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587765C7: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587765CB: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587765CE: jmp 0x587764d6
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587765D3: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587765D6: jmp 0x587765bd
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x587765D8: pop edi
        __asm _emit 0x5F
        // 0x587765D9: pop esi
        __asm _emit 0x5E
        // 0x587765DA: pop ebp
        __asm _emit 0x5D
        // 0x587765DB: pop ebx
        __asm _emit 0x5B
        // 0x587765DC: add esp, 0x1254
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x54
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587765E2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
