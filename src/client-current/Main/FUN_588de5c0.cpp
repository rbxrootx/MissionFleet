// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DE5C0 .. +0x56 bytes.
// Source symbol alias: FUN_588de5c0.
extern "C" __declspec(naked) void FUN_588de5c0() {
    __asm {
        // 0x588DE5C0: push ebx
        __asm _emit 0x53
        // 0x588DE5C1: push ebp
        __asm _emit 0x55
        // 0x588DE5C2: push esi
        __asm _emit 0x56
        // 0x588DE5C3: push edi
        __asm _emit 0x57
        // 0x588DE5C4: lea edi, [ecx + 0x1390]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE5CA: mov ebp, 8
        __asm _emit 0xBD
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE5CF: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588DE5D1: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x588DE5D3: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x588DE5D5: je 0x588de5e6
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588DE5D7: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588DE5DA: call 0x5873a370
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xBD
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DE5DF: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x588DE5E2: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x588DE5E4: jne 0x588de5d7
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588DE5E6: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x588DE5E8: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x588DE5EA: je 0x588de601
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588DE5EC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588DE5F0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DE5F2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588DE5F4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DE5F6: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x588DE5F9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DE5FB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588DE5FD: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x588DE5FF: jne 0x588de5f0
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x588DE601: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x588DE604: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588DE606: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x588DE609: add edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x10
        // 0x588DE60C: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588DE60F: jne 0x588de5d1
        __asm _emit 0x75
        __asm _emit 0xC0
        // 0x588DE611: pop edi
        __asm _emit 0x5F
        // 0x588DE612: pop esi
        __asm _emit 0x5E
        // 0x588DE613: pop ebp
        __asm _emit 0x5D
        // 0x588DE614: pop ebx
        __asm _emit 0x5B
        // 0x588DE615: ret
        __asm _emit 0xC3
    }
}
