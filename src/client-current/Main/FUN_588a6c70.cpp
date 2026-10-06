// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A6C70 .. +0x56 bytes.
// Source symbol alias: FUN_588a6c70.
extern "C" __declspec(naked) void FUN_588a6c70() {
    __asm {
        // 0x588A6C70: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6C75: push esi
        __asm _emit 0x56
        // 0x588A6C76: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A6C78: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588A6C7B: cmp dword ptr [ecx + 0x6074], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x74
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6C82: je 0x588a6cab
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588A6C84: mov ecx, dword ptr [esi + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6C8A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6C8C: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588A6C8F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6C91: mov ecx, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6C97: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6C99: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A6C9C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6C9E: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6CA4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6CA6: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A6CA9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6CAB: mov ecx, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6CB1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6CB3: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588A6CB6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6CB8: mov ecx, dword ptr [esi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6CBE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6CC0: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588A6CC3: pop esi
        __asm _emit 0x5E
        // 0x588A6CC4: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
