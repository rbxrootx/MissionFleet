// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 115 bytes in 1 exact ranges.
// Source symbol alias: FUN_58828b60.

// Ghidra body range 0x58828B60..0x58828BD3; 115 mapped bytes.
extern "C" __declspec(naked) void FUN_58828b60_segment_00() {
    __asm {
        // 0x58828B60: push esi
        __asm _emit 0x56
        // 0x58828B61: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58828B63: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58828B66: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828B6B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58828B6F: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828B75: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58828B7A: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828B80: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58828B82: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58828B86: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828B8C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58828B90: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x06
        // 0x58828B98: mov eax, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828B9E: jne 0x58828ba7
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58828BA0: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58828BA5: jmp 0x58828bb0
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58828BA7: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828BAC: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58828BB0: cmp word ptr [esi + 0x140], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828BB8: jne 0x58828bd1
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58828BBA: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828BC0: call 0x587b9dd0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x12
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58828BC5: mov eax, 0x1f4
        __asm _emit 0xB8
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828BCA: mov word ptr [esi + 0x140], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828BD1: pop esi
        __asm _emit 0x5E
        // 0x58828BD2: ret
        __asm _emit 0xC3
    }
}
