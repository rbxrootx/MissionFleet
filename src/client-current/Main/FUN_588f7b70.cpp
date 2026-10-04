// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F7B70 .. +0x85 bytes.
// Source symbol alias: FUN_588f7b70.
extern "C" __declspec(naked) void FUN_588f7b70() {
    __asm {
        // 0x588F7B70: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F7B74: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F7B78: push ebx
        __asm _emit 0x53
        // 0x588F7B79: push esi
        __asm _emit 0x56
        // 0x588F7B7A: push edi
        __asm _emit 0x57
        // 0x588F7B7B: push eax
        __asm _emit 0x50
        // 0x588F7B7C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F7B80: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F7B82: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F7B86: push ecx
        __asm _emit 0x51
        // 0x588F7B87: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F7B8B: push edx
        __asm _emit 0x52
        // 0x588F7B8C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F7B90: push eax
        __asm _emit 0x50
        // 0x588F7B91: push ecx
        __asm _emit 0x51
        // 0x588F7B92: push edx
        __asm _emit 0x52
        // 0x588F7B93: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588F7B95: call 0x588fd970
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x5D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7B9A: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7B9F: lea esi, [edi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x588F7BA2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F7BA4: push esi
        __asm _emit 0x56
        // 0x588F7BA5: mov dword ptr [edi], 0x589a2094
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7BAB: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F7BB0: mov edx, 0x589a0998
        __asm _emit 0xBA
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7BB5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F7BB8: mov ebx, 0x80
        __asm _emit 0xBB
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7BBD: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588F7BBF: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x588F7BC1: lea ecx, [ebx + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588F7BC7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F7BC9: je 0x588f7be5
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588F7BCB: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x588F7BCE: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588F7BD0: je 0x588f7be5
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588F7BD2: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588F7BD4: inc eax
        __asm _emit 0x40
        // 0x588F7BD5: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588F7BD8: jne 0x588f7bc1
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588F7BDA: dec eax
        __asm _emit 0x48
        // 0x588F7BDB: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x588F7BDD: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588F7BDF: pop edi
        __asm _emit 0x5F
        // 0x588F7BE0: pop esi
        __asm _emit 0x5E
        // 0x588F7BE1: pop ebx
        __asm _emit 0x5B
        // 0x588F7BE2: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x588F7BE5: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588F7BE7: jne 0x588f7bea
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588F7BE9: dec eax
        __asm _emit 0x48
        // 0x588F7BEA: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7BED: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588F7BEF: pop edi
        __asm _emit 0x5F
        // 0x588F7BF0: pop esi
        __asm _emit 0x5E
        // 0x588F7BF1: pop ebx
        __asm _emit 0x5B
        // 0x588F7BF2: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
