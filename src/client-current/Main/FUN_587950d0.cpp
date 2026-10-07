// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587950D0 .. +0x1B9 bytes.
// Source symbol alias: FUN_587950d0.
extern "C" __declspec(naked) void FUN_587950d0() {
    __asm {
        // 0x587950D0: push ebx
        __asm _emit 0x53
        // 0x587950D1: push ebp
        __asm _emit 0x55
        // 0x587950D2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587950D4: push esi
        __asm _emit 0x56
        // 0x587950D5: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587950D9: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587950DB: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587950DE: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587950E1: push edi
        __asm _emit 0x57
        // 0x587950E2: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587950E5: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587950EB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587950ED: sub ecx, dword ptr [0x58a0b198]
        __asm _emit 0x2B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587950F3: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587950F8: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x587950FA: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587950FC: shr edi, 6
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x06
        // 0x587950FF: mov eax, 0x88888889
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x88
        // 0x58795104: mul edi
        __asm _emit 0xF7
        __asm _emit 0xE7
        // 0x58795106: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58795108: shr ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x5879510B: movzx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC1
        // 0x5879510E: cdq
        __asm _emit 0x99
        // 0x5879510F: mov ebx, 0x3c
        __asm _emit 0xBB
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795114: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58795116: mov ebp, 0x18
        __asm _emit 0xBD
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879511B: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5879511E: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x58795121: movzx ebx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDA
        // 0x58795124: cdq
        __asm _emit 0x99
        // 0x58795125: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58795127: movzx ebp, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xE8
        // 0x5879512A: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x5879512D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5879512F: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x58795132: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58795134: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58795138: mov eax, dword ptr [0x58a0b1a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5879513D: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5879513F: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58795141: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58795143: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58795145: mov word ptr [esi + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58795149: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879514E: cmp ax, 0x3c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x3C
        // 0x58795152: jb 0x58795167
        __asm _emit 0x72
        __asm _emit 0x13
        // 0x58795154: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x58795157: cdq
        __asm _emit 0x99
        // 0x58795158: mov ecx, 0x3c
        __asm _emit 0xB9
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879515D: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5879515F: add word ptr [esi + 0xa], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x58795163: mov word ptr [esi + 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58795167: mov dx, word ptr [0x58a0b1a6]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA6
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5879516E: add dx, bx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x58795171: add word ptr [esi + 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x56
        __asm _emit 0x0A
        // 0x58795175: movzx eax, word ptr [esi + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x0A
        // 0x58795179: cmp ax, 0x3c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x3C
        // 0x5879517D: jb 0x58795192
        __asm _emit 0x72
        __asm _emit 0x13
        // 0x5879517F: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x58795182: cdq
        __asm _emit 0x99
        // 0x58795183: mov ecx, 0x3c
        __asm _emit 0xB9
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795188: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5879518A: add word ptr [esi + 8], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5879518E: mov word ptr [esi + 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0A
        // 0x58795192: mov edx, dword ptr [0x58a0b1a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58795198: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879519C: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5879519E: add word ptr [esi + 8], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587951A2: movzx eax, word ptr [esi + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587951A6: cmp ax, 0x18
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x18
        // 0x587951AA: jb 0x587951c3
        __asm _emit 0x72
        __asm _emit 0x17
        // 0x587951AC: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587951AF: cdq
        __asm _emit 0x99
        // 0x587951B0: mov ecx, 0x18
        __asm _emit 0xB9
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587951B5: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587951B7: add word ptr [esi + 6], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x587951BB: add word ptr [esi + 4], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587951BF: mov word ptr [esi + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587951C3: mov dx, word ptr [0x58a0b1a2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA2
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587951CA: add dx, bp
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x587951CD: add word ptr [esi + 6], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x56
        __asm _emit 0x06
        // 0x587951D1: mov eax, dword ptr [0x58a0b1a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587951D6: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587951D8: add word ptr [esi + 4], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587951DC: mov ax, word ptr [0x58a0b19e]
        __asm _emit 0x66
        __asm _emit 0xA1
        __asm _emit 0x9E
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587951E2: movzx edx, word ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587951E6: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587951EB: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587951EF: je 0x58795226
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x587951F1: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587951F5: je 0x58795226
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587951F7: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x587951FB: je 0x58795226
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587951FD: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x58795201: je 0x58795226
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58795203: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58795207: jne 0x5879522b
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58795209: movzx ecx, word ptr [0x58a0b19c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58795210: and ecx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58795216: jns 0x5879521d
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58795218: dec ecx
        __asm _emit 0x49
        // 0x58795219: or ecx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFC
        // 0x5879521C: inc ecx
        __asm _emit 0x41
        // 0x5879521D: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x5879521F: sbb ecx, ecx
        __asm _emit 0x1B
        __asm _emit 0xC9
        // 0x58795221: add ecx, 0x1d
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x1D
        // 0x58795224: jmp 0x5879522b
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58795226: mov ecx, 0x1e
        __asm _emit 0xB9
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879522B: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x5879522E: cdq
        __asm _emit 0x99
        // 0x5879522F: mov ebx, 7
        __asm _emit 0xBB
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58795234: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58795236: movzx eax, word ptr [esi + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x06
        // 0x5879523A: mov word ptr [esi + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5879523E: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58795241: jbe 0x5879524d
        __asm _emit 0x76
        __asm _emit 0x0A
        // 0x58795243: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58795245: add word ptr [esi + 2], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x58795249: mov word ptr [esi + 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x06
        // 0x5879524D: mov cx, word ptr [0x58a0b19e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9E
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58795254: add word ptr [esi + 2], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x4E
        __asm _emit 0x02
        // 0x58795258: movzx eax, word ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x5879525C: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x58795260: jbe 0x5879527b
        __asm _emit 0x76
        __asm _emit 0x19
        // 0x58795262: add word ptr [esi], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x3E
        // 0x58795265: add eax, -0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF4
        // 0x58795268: mov word ptr [esi + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x5879526C: mov dx, word ptr [0x58a0b19c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58795273: add word ptr [esi], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x16
        // 0x58795276: pop edi
        __asm _emit 0x5F
        // 0x58795277: pop esi
        __asm _emit 0x5E
        // 0x58795278: pop ebp
        __asm _emit 0x5D
        // 0x58795279: pop ebx
        __asm _emit 0x5B
        // 0x5879527A: ret
        __asm _emit 0xC3
        // 0x5879527B: mov ax, word ptr [0x58a0b19c]
        __asm _emit 0x66
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58795281: add word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x06
        // 0x58795284: pop edi
        __asm _emit 0x5F
        // 0x58795285: pop esi
        __asm _emit 0x5E
        // 0x58795286: pop ebp
        __asm _emit 0x5D
        // 0x58795287: pop ebx
        __asm _emit 0x5B
        // 0x58795288: ret
        __asm _emit 0xC3
    }
}
