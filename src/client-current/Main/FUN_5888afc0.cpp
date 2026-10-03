// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888AFC0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_5888afc0() {
    __asm {
        // 0x5888AFC0: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888AFC5: cmp dword ptr [eax + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5888AFC9: push esi
        __asm _emit 0x56
        // 0x5888AFCA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888AFCC: je 0x5888b000
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x5888AFCE: call 0x5888aac0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888AFD3: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5888AFD6: push 0xfffffee1
        __asm _emit 0x68
        __asm _emit 0xE1
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888AFDB: push ecx
        __asm _emit 0x51
        // 0x5888AFDC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888AFDE: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xB0
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5888AFE3: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5888AFE7: mov eax, 0xe1ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AFEC: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5888AFEF: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AFF4: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5888AFF7: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5888AFFB: or word ptr [esi + 0x24], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x5888B000: pop esi
        __asm _emit 0x5E
        // 0x5888B001: ret
        __asm _emit 0xC3
    }
}
