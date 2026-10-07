// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5885ECC0 .. +0x4F bytes.
// Source symbol alias: FUN_5885ecc0.
extern "C" __declspec(naked) void FUN_5885ecc0() {
    __asm {
        // 0x5885ECC0: push ecx
        __asm _emit 0x51
        // 0x5885ECC1: push esi
        __asm _emit 0x56
        // 0x5885ECC2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885ECC4: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885ECCA: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885ECD0: push eax
        __asm _emit 0x50
        // 0x5885ECD1: call 0x587e5f80
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x72
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885ECD6: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885ECDC: mov dl, byte ptr [esi + ecx*4 + 0x5d0]
        __asm _emit 0x8A
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885ECE3: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885ECE5: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885ECE7: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5885ECEB: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5885ECEE: push ecx
        __asm _emit 0x51
        // 0x5885ECEF: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885ECF5: or dl, 0x20
        __asm _emit 0x80
        __asm _emit 0xCA
        __asm _emit 0x20
        // 0x5885ECF8: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x5885ECFA: mov byte ptr [esp + 0x10], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885ECFE: mov byte ptr [esp + 0x11], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5885ED03: mov byte ptr [esp + 0x12], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5885ED07: call 0x587e5a70
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x6D
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885ED0C: pop esi
        __asm _emit 0x5E
        // 0x5885ED0D: pop ecx
        __asm _emit 0x59
        // 0x5885ED0E: ret
        __asm _emit 0xC3
    }
}
