// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FEAB0 .. +0x34 bytes.
// Source symbol alias: FUN_588feab0.
extern "C" __declspec(naked) void FUN_588feab0() {
    __asm {
        // 0x588FEAB0: push ebx
        __asm _emit 0x53
        // 0x588FEAB1: push esi
        __asm _emit 0x56
        // 0x588FEAB2: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588FEAB4: push edi
        __asm _emit 0x57
        // 0x588FEAB5: mov dword ptr [eax], 0x589a235c
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x5C
        __asm _emit 0x23
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FEABB: lea edx, [eax + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588FEABE: mov edi, 0x64
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FEAC3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FEAC5: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588FEAC7: mov byte ptr [edx - 8], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0xF8
        // 0x588FEACA: mov dword ptr [edx - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0xFC
        // 0x588FEACD: mov dword ptr [edx], esi
        __asm _emit 0x89
        __asm _emit 0x32
        // 0x588FEACF: mov dword ptr [edx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x588FEAD2: mov dword ptr [edx + 8], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x588FEAD5: mov dword ptr [edx + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x588FEAD8: add edx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x18
        // 0x588FEADB: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588FEADE: jne 0x588feac5
        __asm _emit 0x75
        __asm _emit 0xE5
        // 0x588FEAE0: pop edi
        __asm _emit 0x5F
        // 0x588FEAE1: pop esi
        __asm _emit 0x5E
        // 0x588FEAE2: pop ebx
        __asm _emit 0x5B
        // 0x588FEAE3: ret
        __asm _emit 0xC3
    }
}
