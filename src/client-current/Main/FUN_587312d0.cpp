// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 546 bytes in 1 exact ranges.
// Source symbol alias: FUN_587312d0.

// Ghidra body range 0x587312D0..0x587314F2; 546 mapped bytes.
extern "C" __declspec(naked) void FUN_587312d0_segment_00() {
    __asm {
        // 0x587312D0: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x587312D3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587312D8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587312DA: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587312DE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587312E0: push ebx
        __asm _emit 0x53
        // 0x587312E1: push esi
        __asm _emit 0x56
        // 0x587312E2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587312E4: mov word ptr [esp + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587312E9: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587312EE: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587312F3: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587312F8: mov word ptr [esp + 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0A
        // 0x587312FD: mov word ptr [esp + 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58731302: mov word ptr [esp + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58731307: mov ecx, 4
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873130C: mov edx, 5
        __asm _emit 0xBA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731311: mov eax, 6
        __asm _emit 0xB8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731316: mov word ptr [esp + 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873131B: mov word ptr [esp + 0x12], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58731320: mov word ptr [esp + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58731325: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873132A: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873132F: mov eax, 9
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731334: push edi
        __asm _emit 0x57
        // 0x58731335: mov word ptr [esp + 0x1a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x5873133A: mov word ptr [esp + 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873133F: mov word ptr [esp + 0x1e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x58731344: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873134A: push eax
        __asm _emit 0x50
        // 0x5873134B: call 0x5897cc3c
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xB8
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58731350: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58731353: mov ebx, 0xa
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731358: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xB8
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873135D: cdq
        __asm _emit 0x99
        // 0x5873135E: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731363: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58731365: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58731367: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xB8
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873136C: cdq
        __asm _emit 0x99
        // 0x5873136D: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731372: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58731374: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58731377: lea eax, [esp + edi*2 + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x7C
        __asm _emit 0x0C
        // 0x5873137B: movzx edi, word ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x38
        // 0x5873137E: lea ecx, [esp + edx*2 + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x54
        __asm _emit 0x0C
        // 0x58731382: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58731385: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58731388: mov word ptr [ecx], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x5873138B: jne 0x58731358
        __asm _emit 0x75
        __asm _emit 0xCB
        // 0x5873138D: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58731390: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58731393: movzx edx, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58731398: add eax, 0x168
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873139D: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x40
        // 0x587313A0: push eax
        __asm _emit 0x50
        // 0x587313A1: push ecx
        __asm _emit 0x51
        // 0x587313A2: mov ecx, dword ptr [esi + edx*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587313A9: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587313AE: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587313B1: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587313B4: movzx edx, word ptr [esp + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x587313B9: add eax, 0x136
        __asm _emit 0x05
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587313BE: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x40
        // 0x587313C1: push eax
        __asm _emit 0x50
        // 0x587313C2: push ecx
        __asm _emit 0x51
        // 0x587313C3: mov ecx, dword ptr [esi + edx*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587313CA: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587313CF: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587313D2: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587313D5: movzx edx, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587313DA: add eax, 0x136
        __asm _emit 0x05
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587313DF: add ecx, 0x72
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x72
        // 0x587313E2: push eax
        __asm _emit 0x50
        // 0x587313E3: push ecx
        __asm _emit 0x51
        // 0x587313E4: mov ecx, dword ptr [esi + edx*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587313EB: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587313F0: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587313F3: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587313F6: movzx edx, word ptr [esp + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x587313FB: add eax, 0x136
        __asm _emit 0x05
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731400: add ecx, 0xa4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731406: push eax
        __asm _emit 0x50
        // 0x58731407: push ecx
        __asm _emit 0x51
        // 0x58731408: mov ecx, dword ptr [esi + edx*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873140F: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58731414: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58731417: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873141A: movzx edx, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873141F: add eax, 0x104
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731424: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x40
        // 0x58731427: push eax
        __asm _emit 0x50
        // 0x58731428: push ecx
        __asm _emit 0x51
        // 0x58731429: mov ecx, dword ptr [esi + edx*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731430: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58731435: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58731438: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873143B: movzx edx, word ptr [esp + 0x16]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x58731440: add eax, 0x104
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731445: add ecx, 0x72
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x72
        // 0x58731448: push eax
        __asm _emit 0x50
        // 0x58731449: push ecx
        __asm _emit 0x51
        // 0x5873144A: mov ecx, dword ptr [esi + edx*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731451: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58731456: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58731459: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873145C: movzx edx, word ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58731461: add eax, 0x104
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731466: add ecx, 0xa4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873146C: push eax
        __asm _emit 0x50
        // 0x5873146D: push ecx
        __asm _emit 0x51
        // 0x5873146E: mov ecx, dword ptr [esi + edx*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731475: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x1E
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x5873147A: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873147D: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58731480: movzx edx, word ptr [esp + 0x1a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x58731485: add eax, 0xd2
        __asm _emit 0x05
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873148A: add ecx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x40
        // 0x5873148D: push eax
        __asm _emit 0x50
        // 0x5873148E: push ecx
        __asm _emit 0x51
        // 0x5873148F: mov ecx, dword ptr [esi + edx*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731496: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x5873149B: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873149E: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587314A1: movzx edx, word ptr [esp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587314A6: add eax, 0xd2
        __asm _emit 0x05
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587314AB: add ecx, 0x72
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x72
        // 0x587314AE: push eax
        __asm _emit 0x50
        // 0x587314AF: push ecx
        __asm _emit 0x51
        // 0x587314B0: mov ecx, dword ptr [esi + edx*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587314B7: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587314BC: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587314BF: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587314C2: movzx edx, word ptr [esp + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x587314C7: add eax, 0xd2
        __asm _emit 0x05
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587314CC: add ecx, 0xa4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587314D2: push eax
        __asm _emit 0x50
        // 0x587314D3: push ecx
        __asm _emit 0x51
        // 0x587314D4: mov ecx, dword ptr [esi + edx*4 + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587314DB: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587314E0: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587314E4: pop edi
        __asm _emit 0x5F
        // 0x587314E5: pop esi
        __asm _emit 0x5E
        // 0x587314E6: pop ebx
        __asm _emit 0x5B
        // 0x587314E7: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587314E9: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xB6
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587314EE: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587314F1: ret
        __asm _emit 0xC3
    }
}
