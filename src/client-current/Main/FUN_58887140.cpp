// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58887140 .. +0x270 bytes.
extern "C" __declspec(naked) void FUN_58887140() {
    __asm {
        // 0x58887140: push esi
        __asm _emit 0x56
        // 0x58887141: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58887143: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58887147: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58887149: je 0x588873aa
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888714F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58887153: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887158: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5888715B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887160: push edi
        __asm _emit 0x57
        // 0x58887161: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58887164: je 0x588871de
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x58887166: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5888716A: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5888716D: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887172: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58887175: je 0x588871de
        __asm _emit 0x74
        __asm _emit 0x67
        // 0x58887177: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5888717B: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5888717E: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887183: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58887186: jne 0x5888738d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888718C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5888718F: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887194: add ecx, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x3C
        // 0x58887197: cmp ecx, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5888719A: jg 0x588871b9
        __asm _emit 0x7F
        __asm _emit 0x1D
        // 0x5888719C: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5888719F: add edx, 0xa0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588871A5: cmp edx, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588871A8: jl 0x588871b9
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588871AA: mov dword ptr [esi + 0xe4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588871B4: jmp 0x5888738d
        __asm _emit 0xE9
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588871B9: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588871BF: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x588871C2: jbe 0x588871d2
        __asm _emit 0x76
        __asm _emit 0x0E
        // 0x588871C4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588871C6: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588871C9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588871CB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588871CD: jmp 0x5888738d
        __asm _emit 0xE9
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588871D2: inc eax
        __asm _emit 0x40
        // 0x588871D3: mov dword ptr [esi + 0xe4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588871D9: jmp 0x5888738d
        __asm _emit 0xE9
        __asm _emit 0xAF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588871DE: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588871E1: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588871E4: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588871E6: jne 0x588871f0
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588871E8: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588871EB: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588871EE: je 0x5888726f
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x588871F0: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588871F2: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588871F5: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588871F8: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x588871FB: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x588871FE: ja 0x58887225
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x58887200: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x58887203: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58887206: ja 0x5888721c
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x58887208: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888720A: jge 0x58887211
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x5888720C: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x5888720F: jmp 0x58887230
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x58887211: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58887213: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58887215: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x58887218: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5888721A: jmp 0x58887230
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5888721C: cdq
        __asm _emit 0x99
        // 0x5888721D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5888721F: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58887221: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x58887223: jmp 0x58887230
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58887225: cdq
        __asm _emit 0x99
        // 0x58887226: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58887229: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5888722B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5888722D: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58887230: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x58887233: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x58887236: ja 0x5888725b
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x58887238: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x5888723B: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5888723E: ja 0x58887252
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x58887240: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887242: jge 0x58887249
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58887244: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58887247: jmp 0x58887266
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x58887249: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888724B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888724D: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x58887250: jmp 0x58887266
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58887252: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58887254: cdq
        __asm _emit 0x99
        // 0x58887255: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58887257: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58887259: jmp 0x58887266
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5888725B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5888725D: cdq
        __asm _emit 0x99
        // 0x5888725E: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58887261: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58887263: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58887266: push eax
        __asm _emit 0x50
        // 0x58887267: push edi
        __asm _emit 0x57
        // 0x58887268: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888726A: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xBB
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888726F: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58887272: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58887275: jne 0x5888738d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888727B: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5888727E: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58887281: jne 0x5888738d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887287: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5888728B: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887290: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58887293: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887298: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5888729B: jne 0x5888732d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588872A1: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588872A5: mov eax, 0xe2ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588872AA: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588872AD: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588872B2: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588872B5: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588872B9: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588872BE: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588872C3: mov edi, 0x30
        __asm _emit 0xBF
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588872C8: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588872CE: jle 0x588872e7
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588872D0: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588872D7: je 0x588872e7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588872D9: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588872DF: mov ecx, dword ptr [edx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588872E5: jmp 0x588872e9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588872E7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588872E9: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588872EE: push eax
        __asm _emit 0x50
        // 0x588872EF: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588872F4: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588872F9: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588872FF: jle 0x58887321
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x58887301: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887308: je 0x58887321
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5888730A: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887310: mov ecx, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887316: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58887318: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5888731B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888731D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5888731F: jmp 0x5888738d
        __asm _emit 0xEB
        __asm _emit 0x6C
        // 0x58887321: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887323: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58887325: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58887328: push ecx
        __asm _emit 0x51
        // 0x58887329: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5888732B: jmp 0x5888738d
        __asm _emit 0xEB
        __asm _emit 0x60
        // 0x5888732D: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58887331: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58887333: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58887336: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888733B: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5888733E: jne 0x5888738d
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x58887340: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58887344: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887349: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5888734C: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887351: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58887354: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58887358: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888735D: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58887361: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887366: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5888736A: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888736F: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58887373: mov ecx, dword ptr [0x58a2456c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887379: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888737B: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xA2
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58887380: mov ecx, dword ptr [0x58a24570]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x70
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887386: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58887388: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xA2
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x5888738D: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58887390: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58887392: je 0x588873a9
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58887394: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x58887397: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58887399: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5888739C: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5888739F: je 0x588873ac
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588873A1: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588873A3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588873A5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588873A7: jne 0x58887394
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588873A9: pop edi
        __asm _emit 0x5F
        // 0x588873AA: pop esi
        __asm _emit 0x5E
        // 0x588873AB: ret
        __asm _emit 0xC3
        // 0x588873AC: pop edi
        __asm _emit 0x5F
        // 0x588873AD: pop esi
        __asm _emit 0x5E
        // 0x588873AE: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
