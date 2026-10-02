// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588612B5 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_588612b5() {
    __asm {
        // 0x588612B5: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588612B7: push ebp
        __asm _emit 0x55
        // 0x588612B8: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588612BA: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588612BD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588612BF: je 0x588612d3
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588612C1: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588612C4: je 0x588612cf
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588612C6: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588612C9: je 0x588612cf
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588612CB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588612CD: pop ebp
        __asm _emit 0x5D
        // 0x588612CE: ret
        __asm _emit 0xC3
        // 0x588612CF: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588612D1: jmp 0x588612d5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588612D3: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588612D5: pop eax
        __asm _emit 0x58
        // 0x588612D6: pop ebp
        __asm _emit 0x5D
        // 0x588612D7: ret
        __asm _emit 0xC3
    }
}
