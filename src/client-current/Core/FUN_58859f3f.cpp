// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859F3F .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58859f3f() {
    __asm {
        // 0x58859F3F: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58859F41: push ebp
        __asm _emit 0x55
        // 0x58859F42: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58859F44: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58859F47: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58859F49: and al, 3
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x58859F4B: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x58859F4D: jne 0x58859f58
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58859F4F: test cl, 0xc0
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0xC0
        // 0x58859F52: je 0x58859f58
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58859F54: dec al
        __asm _emit 0xFE
        __asm _emit 0xC8
        // 0x58859F56: pop ebp
        __asm _emit 0x5D
        // 0x58859F57: ret
        __asm _emit 0xC3
        // 0x58859F58: shr ecx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0B
        // 0x58859F5B: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x01
        // 0x58859F5E: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x58859F60: pop ebp
        __asm _emit 0x5D
        // 0x58859F61: ret
        __asm _emit 0xC3
    }
}
