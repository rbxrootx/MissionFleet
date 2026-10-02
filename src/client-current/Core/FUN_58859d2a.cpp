// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859D2A .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_58859d2a() {
    __asm {
        // 0x58859D2A: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58859D2C: push 0x588ed160
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xD1
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x58859D31: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x8A
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58859D36: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58859D39: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x58859D3B: call 0x58859d02
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859D40: pop ecx
        __asm _emit 0x59
        // 0x58859D41: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x58859D45: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58859D48: push dword ptr [esi + 4]
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x58859D4B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58859D4D: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x58859D4F: call 0x58859f0e
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859D54: pop ecx
        __asm _emit 0x59
        // 0x58859D55: pop ecx
        __asm _emit 0x59
        // 0x58859D56: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58859D58: je 0x58859d8c
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x58859D5A: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58859D5D: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x58859D60: jne 0x58859d70
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58859D62: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58859D64: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58859D66: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58859D69: nop
        __asm _emit 0x90
        // 0x58859D6A: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x58859D6C: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58859D6E: je 0x58859d8c
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58859D70: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58859D72: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x58859D74: call 0x58859fcb
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859D79: pop ecx
        __asm _emit 0x59
        // 0x58859D7A: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58859D7D: je 0x58859d86
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58859D7F: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58859D82: inc dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58859D84: jmp 0x58859d8c
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58859D86: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58859D89: or dword ptr [eax], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x58859D8C: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859D93: call 0x58859daa
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859D98: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x58859D9B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859DA2: pop ecx
        __asm _emit 0x59
        // 0x58859DA3: pop edi
        __asm _emit 0x5F
        // 0x58859DA4: pop esi
        __asm _emit 0x5E
        // 0x58859DA5: pop ebx
        __asm _emit 0x5B
        // 0x58859DA6: leave
        __asm _emit 0xC9
        // 0x58859DA7: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
