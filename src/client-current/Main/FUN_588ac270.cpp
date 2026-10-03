// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AC270 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_588ac270() {
    __asm {
        // 0x588AC270: push esi
        __asm _emit 0x56
        // 0x588AC271: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588AC273: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AC277: mov ecx, 0xe4ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC27C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588AC27F: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC284: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588AC287: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AC28B: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588AC290: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC295: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AC299: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588AC29C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588AC29E: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588AC2A1: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588AC2A3: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588AC2A6: mov dword ptr [esi + 0x50], 0x44c
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC2AD: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588AC2B0: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC2B5: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588AC2B9: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588AC2BC: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x02
        // 0x588AC2C0: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588AC2C3: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC2C9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC2CB: call 0x5888cc90
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x09
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588AC2D0: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC2D5: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588AC2D8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588AC2DA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC2DC: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588AC2DE: push eax
        __asm _emit 0x50
        // 0x588AC2DF: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x588AC2E2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588AC2E4: pop esi
        __asm _emit 0x5E
        // 0x588AC2E5: ret
        __asm _emit 0xC3
    }
}
