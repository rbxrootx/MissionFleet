// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890B700 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_5890b700() {
    __asm {
        // 0x5890B700: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5890B702: mov edx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B708: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x5890B70B: push esi
        __asm _emit 0x56
        // 0x5890B70C: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5890B710: push edi
        __asm _emit 0x57
        // 0x5890B711: lea edi, [edx + esi]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x32
        // 0x5890B714: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x5890B716: jle 0x5890b71c
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5890B718: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x5890B71A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890B71C: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x5890B71F: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x5890B721: mov dword ptr [eax + 0x80], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B727: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5890B729: je 0x5890b746
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5890B72B: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x24
        // 0x5890B72F: shr cl, 5
        __asm _emit 0xC0
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x5890B732: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5890B735: je 0x5890b746
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5890B737: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x5890B73A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890B73C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890B73E: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5890B740: push eax
        __asm _emit 0x50
        // 0x5890B741: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5890B744: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890B746: pop edi
        __asm _emit 0x5F
        // 0x5890B747: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890B749: pop esi
        __asm _emit 0x5E
        // 0x5890B74A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
