// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A6D60 .. +0x8D bytes.
// Source symbol alias: FUN_588a6d60.
extern "C" __declspec(naked) void FUN_588a6d60() {
    __asm {
        // 0x588A6D60: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6D65: push ebx
        __asm _emit 0x53
        // 0x588A6D66: push esi
        __asm _emit 0x56
        // 0x588A6D67: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A6D69: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588A6D6C: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6D71: cmp byte ptr [ecx + 0x354], bl
        __asm _emit 0x38
        __asm _emit 0x99
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6D77: je 0x588a6d9b
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588A6D79: cmp word ptr [esi + 0x9c], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x588A6D81: jne 0x588a6d92
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588A6D83: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6D89: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6D90: jmp 0x588a6d9b
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588A6D92: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6D98: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588A6D9B: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6DA1: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6DA6: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A6DAB: cmp word ptr [esi + 0x9c], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x588A6DB3: je 0x588a6dbf
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588A6DB5: mov eax, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6DBB: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588A6DBF: mov eax, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6DC5: mov dword ptr [esi + 0x98], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6DCF: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588A6DD4: mov ecx, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6DDA: mov byte ptr [ecx + 0x100], bl
        __asm _emit 0x88
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6DE0: mov esi, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6DE6: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x588A6DEA: pop esi
        __asm _emit 0x5E
        // 0x588A6DEB: pop ebx
        __asm _emit 0x5B
        // 0x588A6DEC: ret
        __asm _emit 0xC3
    }
}
