// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58779780 .. +0x3E bytes.
// Source symbol alias: FUN_58779780.
extern "C" __declspec(naked) void FUN_58779780() {
    __asm {
        // 0x58779780: push ebx
        __asm _emit 0x53
        // 0x58779781: push esi
        __asm _emit 0x56
        // 0x58779782: mov esi, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x64
        // 0x58779785: mov ecx, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x58
        // 0x58779788: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877978A: push edi
        __asm _emit 0x57
        // 0x5877978B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877978D: jle 0x587797a8
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x5877978F: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58779793: lea edx, [esi + 6]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x06
        // 0x58779796: movzx ebx, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x1A
        // 0x58779799: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x5877979B: je 0x587797b0
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5877979D: inc eax
        __asm _emit 0x40
        // 0x5877979E: add edx, 0x9c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587797A4: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587797A6: jl 0x58779796
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x587797A8: pop edi
        __asm _emit 0x5F
        // 0x587797A9: pop esi
        __asm _emit 0x5E
        // 0x587797AA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587797AC: pop ebx
        __asm _emit 0x5B
        // 0x587797AD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587797B0: imul eax, eax, 0x9c
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587797B6: pop edi
        __asm _emit 0x5F
        // 0x587797B7: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587797B9: pop esi
        __asm _emit 0x5E
        // 0x587797BA: pop ebx
        __asm _emit 0x5B
        // 0x587797BB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
