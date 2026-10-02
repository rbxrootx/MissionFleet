// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859F0E .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_58859f0e() {
    __asm {
        // 0x58859F0E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58859F10: push ebp
        __asm _emit 0x55
        // 0x58859F11: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58859F13: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58859F16: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58859F18: je 0x58859f37
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58859F1A: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58859F1D: nop
        __asm _emit 0x90
        // 0x58859F1E: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58859F20: shr eax, 0xd
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0D
        // 0x58859F23: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58859F25: je 0x58859f37
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58859F27: push ecx
        __asm _emit 0x51
        // 0x58859F28: call 0x58859f3f
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859F2D: pop ecx
        __asm _emit 0x59
        // 0x58859F2E: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58859F30: jne 0x58859f3b
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58859F32: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58859F35: inc dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58859F37: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58859F39: pop ebp
        __asm _emit 0x5D
        // 0x58859F3A: ret
        __asm _emit 0xC3
        // 0x58859F3B: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58859F3D: pop ebp
        __asm _emit 0x5D
        // 0x58859F3E: ret
        __asm _emit 0xC3
    }
}
