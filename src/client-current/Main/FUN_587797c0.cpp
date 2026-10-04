// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587797C0 .. +0x72 bytes.
// Source symbol alias: FUN_587797c0.
extern "C" __declspec(naked) void FUN_587797c0() {
    __asm {
        // 0x587797C0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587797C4: push ebp
        __asm _emit 0x55
        // 0x587797C5: push esi
        __asm _emit 0x56
        // 0x587797C6: push edi
        __asm _emit 0x57
        // 0x587797C7: push eax
        __asm _emit 0x50
        // 0x587797C8: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587797CA: call 0x58778d00
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587797CF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587797D1: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587797D7: mov esi, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587797DD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587797DF: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587797E1: jle 0x5877982a
        __asm _emit 0x7E
        __asm _emit 0x47
        // 0x587797E3: movzx ebp, word ptr [ecx + 0xa2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xA9
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587797EA: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587797EE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587797F0: cmp word ptr [eax + 0xa2], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587797F7: jne 0x58779820
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587797F9: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x587797FC: jne 0x5877980e
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587797FE: mov cl, byte ptr [eax + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779804: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x58779807: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x5877980A: je 0x5877982c
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x5877980C: jmp 0x58779820
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5877980E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58779810: jne 0x58779820
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58779812: mov cl, byte ptr [eax + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779818: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x5877981B: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x5877981E: jne 0x5877982c
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58779820: inc edx
        __asm _emit 0x42
        // 0x58779821: add eax, 0xac
        __asm _emit 0x05
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779826: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58779828: jl 0x587797f0
        __asm _emit 0x7C
        __asm _emit 0xC6
        // 0x5877982A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877982C: pop edi
        __asm _emit 0x5F
        // 0x5877982D: pop esi
        __asm _emit 0x5E
        // 0x5877982E: pop ebp
        __asm _emit 0x5D
        // 0x5877982F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
