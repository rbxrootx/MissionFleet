// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D93B .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_5885d93b() {
    __asm {
        // 0x5885D93B: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D93D: push ebp
        __asm _emit 0x55
        // 0x5885D93E: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D940: push ebx
        __asm _emit 0x53
        // 0x5885D941: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5885D944: call 0x58860697
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D949: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5885D94B: cmp ebx, -1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5885D94E: je 0x5885d965
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5885D950: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885D953: movzx ecx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCB
        // 0x5885D956: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5885D958: push ecx
        __asm _emit 0x51
        // 0x5885D959: call 0x5885761b
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x9C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D95E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885D961: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885D963: jne 0x5885d941
        __asm _emit 0x75
        __asm _emit 0xDC
        // 0x5885D965: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5885D967: pop ebx
        __asm _emit 0x5B
        // 0x5885D968: pop ebp
        __asm _emit 0x5D
        // 0x5885D969: ret
        __asm _emit 0xC3
    }
}
