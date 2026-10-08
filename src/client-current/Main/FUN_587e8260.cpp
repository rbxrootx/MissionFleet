// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 815 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e8260.

// Ghidra body range 0x587E8260..0x587E858F; 815 mapped bytes.
extern "C" __declspec(naked) void FUN_587e8260_segment_00() {
    __asm {
        // 0x587E8260: cmp word ptr [ecx + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587E8268: jne 0x587e8278
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587E826A: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587E826E: shr al, 1
        __asm _emit 0xD0
        __asm _emit 0xE8
        // 0x587E8270: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587E8272: je 0x587e858e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8278: cmp dword ptr [ecx + 0x10534], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E827F: push ebx
        __asm _emit 0x53
        // 0x587E8280: push ebp
        __asm _emit 0x55
        // 0x587E8281: push esi
        __asm _emit 0x56
        // 0x587E8282: push edi
        __asm _emit 0x57
        // 0x587E8283: jne 0x587e84ad
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8289: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E828F: mov eax, dword ptr [edx + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8295: cmp dword ptr [eax + 0x590], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E829C: jne 0x587e84ad
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E82A2: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E82A7: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587E82AA: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587E82AD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587E82AF: cmp esi, 0x27d
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x7D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E82B5: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x587E82B8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E82BA: cmp edi, 0x1dd
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xDD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E82C0: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x587E82C3: mov ebp, 6
        __asm _emit 0xBD
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E82C8: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x587E82CA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E82CC: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587E82CE: setl al
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC0
        // 0x587E82D1: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x587E82D3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E82D5: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587E82D7: setl al
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC0
        // 0x587E82DA: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x587E82DC: je 0x587e84ad
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E82E2: movzx eax, byte ptr [ecx + 0x3a8]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E82E9: mov dword ptr [ecx + 0x398], 0x14
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E82F3: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E82F9: cmp dword ptr [edx + 4], ebp
        __asm _emit 0x39
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587E82FC: jg 0x587e8302
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x587E82FE: or al, 1
        __asm _emit 0x0C
        __asm _emit 0x01
        // 0x587E8300: jmp 0x587e8307
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587E8302: and eax, 0xfe
        __asm _emit 0x25
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8307: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x587E830A: sub edx, dword ptr [ecx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x587E830D: mov byte ptr [ecx + 0x3a8], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8313: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E8319: mov esi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x587E831C: lea edi, [edx - 6]
        __asm _emit 0x8D
        __asm _emit 0x7A
        __asm _emit 0xFA
        // 0x587E831F: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587E8321: jl 0x587e832e
        __asm _emit 0x7C
        __asm _emit 0x0B
        // 0x587E8323: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x587E8325: jg 0x587e832e
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x587E8327: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x587E832A: or al, 2
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x587E832C: jmp 0x587e8336
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587E832E: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x587E8331: and eax, 0xfd
        __asm _emit 0x25
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8336: mov byte ptr [ecx + 0x3a8], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E833C: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E8342: cmp dword ptr [edx + 8], ebp
        __asm _emit 0x39
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x587E8345: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x587E8348: jg 0x587e834e
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x587E834A: or al, 4
        __asm _emit 0x0C
        __asm _emit 0x04
        // 0x587E834C: jmp 0x587e8353
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587E834E: and eax, 0xfb
        __asm _emit 0x25
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8353: mov edx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x20
        // 0x587E8356: sub edx, dword ptr [ecx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x587E8359: mov byte ptr [ecx + 0x3a8], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E835F: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E8365: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587E8368: lea edi, [edx - 6]
        __asm _emit 0x8D
        __asm _emit 0x7A
        __asm _emit 0xFA
        // 0x587E836B: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587E836D: jl 0x587e837b
        __asm _emit 0x7C
        __asm _emit 0x0C
        // 0x587E836F: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x587E8371: jg 0x587e837b
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587E8373: movzx ebx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD8
        // 0x587E8376: or bl, 8
        __asm _emit 0x80
        __asm _emit 0xCB
        __asm _emit 0x08
        // 0x587E8379: jmp 0x587e8384
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x587E837B: movzx ebx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD8
        // 0x587E837E: and ebx, 0xf7
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8384: mov byte ptr [ecx + 0x3a8], bl
        __asm _emit 0x88
        __asm _emit 0x99
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E838A: test bl, 1
        __asm _emit 0xF6
        __asm _emit 0xC3
        __asm _emit 0x01
        // 0x587E838D: je 0x587e83a9
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587E838F: mov eax, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E8395: cmp dword ptr [eax + 0x50], 0x40
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x40
        // 0x587E8399: jle 0x587e83a9
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x587E839B: mov edx, dword ptr [ecx + 0x104cc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E83A1: sub dword ptr [ecx + 0x1052c], edx
        __asm _emit 0x29
        __asm _emit 0x91
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E83A7: jmp 0x587e841a
        __asm _emit 0xEB
        __asm _emit 0x71
        // 0x587E83A9: test bl, 2
        __asm _emit 0xF6
        __asm _emit 0xC3
        __asm _emit 0x02
        // 0x587E83AC: je 0x587e841a
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x587E83AE: mov esi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E83B4: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E83BA: imul eax, dword ptr [esi + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E83C1: sub eax, dword ptr [esi + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587E83C4: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587E83C7: sub eax, dword ptr [esi + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x587E83CA: mov edi, dword ptr [ecx + 0x104cc]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E83D0: lea eax, [eax + edx - 0x44c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0xB4
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E83D7: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E83D9: jle 0x587e83e3
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587E83DB: add dword ptr [ecx + 0x1052c], edi
        __asm _emit 0x01
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E83E1: jmp 0x587e841a
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x587E83E3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E83E5: sub eax, dword ptr [esi + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x587E83E8: mov ebp, dword ptr [ecx + 0x1052c]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E83EE: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E83F4: cdq
        __asm _emit 0x99
        // 0x587E83F5: idiv dword ptr [esi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E83FB: mov edx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8401: imul edx, dword ptr [esi + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8408: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587E840A: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587E840C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E840E: jle 0x587e8412
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587E8410: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587E8412: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x587E8414: mov dword ptr [ecx + 0x1052c], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E841A: test bl, 4
        __asm _emit 0xF6
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587E841D: je 0x587e843c
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587E841F: mov eax, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E8425: cmp dword ptr [eax + 0x54], 0x96
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x54
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E842C: jle 0x587e843c
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x587E842E: mov edx, dword ptr [ecx + 0x104cc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E8434: sub dword ptr [ecx + 0x10530], edx
        __asm _emit 0x29
        __asm _emit 0x91
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E843A: jmp 0x587e84ad
        __asm _emit 0xEB
        __asm _emit 0x71
        // 0x587E843C: test bl, 8
        __asm _emit 0xF6
        __asm _emit 0xC3
        __asm _emit 0x08
        // 0x587E843F: je 0x587e84ad
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x587E8441: mov esi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E8447: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E844D: imul eax, dword ptr [esi + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8454: sub eax, dword ptr [esi + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587E8457: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587E845A: sub eax, dword ptr [esi + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x587E845D: mov edi, dword ptr [ecx + 0x104cc]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E8463: lea eax, [eax + edx - 0x320]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E846A: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E846C: jle 0x587e8476
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587E846E: add dword ptr [ecx + 0x10530], edi
        __asm _emit 0x01
        __asm _emit 0xB9
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E8474: jmp 0x587e84ad
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x587E8476: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E8478: sub eax, dword ptr [esi + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x587E847B: mov ebx, dword ptr [ecx + 0x10530]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E8481: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8487: cdq
        __asm _emit 0x99
        // 0x587E8488: idiv dword ptr [esi + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E848E: mov edx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8494: imul edx, dword ptr [esi + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E849B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587E849D: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587E849F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E84A1: jle 0x587e84a5
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587E84A3: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587E84A5: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x587E84A7: mov dword ptr [ecx + 0x10530], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E84AD: cmp dword ptr [ecx + 0x3a0], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E84B4: jne 0x587e84d2
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587E84B6: mov eax, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E84BC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E84BE: je 0x587e84d2
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587E84C0: mov edx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x587E84C3: mov dword ptr [ecx + 0x10464], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E84C9: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x587E84CC: mov dword ptr [ecx + 0x10468], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E84D2: mov edx, dword ptr [ecx + 0x10558]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E84D8: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587E84DA: je 0x587e858a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E84E0: mov eax, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E84E6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E84E8: je 0x587e858a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E84EE: cmp dword ptr [eax + 0x50], 0x3e8
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E84F5: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587E84F8: mov edi, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x587E84FB: jle 0x587e858a
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8501: mov ebp, dword ptr [eax + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8507: imul ebp, dword ptr [eax + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xA8
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E850E: mov ebx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x587E8511: sub ebx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x587E8514: sub ebp, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xED
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E851A: add ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x03
        __asm _emit 0x58
        __asm _emit 0x1C
        // 0x587E851D: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587E851F: jge 0x587e858a
        __asm _emit 0x7D
        __asm _emit 0x69
        // 0x587E8521: cmp dword ptr [eax + 0x54], 0x258
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x54
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8528: jle 0x587e858a
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x587E852A: mov ebp, dword ptr [eax + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8530: imul ebp, dword ptr [eax + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xA8
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8537: mov ebx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x54
        // 0x587E853A: sub ebx, dword ptr [eax + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x587E853D: sub ebp, 0x258
        __asm _emit 0x81
        __asm _emit 0xED
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8543: add ebx, dword ptr [eax + 0x20]
        __asm _emit 0x03
        __asm _emit 0x58
        __asm _emit 0x20
        // 0x587E8546: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587E8548: jge 0x587e858a
        __asm _emit 0x7D
        __asm _emit 0x40
        // 0x587E854A: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E854F: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587E8552: mov dx, word ptr [edx + 0x350]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8559: cmp dx, word ptr [eax + 0x350]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8560: jne 0x587e857e
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587E8562: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587E8564: sub eax, dword ptr [ecx + 0x10bb8]
        __asm _emit 0x2B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E856A: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587E856C: sub edx, dword ptr [ecx + 0x10bbc]
        __asm _emit 0x2B
        __asm _emit 0x91
        __asm _emit 0xBC
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E8572: add dword ptr [ecx + 0x1052c], eax
        __asm _emit 0x01
        __asm _emit 0x81
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E8578: add dword ptr [ecx + 0x10530], edx
        __asm _emit 0x01
        __asm _emit 0x91
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E857E: mov dword ptr [ecx + 0x10bb8], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E8584: mov dword ptr [ecx + 0x10bbc], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xBC
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E858A: pop edi
        __asm _emit 0x5F
        // 0x587E858B: pop esi
        __asm _emit 0x5E
        // 0x587E858C: pop ebp
        __asm _emit 0x5D
        // 0x587E858D: pop ebx
        __asm _emit 0x5B
        // 0x587E858E: ret
        __asm _emit 0xC3
    }
}
