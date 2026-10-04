// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58731B60 .. +0x6F bytes.
// Source symbol alias: FUN_58731b60.
extern "C" __declspec(naked) void FUN_58731b60() {
    __asm {
        // 0x58731B60: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58731B64: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58731B66: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58731B68: je 0x58731b72
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58731B6A: cmp edx, 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58731B70: jbe 0x58731b77
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58731B72: mov eax, 0x80070057
        __asm _emit 0xB8
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x80
        // 0x58731B77: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58731B79: jl 0x58731bcc
        __asm _emit 0x7C
        __asm _emit 0x51
        // 0x58731B7B: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58731B7F: push ebx
        __asm _emit 0x53
        // 0x58731B80: push esi
        __asm _emit 0x56
        // 0x58731B81: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58731B83: push edi
        __asm _emit 0x57
        // 0x58731B84: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58731B86: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58731B88: je 0x58731bc0
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58731B8A: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58731B8E: mov ebx, 0x7ffffffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58731B93: sub ebx, edx
        __asm _emit 0x2B
        __asm _emit 0xDA
        // 0x58731B95: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58731B97: lea edx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x33
        // 0x58731B9A: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58731B9C: je 0x58731bbc
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58731B9E: mov dl, byte ptr [edi + ecx]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x0F
        // 0x58731BA1: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58731BA3: je 0x58731bbc
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58731BA5: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x58731BA7: inc ecx
        __asm _emit 0x41
        // 0x58731BA8: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58731BAB: jne 0x58731b97
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58731BAD: pop edi
        __asm _emit 0x5F
        // 0x58731BAE: dec ecx
        __asm _emit 0x49
        // 0x58731BAF: pop esi
        __asm _emit 0x5E
        // 0x58731BB0: mov eax, 0x8007007a
        __asm _emit 0xB8
        __asm _emit 0x7A
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x80
        // 0x58731BB5: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58731BB8: pop ebx
        __asm _emit 0x5B
        // 0x58731BB9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58731BBC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58731BBE: jne 0x58731bc6
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58731BC0: dec ecx
        __asm _emit 0x49
        // 0x58731BC1: mov eax, 0x8007007a
        __asm _emit 0xB8
        __asm _emit 0x7A
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x80
        // 0x58731BC6: pop edi
        __asm _emit 0x5F
        // 0x58731BC7: pop esi
        __asm _emit 0x5E
        // 0x58731BC8: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58731BCB: pop ebx
        __asm _emit 0x5B
        // 0x58731BCC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
