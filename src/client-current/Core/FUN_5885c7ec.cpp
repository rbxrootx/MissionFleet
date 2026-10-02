// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885C7EC .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5885c7ec() {
    __asm {
        // 0x5885C7EC: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885C7EE: push ebp
        __asm _emit 0x55
        // 0x5885C7EF: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885C7F1: push ebx
        __asm _emit 0x53
        // 0x5885C7F2: push esi
        __asm _emit 0x56
        // 0x5885C7F3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885C7F5: push edi
        __asm _emit 0x57
        // 0x5885C7F6: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885C7F9: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x5885C7FB: mov al, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x07
        // 0x5885C7FD: cmp al, byte ptr [esi + 0x588c3f18]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x3F
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C803: je 0x5885c80d
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C805: cmp al, byte ptr [esi + 0x588c3f20]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x3F
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C80B: jne 0x5885c81f
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5885C80D: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885C810: call 0x58860617
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C815: inc esi
        __asm _emit 0x46
        // 0x5885C816: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C818: cmp esi, 5
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x05
        // 0x5885C81B: jne 0x5885c7fb
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x5885C81D: mov bl, 1
        __asm _emit 0xB3
        __asm _emit 0x01
        // 0x5885C81F: pop edi
        __asm _emit 0x5F
        // 0x5885C820: pop esi
        __asm _emit 0x5E
        // 0x5885C821: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885C823: pop ebx
        __asm _emit 0x5B
        // 0x5885C824: pop ebp
        __asm _emit 0x5D
        // 0x5885C825: ret
        __asm _emit 0xC3
    }
}
