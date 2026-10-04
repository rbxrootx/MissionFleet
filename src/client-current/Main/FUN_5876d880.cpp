// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876D880 .. +0x2D bytes.
// Source symbol alias: FUN_5876d880.
extern "C" __declspec(naked) void FUN_5876d880() {
    __asm {
        // 0x5876D880: push esi
        __asm _emit 0x56
        // 0x5876D881: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876D883: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876D887: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D88C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5876D88F: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D894: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5876D897: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876D89B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876D89D: call 0x5876d800
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876D8A2: mov eax, 0xfffb
        __asm _emit 0xB8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D8A7: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876D8AB: pop esi
        __asm _emit 0x5E
        // 0x5876D8AC: ret
        __asm _emit 0xC3
    }
}
