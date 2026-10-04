// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DD2A0 .. +0x6C bytes.
// Source symbol alias: FUN_588dd2a0.
extern "C" __declspec(naked) void FUN_588dd2a0() {
    __asm {
        // 0x588DD2A0: push ecx
        __asm _emit 0x51
        // 0x588DD2A1: push esi
        __asm _emit 0x56
        // 0x588DD2A2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DD2A4: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD2AA: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588DD2AE: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588DD2B2: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588DD2B6: je 0x588dd2be
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588DD2B8: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x588DD2BC: jne 0x588dd307
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x588DD2BE: cmp dword ptr [esi + 0x340], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD2C5: jne 0x588dd307
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x588DD2C7: mov eax, dword ptr [esi + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD2CD: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DD2D2: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DD2D6: fild dword ptr [esp + 4]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DD2DA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DD2DC: jge 0x588dd2e4
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588DD2DE: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DD2E4: fmul qword ptr [0x589a1090]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588DD2EA: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xF9
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588DD2EF: mov ecx, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD2F5: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DD2FB: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588DD2FD: jge 0x588dd307
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x588DD2FF: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD304: pop esi
        __asm _emit 0x5E
        // 0x588DD305: pop ecx
        __asm _emit 0x59
        // 0x588DD306: ret
        __asm _emit 0xC3
        // 0x588DD307: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DD309: pop esi
        __asm _emit 0x5E
        // 0x588DD30A: pop ecx
        __asm _emit 0x59
        // 0x588DD30B: ret
        __asm _emit 0xC3
    }
}
