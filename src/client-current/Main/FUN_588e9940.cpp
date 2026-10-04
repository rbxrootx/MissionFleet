// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E9940 .. +0x329 bytes.
// Source symbol alias: FUN_588e9940.
extern "C" __declspec(naked) void FUN_588e9940() {
    __asm {
        // 0x588E9940: push ebp
        __asm _emit 0x55
        // 0x588E9941: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588E9943: push esi
        __asm _emit 0x56
        // 0x588E9944: lea ecx, [ebp + 0xbc4]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E994A: lea eax, [ebp + 0xac0]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9950: mov edx, 0x20
        __asm _emit 0xBA
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9955: push edi
        __asm _emit 0x57
        // 0x588E9956: jmp 0x588e9960
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588E9958: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E995F: nop
        __asm _emit 0x90
        // 0x588E9960: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588E9962: mov dword ptr [eax + 0x80], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9968: mov dword ptr [ecx - 4], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0xFC
        // 0x588E996B: mov edi, 0xaa
        __asm _emit 0xBF
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9970: mov word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x588E9973: mov dword ptr [ecx], esi
        __asm _emit 0x89
        __asm _emit 0x31
        // 0x588E9975: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x588E9977: mov word ptr [eax + 2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x02
        // 0x588E997B: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x588E997E: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588E9981: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588E9984: jne 0x588e9960
        __asm _emit 0x75
        __asm _emit 0xDA
        // 0x588E9986: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E998A: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x588E998C: je 0x588e9c37
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9992: push ebx
        __asm _emit 0x53
        // 0x588E9993: lea ebx, [ebp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x48
        // 0x588E9996: mov eax, 0xaaaaaaaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588E999B: mov ecx, 0x2e
        __asm _emit 0xB9
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E99A0: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x588E99A2: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588E99A4: xor dword ptr [ebp + 0x4c], eax
        __asm _emit 0x31
        __asm _emit 0x45
        __asm _emit 0x4C
        // 0x588E99A7: xor dword ptr [ebp + 0x50], eax
        __asm _emit 0x31
        __asm _emit 0x45
        __asm _emit 0x50
        // 0x588E99AA: mov eax, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x6C
        // 0x588E99AD: push edx
        __asm _emit 0x52
        // 0x588E99AE: push eax
        __asm _emit 0x50
        // 0x588E99AF: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588E99B1: call 0x588e95c0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E99B6: mov eax, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x6C
        // 0x588E99B9: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E99BF: push eax
        __asm _emit 0x50
        // 0x588E99C0: call 0x58778b80
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xF1
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E99C5: mov dword ptr [ebp + 0xcc4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E99CB: mov eax, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x70
        // 0x588E99CE: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E99D4: push eax
        __asm _emit 0x50
        // 0x588E99D5: call 0x58778be0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xF2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E99DA: mov dword ptr [ebp + 0xcc8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E99E0: mov eax, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x74
        // 0x588E99E3: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E99E9: push eax
        __asm _emit 0x50
        // 0x588E99EA: call 0x58778ca0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xF2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E99EF: mov dword ptr [ebp + 0xccc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E99F5: mov eax, dword ptr [ebp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x78
        // 0x588E99F8: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E99FE: push eax
        __asm _emit 0x50
        // 0x588E99FF: call 0x58778c40
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xF2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9A04: mov dword ptr [ebp + 0xcd0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9A0A: mov eax, dword ptr [ebp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x7C
        // 0x588E9A0D: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9A13: push eax
        __asm _emit 0x50
        // 0x588E9A14: call 0x58778c40
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xF2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9A19: mov dword ptr [ebp + 0xcd4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9A1F: mov eax, dword ptr [ebp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9A25: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9A2B: push eax
        __asm _emit 0x50
        // 0x588E9A2C: call 0x58778c40
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xF2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9A31: mov dword ptr [ebp + 0xcd8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9A37: mov eax, dword ptr [ebp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9A3D: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9A43: push eax
        __asm _emit 0x50
        // 0x588E9A44: call 0x58778c40
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xF1
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9A49: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588E9A4D: mov dword ptr [ebp + 0xcdc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9A53: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588E9A55: je 0x588e9c18
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9A5B: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588E9A5D: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x588E9A5F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588E9A61: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588E9A64: mov edx, 0x18
        __asm _emit 0xBA
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9A69: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588E9A6B: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588E9A6E: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588E9A70: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588E9A72: push ecx
        __asm _emit 0x51
        // 0x588E9A73: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x7A
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588E9A78: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588E9A7A: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x588E9A7C: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588E9A7F: lea ecx, [ecx + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x49
        // 0x588E9A82: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588E9A84: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588E9A86: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588E9A88: push ecx
        __asm _emit 0x51
        // 0x588E9A89: push esi
        __asm _emit 0x56
        // 0x588E9A8A: push eax
        __asm _emit 0x50
        // 0x588E9A8B: mov dword ptr [ebp + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9A91: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E9A96: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588E9A99: test dword ptr [ebx], 0x3e
        __asm _emit 0xF7
        __asm _emit 0x03
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9A9F: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9AA7: jbe 0x588e9bfb
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x4E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9AAD: add esi, 0xe
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0E
        // 0x588E9AB0: mov eax, dword ptr [esi - 0xe]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF2
        // 0x588E9AB3: movzx edi, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x3E
        // 0x588E9AB6: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x588E9AB9: sub ecx, 5
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x588E9ABC: je 0x588e9af1
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x588E9ABE: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588E9AC1: je 0x588e9ae3
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x588E9AC3: sub ecx, 7
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x07
        // 0x588E9AC6: je 0x588e9ad5
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588E9AC8: mov dword ptr [ebp + edi*4 + 0xb40], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xBD
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9AD3: jmp 0x588e9b04
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x588E9AD5: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9ADB: push eax
        __asm _emit 0x50
        // 0x588E9ADC: call 0x58778f30
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xF4
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9AE1: jmp 0x588e9afd
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x588E9AE3: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9AE9: push eax
        __asm _emit 0x50
        // 0x588E9AEA: call 0x58778d60
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xF2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9AEF: jmp 0x588e9afd
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588E9AF1: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9AF7: push eax
        __asm _emit 0x50
        // 0x588E9AF8: call 0x58778d00
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xF2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9AFD: mov dword ptr [ebp + edi*4 + 0xb40], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xBD
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9B04: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E9B06: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9B0B: mov dword ptr [ebp + edi*8 + 0xbc0], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0xFD
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9B12: mov dword ptr [ebp + edi*8 + 0xbc4], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0xFD
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9B19: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E9B1B: mov word ptr [ebp + edi*4 + 0xac0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xBD
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9B23: mov word ptr [ebp + edi*4 + 0xac2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0xBD
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9B2B: movzx edi, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x3E
        // 0x588E9B2E: cmp dword ptr [ebp + edi*4 + 0xb40], edx
        __asm _emit 0x39
        __asm _emit 0x94
        __asm _emit 0xBD
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9B35: je 0x588e9be0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9B3B: mov eax, dword ptr [esi - 0xa]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF6
        // 0x588E9B3E: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x588E9B41: sub ecx, 0xb
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x0B
        // 0x588E9B44: je 0x588e9b62
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588E9B46: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588E9B49: je 0x588e9b54
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588E9B4B: mov dword ptr [ebp + edi*8 + 0xbc0], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0xFD
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9B52: jmp 0x588e9b75
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x588E9B54: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9B5A: push eax
        __asm _emit 0x50
        // 0x588E9B5B: call 0x58778e20
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xF2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9B60: jmp 0x588e9b6e
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588E9B62: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9B68: push eax
        __asm _emit 0x50
        // 0x588E9B69: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xF2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9B6E: mov dword ptr [ebp + edi*8 + 0xbc0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xFD
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9B75: mov dl, byte ptr [esi - 2]
        __asm _emit 0x8A
        __asm _emit 0x56
        __asm _emit 0xFE
        // 0x588E9B78: movzx ecx, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x0E
        // 0x588E9B7B: xor dl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xF2
        __asm _emit 0xAA
        // 0x588E9B7E: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x588E9B82: mov word ptr [ebp + ecx*4 + 0xac0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9B8A: mov eax, dword ptr [esi - 6]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xFA
        // 0x588E9B8D: movzx edi, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x3E
        // 0x588E9B90: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x588E9B93: sub ecx, 0xb
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x0B
        // 0x588E9B96: je 0x588e9bb8
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x588E9B98: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588E9B9B: je 0x588e9baa
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588E9B9D: mov dword ptr [ebp + edi*8 + 0xbc4], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xFD
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9BA8: jmp 0x588e9bcb
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x588E9BAA: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9BB0: push eax
        __asm _emit 0x50
        // 0x588E9BB1: call 0x58778e20
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xF2
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9BB6: jmp 0x588e9bc4
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588E9BB8: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9BBE: push eax
        __asm _emit 0x50
        // 0x588E9BBF: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xF1
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9BC4: mov dword ptr [ebp + edi*8 + 0xbc4], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xFD
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9BCB: mov dl, byte ptr [esi - 1]
        __asm _emit 0x8A
        __asm _emit 0x56
        __asm _emit 0xFF
        // 0x588E9BCE: movzx ecx, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x0E
        // 0x588E9BD1: xor dl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xF2
        __asm _emit 0xAA
        // 0x588E9BD4: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x588E9BD8: mov word ptr [ebp + ecx*4 + 0xac2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9BE0: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x588E9BE2: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E9BE6: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x588E9BE8: inc eax
        __asm _emit 0x40
        // 0x588E9BE9: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588E9BEC: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x18
        // 0x588E9BEF: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E9BF3: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588E9BF5: jb 0x588e9ab0
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xB5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9BFB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E9BFD: pop ebx
        __asm _emit 0x5B
        // 0x588E9BFE: pop edi
        __asm _emit 0x5F
        // 0x588E9BFF: pop esi
        __asm _emit 0x5E
        // 0x588E9C00: cmp dword ptr [esp + 0x10], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E9C04: je 0x588e9c0d
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588E9C06: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588E9C08: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9C0D: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588E9C0F: call 0x588e6980
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9C14: pop ebp
        __asm _emit 0x5D
        // 0x588E9C15: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E9C18: mov eax, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C1E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E9C20: je 0x588e9bfb
        __asm _emit 0x74
        __asm _emit 0xD9
        // 0x588E9C22: push eax
        __asm _emit 0x50
        // 0x588E9C23: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E9C28: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588E9C2B: mov dword ptr [ebp + 0x118], 0
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C35: jmp 0x588e9bfb
        __asm _emit 0xEB
        __asm _emit 0xC4
        // 0x588E9C37: mov dword ptr [ebp + 0xcc0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C3D: mov dword ptr [ebp + 0xcc4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C43: mov dword ptr [ebp + 0xcc8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C49: mov dword ptr [ebp + 0xccc], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C4F: mov dword ptr [ebp + 0xcd0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C55: mov dword ptr [ebp + 0xcd4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C5B: mov dword ptr [ebp + 0xcd8], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C61: mov dword ptr [ebp + 0xcdc], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9C67: jmp 0x588e9bfe
        __asm _emit 0xEB
        __asm _emit 0x95
    }
}
