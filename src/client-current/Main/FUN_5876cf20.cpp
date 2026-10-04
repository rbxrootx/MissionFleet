// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876CF20 .. +0x41 bytes.
// Source symbol alias: FUN_5876cf20.
extern "C" __declspec(naked) void FUN_5876cf20() {
    __asm {
        // 0x5876CF20: push ebx
        __asm _emit 0x53
        // 0x5876CF21: push esi
        __asm _emit 0x56
        // 0x5876CF22: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5876CF24: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5876CF26: push ebx
        __asm _emit 0x53
        // 0x5876CF27: push ebx
        __asm _emit 0x53
        // 0x5876CF28: push ebx
        __asm _emit 0x53
        // 0x5876CF29: push ebx
        __asm _emit 0x53
        // 0x5876CF2A: push ebx
        __asm _emit 0x53
        // 0x5876CF2B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876CF2D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x62
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876CF32: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876CF38: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5876CF3D: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x5876CF40: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x5876CF43: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x5876CF46: mov byte ptr [esi + 0x60], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x5876CF49: mov dword ptr [esi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x5876CF4C: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x5876CF4F: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CF56: mov dword ptr [esi], 0x58995b58
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x58
        __asm _emit 0x5B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876CF5C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5876CF5E: pop esi
        __asm _emit 0x5E
        // 0x5876CF5F: pop ebx
        __asm _emit 0x5B
        // 0x5876CF60: ret
        __asm _emit 0xC3
    }
}
