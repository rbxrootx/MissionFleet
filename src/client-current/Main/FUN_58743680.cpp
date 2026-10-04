// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58743680 .. +0x29 bytes.
// Source symbol alias: FUN_58743680.
extern "C" __declspec(naked) void FUN_58743680() {
    __asm {
        // 0x58743680: push esi
        __asm _emit 0x56
        // 0x58743681: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58743683: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58743685: push edi
        __asm _emit 0x57
        // 0x58743686: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874368A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874368C: je 0x58743692
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5874368E: cmp eax, dword ptr [edi]
        __asm _emit 0x3B
        __asm _emit 0x07
        // 0x58743690: je 0x58743697
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58743692: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x95
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58743697: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5874369A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874369C: cmp eax, dword ptr [edi + 4]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5874369F: pop edi
        __asm _emit 0x5F
        // 0x587436A0: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x587436A3: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x587436A5: pop esi
        __asm _emit 0x5E
        // 0x587436A6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
