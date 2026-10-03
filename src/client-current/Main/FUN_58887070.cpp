// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58887070 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58887070() {
    __asm {
        // 0x58887070: push esi
        __asm _emit 0x56
        // 0x58887071: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58887073: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58887077: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888707C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5888707F: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887084: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58887087: jne 0x5888713b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888708D: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887092: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58887096: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5888709A: mov edx, 0xe4ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888709F: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588870A2: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588870A7: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588870AA: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588870AE: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588870B1: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588870B4: mov dword ptr [esi + 0x54], 0xffffff38
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588870BB: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588870C0: cmp dword ptr [eax + 0x170], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x588870C7: jle 0x588870e0
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588870C9: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588870D0: je 0x588870e0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588870D2: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588870D8: mov ecx, dword ptr [edx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588870DE: jmp 0x588870e2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588870E0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588870E2: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588870E7: push eax
        __asm _emit 0x50
        // 0x588870E8: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588870ED: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588870F2: cmp dword ptr [eax + 0x170], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x588870F9: jle 0x58887112
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588870FB: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887102: je 0x58887112
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58887104: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888710A: mov ecx, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887110: jmp 0x58887114
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58887112: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58887114: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58887116: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58887119: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888711B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5888711D: mov dword ptr [esi + 0xe4], 0
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
        // 0x58887127: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888712C: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x5888712F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58887131: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58887133: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58887135: push eax
        __asm _emit 0x50
        // 0x58887136: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58887139: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5888713B: pop esi
        __asm _emit 0x5E
        // 0x5888713C: ret
        __asm _emit 0xC3
    }
}
