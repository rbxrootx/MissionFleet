// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58846B00 .. +0xCD bytes.
// Source symbol alias: FUN_58846b00.
extern "C" __declspec(naked) void FUN_58846b00() {
    __asm {
        // 0x58846B00: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x58846B03: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58846B08: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58846B0A: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58846B0E: push ebx
        __asm _emit 0x53
        // 0x58846B0F: push esi
        __asm _emit 0x56
        // 0x58846B10: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58846B12: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58846B14: cmp dword ptr [esp + 0x34], esi
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58846B18: je 0x58846ba3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58846B1E: push ebp
        __asm _emit 0x55
        // 0x58846B1F: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58846B23: push edi
        __asm _emit 0x57
        // 0x58846B24: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58846B28: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58846B2C: dec ebp
        __asm _emit 0x4D
        // 0x58846B2D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58846B30: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58846B32: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58846B36: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58846B3A: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58846B3E: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58846B42: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58846B46: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58846B4A: mov al, byte ptr [esi + edi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x58846B4D: cmp al, 0x3b
        __asm _emit 0x3C
        __asm _emit 0x3B
        // 0x58846B4F: je 0x58846b64
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58846B51: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58846B55: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58846B57: je 0x58846b64
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58846B59: inc esi
        __asm _emit 0x46
        // 0x58846B5A: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x58846B5C: mov al, byte ptr [esi + edi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x58846B5F: inc ecx
        __asm _emit 0x41
        // 0x58846B60: cmp al, 0x3b
        __asm _emit 0x3C
        __asm _emit 0x3B
        // 0x58846B62: jne 0x58846b55
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58846B64: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58846B68: push eax
        __asm _emit 0x50
        // 0x58846B69: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58846B6B: call 0x58842dc0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58846B70: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58846B72: je 0x58846b92
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58846B74: movsx ecx, word ptr [ebx + 0xf8]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x8B
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58846B7B: cmp ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58846B7F: je 0x58846b92
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58846B81: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58846B85: inc eax
        __asm _emit 0x40
        // 0x58846B86: inc esi
        __asm _emit 0x46
        // 0x58846B87: cmp eax, 0x1000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58846B8C: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58846B90: jl 0x58846b30
        __asm _emit 0x7C
        __asm _emit 0x9E
        // 0x58846B92: movsx edx, word ptr [ebx + 0xf8]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x93
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58846B99: pop edi
        __asm _emit 0x5F
        // 0x58846B9A: pop ebp
        __asm _emit 0x5D
        // 0x58846B9B: cmp edx, dword ptr [esp + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58846B9F: je 0x58846ba8
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58846BA1: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58846BA3: call 0x58842ef0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xC3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58846BA8: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x58846BAB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58846BAD: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58846BB0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58846BB2: push 0xee49
        __asm _emit 0x68
        __asm _emit 0x49
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58846BB7: push ebx
        __asm _emit 0x53
        // 0x58846BB8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58846BBA: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58846BBE: pop esi
        __asm _emit 0x5E
        // 0x58846BBF: pop ebx
        __asm _emit 0x5B
        // 0x58846BC0: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58846BC2: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58846BC7: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58846BCA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
