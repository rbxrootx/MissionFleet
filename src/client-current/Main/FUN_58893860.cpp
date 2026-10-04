// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58893860 .. +0x5ED bytes.
// Source symbol alias: FUN_58893860.
extern "C" __declspec(naked) void FUN_58893860() {
    __asm {
        // 0x58893860: push esi
        __asm _emit 0x56
        // 0x58893861: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58893863: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58893867: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58893869: and eax, 0xf00000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x00
        // 0x5889386E: push edi
        __asm _emit 0x57
        // 0x5889386F: mov dword ptr [esi + 0x15c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893875: cmp eax, 0x100000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5889387A: je 0x58893ac4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893880: cmp eax, 0x200000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58893885: jne 0x58893e48
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889388B: and ecx, 0xf0000
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58893891: cmp ecx, 0x20000
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58893897: jne 0x58893e48
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889389D: mov eax, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588938A3: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588938A8: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588938AC: mov eax, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588938B2: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588938B4: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588938B8: mov eax, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588938BE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588938C2: mov eax, dword ptr [esi + 0x498]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588938C8: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588938CD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588938D1: mov eax, dword ptr [esi + 0x49c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588938D7: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588938D9: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588938DD: mov eax, dword ptr [esi + 0x4a0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588938E3: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588938E7: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588938ED: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588938F1: mov eax, dword ptr [esi + 0x4f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588938F7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588938FB: mov eax, dword ptr [esi + 0x4c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893901: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58893906: mov eax, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889390C: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893911: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58893915: mov eax, dword ptr [esi + 0x4b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889391B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5889391D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58893921: mov eax, dword ptr [esi + 0x4b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893927: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889392B: mov eax, dword ptr [esi + 0x4bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893931: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58893935: mov eax, dword ptr [esi + 0x4a4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889393B: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893940: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58893944: mov eax, dword ptr [esi + 0x4a8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889394A: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5889394C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58893950: mov eax, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893956: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889395A: mov eax, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893960: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58893964: mov eax, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889396A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889396E: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893974: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58893976: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5889397B: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893981: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58893983: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58893988: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889398E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58893990: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x04
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58893995: mov eax, dword ptr [0x58a24604]
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889399A: cmp dword ptr [eax + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588939A1: jle 0x588939b9
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588939A3: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588939AA: je 0x588939b9
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588939AC: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588939B2: add eax, 0x1c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588939B7: jmp 0x588939bb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588939B9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588939BB: mov ecx, dword ptr [esi + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588939C1: push eax
        __asm _emit 0x50
        // 0x588939C2: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x0F
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588939C7: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588939CD: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588939D2: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588939D6: mov eax, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588939DC: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588939DE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588939E2: mov ecx, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588939E8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588939EA: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588939ED: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588939EF: lea ecx, [esi + 0x4d0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588939F5: mov edx, 6
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588939FA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A00: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58893A02: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A07: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58893A0B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58893A0E: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x58893A11: jne 0x58893a00
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x58893A13: mov dword ptr [esi + 0x10c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A19: mov eax, dword ptr [esi + 0x600]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A1F: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58893A28: mov eax, dword ptr [esi + 0x604]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A2E: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58893A30: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58893A34: mov eax, dword ptr [esi + 0x608]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A3A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58893A3E: mov eax, dword ptr [esi + 0x60c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A44: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58893A48: mov eax, dword ptr [esi + 0x610]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A4E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58893A52: mov eax, dword ptr [esi + 0x614]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A58: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58893A5C: mov eax, dword ptr [esi + 0x618]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A62: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58893A66: mov eax, dword ptr [esi + 0x61c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A6C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58893A70: mov eax, dword ptr [esi + 0x624]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A76: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58893A7A: mov eax, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A80: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58893A84: mov eax, dword ptr [esi + 0x62c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A8A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58893A8E: mov eax, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A94: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58893A98: mov eax, dword ptr [esi + 0x620]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893A9E: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58893AA2: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58893AA6: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58893AA9: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58893AAC: jne 0x58893e48
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893AB2: mov ecx, dword ptr [esi + 0x620]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893AB8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58893ABA: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58893ABD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58893ABF: pop edi
        __asm _emit 0x5F
        // 0x58893AC0: pop esi
        __asm _emit 0x5E
        // 0x58893AC1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58893AC4: push ebp
        __asm _emit 0x55
        // 0x58893AC5: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893ACA: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6E
        __asm _emit 0x24
        // 0x58893ACE: mov ecx, dword ptr [esi + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893AD4: and ecx, 0xf0000
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58893ADA: cmp ecx, 0x20000
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58893AE0: jne 0x58893e47
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893AE6: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893AEC: push ebx
        __asm _emit 0x53
        // 0x58893AED: lea ebx, [ebp + 0xd]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x0D
        // 0x58893AF0: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58893AF3: je 0x58893b0e
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58893AF5: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58893AF8: je 0x58893b0e
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58893AFA: mov eax, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B00: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893B04: mov eax, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B0A: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893B0E: mov eax, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B14: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893B18: mov eax, dword ptr [esi + 0x4c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B1E: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B23: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58893B27: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B2D: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B32: push edi
        __asm _emit 0x57
        // 0x58893B33: mov dword ptr [esi + 0x178], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B39: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58893B3E: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B44: push edi
        __asm _emit 0x57
        // 0x58893B45: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58893B4A: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B50: push edi
        __asm _emit 0x57
        // 0x58893B51: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x02
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58893B56: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B5C: push edi
        __asm _emit 0x57
        // 0x58893B5D: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x02
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58893B62: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B68: push edi
        __asm _emit 0x57
        // 0x58893B69: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58893B6E: mov eax, dword ptr [esi + 0x4fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B74: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B79: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58893B7D: mov eax, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B83: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58893B87: mov eax, dword ptr [0x58a24604]
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58893B8C: cmp dword ptr [eax + 0x160], 6
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x58893B93: jle 0x58893bab
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58893B95: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893B9C: je 0x58893bab
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58893B9E: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893BA4: add eax, 0x180
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893BA9: jmp 0x58893bad
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58893BAB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58893BAD: mov ecx, dword ptr [esi + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893BB3: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x58893BB6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58893BB8: je 0x58893be2
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58893BBA: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58893BBD: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58893BC0: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x58893BC3: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58893BC6: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58893BC9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58893BCB: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58893BCE: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58893BD0: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58893BD3: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58893BD6: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58893BD9: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58893BDC: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58893BDF: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58893BE2: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893BE8: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893BED: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58893BF1: mov eax, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893BF7: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58893BFB: mov dword ptr [esi + 0x10c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C01: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58893C08: je 0x58893dbf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C0E: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58893C15: je 0x58893cf4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C1B: lea edi, [esi + 0x608]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C21: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58893C24: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58893C27: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58893C29: sub edx, 0x82
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C2F: push edx
        __asm _emit 0x52
        // 0x58893C30: add eax, 0x285
        __asm _emit 0x05
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C35: push eax
        __asm _emit 0x50
        // 0x58893C36: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xF6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893C3B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58893C3E: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58893C41: jne 0x58893c21
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x58893C43: lea edi, [esi + 0x610]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C49: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C4E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58893C50: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58893C53: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58893C56: sub ecx, 0x82
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C5C: push ecx
        __asm _emit 0x51
        // 0x58893C5D: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58893C5F: add edx, 0x2cb
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xCB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C65: push edx
        __asm _emit 0x52
        // 0x58893C66: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xF6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893C6B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58893C6E: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58893C71: jne 0x58893c50
        __asm _emit 0x75
        __asm _emit 0xDD
        // 0x58893C73: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58893C76: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58893C79: sub eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x7D
        // 0x58893C7C: add ecx, 0x28d
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x8D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C82: push eax
        __asm _emit 0x50
        // 0x58893C83: push ecx
        __asm _emit 0x51
        // 0x58893C84: mov ecx, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C8A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xF6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893C8F: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58893C92: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58893C95: mov ecx, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893C9B: sub edx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x7D
        // 0x58893C9E: push edx
        __asm _emit 0x52
        // 0x58893C9F: add eax, 0x2d5
        __asm _emit 0x05
        __asm _emit 0xD5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893CA4: push eax
        __asm _emit 0x50
        // 0x58893CA5: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xF5
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893CAA: mov eax, dword ptr [esi + 0x608]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893CB0: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893CB4: mov eax, dword ptr [esi + 0x60c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893CBA: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893CBE: mov eax, dword ptr [esi + 0x610]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893CC4: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893CC8: mov eax, dword ptr [esi + 0x614]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893CCE: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893CD2: mov eax, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893CD8: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893CDC: mov eax, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893CE2: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893CE6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58893CE8: call 0x5888cee0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x91
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58893CED: pop ebx
        __asm _emit 0x5B
        // 0x58893CEE: pop ebp
        __asm _emit 0x5D
        // 0x58893CEF: pop edi
        __asm _emit 0x5F
        // 0x58893CF0: pop esi
        __asm _emit 0x5E
        // 0x58893CF1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58893CF4: lea edi, [esi + 0x618]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893CFA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D00: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58893D03: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58893D06: sub ecx, 0x82
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D0C: push ecx
        __asm _emit 0x51
        // 0x58893D0D: mov ecx, dword ptr [edi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xF0
        // 0x58893D10: add edx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D16: push edx
        __asm _emit 0x52
        // 0x58893D17: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xF5
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893D1C: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58893D1F: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58893D22: sub eax, 0x82
        __asm _emit 0x2D
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D27: add ecx, 0x2b7
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xB7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D2D: push eax
        __asm _emit 0x50
        // 0x58893D2E: push ecx
        __asm _emit 0x51
        // 0x58893D2F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58893D31: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xF5
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893D36: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58893D39: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58893D3C: jne 0x58893d00
        __asm _emit 0x75
        __asm _emit 0xC2
        // 0x58893D3E: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58893D41: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58893D44: mov ecx, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D4A: sub edx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x7D
        // 0x58893D4D: push edx
        __asm _emit 0x52
        // 0x58893D4E: add eax, 0x260
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D53: push eax
        __asm _emit 0x50
        // 0x58893D54: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xF5
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893D59: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58893D5C: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58893D5F: sub ecx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x7D
        // 0x58893D62: push ecx
        __asm _emit 0x51
        // 0x58893D63: mov ecx, dword ptr [esi + 0x62c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D69: add edx, 0x2c1
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D6F: push edx
        __asm _emit 0x52
        // 0x58893D70: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xF5
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893D75: mov eax, dword ptr [esi + 0x608]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D7B: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893D7F: mov eax, dword ptr [esi + 0x60c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D85: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893D89: mov eax, dword ptr [esi + 0x618]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D8F: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893D93: mov eax, dword ptr [esi + 0x61c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893D99: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893D9D: mov eax, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893DA3: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893DA7: mov eax, dword ptr [esi + 0x62c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893DAD: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893DB1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58893DB3: call 0x5888cee0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x91
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58893DB8: pop ebx
        __asm _emit 0x5B
        // 0x58893DB9: pop ebp
        __asm _emit 0x5D
        // 0x58893DBA: pop edi
        __asm _emit 0x5F
        // 0x58893DBB: pop esi
        __asm _emit 0x5E
        // 0x58893DBC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58893DBF: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58893DC6: je 0x58893e39
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x58893DC8: lea edi, [esi + 0x610]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893DCE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58893DD0: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58893DD3: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58893DD6: sub eax, 0x82
        __asm _emit 0x2D
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893DDB: add ecx, 0x2bc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893DE1: push eax
        __asm _emit 0x50
        // 0x58893DE2: push ecx
        __asm _emit 0x51
        // 0x58893DE3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58893DE5: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xF4
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893DEA: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58893DED: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58893DF0: jne 0x58893dd0
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x58893DF2: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58893DF5: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58893DF8: mov ecx, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893DFE: sub edx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x7D
        // 0x58893E01: push edx
        __asm _emit 0x52
        // 0x58893E02: add eax, 0x2c6
        __asm _emit 0x05
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893E07: push eax
        __asm _emit 0x50
        // 0x58893E08: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xF4
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58893E0D: mov eax, dword ptr [esi + 0x610]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893E13: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893E17: mov eax, dword ptr [esi + 0x614]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893E1D: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893E21: mov eax, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893E27: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58893E2B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58893E2D: call 0x5888cee0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x90
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58893E32: pop ebx
        __asm _emit 0x5B
        // 0x58893E33: pop ebp
        __asm _emit 0x5D
        // 0x58893E34: pop edi
        __asm _emit 0x5F
        // 0x58893E35: pop esi
        __asm _emit 0x5E
        // 0x58893E36: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58893E39: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58893E3B: mov dword ptr [esi + 0x638], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893E41: call 0x5888cee0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x90
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58893E46: pop ebx
        __asm _emit 0x5B
        // 0x58893E47: pop ebp
        __asm _emit 0x5D
        // 0x58893E48: pop edi
        __asm _emit 0x5F
        // 0x58893E49: pop esi
        __asm _emit 0x5E
        // 0x58893E4A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
