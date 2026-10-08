// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 93 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f7e30.

// Ghidra body range 0x588F7E30..0x588F7E8D; 93 mapped bytes.
extern "C" __declspec(naked) void FUN_588f7e30_segment_00() {
    __asm {
        // 0x588F7E30: push esi
        __asm _emit 0x56
        // 0x588F7E31: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F7E33: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F7E39: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F7E3B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F7E3E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F7E40: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F7E42: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7E48: mov byte ptr [esi + 0x98], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588F7E4F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588F7E54: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F7E59: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588F7E5C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F7E5F: push ecx
        __asm _emit 0x51
        // 0x588F7E60: push edx
        __asm _emit 0x52
        // 0x588F7E61: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F7E63: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7E68: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x588F7E6B: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7E70: add word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x588F7E74: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F7E76: je 0x588f7e7e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588F7E78: push esi
        __asm _emit 0x56
        // 0x588F7E79: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7E7E: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x588F7E81: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F7E83: je 0x588f7e8b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588F7E85: push esi
        __asm _emit 0x56
        // 0x588F7E86: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7E8B: pop esi
        __asm _emit 0x5E
        // 0x588F7E8C: ret
        __asm _emit 0xC3
    }
}
