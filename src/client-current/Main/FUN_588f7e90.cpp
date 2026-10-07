// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 88 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f7e90.

// Ghidra body range 0x588F7E90..0x588F7EE8; 88 mapped bytes.
extern "C" __declspec(naked) void FUN_588f7e90_segment_00() {
    __asm {
        // 0x588F7E90: push esi
        __asm _emit 0x56
        // 0x588F7E91: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F7E93: cmp byte ptr [esi + 0x98], 1
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588F7E9A: jne 0x588f7ee6
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x588F7E9C: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7EA2: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7EA7: mov byte ptr [esi + 0x98], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7EAE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F7EB2: movzx edx, byte ptr [esi + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x6A
        // 0x588F7EB6: movzx eax, byte ptr [esi + 0x6b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x6B
        // 0x588F7EBA: push edx
        __asm _emit 0x52
        // 0x588F7EBB: push eax
        __asm _emit 0x50
        // 0x588F7EBC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F7EBE: call 0x588f7d60
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7EC3: mov ecx, 0xfffffc18
        __asm _emit 0xB9
        __asm _emit 0x18
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7EC8: add word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x588F7ECC: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x588F7ECF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F7ED1: je 0x588f7ed9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588F7ED3: push esi
        __asm _emit 0x56
        // 0x588F7ED4: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7ED9: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x588F7EDC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F7EDE: je 0x588f7ee6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588F7EE0: push esi
        __asm _emit 0x56
        // 0x588F7EE1: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7EE6: pop esi
        __asm _emit 0x5E
        // 0x588F7EE7: ret
        __asm _emit 0xC3
    }
}
