// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888AA70 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_5888aa70() {
    __asm {
        // 0x5888AA70: mov eax, dword ptr [0x58a245bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888AA75: push esi
        __asm _emit 0x56
        // 0x5888AA76: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888AA78: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5888AA7B: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5888AA7E: sub ecx, 0x11c
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AA84: push ecx
        __asm _emit 0x51
        // 0x5888AA85: push edx
        __asm _emit 0x52
        // 0x5888AA86: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888AA88: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xB5
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5888AA8D: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5888AA91: mov ecx, 0xe4ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AA96: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5888AA99: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AA9E: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5888AAA1: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5888AAA5: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x5888AAAA: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AAAF: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5888AAB3: pop esi
        __asm _emit 0x5E
        // 0x5888AAB4: ret
        __asm _emit 0xC3
    }
}
