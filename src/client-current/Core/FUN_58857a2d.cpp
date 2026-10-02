// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58857A2D .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58857a2d() {
    __asm {
        // 0x58857A2D: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58857A2F: push ebp
        __asm _emit 0x55
        // 0x58857A30: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58857A32: cmp byte ptr [ebp + 0xc], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58857A36: je 0x58857a48
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58857A38: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58857A3B: call dword ptr [0x58894254]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58857A41: push eax
        __asm _emit 0x50
        // 0x58857A42: call dword ptr [0x588943b4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58857A48: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58857A4B: call 0x58857a9d
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A50: pop ecx
        __asm _emit 0x59
        // 0x58857A51: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58857A54: call dword ptr [0x5889420c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x0C
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58857A5A: int3
        __asm _emit 0xCC
    }
}
