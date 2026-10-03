// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589071A0 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_589071a0() {
    __asm {
        // 0x589071A0: push edi
        __asm _emit 0x57
        // 0x589071A1: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x589071A3: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x589071A7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x589071A9: je 0x5890728d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589071AF: mov edx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x60
        // 0x589071B2: mov eax, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x64
        // 0x589071B5: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x589071B7: je 0x5890726f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589071BD: jle 0x58907218
        __asm _emit 0x7E
        __asm _emit 0x59
        // 0x589071BF: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x589071C1: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x589071C3: cmp ecx, 0x1e240
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x40
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x589071C9: jle 0x589071d7
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x589071CB: mov eax, 0x1e240
        __asm _emit 0xB8
        __asm _emit 0x40
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x589071D0: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x589071D2: jmp 0x58907265
        __asm _emit 0xE9
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589071D7: cmp ecx, 0x3039
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x39
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589071DD: jle 0x589071e8
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x589071DF: mov eax, 0x3039
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589071E4: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x589071E6: jmp 0x58907265
        __asm _emit 0xEB
        __asm _emit 0x7D
        // 0x589071E8: cmp ecx, 0x4d2
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xD2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589071EE: jle 0x589071f9
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x589071F0: mov eax, 0x4d2
        __asm _emit 0xB8
        __asm _emit 0xD2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589071F5: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x589071F7: jmp 0x58907265
        __asm _emit 0xEB
        __asm _emit 0x6C
        // 0x589071F9: cmp ecx, 0x7b
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x7B
        // 0x589071FC: jle 0x58907207
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x589071FE: mov eax, 0x7b
        __asm _emit 0xB8
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907203: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58907205: jmp 0x58907265
        __asm _emit 0xEB
        __asm _emit 0x5E
        // 0x58907207: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58907209: cmp ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0C
        // 0x5890720C: setle al
        __asm _emit 0x0F
        __asm _emit 0x9E
        __asm _emit 0xC0
        // 0x5890720F: dec eax
        __asm _emit 0x48
        // 0x58907210: and eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0B
        // 0x58907213: inc eax
        __asm _emit 0x40
        // 0x58907214: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58907216: jmp 0x58907265
        __asm _emit 0xEB
        __asm _emit 0x4D
        // 0x58907218: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5890721A: jge 0x58907268
        __asm _emit 0x7D
        __asm _emit 0x4C
        // 0x5890721C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5890721E: cmp eax, 0x1e240
        __asm _emit 0x3D
        __asm _emit 0x40
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58907223: jle 0x5890722c
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x58907225: mov eax, 0x1e240
        __asm _emit 0xB8
        __asm _emit 0x40
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5890722A: jmp 0x58907263
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x5890722C: cmp eax, 0x3039
        __asm _emit 0x3D
        __asm _emit 0x39
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907231: jle 0x5890723a
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x58907233: mov eax, 0x3039
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907238: jmp 0x58907263
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x5890723A: cmp eax, 0x4d2
        __asm _emit 0x3D
        __asm _emit 0xD2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890723F: jle 0x58907248
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x58907241: mov eax, 0x4d2
        __asm _emit 0xB8
        __asm _emit 0xD2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907246: jmp 0x58907263
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58907248: cmp eax, 0x7b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x7B
        // 0x5890724B: jle 0x58907254
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x5890724D: mov eax, 0x7b
        __asm _emit 0xB8
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907252: jmp 0x58907263
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58907254: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58907256: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x58907259: setle cl
        __asm _emit 0x0F
        __asm _emit 0x9E
        __asm _emit 0xC1
        // 0x5890725C: dec ecx
        __asm _emit 0x49
        // 0x5890725D: and ecx, 0xb
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x0B
        // 0x58907260: inc ecx
        __asm _emit 0x41
        // 0x58907261: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58907263: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58907265: mov dword ptr [edi + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x60
        // 0x58907268: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5890726A: call 0x58907040
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890726F: mov ecx, dword ptr [edi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x3C
        // 0x58907272: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58907274: je 0x5890728d
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58907276: push esi
        __asm _emit 0x56
        // 0x58907277: mov esi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x38
        // 0x5890727A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890727C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5890727F: cmp esi, dword ptr [edi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x3C
        // 0x58907282: je 0x5890728f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58907284: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58907286: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58907288: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5890728A: jne 0x58907277
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5890728C: pop esi
        __asm _emit 0x5E
        // 0x5890728D: pop edi
        __asm _emit 0x5F
        // 0x5890728E: ret
        __asm _emit 0xC3
        // 0x5890728F: pop esi
        __asm _emit 0x5E
        // 0x58907290: pop edi
        __asm _emit 0x5F
        // 0x58907291: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
