// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859C70 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_58859c70() {
    __asm {
        // 0x58859C70: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58859C72: push esi
        __asm _emit 0x56
        // 0x58859C73: call 0x5885a030
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859C78: call 0x588701d2
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58859C7D: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58859C7F: mov eax, dword ptr [0x58969618]
        __asm _emit 0xA1
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58859C84: push dword ptr [esi + eax]
        __asm _emit 0xFF
        __asm _emit 0x34
        __asm _emit 0x06
        // 0x58859C87: call 0x5886ce81
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58859C8C: mov eax, dword ptr [0x58969618]
        __asm _emit 0xA1
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58859C91: pop ecx
        __asm _emit 0x59
        // 0x58859C92: mov eax, dword ptr [esi + eax]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x06
        // 0x58859C95: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58859C98: push eax
        __asm _emit 0x50
        // 0x58859C99: call dword ptr [0x58894218]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58859C9F: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58859CA2: cmp esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0C
        // 0x58859CA5: jne 0x58859c7f
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x58859CA7: pop esi
        __asm _emit 0x5E
        // 0x58859CA8: push dword ptr [0x58969618]
        __asm _emit 0xFF
        __asm _emit 0x35
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58859CAE: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58859CB3: and dword ptr [0x58969618], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58859CBA: pop ecx
        __asm _emit 0x59
        // 0x58859CBB: ret
        __asm _emit 0xC3
    }
}
