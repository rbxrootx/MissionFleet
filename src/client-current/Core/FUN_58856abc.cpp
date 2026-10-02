// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58856ABC .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58856abc() {
    __asm {
        // 0x58856ABC: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58856ABE: push ebp
        __asm _emit 0x55
        // 0x58856ABF: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58856AC1: test byte ptr [ebp + 8], 4
        __asm _emit 0xF6
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x04
        // 0x58856AC5: jne 0x58856af9
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58856AC7: test byte ptr [ebp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x58856ACB: je 0x58856af5
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58856ACD: test byte ptr [ebp + 8], 2
        __asm _emit 0xF6
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x58856AD1: je 0x58856ae4
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58856AD3: cmp dword ptr [ebp + 0x10], 0x80000000
        __asm _emit 0x81
        __asm _emit 0x7D
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58856ADA: ja 0x58856af9
        __asm _emit 0x77
        __asm _emit 0x1D
        // 0x58856ADC: jb 0x58856af5
        __asm _emit 0x72
        __asm _emit 0x17
        // 0x58856ADE: cmp dword ptr [ebp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58856AE2: jmp 0x58856af3
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58856AE4: cmp dword ptr [ebp + 0x10], 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0x7D
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58856AEB: ja 0x58856af9
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x58856AED: jb 0x58856af5
        __asm _emit 0x72
        __asm _emit 0x06
        // 0x58856AEF: cmp dword ptr [ebp + 0xc], -1
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x0C
        __asm _emit 0xFF
        // 0x58856AF3: ja 0x58856af9
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x58856AF5: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58856AF7: pop ebp
        __asm _emit 0x5D
        // 0x58856AF8: ret
        __asm _emit 0xC3
        // 0x58856AF9: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58856AFB: pop ebp
        __asm _emit 0x5D
        // 0x58856AFC: ret
        __asm _emit 0xC3
    }
}
