// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BAF70 .. +0x1D5 bytes.
// Source symbol alias: FUN_587baf70.
extern "C" __declspec(naked) void FUN_587baf70() {
    __asm {
        // 0x587BAF70: push ecx
        __asm _emit 0x51
        // 0x587BAF71: push ebx
        __asm _emit 0x53
        // 0x587BAF72: movzx ebx, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587BAF77: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587BAF79: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BAF7F: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587BAF82: cmp byte ptr [edx + 0x354], 0
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAF89: push ebp
        __asm _emit 0x55
        // 0x587BAF8A: push esi
        __asm _emit 0x56
        // 0x587BAF8B: push edi
        __asm _emit 0x57
        // 0x587BAF8C: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587BAF90: jne 0x587baf9a
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587BAF92: or ebx, 0x7c3d0000
        __asm _emit 0x81
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3D
        __asm _emit 0x7C
        // 0x587BAF98: jmp 0x587bafa0
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587BAF9A: or ebx, 0x409b0000
        __asm _emit 0x81
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9B
        __asm _emit 0x40
        // 0x587BAFA0: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587BAFA4: cmp edx, 3
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x587BAFA7: ja 0x587bafcc
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x587BAFA9: jmp dword ptr [edx*4 + 0x587bb148]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xB1
        __asm _emit 0x7B
        __asm _emit 0x58
        // 0x587BAFB0: mov ebp, 0xd36f9ac4
        __asm _emit 0xBD
        __asm _emit 0xC4
        __asm _emit 0x9A
        __asm _emit 0x6F
        __asm _emit 0xD3
        // 0x587BAFB5: jmp 0x587bafd0
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x587BAFB7: mov ebp, 0x9367fc08
        __asm _emit 0xBD
        __asm _emit 0x08
        __asm _emit 0xFC
        __asm _emit 0x67
        __asm _emit 0x93
        // 0x587BAFBC: jmp 0x587bafd0
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x587BAFBE: mov ebp, 0x36d49a6c
        __asm _emit 0xBD
        __asm _emit 0x6C
        __asm _emit 0x9A
        __asm _emit 0xD4
        __asm _emit 0x36
        // 0x587BAFC3: jmp 0x587bafd0
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587BAFC5: mov ebp, 0xf74503b1
        __asm _emit 0xBD
        __asm _emit 0xB1
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0xF7
        // 0x587BAFCA: jmp 0x587bafd0
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587BAFCC: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BAFD0: mov edi, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x58
        // 0x587BAFD3: mov esi, dword ptr [eax + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x40
        // 0x587BAFD6: imul edi, edi, 0xd
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0x0D
        // 0x587BAFD9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587BAFDB: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587BAFDD: div dword ptr [esi + 4]
        __asm _emit 0xF7
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x587BAFE0: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587BAFE3: xor ebx, dword ptr [eax + edx*4]
        __asm _emit 0x33
        __asm _emit 0x1C
        __asm _emit 0x90
        // 0x587BAFE6: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587BAFE8: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587BAFEA: div dword ptr [esi + 4]
        __asm _emit 0xF7
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x587BAFED: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587BAFF0: xor ebp, dword ptr [eax + edx*4]
        __asm _emit 0x33
        __asm _emit 0x2C
        __asm _emit 0x90
        // 0x587BAFF3: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xEF
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587BAFF8: lea ecx, [eax + eax*2 + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x40
        __asm _emit 0x0A
        // 0x587BAFFC: push ecx
        __asm _emit 0x51
        // 0x587BAFFD: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x65
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BB002: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BB008: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587BB00B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587BB00D: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xEF
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587BB012: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x587BB014: mov byte ptr [edi + 1], 0
        __asm _emit 0xC6
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587BB018: mov byte ptr [edi + 2], 0
        __asm _emit 0xC6
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587BB01C: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BB022: mov ecx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x587BB025: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587BB027: je 0x587bb0a6
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x587BB029: lea esi, [edi + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x0A
        // 0x587BB02C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587BB030: cmp dword ptr [ecx + 0x60b0], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB037: je 0x587bb04f
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587BB039: mov al, byte ptr [ecx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB03F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587BB041: jne 0x587bb048
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587BB043: inc byte ptr [edi + 1]
        __asm _emit 0xFE
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x587BB046: jmp 0x587bb04f
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587BB048: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587BB04A: jne 0x587bb04f
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587BB04C: inc byte ptr [edi + 2]
        __asm _emit 0xFE
        __asm _emit 0x47
        __asm _emit 0x02
        // 0x587BB04F: mov edx, dword ptr [ecx + 0x64f4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF4
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB055: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587BB05A: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587BB05C: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587BB05F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587BB061: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587BB064: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587BB066: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        // 0x587BB068: mov edx, dword ptr [ecx + 0x64f8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB06E: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587BB073: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587BB075: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587BB078: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587BB07A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587BB07D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587BB07F: mov byte ptr [esi + 1], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x587BB082: movzx edx, word ptr [ecx + 0x64f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0xF0
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB089: inc esi
        __asm _emit 0x46
        // 0x587BB08A: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587BB08F: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587BB091: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587BB094: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587BB096: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587BB099: inc esi
        __asm _emit 0x46
        // 0x587BB09A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587BB09C: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        // 0x587BB09E: mov ecx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x78
        // 0x587BB0A1: inc esi
        __asm _emit 0x46
        // 0x587BB0A2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587BB0A4: jne 0x587bb030
        __asm _emit 0x75
        __asm _emit 0x8A
        // 0x587BB0A6: mov ecx, dword ptr [0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BB0AC: movzx edx, byte ptr [ecx + 0x60]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x587BB0B0: mov byte ptr [edi + 3], dl
        __asm _emit 0x88
        __asm _emit 0x57
        __asm _emit 0x03
        // 0x587BB0B3: mov eax, dword ptr [0x58a0b1c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BB0B8: movzx ecx, byte ptr [eax + 0x60]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0x60
        // 0x587BB0BC: mov byte ptr [edi + 4], cl
        __asm _emit 0x88
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587BB0BF: mov edx, dword ptr [0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BB0C5: movzx eax, byte ptr [edx + 0x64]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x587BB0C9: shr al, 1
        __asm _emit 0xD0
        __asm _emit 0xE8
        // 0x587BB0CB: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587BB0CD: mov byte ptr [edi + 5], al
        __asm _emit 0x88
        __asm _emit 0x47
        __asm _emit 0x05
        // 0x587BB0D0: mov ecx, dword ptr [0x58a0b1c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BB0D6: movzx edx, byte ptr [ecx + 0x64]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x587BB0DA: shr dl, 1
        __asm _emit 0xD0
        __asm _emit 0xEA
        // 0x587BB0DC: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x587BB0DF: mov byte ptr [edi + 6], dl
        __asm _emit 0x88
        __asm _emit 0x57
        __asm _emit 0x06
        // 0x587BB0E2: mov eax, dword ptr [0x58a0b1c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BB0E7: movzx ecx, byte ptr [eax + 0x58]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0x58
        // 0x587BB0EB: mov byte ptr [edi + 7], cl
        __asm _emit 0x88
        __asm _emit 0x4F
        __asm _emit 0x07
        // 0x587BB0EE: mov edx, dword ptr [0x58a0b1c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BB0F4: movzx eax, byte ptr [edx + 0x58]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x42
        __asm _emit 0x58
        // 0x587BB0F8: mov byte ptr [edi + 8], al
        __asm _emit 0x88
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587BB0FB: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BB101: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587BB104: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xB5
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587BB109: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587BB10B: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x587BB10E: mov byte ptr [edi + 9], dl
        __asm _emit 0x88
        __asm _emit 0x57
        __asm _emit 0x09
        // 0x587BB111: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BB117: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB119: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xEE
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587BB11E: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587BB122: lea eax, [eax + eax*2 + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x40
        __asm _emit 0x0A
        // 0x587BB126: push eax
        __asm _emit 0x50
        // 0x587BB127: push edi
        __asm _emit 0x57
        // 0x587BB128: push ebp
        __asm _emit 0x55
        // 0x587BB129: push ebx
        __asm _emit 0x53
        // 0x587BB12A: push 0x80013111
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BB12F: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x5B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BB134: push edi
        __asm _emit 0x57
        // 0x587BB135: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x1C
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587BB13A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587BB13D: pop edi
        __asm _emit 0x5F
        // 0x587BB13E: pop esi
        __asm _emit 0x5E
        // 0x587BB13F: pop ebp
        __asm _emit 0x5D
        // 0x587BB140: pop ebx
        __asm _emit 0x5B
        // 0x587BB141: pop ecx
        __asm _emit 0x59
        // 0x587BB142: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
