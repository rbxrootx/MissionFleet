// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A03A0 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_587a03a0() {
    __asm {
        // 0x587A03A0: push ecx
        __asm _emit 0x51
        // 0x587A03A1: cmp byte ptr [ecx + 4], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A03A5: je 0x587a0451
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A03AB: push ebx
        __asm _emit 0x53
        // 0x587A03AC: push ebp
        __asm _emit 0x55
        // 0x587A03AD: push esi
        __asm _emit 0x56
        // 0x587A03AE: push edi
        __asm _emit 0x57
        // 0x587A03AF: lea esi, [ecx + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x58
        // 0x587A03B2: mov dword ptr [esp + 0x10], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A03BA: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A03BF: nop
        __asm _emit 0x90
        // 0x587A03C0: mov eax, dword ptr [esi - 0x40]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xC0
        // 0x587A03C3: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A03C9: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587A03CC: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x587A03CF: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587A03D2: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x587A03D4: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x587A03D6: jl 0x587a042b
        __asm _emit 0x7C
        __asm _emit 0x53
        // 0x587A03D8: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x587A03DB: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x587A03DD: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x587A03DF: jge 0x587a042b
        __asm _emit 0x7D
        __asm _emit 0x4A
        // 0x587A03E1: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x587A03E4: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587A03E7: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x587A03EA: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x587A03EC: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x587A03EE: jl 0x587a042b
        __asm _emit 0x7C
        __asm _emit 0x3B
        // 0x587A03F0: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x587A03F3: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587A03F5: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587A03F7: jge 0x587a042b
        __asm _emit 0x7D
        __asm _emit 0x32
        // 0x587A03F9: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587A03FB: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587A03FF: test bl, dl
        __asm _emit 0x84
        __asm _emit 0xD3
        // 0x587A0401: jne 0x587a0440
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x587A0403: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A0408: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A040E: push eax
        __asm _emit 0x50
        // 0x587A040F: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x75
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A0414: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A041A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587A041C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A041F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A0421: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587A0423: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A0425: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587A0429: jmp 0x587a0440
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x587A042B: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587A042D: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587A0431: test bl, dl
        __asm _emit 0x84
        __asm _emit 0xD3
        // 0x587A0433: je 0x587a0440
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587A0435: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A0437: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A043C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587A0440: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587A0443: sub dword ptr [esp + 0x10], ebx
        __asm _emit 0x29
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A0447: jne 0x587a03c0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A044D: pop edi
        __asm _emit 0x5F
        // 0x587A044E: pop esi
        __asm _emit 0x5E
        // 0x587A044F: pop ebp
        __asm _emit 0x5D
        // 0x587A0450: pop ebx
        __asm _emit 0x5B
        // 0x587A0451: pop ecx
        __asm _emit 0x59
        // 0x587A0452: ret
        __asm _emit 0xC3
    }
}
