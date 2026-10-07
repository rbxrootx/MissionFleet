// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58807370 .. +0x267 bytes.
// Source symbol alias: FUN_58807370.
extern "C" __declspec(naked) void FUN_58807370() {
    __asm {
        // 0x58807370: push ebx
        __asm _emit 0x53
        // 0x58807371: push esi
        __asm _emit 0x56
        // 0x58807372: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58807376: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x58807379: push edi
        __asm _emit 0x57
        // 0x5880737A: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5880737C: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807382: push eax
        __asm _emit 0x50
        // 0x58807383: call 0x5878a160
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x2D
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807388: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5880738A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5880738C: je 0x588075b3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807392: movzx ecx, byte ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58807396: push ebp
        __asm _emit 0x55
        // 0x58807397: movzx ebp, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xAF
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880739E: push ecx
        __asm _emit 0x51
        // 0x5880739F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588073A1: call 0x588da340
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x2F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588073A6: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588073AC: cmp edi, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x588073AF: jne 0x588073ea
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x588073B1: mov eax, dword ptr [ebx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588073B7: mov eax, dword ptr [eax + ebp*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xA8
        // 0x588073BA: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588073BF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588073C3: movzx edx, byte ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588073C7: mov eax, dword ptr [ebx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588073CD: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x588073D0: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588073D5: movzx ecx, byte ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588073D9: mov dword ptr [ebx + 0x100], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588073DF: mov ecx, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588073E5: call 0x588a6680
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xF2
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588073EA: mov edx, dword ptr [ebp*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xAD
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588073F1: mov ecx, dword ptr [edx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x68
        // 0x588073F4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588073F6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588073F8: je 0x5880740f
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588073FA: movzx edx, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x16
        // 0x588073FD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58807400: cmp dword ptr [ecx + 0x18], edx
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x58807403: je 0x5880740d
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58807405: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58807407: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58807409: jne 0x58807400
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x5880740B: jmp 0x5880740f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880740D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5880740F: cmp word ptr [ebx + 0x110], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x58807417: jne 0x58807467
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x58807419: mov ecx, dword ptr [edi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880741F: movzx edx, byte ptr [ecx + 0x35c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807426: mov ecx, dword ptr [edi + 0x6500]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880742C: push edx
        __asm _emit 0x52
        // 0x5880742D: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58807430: push ecx
        __asm _emit 0x51
        // 0x58807431: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58807434: push edx
        __asm _emit 0x52
        // 0x58807435: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58807438: movzx eax, byte ptr [eax + 9]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x40
        __asm _emit 0x09
        // 0x5880743C: push ecx
        __asm _emit 0x51
        // 0x5880743D: movzx ecx, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0E
        // 0x58807440: push edx
        __asm _emit 0x52
        // 0x58807441: movzx edx, byte ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58807445: push eax
        __asm _emit 0x50
        // 0x58807446: push ecx
        __asm _emit 0x51
        // 0x58807447: mov ecx, dword ptr [edx*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x95
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880744E: call 0x587899d0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x25
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807453: mov eax, dword ptr [edi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807459: movzx ecx, byte ptr [eax + 0x35c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807460: movzx edx, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x16
        // 0x58807463: push ecx
        __asm _emit 0x51
        // 0x58807464: push edx
        __asm _emit 0x52
        // 0x58807465: jmp 0x5880749b
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x58807467: mov ecx, dword ptr [edi + 0x6500]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880746D: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58807470: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x58807472: push ecx
        __asm _emit 0x51
        // 0x58807473: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58807476: push edx
        __asm _emit 0x52
        // 0x58807477: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5880747A: movzx eax, byte ptr [eax + 9]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x40
        __asm _emit 0x09
        // 0x5880747E: push ecx
        __asm _emit 0x51
        // 0x5880747F: movzx ecx, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0E
        // 0x58807482: push edx
        __asm _emit 0x52
        // 0x58807483: movzx edx, byte ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58807487: push eax
        __asm _emit 0x50
        // 0x58807488: push ecx
        __asm _emit 0x51
        // 0x58807489: mov ecx, dword ptr [edx*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x95
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58807490: call 0x587899d0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x25
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807495: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x58807498: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x5880749A: push eax
        __asm _emit 0x50
        // 0x5880749B: mov ecx, dword ptr [ebp*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xAD
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588074A2: call 0x58789b40
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x26
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588074A7: mov cx, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x02
        // 0x588074AB: mov word ptr [edi + 0x352], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588074B2: movzx edx, byte ptr [esi + 5]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x05
        // 0x588074B6: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x588074B9: push edx
        __asm _emit 0x52
        // 0x588074BA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588074BC: call 0x588d81a0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x0C
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588074C1: movzx eax, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588074C8: movzx ecx, word ptr [edi + 0x352]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588074CF: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588074D5: shl eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x0A
        // 0x588074D8: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588074DA: mov ecx, dword ptr [edx + eax*8 + 0x45c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC2
        __asm _emit 0x5C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588074E1: lea eax, [edx + eax*8 + 0x458]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588074E8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588074EA: push ecx
        __asm _emit 0x51
        // 0x588074EB: push edx
        __asm _emit 0x52
        // 0x588074EC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588074EE: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xBD
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588074F3: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588074F9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588074FB: mov edx, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588074FE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58807500: test byte ptr [ebx + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58807507: je 0x58807516
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58807509: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880750F: push ebp
        __asm _emit 0x55
        // 0x58807510: push edi
        __asm _emit 0x57
        // 0x58807511: call 0x587af350
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x7E
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58807516: mov ecx, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880751C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880751E: push ebp
        __asm _emit 0x55
        // 0x5880751F: call 0x588a6410
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xEE
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58807524: movzx eax, byte ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58807528: mov ecx, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880752E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807530: push eax
        __asm _emit 0x50
        // 0x58807531: call 0x588a6410
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xEE
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58807536: cmp word ptr [ebx + 0x1b6], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5880753E: jne 0x58807547
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58807540: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807542: call 0x58805ba0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807547: movzx eax, word ptr [ebx + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880754E: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58807552: je 0x58807584
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58807554: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58807558: je 0x58807584
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5880755A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5880755E: je 0x58807584
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58807560: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x58807564: je 0x58807584
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58807566: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x5880756A: je 0x58807584
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5880756C: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x58807570: je 0x58807584
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58807572: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x58807576: je 0x58807584
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58807578: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x5880757C: je 0x58807584
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880757E: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x58807582: jne 0x588075ac
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x58807584: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880758A: cmp edi, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x5880758D: jne 0x588075ac
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5880758F: movzx edx, byte ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58807593: push edx
        __asm _emit 0x52
        // 0x58807594: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807596: call 0x58805790
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880759B: movzx eax, byte ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5880759F: mov ecx, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588075A5: push eax
        __asm _emit 0x50
        // 0x588075A6: push ebp
        __asm _emit 0x55
        // 0x588075A7: call 0x588a6df0
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xF8
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588075AC: pop ebp
        __asm _emit 0x5D
        // 0x588075AD: pop edi
        __asm _emit 0x5F
        // 0x588075AE: pop esi
        __asm _emit 0x5E
        // 0x588075AF: pop ebx
        __asm _emit 0x5B
        // 0x588075B0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588075B3: mov ecx, dword ptr [ebx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588075B9: mov edx, dword ptr [ebx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588075BF: push 0x40000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588075C4: push ecx
        __asm _emit 0x51
        // 0x588075C5: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588075CB: push edx
        __asm _emit 0x52
        // 0x588075CC: call 0x587b9640
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x20
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588075D1: pop edi
        __asm _emit 0x5F
        // 0x588075D2: pop esi
        __asm _emit 0x5E
        // 0x588075D3: pop ebx
        __asm _emit 0x5B
        // 0x588075D4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
