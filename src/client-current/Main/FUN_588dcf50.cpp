// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DCF50 .. +0x96 bytes.
// Source symbol alias: FUN_588dcf50.
extern "C" __declspec(naked) void FUN_588dcf50() {
    __asm {
        // 0x588DCF50: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCF55: push ebx
        __asm _emit 0x53
        // 0x588DCF56: push esi
        __asm _emit 0x56
        // 0x588DCF57: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588DCF59: cmp word ptr [eax + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x588DCF61: push edi
        __asm _emit 0x57
        // 0x588DCF62: jne 0x588dcf83
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x588DCF64: cmp dword ptr [ecx + 0x63b8], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0xB8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCF6A: jne 0x588dcf93
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x588DCF6C: cmp dword ptr [ecx + 0x63bc], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0xBC
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCF72: je 0x588dcfbd
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x588DCF74: mov eax, dword ptr [ecx + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCF7A: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DCF7F: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588DCF81: jmp 0x588dcf9e
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x588DCF83: cmp dword ptr [ecx + 0x63b8], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0xB8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCF89: jne 0x588dcf93
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588DCF8B: cmp dword ptr [ecx + 0x63bc], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0xBC
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCF91: je 0x588dcfbd
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588DCF93: mov eax, dword ptr [ecx + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCF99: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DCF9E: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DCFA2: mov edx, dword ptr [ecx + 0x63c4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCFA8: lea ebx, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x3A
        // 0x588DCFAB: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588DCFAD: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588DCFAF: jle 0x588dcfb5
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588DCFB1: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x588DCFB3: jmp 0x588dcfbd
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588DCFB5: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588DCFB7: jle 0x588dcfbd
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588DCFB9: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588DCFBB: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588DCFBD: add dword ptr [ecx + 0x63c4], esi
        __asm _emit 0x01
        __asm _emit 0xB1
        __asm _emit 0xC4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCFC3: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCFC9: cmp dword ptr [edx + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x588DCFCC: jne 0x588dcfde
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588DCFCE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588DCFD0: jne 0x588dcfde
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588DCFD2: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCFD8: push esi
        __asm _emit 0x56
        // 0x588DCFD9: call 0x587ecca0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xFC
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588DCFDE: pop edi
        __asm _emit 0x5F
        // 0x588DCFDF: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588DCFE1: pop esi
        __asm _emit 0x5E
        // 0x588DCFE2: pop ebx
        __asm _emit 0x5B
        // 0x588DCFE3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
