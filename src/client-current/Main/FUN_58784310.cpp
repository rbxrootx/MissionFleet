// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1019 bytes in 1 exact ranges.
// Source symbol alias: FUN_58784310.

// Ghidra body range 0x58784310..0x5878470B; 1019 mapped bytes.
extern "C" __declspec(naked) void FUN_58784310_segment_00() {
    __asm {
        // 0x58784310: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58784312: push 0x5897f91c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xF9
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58784317: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878431D: push eax
        __asm _emit 0x50
        // 0x5878431E: push ecx
        __asm _emit 0x51
        // 0x5878431F: push ebx
        __asm _emit 0x53
        // 0x58784320: push ebp
        __asm _emit 0x55
        // 0x58784321: push esi
        __asm _emit 0x56
        // 0x58784322: push edi
        __asm _emit 0x57
        // 0x58784323: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58784328: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5878432A: push eax
        __asm _emit 0x50
        // 0x5878432B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878432F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784335: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58784339: cmp dword ptr [ecx + 0x68], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x68
        __asm _emit 0x00
        // 0x5878433D: je 0x587846ec
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784343: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58784347: mov esi, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x5878434A: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5878434C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5878434E: jl 0x5878449f
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x4B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784354: cmp esi, 0xa
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0A
        // 0x58784357: jle 0x5878449f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878435D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784363: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58784369: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878436F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58784371: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784377: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878437C: mov edi, 0x1e
        __asm _emit 0xBF
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784381: lea esi, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xB6
        // 0x58784384: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58784386: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x58784389: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5878438B: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x5878438D: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5878438F: ja 0x5878449f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784395: mov eax, 0x9c4
        __asm _emit 0xB8
        __asm _emit 0xC4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878439A: cmp dword ptr [ebx + 4], eax
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x5878439D: jbe 0x587843a8
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x5878439F: mov dword ptr [ebx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587843A2: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587843A8: mov edx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x14
        // 0x587843AB: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587843B0: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587843B2: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x587843B4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587843B6: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587843B9: lea edi, [edx + eax + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x1E
        // 0x587843BD: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587843C3: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587843C9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587843CB: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587843D1: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587843D7: mov esi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x08
        // 0x587843DA: add esi, dword ptr [ebx + 4]
        __asm _emit 0x03
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x587843DD: mov eax, 0xd1b71759
        __asm _emit 0xB8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x587843E2: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x91
        // 0x587843E5: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x587843E7: shr edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0D
        // 0x587843EA: imul edx, edx, 0x2710
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587843F0: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587843F2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587843F4: jge 0x58784484
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587843FA: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587843FF: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x58784401: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58784404: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58784406: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58784409: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5878440B: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5878440D: jge 0x58784414
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5878440F: shl esi, 4
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x04
        // 0x58784412: jmp 0x5878447f
        __asm _emit 0xEB
        __asm _emit 0x6B
        // 0x58784414: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58784419: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x5878441B: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5878441E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58784420: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58784423: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58784425: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58784427: jge 0x58784431
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58784429: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x5878442B: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x5878442D: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x5878442F: jmp 0x5878447f
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x58784431: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58784436: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x58784438: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x5878443B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5878443D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58784440: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58784442: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58784444: jge 0x5878444c
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58784446: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58784448: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x5878444A: jmp 0x5878447f
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5878444C: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58784451: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x58784453: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58784456: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58784458: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5878445B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5878445D: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5878445F: jge 0x58784465
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x58784461: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58784463: jmp 0x5878447f
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58784465: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58784467: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5878446A: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x5878446C: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58784471: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58784473: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58784476: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58784478: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5878447B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5878447D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878447F: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784484: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58784486: jle 0x587846dc
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878448C: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58784490: movzx eax, word ptr [ecx + 0x6c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x58784494: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x58784497: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58784499: jge 0x587844c9
        __asm _emit 0x7D
        __asm _emit 0x2E
        // 0x5878449B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878449D: jmp 0x587844cb
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5878449F: mov esi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x08
        // 0x587844A2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587844A4: imul ecx, ecx, 0x34
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x34
        // 0x587844A7: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587844AC: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587844AE: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587844B1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587844B3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587844B6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587844B8: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x587844BA: sub esi, 0xa
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x0A
        // 0x587844BD: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587844C0: jge 0x58784484
        __asm _emit 0x7D
        __asm _emit 0xC2
        // 0x587844C2: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587844C7: jmp 0x5878448c
        __asm _emit 0xEB
        __asm _emit 0xC3
        // 0x587844C9: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587844CB: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587844D0: mov word ptr [ecx + 0x6c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x587844D4: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587844D9: cmp dword ptr [ebx + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7B
        __asm _emit 0x0C
        // 0x587844DC: jne 0x587845a2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587844E2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x87
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587844E7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587844EA: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587844EC: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587844F0: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587844F2: je 0x58784553
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x587844F4: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587844FC: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587844FE: je 0x58784622
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784504: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784509: cmp dword ptr [eax + 0x160], 0x31
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x31
        // 0x58784510: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784516: mov ebp, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878451C: jle 0x58784542
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x5878451E: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784525: je 0x58784542
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58784527: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878452D: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58784531: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58784534: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58784536: add edi, 0xc40
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878453C: push eax
        __asm _emit 0x50
        // 0x5878453D: jmp 0x587845fd
        __asm _emit 0xE9
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784542: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58784546: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58784549: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5878454B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5878454D: push eax
        __asm _emit 0x50
        // 0x5878454E: jmp 0x587845fd
        __asm _emit 0xE9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784553: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878455B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5878455D: je 0x587846d4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784563: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784568: cmp dword ptr [eax + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784572: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784578: mov ebp, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878457E: jle 0x587846a5
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784584: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878458B: je 0x587846a5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784591: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784597: add edi, 0x3380
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878459D: jmp 0x587846a7
        __asm _emit 0xE9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587845A2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x86
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587845A7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587845AA: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587845AC: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587845B0: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587845B2: je 0x58784665
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587845B8: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587845BC: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587845BE: je 0x58784622
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x587845C0: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587845C5: cmp dword ptr [eax + 0x160], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x587845CC: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587845D2: mov ebp, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587845D8: jle 0x587845f1
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587845DA: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587845E1: je 0x587845f1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587845E3: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587845E9: add edi, 0xc80
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587845EF: jmp 0x587845f3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587845F1: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587845F3: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587845F7: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587845FA: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587845FC: push ecx
        __asm _emit 0x51
        // 0x587845FD: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x86
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58784602: cdq
        __asm _emit 0x99
        // 0x58784603: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784608: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5878460A: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878460E: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58784611: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58784613: push ecx
        __asm _emit 0x51
        // 0x58784614: push ebp
        __asm _emit 0x55
        // 0x58784615: push edi
        __asm _emit 0x57
        // 0x58784616: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x58784618: push esi
        __asm _emit 0x56
        // 0x58784619: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5878461B: call 0x5875adb0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x67
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58784620: jmp 0x58784624
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58784622: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58784624: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878462A: cmp dword ptr [ecx + 0x160], 0x33
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        // 0x58784631: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58784639: jle 0x5878465b
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5878463B: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784642: je 0x5878465b
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58784644: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878464A: add ecx, 0xcc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784650: mov dword ptr [eax + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784656: jmp 0x587846dc
        __asm _emit 0xE9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878465B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5878465D: mov dword ptr [eax + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784663: jmp 0x587846dc
        __asm _emit 0xEB
        __asm _emit 0x77
        // 0x58784665: mov dword ptr [esp + 0x20], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878466D: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5878466F: je 0x587846d4
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x58784671: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784676: cmp dword ptr [eax + 0x160], 0xcc
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784680: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784686: mov ebp, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878468C: jle 0x587846a5
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5878468E: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784695: je 0x587846a5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58784697: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878469D: add edi, 0x3300
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587846A3: jmp 0x587846a7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587846A5: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587846A7: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587846AB: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587846AE: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587846B0: push ecx
        __asm _emit 0x51
        // 0x587846B1: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x85
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587846B6: cdq
        __asm _emit 0x99
        // 0x587846B7: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587846BC: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587846BE: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587846C2: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587846C5: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587846C7: push ecx
        __asm _emit 0x51
        // 0x587846C8: push ebp
        __asm _emit 0x55
        // 0x587846C9: push edi
        __asm _emit 0x57
        // 0x587846CA: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x587846CC: push esi
        __asm _emit 0x56
        // 0x587846CD: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587846CF: call 0x5875adb0
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x66
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587846D4: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587846DC: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587846E0: cmp word ptr [ecx + 0x6c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x6C
        __asm _emit 0x00
        // 0x587846E5: jne 0x587846f3
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587846E7: call 0x58783f60
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587846EC: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587846F1: jmp 0x587846f5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587846F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587846F5: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587846F9: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784700: pop ecx
        __asm _emit 0x59
        // 0x58784701: pop edi
        __asm _emit 0x5F
        // 0x58784702: pop esi
        __asm _emit 0x5E
        // 0x58784703: pop ebp
        __asm _emit 0x5D
        // 0x58784704: pop ebx
        __asm _emit 0x5B
        // 0x58784705: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58784708: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
