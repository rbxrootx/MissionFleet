// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58873101 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58873101() {
    __asm {
        // 0x58873101: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58873103: push ebp
        __asm _emit 0x55
        // 0x58873104: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58873106: imul ecx, dword ptr [0x588c4c70], 0xc
        __asm _emit 0x6B
        __asm _emit 0x0D
        __asm _emit 0x70
        __asm _emit 0x4C
        __asm _emit 0x8C
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x5887310D: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58873110: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58873112: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58873114: je 0x58873125
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58873116: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x58873119: cmp dword ptr [eax + 4], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5887311C: je 0x58873127
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5887311E: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x58873121: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58873123: jne 0x58873119
        __asm _emit 0x75
        __asm _emit 0xF4
        // 0x58873125: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58873127: pop ebp
        __asm _emit 0x5D
        // 0x58873128: ret
        __asm _emit 0xC3
    }
}
