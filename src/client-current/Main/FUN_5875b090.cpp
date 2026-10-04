// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875B090 .. +0x334 bytes.
// Source symbol alias: FUN_5875b090.
extern "C" __declspec(naked) void FUN_5875b090() {
    __asm {
        // 0x5875B090: sub esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x2C
        // 0x5875B093: push ebx
        __asm _emit 0x53
        // 0x5875B094: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875B096: push ebp
        __asm _emit 0x55
        // 0x5875B097: push esi
        __asm _emit 0x56
        // 0x5875B098: mov esi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5875B09C: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5875B09E: mov dword ptr [ebp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5875B0A1: mov dword ptr [ebp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x5875B0A4: mov dword ptr [ebp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x5875B0A7: push edi
        __asm _emit 0x57
        // 0x5875B0A8: lea edi, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x5875B0AB: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5875B0AE: mov dword ptr [edi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5875B0B1: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5875B0B4: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5875B0B7: mov dword ptr [edi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x14
        // 0x5875B0BA: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x5875B0BD: push esi
        __asm _emit 0x56
        // 0x5875B0BE: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5875B0C0: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x5875B0C3: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875B0C9: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5875B0CC: jle 0x5875b0d7
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x5875B0CE: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B0D3: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5875B0D5: jmp 0x5875b0e9
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5875B0D7: push esi
        __asm _emit 0x56
        // 0x5875B0D8: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875B0DE: push eax
        __asm _emit 0x50
        // 0x5875B0DF: push esi
        __asm _emit 0x56
        // 0x5875B0E0: push edi
        __asm _emit 0x57
        // 0x5875B0E1: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x1C
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875B0E6: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5875B0E9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875B0EB: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5875B0EF: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B0F3: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875B0F7: mov eax, 0xfffffffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B0FC: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5875B0FE: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875B102: mov edi, 0xfffffffc
        __asm _emit 0xBF
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B107: mov eax, 0xfffffffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B10C: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5875B10E: mov esi, 0xfffffffb
        __asm _emit 0xBE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B113: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5875B115: sub esi, ebp
        __asm _emit 0x2B
        __asm _emit 0xF5
        // 0x5875B117: lea ecx, [ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x05
        // 0x5875B11A: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B11E: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B122: jmp 0x5875b128
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5875B124: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B128: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x5875B12A: xor byte ptr [ecx - 1], 0xaa
        __asm _emit 0x80
        __asm _emit 0x71
        __asm _emit 0xFF
        __asm _emit 0xAA
        // 0x5875B12E: mov eax, 0x4ec4ec4f
        __asm _emit 0xB8
        __asm _emit 0x4F
        __asm _emit 0xEC
        __asm _emit 0xC4
        __asm _emit 0x4E
        // 0x5875B133: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x5875B135: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5875B138: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875B13A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875B13D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875B13F: imul eax, eax, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0D
        // 0x5875B142: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5875B144: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5875B146: movzx eax, byte ptr [ecx - 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x41
        __asm _emit 0xFF
        // 0x5875B14A: inc edx
        __asm _emit 0x42
        // 0x5875B14B: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5875B14E: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x5875B150: xor byte ptr [ecx], 0xaa
        __asm _emit 0x80
        __asm _emit 0x31
        __asm _emit 0xAA
        // 0x5875B153: lea edx, [edi + ecx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x0F
        // 0x5875B156: mov eax, 0x4ec4ec4f
        __asm _emit 0xB8
        __asm _emit 0x4F
        __asm _emit 0xEC
        __asm _emit 0xC4
        __asm _emit 0x4E
        // 0x5875B15B: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875B15D: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5875B160: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875B162: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875B165: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875B167: imul eax, eax, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0D
        // 0x5875B16A: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5875B16C: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5875B16E: movzx eax, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x01
        // 0x5875B171: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x5875B174: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5875B177: add dword ptr [esp + 0x14], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875B17B: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875B17F: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5875B181: xor byte ptr [ecx + 1], 0xaa
        __asm _emit 0x80
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0xAA
        // 0x5875B185: mov eax, 0x4ec4ec4f
        __asm _emit 0xB8
        __asm _emit 0x4F
        __asm _emit 0xEC
        __asm _emit 0xC4
        __asm _emit 0x4E
        // 0x5875B18A: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875B18C: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5875B18F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875B191: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875B194: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875B196: imul eax, eax, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0D
        // 0x5875B199: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5875B19B: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5875B19D: movzx eax, byte ptr [ecx + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x41
        __asm _emit 0x01
        // 0x5875B1A1: add edx, 3
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x03
        // 0x5875B1A4: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5875B1A7: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B1AB: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B1AF: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5875B1B1: xor byte ptr [ecx + 2], 0xaa
        __asm _emit 0x80
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0xAA
        // 0x5875B1B5: mov eax, 0x4ec4ec4f
        __asm _emit 0xB8
        __asm _emit 0x4F
        __asm _emit 0xEC
        __asm _emit 0xC4
        __asm _emit 0x4E
        // 0x5875B1BA: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5875B1BC: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5875B1BF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875B1C1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875B1C4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875B1C6: movzx edx, byte ptr [ecx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x02
        // 0x5875B1CA: imul eax, eax, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0D
        // 0x5875B1CD: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5875B1CF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B1D3: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5875B1D6: imul esi, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF2
        // 0x5875B1D9: add dword ptr [esp + 0x40], esi
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5875B1DD: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5875B1E0: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B1E2: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5875B1E5: jl 0x5875b124
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x39
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B1EB: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5875B1EF: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B1F3: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5875B1F5: add ecx, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875B1F9: lea eax, [ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x05
        // 0x5875B1FC: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x5875B1FE: mov esi, 0x10
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B203: mov cl, byte ptr [eax - 1]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0xFF
        // 0x5875B206: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5875B208: mov byte ptr [eax - 1], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0xFF
        // 0x5875B20B: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5875B20D: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x5875B210: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5875B213: jne 0x5875b203
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x5875B215: xor ebx, 0x390a4f16
        __asm _emit 0x81
        __asm _emit 0xF3
        __asm _emit 0x16
        __asm _emit 0x4F
        __asm _emit 0x0A
        __asm _emit 0x39
        // 0x5875B21B: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5875B21D: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5875B220: mov byte ptr [esp + 0x42], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x42
        // 0x5875B224: mov eax, 0xd
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B229: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5875B22B: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B22F: mov eax, 9
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B234: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5875B236: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875B23A: mov eax, 0xe
        __asm _emit 0xB8
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B23F: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5875B241: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B245: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B24A: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5875B24C: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875B250: mov eax, 0xf
        __asm _emit 0xB8
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B255: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5875B257: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875B25B: mov eax, 0xb
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B260: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5875B262: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875B266: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5875B269: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5875B26B: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875B26F: mov eax, 0x10
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B274: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5875B276: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875B27A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5875B27C: shr ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x10
        // 0x5875B27F: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5875B281: shr edx, 0x18
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x18
        // 0x5875B284: mov eax, 0xc
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B289: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5875B28B: mov byte ptr [esp + 0x41], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x41
        // 0x5875B28F: mov byte ptr [esp + 0x40], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5875B293: mov byte ptr [esp + 0x43], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x43
        // 0x5875B297: lea ecx, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x5875B29A: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5875B29E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5875B2A0: mov bl, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x19
        // 0x5875B2A2: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x5875B2A5: lea eax, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x5875B2A8: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B2AB: cdq
        __asm _emit 0x99
        // 0x5875B2AC: mov esi, 3
        __asm _emit 0xBE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B2B1: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x5875B2B3: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B2B7: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B2B9: mov dl, byte ptr [esp + edx + 0x40]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x5875B2BD: xor dl, bl
        __asm _emit 0x32
        __asm _emit 0xD3
        // 0x5875B2BF: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5875B2C1: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x5875B2C4: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B2C7: add dword ptr [ebp + 0x24], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5875B2CA: movzx edx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x11
        // 0x5875B2CD: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875B2D1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B2D3: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B2D6: dec eax
        __asm _emit 0x48
        // 0x5875B2D7: add dword ptr [ebp + 0x28], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x5875B2DA: mov bl, byte ptr [ecx + 1]
        __asm _emit 0x8A
        __asm _emit 0x59
        __asm _emit 0x01
        // 0x5875B2DD: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875B2E1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B2E3: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x5875B2E6: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B2E9: cdq
        __asm _emit 0x99
        // 0x5875B2EA: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x5875B2EC: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B2F0: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B2F2: mov dl, byte ptr [esp + edx + 0x40]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x5875B2F6: xor dl, bl
        __asm _emit 0x32
        __asm _emit 0xD3
        // 0x5875B2F8: mov byte ptr [ecx + 1], dl
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x5875B2FB: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x5875B2FE: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B301: add dword ptr [ebp + 0x24], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5875B304: movzx edx, byte ptr [ecx + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x5875B308: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875B30C: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B30E: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B311: dec eax
        __asm _emit 0x48
        // 0x5875B312: add dword ptr [ebp + 0x28], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x5875B315: mov bl, byte ptr [ecx + 2]
        __asm _emit 0x8A
        __asm _emit 0x59
        __asm _emit 0x02
        // 0x5875B318: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B31C: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B31E: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x5875B321: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B324: cdq
        __asm _emit 0x99
        // 0x5875B325: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x5875B327: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875B32B: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B32D: mov dl, byte ptr [esp + edx + 0x40]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x5875B331: xor dl, bl
        __asm _emit 0x32
        __asm _emit 0xD3
        // 0x5875B333: mov byte ptr [ecx + 2], dl
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x02
        // 0x5875B336: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x5875B339: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B33C: add dword ptr [ebp + 0x24], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5875B33F: movzx edx, byte ptr [ecx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x02
        // 0x5875B343: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875B347: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B349: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B34C: dec eax
        __asm _emit 0x48
        // 0x5875B34D: add dword ptr [ebp + 0x28], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x5875B350: mov bl, byte ptr [ecx + 3]
        __asm _emit 0x8A
        __asm _emit 0x59
        __asm _emit 0x03
        // 0x5875B353: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875B357: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B359: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x5875B35C: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B35F: cdq
        __asm _emit 0x99
        // 0x5875B360: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x5875B362: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875B366: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B368: mov dl, byte ptr [esp + edx + 0x40]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x5875B36C: xor dl, bl
        __asm _emit 0x32
        __asm _emit 0xD3
        // 0x5875B36E: mov byte ptr [ecx + 3], dl
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x5875B371: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x5875B374: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B377: add dword ptr [ebp + 0x24], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5875B37A: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5875B37E: movzx edx, byte ptr [ecx + 3]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x5875B382: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875B384: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5875B387: dec eax
        __asm _emit 0x48
        // 0x5875B388: add dword ptr [ebp + 0x28], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x5875B38B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5875B38E: lea eax, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x5875B391: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5875B394: jl 0x5875b2a0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x06
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B39A: mov ecx, 0x390a4f16
        __asm _emit 0xB9
        __asm _emit 0x16
        __asm _emit 0x4F
        __asm _emit 0x0A
        __asm _emit 0x39
        // 0x5875B39F: xor dword ptr [ebp + 0x24], ecx
        __asm _emit 0x31
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5875B3A2: mov eax, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5875B3A5: xor dword ptr [ebp + 0x28], ecx
        __asm _emit 0x31
        __asm _emit 0x4D
        __asm _emit 0x28
        // 0x5875B3A8: mov dword ptr [ebp + 0x2c], 1
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B3AF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875B3B1: jne 0x5875b3ba
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5875B3B3: mov dword ptr [ebp + 0x24], 0xb4920f27
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x24
        __asm _emit 0x27
        __asm _emit 0x0F
        __asm _emit 0x92
        __asm _emit 0xB4
        // 0x5875B3BA: pop edi
        __asm _emit 0x5F
        // 0x5875B3BB: pop esi
        __asm _emit 0x5E
        // 0x5875B3BC: pop ebp
        __asm _emit 0x5D
        // 0x5875B3BD: pop ebx
        __asm _emit 0x5B
        // 0x5875B3BE: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x5875B3C1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
