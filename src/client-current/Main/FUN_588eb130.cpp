// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EB130 .. +0x14C bytes.
// Source symbol alias: FUN_588eb130.
extern "C" __declspec(naked) void FUN_588eb130() {
    __asm {
        // 0x588EB130: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588EB133: push ebx
        __asm _emit 0x53
        // 0x588EB134: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588EB136: mov dword ptr [esp + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588EB13A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EB13C: lea ecx, [ebx + 0x182c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB142: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588EB145: sub edx, dword ptr [ecx]
        __asm _emit 0x2B
        __asm _emit 0x11
        // 0x588EB147: test edx, 0xfffffffc
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EB14D: jne 0x588eb164
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x588EB14F: inc eax
        __asm _emit 0x40
        // 0x588EB150: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x588EB153: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB158: jl 0x588eb142
        __asm _emit 0x7C
        __asm _emit 0xE8
        // 0x588EB15A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB15F: pop ebx
        __asm _emit 0x5B
        // 0x588EB160: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588EB163: ret
        __asm _emit 0xC3
        // 0x588EB164: push ebp
        __asm _emit 0x55
        // 0x588EB165: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588EB168: lea ebx, [ebx + eax*8 + 0x1820]
        __asm _emit 0x8D
        __asm _emit 0x9C
        __asm _emit 0xC3
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB16F: push esi
        __asm _emit 0x56
        // 0x588EB170: push edi
        __asm _emit 0x57
        // 0x588EB171: mov edi, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x0C
        // 0x588EB174: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EB178: cmp edi, dword ptr [ebx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x588EB17B: jbe 0x588eb182
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EB17D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB182: mov esi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x33
        // 0x588EB184: mov ebp, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x588EB187: cmp dword ptr [ebx + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x588EB18A: jbe 0x588eb191
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EB18C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB191: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x588EB193: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EB195: je 0x588eb19b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588EB197: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x588EB199: je 0x588eb1a0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EB19B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB1A0: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x588EB1A2: je 0x588eb272
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB1A8: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EB1AA: jne 0x588eb258
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB1B0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB1B5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EB1B7: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588EB1BA: jb 0x588eb1c1
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EB1BC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB1C1: mov ebp, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x2F
        // 0x588EB1C3: add ebp, 0x60d4
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xD4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB1C9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EB1CB: jne 0x588eb25f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB1D1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB1D6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EB1D8: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588EB1DB: jb 0x588eb1e2
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EB1DD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB1E2: mov ebx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x1F
        // 0x588EB1E4: add ebx, 0x60d0
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xD0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB1EA: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EB1EC: jne 0x588eb266
        __asm _emit 0x75
        __asm _emit 0x78
        // 0x588EB1EE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB1F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EB1F5: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588EB1F8: jb 0x588eb1ff
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EB1FA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB1FF: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588EB201: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EB207: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EB20B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EB20D: jne 0x588eb26a
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x588EB20F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB214: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EB216: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588EB219: jb 0x588eb220
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EB21B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB220: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EB224: movzx ecx, word ptr [eax + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x588EB228: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588EB22A: push ebp
        __asm _emit 0x55
        // 0x588EB22B: push ebx
        __asm _emit 0x53
        // 0x588EB22C: push ecx
        __asm _emit 0x51
        // 0x588EB22D: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588EB231: push edx
        __asm _emit 0x52
        // 0x588EB232: call 0x588eaf30
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EB237: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EB239: jne 0x588eb26e
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x588EB23B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB240: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EB242: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588EB245: jb 0x588eb24c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588EB247: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x1A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EB24C: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EB250: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588EB253: jmp 0x588eb184
        __asm _emit 0xE9
        __asm _emit 0x2C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EB258: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EB25A: jmp 0x588eb1b7
        __asm _emit 0xE9
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EB25F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EB261: jmp 0x588eb1d8
        __asm _emit 0xE9
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EB266: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EB268: jmp 0x588eb1f5
        __asm _emit 0xEB
        __asm _emit 0x8B
        // 0x588EB26A: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EB26C: jmp 0x588eb216
        __asm _emit 0xEB
        __asm _emit 0xA8
        // 0x588EB26E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EB270: jmp 0x588eb242
        __asm _emit 0xEB
        __asm _emit 0xD0
        // 0x588EB272: pop edi
        __asm _emit 0x5F
        // 0x588EB273: pop esi
        __asm _emit 0x5E
        // 0x588EB274: pop ebp
        __asm _emit 0x5D
        // 0x588EB275: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EB277: pop ebx
        __asm _emit 0x5B
        // 0x588EB278: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588EB27B: ret
        __asm _emit 0xC3
    }
}
