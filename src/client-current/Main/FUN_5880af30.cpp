// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5880AF30 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_5880af30() {
    __asm {
        // 0x5880AF30: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5880AF34: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5880AF36: je 0x5880af88
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x5880AF38: push esi
        __asm _emit 0x56
        // 0x5880AF39: mov esi, dword ptr [ecx + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x4C
        // 0x5880AF3C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5880AF3E: je 0x5880af87
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x5880AF40: push ebx
        __asm _emit 0x53
        // 0x5880AF41: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880AF45: push ebp
        __asm _emit 0x55
        // 0x5880AF46: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880AF4A: push edi
        __asm _emit 0x57
        // 0x5880AF4B: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880AF4F: nop
        __asm _emit 0x90
        // 0x5880AF50: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x5880AF55: jge 0x5880af71
        __asm _emit 0x7D
        __asm _emit 0x1A
        // 0x5880AF57: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5880AF59: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x5880AF5C: push edi
        __asm _emit 0x57
        // 0x5880AF5D: push ebx
        __asm _emit 0x53
        // 0x5880AF5E: push ebp
        __asm _emit 0x55
        // 0x5880AF5F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5880AF61: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880AF63: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x48
        // 0x5880AF66: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5880AF68: jne 0x5880af50
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5880AF6A: pop edi
        __asm _emit 0x5F
        // 0x5880AF6B: pop ebp
        __asm _emit 0x5D
        // 0x5880AF6C: pop ebx
        __asm _emit 0x5B
        // 0x5880AF6D: pop esi
        __asm _emit 0x5E
        // 0x5880AF6E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5880AF71: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5880AF73: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x5880AF76: push edi
        __asm _emit 0x57
        // 0x5880AF77: push ebx
        __asm _emit 0x53
        // 0x5880AF78: push ebp
        __asm _emit 0x55
        // 0x5880AF79: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5880AF7B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880AF7D: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x48
        // 0x5880AF80: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5880AF82: jne 0x5880af71
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x5880AF84: pop edi
        __asm _emit 0x5F
        // 0x5880AF85: pop ebp
        __asm _emit 0x5D
        // 0x5880AF86: pop ebx
        __asm _emit 0x5B
        // 0x5880AF87: pop esi
        __asm _emit 0x5E
        // 0x5880AF88: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
