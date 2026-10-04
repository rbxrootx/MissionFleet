// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901A40 .. +0x3E bytes.
// Source symbol alias: FUN_58901a40.
extern "C" __declspec(naked) void FUN_58901a40() {
    __asm {
        // 0x58901A40: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58901A44: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58901A48: push esi
        __asm _emit 0x56
        // 0x58901A49: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58901A4D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58901A4F: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x58901A51: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58901A54: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58901A56: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58901A58: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58901A5A: push edi
        __asm _emit 0x57
        // 0x58901A5B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58901A5D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58901A5F: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58901A61: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x58901A63: je 0x58901a7b
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58901A65: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58901A67: mov edi, dword ptr [ecx - 8]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0xF8
        // 0x58901A6A: sub ecx, 8
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58901A6D: mov dword ptr [edx + ecx], edi
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0x0A
        // 0x58901A70: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x58901A73: mov dword ptr [edx + ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x04
        // 0x58901A77: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x58901A79: jne 0x58901a67
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x58901A7B: pop edi
        __asm _emit 0x5F
        // 0x58901A7C: pop esi
        __asm _emit 0x5E
        // 0x58901A7D: ret
        __asm _emit 0xC3
    }
}
