// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885C7B2 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5885c7b2() {
    __asm {
        // 0x5885C7B2: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885C7B4: push ebp
        __asm _emit 0x55
        // 0x5885C7B5: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885C7B7: push ebx
        __asm _emit 0x53
        // 0x5885C7B8: push esi
        __asm _emit 0x56
        // 0x5885C7B9: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885C7BB: push edi
        __asm _emit 0x57
        // 0x5885C7BC: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885C7BF: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x5885C7C1: mov al, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x07
        // 0x5885C7C3: cmp al, byte ptr [esi + 0x588c3f10]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x3F
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C7C9: je 0x5885c7d3
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C7CB: cmp al, byte ptr [esi + 0x588c3f14]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x3F
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C7D1: jne 0x5885c7e5
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5885C7D3: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885C7D6: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C7DB: inc esi
        __asm _emit 0x46
        // 0x5885C7DC: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C7DE: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x5885C7E1: jne 0x5885c7c1
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x5885C7E3: mov bl, 1
        __asm _emit 0xB3
        __asm _emit 0x01
        // 0x5885C7E5: pop edi
        __asm _emit 0x5F
        // 0x5885C7E6: pop esi
        __asm _emit 0x5E
        // 0x5885C7E7: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5885C7E9: pop ebx
        __asm _emit 0x5B
        // 0x5885C7EA: pop ebp
        __asm _emit 0x5D
        // 0x5885C7EB: ret
        __asm _emit 0xC3
    }
}
