// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 120 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f9b80.

// Ghidra body range 0x588F9B80..0x588F9BF8; 120 mapped bytes.
extern "C" __declspec(naked) void FUN_588f9b80_segment_00() {
    __asm {
        // 0x588F9B80: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9B86: mov dl, byte ptr [eax + 0x24]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F9B89: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x588F9B8C: cmp dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x0F
        // 0x588F9B8F: jne 0x588f9bae
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x588F9B91: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9B96: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F9B9A: mov eax, dword ptr [ecx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9BA0: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F9BA4: mov eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9BAA: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F9BAE: mov eax, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9BB4: mov dl, byte ptr [eax + 0x24]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F9BB7: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x588F9BBA: cmp dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x0F
        // 0x588F9BBD: jne 0x588f9bdc
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x588F9BBF: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9BC4: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F9BC8: mov eax, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9BCE: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F9BD2: mov eax, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9BD8: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F9BDC: mov eax, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9BE2: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9BE7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F9BEB: mov ecx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9BF1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F9BF3: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588F9BF7: ret
        __asm _emit 0xC3
    }
}
