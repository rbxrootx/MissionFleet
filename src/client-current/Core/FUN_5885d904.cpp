// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D904 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5885d904() {
    __asm {
        // 0x5885D904: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D906: push ebp
        __asm _emit 0x55
        // 0x5885D907: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D909: push ebx
        __asm _emit 0x53
        // 0x5885D90A: push esi
        __asm _emit 0x56
        // 0x5885D90B: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885D90E: push dword ptr [esi]
        __asm _emit 0xFF
        __asm _emit 0x36
        // 0x5885D910: call 0x5885a0c8
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xC7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D915: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5885D917: pop ecx
        __asm _emit 0x59
        // 0x5885D918: cmp ebx, -1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5885D91B: je 0x5885d935
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5885D91D: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885D920: inc dword ptr [esi + 4]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885D923: movzx ecx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCB
        // 0x5885D926: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5885D928: push ecx
        __asm _emit 0x51
        // 0x5885D929: call 0x5885761b
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x9C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D92E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885D931: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885D933: jne 0x5885d90e
        __asm _emit 0x75
        __asm _emit 0xD9
        // 0x5885D935: pop esi
        __asm _emit 0x5E
        // 0x5885D936: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5885D938: pop ebx
        __asm _emit 0x5B
        // 0x5885D939: pop ebp
        __asm _emit 0x5D
        // 0x5885D93A: ret
        __asm _emit 0xC3
    }
}
