// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58786B40 .. +0xBB bytes.
// Source symbol alias: FUN_58786b40.
extern "C" __declspec(naked) void FUN_58786b40() {
    __asm {
        // 0x58786B40: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x58786B43: push ebx
        __asm _emit 0x53
        // 0x58786B44: push ebp
        __asm _emit 0x55
        // 0x58786B45: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58786B49: movzx eax, word ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58786B4D: push esi
        __asm _emit 0x56
        // 0x58786B4E: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58786B50: push edi
        __asm _emit 0x57
        // 0x58786B51: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58786B55: push ecx
        __asm _emit 0x51
        // 0x58786B56: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x58786B59: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58786B5D: push edx
        __asm _emit 0x52
        // 0x58786B5E: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58786B62: call 0x58786750
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58786B67: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58786B6A: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58786B6E: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58786B71: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58786B73: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58786B75: je 0x58786b7b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58786B77: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58786B79: je 0x58786b80
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58786B7B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x60
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58786B80: cmp dword ptr [esp + 0x14], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58786B84: je 0x58786bbb
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58786B86: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58786B88: jne 0x58786bb7
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x58786B8A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x60
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58786B8F: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58786B93: cmp eax, dword ptr [esi + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58786B96: jne 0x58786b9d
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58786B98: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x60
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58786B9D: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58786BA1: mov edi, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x10
        // 0x58786BA4: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58786BA6: mov ecx, 0xf2
        __asm _emit 0xB9
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786BAB: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58786BAD: pop edi
        __asm _emit 0x5F
        // 0x58786BAE: pop esi
        __asm _emit 0x5E
        // 0x58786BAF: pop ebp
        __asm _emit 0x5D
        // 0x58786BB0: pop ebx
        __asm _emit 0x5B
        // 0x58786BB1: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58786BB4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58786BB7: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58786BB9: jmp 0x58786b8f
        __asm _emit 0xEB
        __asm _emit 0xD4
        // 0x58786BBB: push 0x3c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786BC0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x60
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58786BC5: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58786BC7: mov ecx, 0xf2
        __asm _emit 0xB9
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786BCC: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58786BCE: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58786BD0: movzx ecx, word ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58786BD4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58786BD7: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58786BDB: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58786BDF: push edx
        __asm _emit 0x52
        // 0x58786BE0: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58786BE4: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58786BE8: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x58786BEB: push eax
        __asm _emit 0x50
        // 0x58786BEC: call 0x58786a50
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58786BF1: pop edi
        __asm _emit 0x5F
        // 0x58786BF2: pop esi
        __asm _emit 0x5E
        // 0x58786BF3: pop ebp
        __asm _emit 0x5D
        // 0x58786BF4: pop ebx
        __asm _emit 0x5B
        // 0x58786BF5: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58786BF8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
