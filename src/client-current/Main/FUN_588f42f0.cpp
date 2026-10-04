// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F42F0 .. +0x3B bytes.
// Source symbol alias: FUN_588f42f0.
extern "C" __declspec(naked) void FUN_588f42f0() {
    __asm {
        // 0x588F42F0: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588F42F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F42F5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F42F7: je 0x588f432a
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x588F42F9: push esi
        __asm _emit 0x56
        // 0x588F42FA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4300: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4306: mov dx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x588F430A: mov esi, 0x3e0
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F430F: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD6
        // 0x588F4312: cmp dx, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x40
        // 0x588F4316: je 0x588f4324
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588F4318: mov ecx, dword ptr [ecx + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F431E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F4320: jne 0x588f4300
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x588F4322: pop esi
        __asm _emit 0x5E
        // 0x588F4323: ret
        __asm _emit 0xC3
        // 0x588F4324: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4329: pop esi
        __asm _emit 0x5E
        // 0x588F432A: ret
        __asm _emit 0xC3
    }
}
