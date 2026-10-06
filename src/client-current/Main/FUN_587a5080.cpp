// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A5080 .. +0x30 bytes.
// Source symbol alias: FUN_587a5080.
extern "C" __declspec(naked) void FUN_587a5080() {
    __asm {
        // 0x587A5080: push esi
        __asm _emit 0x56
        // 0x587A5081: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A5083: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A5085: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A5087: jne 0x587a5094
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587A5089: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x7B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A508E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A5090: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A5092: je 0x587a5098
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A5094: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587A5096: jmp 0x587a509a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A5098: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A509A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A509D: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587A50A0: jb 0x587a50ac
        __asm _emit 0x72
        __asm _emit 0x0A
        // 0x587A50A2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x7B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A50A7: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A50AA: pop esi
        __asm _emit 0x5E
        // 0x587A50AB: ret
        __asm _emit 0xC3
        // 0x587A50AC: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587A50AE: pop esi
        __asm _emit 0x5E
        // 0x587A50AF: ret
        __asm _emit 0xC3
    }
}
