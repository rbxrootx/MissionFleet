// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860B6C .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_58860b6c() {
    __asm {
        // 0x58860B6C: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860B6E: push ebp
        __asm _emit 0x55
        // 0x58860B6F: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58860B71: push ebx
        __asm _emit 0x53
        // 0x58860B72: push esi
        __asm _emit 0x56
        // 0x58860B73: push edi
        __asm _emit 0x57
        // 0x58860B74: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58860B76: call 0x58863f1f
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860B7B: mov bl, byte ptr [ebp + 8]
        __asm _emit 0x8A
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x58860B7E: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x58860B81: cmp word ptr [eax + edx*2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58860B86: jge 0x58860bba
        __asm _emit 0x7D
        __asm _emit 0x32
        // 0x58860B88: lea esi, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x58860B8B: push dword ptr [esi]
        __asm _emit 0xFF
        __asm _emit 0x36
        // 0x58860B8D: call 0x5885a0c8
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x95
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860B92: pop ecx
        __asm _emit 0x59
        // 0x58860B93: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58860B96: je 0x58860b9b
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58860B98: inc dword ptr [esi + 4]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58860B9B: movzx edx, byte ptr [edi + 0x25]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0x25
        // 0x58860B9F: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58860BA1: je 0x58860bba
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58860BA3: push eax
        __asm _emit 0x50
        // 0x58860BA4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860BA6: call 0x588613b9
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860BAB: movsx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC3
        // 0x58860BAE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860BB0: push eax
        __asm _emit 0x50
        // 0x58860BB1: call 0x588613b9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860BB6: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860BB8: jmp 0x58860bbc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58860BBA: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58860BBC: pop edi
        __asm _emit 0x5F
        // 0x58860BBD: pop esi
        __asm _emit 0x5E
        // 0x58860BBE: pop ebx
        __asm _emit 0x5B
        // 0x58860BBF: pop ebp
        __asm _emit 0x5D
        // 0x58860BC0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
