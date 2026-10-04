// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C08E0 .. +0x278 bytes.
// Source symbol alias: FUN_588c08e0.
extern "C" __declspec(naked) void FUN_588c08e0() {
    __asm {
        // 0x588C08E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588C08E2: push 0x589889d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C08E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C08ED: push eax
        __asm _emit 0x50
        // 0x588C08EE: push ecx
        __asm _emit 0x51
        // 0x588C08EF: push ebx
        __asm _emit 0x53
        // 0x588C08F0: push ebp
        __asm _emit 0x55
        // 0x588C08F1: push esi
        __asm _emit 0x56
        // 0x588C08F2: push edi
        __asm _emit 0x57
        // 0x588C08F3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588C08F8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588C08FA: push eax
        __asm _emit 0x50
        // 0x588C08FB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588C08FF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0905: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C0907: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588C090B: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588C090F: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588C0913: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C0917: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588C091B: push ebp
        __asm _emit 0x55
        // 0x588C091C: push eax
        __asm _emit 0x50
        // 0x588C091D: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C0921: push ecx
        __asm _emit 0x51
        // 0x588C0922: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588C0926: push edx
        __asm _emit 0x52
        // 0x588C0927: push eax
        __asm _emit 0x50
        // 0x588C0928: push ecx
        __asm _emit 0x51
        // 0x588C0929: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588C092B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C0930: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C0936: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588C093B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588C093D: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588C093F: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588C0943: mov dword ptr [esi], 0x589a0a80
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x80
        __asm _emit 0x0A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588C0949: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xC3
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C094E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C0951: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588C0955: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588C095A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588C095C: je 0x588c098d
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588C095E: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0964: push ebx
        __asm _emit 0x53
        // 0x588C0965: push ebx
        __asm _emit 0x53
        // 0x588C0966: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588C096B: push 0x154
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0970: push 0x1ae
        __asm _emit 0x68
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0975: push 0x145
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C097A: push 0x12d
        __asm _emit 0x68
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C097F: push edx
        __asm _emit 0x52
        // 0x588C0980: push ebx
        __asm _emit 0x53
        // 0x588C0981: push esi
        __asm _emit 0x56
        // 0x588C0982: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C0984: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x28
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C0989: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588C098B: jmp 0x588c098f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C098D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588C098F: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x588C0992: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C0995: inc ebp
        __asm _emit 0x45
        // 0x588C0996: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588C099A: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x26
        // 0x588C099E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588C09A0: je 0x588c09a8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C09A2: push edi
        __asm _emit 0x57
        // 0x588C09A3: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C09A8: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C09AB: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588C09AD: je 0x588c09b5
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C09AF: push edi
        __asm _emit 0x57
        // 0x588C09B0: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C09B5: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C09BA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xC2
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C09BF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C09C2: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588C09C6: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588C09CB: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588C09CD: je 0x588c0a12
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x588C09CF: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C09D5: cmp dword ptr [ecx + 0x160], 0xcc
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C09DF: jle 0x588c09f7
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C09E1: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C09E7: je 0x588c09f7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C09E9: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C09EF: add edx, 0x3300
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C09F5: jmp 0x588c09f9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C09F7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C09F9: push 0x159
        __asm _emit 0x68
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C09FE: push 0x12d
        __asm _emit 0x68
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0A03: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588C0A05: push edx
        __asm _emit 0x52
        // 0x588C0A06: push esi
        __asm _emit 0x56
        // 0x588C0A07: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C0A09: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C0A0E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588C0A10: jmp 0x588c0a14
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C0A12: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588C0A14: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x588C0A17: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588C0A1A: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588C0A1E: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x26
        // 0x588C0A22: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588C0A24: je 0x588c0a2c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C0A26: push edi
        __asm _emit 0x57
        // 0x588C0A27: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C0A2C: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588C0A2F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588C0A31: je 0x588c0a39
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C0A33: push edi
        __asm _emit 0x57
        // 0x588C0A34: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C0A39: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0A3E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0xC2
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C0A43: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C0A46: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588C0A4A: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588C0A4F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588C0A51: je 0x588c0a9f
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x588C0A53: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0A59: cmp dword ptr [ecx + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x588C0A60: jle 0x588c0a78
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C0A62: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0A68: je 0x588c0a78
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C0A6A: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0A70: add edx, 0x940
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0A76: jmp 0x588c0a7a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C0A78: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C0A7A: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0A80: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588C0A82: push 0x18e
        __asm _emit 0x68
        __asm _emit 0x8E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0A87: push 0x1b6
        __asm _emit 0x68
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0A8C: push edx
        __asm _emit 0x52
        // 0x588C0A8D: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0A93: push esi
        __asm _emit 0x56
        // 0x588C0A94: push ecx
        __asm _emit 0x51
        // 0x588C0A95: push edx
        __asm _emit 0x52
        // 0x588C0A96: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C0A98: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xD3
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C0A9D: jmp 0x588c0aa1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C0A9F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C0AA1: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0AA6: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588C0AAA: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588C0AAD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xC1
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C0AB2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C0AB5: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588C0AB9: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588C0ABE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588C0AC0: je 0x588c0b0e
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x588C0AC2: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0AC8: cmp dword ptr [ecx + 0x160], 0x24
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        // 0x588C0ACF: jle 0x588c0ae7
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C0AD1: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0AD7: je 0x588c0ae7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C0AD9: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0ADF: add edx, 0x900
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0AE5: jmp 0x588c0ae9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C0AE7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C0AE9: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0AEF: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588C0AF1: push 0x18e
        __asm _emit 0x68
        __asm _emit 0x8E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0AF6: push 0x1e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0AFB: push edx
        __asm _emit 0x52
        // 0x588C0AFC: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C0B02: push esi
        __asm _emit 0x56
        // 0x588C0B03: push ecx
        __asm _emit 0x51
        // 0x588C0B04: push edx
        __asm _emit 0x52
        // 0x588C0B05: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C0B07: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xD2
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C0B0C: jmp 0x588c0b10
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C0B0E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C0B10: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588C0B13: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588C0B17: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0B1C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588C0B1F: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0B24: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588C0B27: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x588C0B2A: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588C0B2E: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0B33: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588C0B37: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0B3C: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588C0B40: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588C0B42: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588C0B46: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C0B4D: pop ecx
        __asm _emit 0x59
        // 0x588C0B4E: pop edi
        __asm _emit 0x5F
        // 0x588C0B4F: pop esi
        __asm _emit 0x5E
        // 0x588C0B50: pop ebp
        __asm _emit 0x5D
        // 0x588C0B51: pop ebx
        __asm _emit 0x5B
        // 0x588C0B52: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588C0B55: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
