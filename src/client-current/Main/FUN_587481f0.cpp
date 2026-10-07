// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 122 bytes in 1 exact ranges.
// Source symbol alias: FUN_587481f0.

// Ghidra body range 0x587481F0..0x5874826A; 122 mapped bytes.
extern "C" __declspec(naked) void FUN_587481f0_segment_00() {
    __asm {
        // 0x587481F0: push ebx
        __asm _emit 0x53
        // 0x587481F1: push ebp
        __asm _emit 0x55
        // 0x587481F2: push esi
        __asm _emit 0x56
        // 0x587481F3: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587481F5: push edi
        __asm _emit 0x57
        // 0x587481F6: mov edi, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x2C
        // 0x587481F9: cmp edi, dword ptr [ebp + 0x30]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x30
        // 0x587481FC: jbe 0x58748203
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587481FE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x4A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748203: mov esi, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x58748206: mov ebx, dword ptr [ebp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x30
        // 0x58748209: cmp dword ptr [ebp + 0x2c], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x2C
        // 0x5874820C: jbe 0x58748213
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5874820E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x4A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748213: mov eax, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x58748216: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58748218: je 0x5874821e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5874821A: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5874821C: je 0x58748223
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5874821E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x4A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748223: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58748225: je 0x58748265
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58748227: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58748229: jne 0x5874825d
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x5874822B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x4A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748230: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58748232: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58748235: jb 0x5874823c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58748237: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x4A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874823C: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5874823E: call 0x58743070
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xAE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58748243: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58748245: jne 0x58748261
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58748247: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x4A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874824C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874824E: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58748251: jb 0x58748258
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58748253: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x4A
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748258: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5874825B: jmp 0x58748206
        __asm _emit 0xEB
        __asm _emit 0xA9
        // 0x5874825D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5874825F: jmp 0x58748232
        __asm _emit 0xEB
        __asm _emit 0xD1
        // 0x58748261: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58748263: jmp 0x5874824e
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x58748265: pop edi
        __asm _emit 0x5F
        // 0x58748266: pop esi
        __asm _emit 0x5E
        // 0x58748267: pop ebp
        __asm _emit 0x5D
        // 0x58748268: pop ebx
        __asm _emit 0x5B
        // 0x58748269: ret
        __asm _emit 0xC3
    }
}
