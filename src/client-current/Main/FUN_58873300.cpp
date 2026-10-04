// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x58873300 .. +0x352 bytes.
// Source symbol alias: FUN_58873300.
extern "C" __declspec(naked) void FUN_58873300() {
    __asm {
        // 0x58873300: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58873303: push ebx
        __asm _emit 0x53
        // 0x58873304: push ebp
        __asm _emit 0x55
        // 0x58873305: push esi
        __asm _emit 0x56
        // 0x58873306: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58873308: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5887330A: push edi
        __asm _emit 0x57
        // 0x5887330B: cmp dword ptr [esi + 0x9c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873311: je 0x58873346
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58873313: mov ebx, 0x9a4
        __asm _emit 0xBB
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873318: jmp 0x58873320
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5887331A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873320: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873326: mov edi, dword ptr [ebx + eax]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x58873329: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x5887332B: je 0x5887333b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5887332D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5887332F: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xF8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58873334: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58873336: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xF9
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887333B: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5887333E: cmp ebx, 0xa24
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873344: jl 0x58873320
        __asm _emit 0x7C
        __asm _emit 0xDA
        // 0x58873346: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5887334A: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873350: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x58873352: je 0x58873614
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873358: mov eax, dword ptr [ebx + 0xcc4]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887335E: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58873362: movsx edx, word ptr [eax + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x50
        __asm _emit 0x0A
        // 0x58873366: add ecx, 0x1bc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887336C: push ecx
        __asm _emit 0x51
        // 0x5887336D: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873373: add edx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873379: push edx
        __asm _emit 0x52
        // 0x5887337A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xFF
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887337F: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873385: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887338A: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5887338E: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873394: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873399: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5887339D: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588733A3: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588733A5: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588733A9: mov eax, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588733AF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588733B3: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588733B9: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588733BD: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588733C3: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588733C9: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588733CD: mov edx, 0x7c00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588733D2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588733D5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588733D7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588733D9: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588733DD: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588733E1: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588733E5: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588733E9: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588733EC: jae 0x5887358b
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588733F2: lea edi, [ecx + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x0E
        // 0x588733F5: jmp 0x58873400
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588733F7: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588733FE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58873400: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873406: mov ebp, 0x1f
        __asm _emit 0xBD
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887340B: sub ebp, ecx
        __asm _emit 0x2B
        __asm _emit 0xE9
        // 0x5887340D: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873413: mov edx, dword ptr [ecx + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873419: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5887341B: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x5887341D: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58873420: jne 0x58873556
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873426: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887342C: mov eax, dword ptr [edx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873432: mov edx, dword ptr [edx + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873438: shr eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE8
        // 0x5887343A: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x5887343C: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873441: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x01
        // 0x58873444: and edx, ebp
        __asm _emit 0x23
        __asm _emit 0xD5
        // 0x58873446: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58873448: je 0x588734dd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887344E: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58873450: je 0x58873499
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x58873452: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58873457: jne 0x5887355b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887345D: mov eax, dword ptr [ebx + 0xcc4]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873463: movsx ecx, word ptr [eax + edi + 0x40]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x38
        __asm _emit 0x40
        // 0x58873468: movsx edx, word ptr [eax + edi]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x5887346C: add ecx, 0x1bc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873472: push ecx
        __asm _emit 0x51
        // 0x58873473: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873479: add edx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887347F: push edx
        __asm _emit 0x52
        // 0x58873480: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xFE
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58873485: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887348B: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58873490: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58873494: jmp 0x5887355b
        __asm _emit 0xE9
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873499: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5887349E: jne 0x5887355b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588734A4: mov eax, dword ptr [ebx + 0xcc4]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588734AA: movsx ecx, word ptr [eax + edi + 0x40]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x38
        __asm _emit 0x40
        // 0x588734AF: movsx edx, word ptr [eax + edi]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x588734B3: add ecx, 0x1bc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588734B9: push ecx
        __asm _emit 0x51
        // 0x588734BA: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588734C0: add edx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588734C6: push edx
        __asm _emit 0x52
        // 0x588734C7: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xFD
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588734CC: mov eax, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588734D2: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588734D7: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588734DB: jmp 0x5887355b
        __asm _emit 0xEB
        __asm _emit 0x7E
        // 0x588734DD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588734DF: je 0x58873516
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588734E1: mov eax, dword ptr [ebx + 0xcc4]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588734E7: movsx ecx, word ptr [eax + edi + 0x40]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x38
        __asm _emit 0x40
        // 0x588734EC: movsx edx, word ptr [eax + edi]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x588734F0: add ecx, 0x1bc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588734F6: push ecx
        __asm _emit 0x51
        // 0x588734F7: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588734FD: add edx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873503: push edx
        __asm _emit 0x52
        // 0x58873504: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xFD
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58873509: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887350F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58873514: jmp 0x5887355b
        __asm _emit 0xEB
        __asm _emit 0x45
        // 0x58873516: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5887351B: jne 0x5887355b
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x5887351D: mov eax, dword ptr [ebx + 0xcc4]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873523: movsx ecx, word ptr [eax + edi + 0x40]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4C
        __asm _emit 0x38
        __asm _emit 0x40
        // 0x58873528: movsx edx, word ptr [eax + edi]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x5887352C: add ecx, 0x1bc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873532: push ecx
        __asm _emit 0x51
        // 0x58873533: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873539: add edx, 0x200
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887353F: push edx
        __asm _emit 0x52
        // 0x58873540: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xFD
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58873545: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887354B: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58873550: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58873554: jmp 0x5887355b
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58873556: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887355B: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873561: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873567: movzx eax, word ptr [edx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5887356B: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887356F: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x58873572: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x58873574: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x58873577: add edi, 2
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x02
        // 0x5887357A: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5887357C: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58873580: jl 0x58873400
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x7A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58873586: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887358B: mov edx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873591: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873597: movzx edx, word ptr [eax + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x0E
        // 0x5887359B: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588735A0: and edx, edi
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x588735A2: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588735A4: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588735A6: jle 0x588735d8
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x588735A8: lea edx, [esi + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588735AE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588735B0: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588735B2: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588735B6: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588735BC: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588735C2: movzx eax, word ptr [eax + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0E
        // 0x588735C6: and eax, edi
        __asm _emit 0x23
        __asm _emit 0xC7
        // 0x588735C8: inc ecx
        __asm _emit 0x41
        // 0x588735C9: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x588735CC: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588735CF: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588735D1: jl 0x588735b0
        __asm _emit 0x7C
        __asm _emit 0xDD
        // 0x588735D3: cmp ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x588735D6: jge 0x58873603
        __asm _emit 0x7D
        __asm _emit 0x2B
        // 0x588735D8: mov edi, 0x20
        __asm _emit 0xBF
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588735DD: lea edx, [esi + ecx*4 + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588735E4: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x588735E6: jmp 0x588735f0
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588735E8: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588735EF: nop
        __asm _emit 0x90
        // 0x588735F0: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588735F2: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588735F7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588735FB: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588735FE: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58873601: jne 0x588735f0
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x58873603: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58873605: call 0x588730f0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887360A: pop edi
        __asm _emit 0x5F
        // 0x5887360B: pop esi
        __asm _emit 0x5E
        // 0x5887360C: pop ebp
        __asm _emit 0x5D
        // 0x5887360D: pop ebx
        __asm _emit 0x5B
        // 0x5887360E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58873611: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58873614: lea eax, [esi + 0xfc]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887361A: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887361F: nop
        __asm _emit 0x90
        // 0x58873620: mov ecx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xFC
        // 0x58873623: mov esi, 0xfff0
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58873628: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x5887362C: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5887362E: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x58873632: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58873635: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x58873639: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5887363C: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x58873640: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x58873643: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x58873646: jne 0x58873620
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x58873648: pop edi
        __asm _emit 0x5F
        // 0x58873649: pop esi
        __asm _emit 0x5E
        // 0x5887364A: pop ebp
        __asm _emit 0x5D
        // 0x5887364B: pop ebx
        __asm _emit 0x5B
        // 0x5887364C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5887364F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
