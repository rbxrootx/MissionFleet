// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5887617C .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_5887617c() {
    __asm {
        // 0x5887617C: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5887617E: push ebp
        __asm _emit 0x55
        // 0x5887617F: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58876181: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58876184: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58876186: je 0x5887619e
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58876188: cmp ecx, 0x588c4e78
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x78
        __asm _emit 0x4E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5887618E: je 0x5887619e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58876190: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58876193: lock xadd dword ptr [ecx + 0xb0], eax
        __asm _emit 0xF0
        __asm _emit 0x0F
        __asm _emit 0xC1
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887619B: dec eax
        __asm _emit 0x48
        // 0x5887619C: pop ebp
        __asm _emit 0x5D
        // 0x5887619D: ret
        __asm _emit 0xC3
        // 0x5887619E: mov eax, 0x7fffffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588761A3: pop ebp
        __asm _emit 0x5D
        // 0x588761A4: ret
        __asm _emit 0xC3
    }
}
