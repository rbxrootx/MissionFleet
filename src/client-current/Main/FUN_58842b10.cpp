// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 649 bytes in 1 exact ranges.
// Source symbol alias: FUN_58842b10.

// Ghidra body range 0x58842B10..0x58842D99; 649 mapped bytes.
extern "C" __declspec(naked) void FUN_58842b10_segment_00() {
    __asm {
        // 0x58842B10: sub esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x38
        // 0x58842B13: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58842B18: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58842B1A: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58842B1E: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58842B23: mov eax, dword ptr [eax + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842B29: push esi
        __asm _emit 0x56
        // 0x58842B2A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58842B2C: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58842B2F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58842B31: je 0x58842d89
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842B37: mov eax, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x64
        // 0x58842B3A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58842B3C: je 0x58842d89
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842B42: push ebx
        __asm _emit 0x53
        // 0x58842B43: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58842B49: push ebp
        __asm _emit 0x55
        // 0x58842B4A: push edi
        __asm _emit 0x57
        // 0x58842B4B: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58842B4D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58842B50: cmp word ptr [ebp + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842B58: je 0x58842b69
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58842B5A: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x58842B5D: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x58842B60: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842B65: push ebp
        __asm _emit 0x55
        // 0x58842B66: push edx
        __asm _emit 0x52
        // 0x58842B67: jmp 0x58842b76
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58842B69: mov eax, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x70
        // 0x58842B6C: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x58842B6F: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x58842B74: push ebp
        __asm _emit 0x55
        // 0x58842B75: push ecx
        __asm _emit 0x51
        // 0x58842B76: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842B7C: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x5D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58842B81: movsx eax, word ptr [ebp + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x85
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842B88: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58842B8B: ja 0x58842bf7
        __asm _emit 0x77
        __asm _emit 0x6A
        // 0x58842B8D: jmp dword ptr [eax*4 + 0x58842d9c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x2D
        __asm _emit 0x84
        __asm _emit 0x58
        // 0x58842B94: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x58842B99: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842B9B: push 0x5899e4f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842BA0: jmp 0x58842be6
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x58842BA2: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842BA7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842BA9: push 0x5899e4dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842BAE: jmp 0x58842be6
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x58842BB0: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842BB5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842BB7: push 0x5899e4b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842BBC: jmp 0x58842be6
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x58842BBE: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842BC3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842BC5: push 0x5899e49c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842BCA: jmp 0x58842be6
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58842BCC: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842BD1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842BD3: push 0x5899e47c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842BD8: jmp 0x58842be6
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58842BDA: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842BDF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842BE1: push 0x5899e45c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842BE6: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58842BE8: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842BEE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58842BF1: push eax
        __asm _emit 0x50
        // 0x58842BF2: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58842BF7: cmp word ptr [ebp + 0x80], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842BFF: je 0x58842d22
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842C05: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58842C0B: lea edi, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x78
        // 0x58842C0E: push edi
        __asm _emit 0x57
        // 0x58842C0F: call 0x58753e60
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x12
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842C14: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58842C16: je 0x58842cf3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842C1C: movzx eax, word ptr [ebp + 0x80]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842C23: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58842C27: jne 0x58842c46
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58842C29: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58842C2B: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58842C31: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842C33: push edx
        __asm _emit 0x52
        // 0x58842C34: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x0C
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842C39: push eax
        __asm _emit 0x50
        // 0x58842C3A: push 0x5899e454
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842C3F: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58842C43: push eax
        __asm _emit 0x50
        // 0x58842C44: jmp 0x58842cbf
        __asm _emit 0xEB
        __asm _emit 0x79
        // 0x58842C46: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58842C4A: jne 0x58842c6b
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58842C4C: mov ecx, dword ptr [ebp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x7C
        // 0x58842C4F: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58842C51: push ecx
        __asm _emit 0x51
        // 0x58842C52: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58842C58: push edx
        __asm _emit 0x52
        // 0x58842C59: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x0C
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842C5E: push eax
        __asm _emit 0x50
        // 0x58842C5F: push 0x5899e44c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842C64: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58842C68: push eax
        __asm _emit 0x50
        // 0x58842C69: jmp 0x58842cbf
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x58842C6B: mov eax, dword ptr [ebp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x7C
        // 0x58842C6E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58842C70: jne 0x58842c8e
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58842C72: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58842C74: push eax
        __asm _emit 0x50
        // 0x58842C75: push ecx
        __asm _emit 0x51
        // 0x58842C76: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58842C7C: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x0C
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842C81: push eax
        __asm _emit 0x50
        // 0x58842C82: push 0x5899e444
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842C87: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58842C8B: push edx
        __asm _emit 0x52
        // 0x58842C8C: jmp 0x58842cbf
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x58842C8E: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x58842C90: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58842C96: push eax
        __asm _emit 0x50
        // 0x58842C97: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58842C99: jne 0x58842cae
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58842C9B: push edi
        __asm _emit 0x57
        // 0x58842C9C: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x0C
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842CA1: push eax
        __asm _emit 0x50
        // 0x58842CA2: push 0x5899e43c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842CA7: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58842CAB: push eax
        __asm _emit 0x50
        // 0x58842CAC: jmp 0x58842cbf
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x58842CAE: push edi
        __asm _emit 0x57
        // 0x58842CAF: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x0B
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842CB4: push eax
        __asm _emit 0x50
        // 0x58842CB5: push 0x5899e434
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842CBA: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58842CBE: push ecx
        __asm _emit 0x51
        // 0x58842CBF: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58842CC5: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842CCB: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58842CCE: cmp word ptr [ebp + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842CD6: je 0x58842ce6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58842CD8: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842CDD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842CDF: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58842CE3: push edx
        __asm _emit 0x52
        // 0x58842CE4: jmp 0x58842d4b
        __asm _emit 0xEB
        __asm _emit 0x65
        // 0x58842CE6: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x58842CEB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842CED: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58842CF1: jmp 0x58842d4a
        __asm _emit 0xEB
        __asm _emit 0x57
        // 0x58842CF3: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58842CF9: push edi
        __asm _emit 0x57
        // 0x58842CFA: call 0x587b9270
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x65
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58842CFF: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58842D01: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842D03: push ecx
        __asm _emit 0x51
        // 0x58842D04: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58842D0A: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x0B
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58842D0F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58842D11: jne 0x58842d22
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x58842D13: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58842D15: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58842D1B: push eax
        __asm _emit 0x50
        // 0x58842D1C: push edx
        __asm _emit 0x52
        // 0x58842D1D: call 0x587b9290
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x65
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58842D22: cmp word ptr [ebp + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842D2A: je 0x58842d33
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58842D2C: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842D31: jmp 0x58842d38
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58842D33: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x58842D38: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842D3A: push 0x5899e41c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xE4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58842D3F: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58842D41: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842D47: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58842D4A: push eax
        __asm _emit 0x50
        // 0x58842D4B: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x5B
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58842D50: mov eax, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x74
        // 0x58842D53: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58842D56: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842D5C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58842D5E: je 0x58842d6a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58842D60: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58842D65: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842D67: push eax
        __asm _emit 0x50
        // 0x58842D68: jmp 0x58842d76
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58842D6A: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x58842D6F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58842D71: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58842D76: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x5B
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58842D7B: mov ebp, dword ptr [ebp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x54
        // 0x58842D7E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58842D80: jne 0x58842b50
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58842D86: pop edi
        __asm _emit 0x5F
        // 0x58842D87: pop ebp
        __asm _emit 0x5D
        // 0x58842D88: pop ebx
        __asm _emit 0x5B
        // 0x58842D89: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58842D8D: pop esi
        __asm _emit 0x5E
        // 0x58842D8E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58842D90: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x9E
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58842D95: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x38
        // 0x58842D98: ret
        __asm _emit 0xC3
    }
}
