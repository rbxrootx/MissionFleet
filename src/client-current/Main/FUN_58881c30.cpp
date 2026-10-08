// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 96 bytes in 1 exact ranges.
// Source symbol alias: FUN_58881c30.

// Ghidra body range 0x58881C30..0x58881C90; 96 mapped bytes.
extern "C" __declspec(naked) void FUN_58881c30_segment_00() {
    __asm {
        // 0x58881C30: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58881C34: push esi
        __asm _emit 0x56
        // 0x58881C35: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58881C37: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58881C3B: push eax
        __asm _emit 0x50
        // 0x58881C3C: push ecx
        __asm _emit 0x51
        // 0x58881C3D: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881C43: call 0x58908750
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x6B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58881C48: mov eax, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881C4E: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881C54: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58881C56: je 0x58881c5d
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58881C58: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58881C5B: jmp 0x58881c60
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58881C5D: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58881C60: mov cx, word ptr [esi + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58881C64: dec eax
        __asm _emit 0x48
        // 0x58881C65: mov dx, ax
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58881C68: inc dx
        __asm _emit 0x66
        __asm _emit 0x42
        // 0x58881C6A: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58881C6D: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x58881C70: inc cx
        __asm _emit 0x66
        __asm _emit 0x41
        // 0x58881C72: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x58881C75: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58881C7B: push eax
        __asm _emit 0x50
        // 0x58881C7C: push edx
        __asm _emit 0x52
        // 0x58881C7D: call 0x58779890
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x7C
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58881C82: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58881C84: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58881C87: call 0x58880df0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58881C8C: pop esi
        __asm _emit 0x5E
        // 0x58881C8D: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
