// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805B30 .. +0x64 bytes.
// Source symbol alias: FUN_58805b30.
extern "C" __declspec(naked) void FUN_58805b30() {
    __asm {
        // 0x58805B30: push ebx
        __asm _emit 0x53
        // 0x58805B31: push ebp
        __asm _emit 0x55
        // 0x58805B32: push esi
        __asm _emit 0x56
        // 0x58805B33: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58805B35: push edi
        __asm _emit 0x57
        // 0x58805B36: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58805B38: lea ebx, [ebp + 0x150]
        __asm _emit 0x8D
        __asm _emit 0x9D
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805B3E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58805B40: mov eax, dword ptr [ebp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805B46: mov edi, dword ptr [esi + eax]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x06
        // 0x58805B49: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58805B4B: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xD0
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58805B50: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58805B52: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xD1
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58805B57: mov edi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x3B
        // 0x58805B59: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58805B5B: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xD0
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58805B60: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58805B62: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xD1
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58805B67: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58805B6A: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58805B6D: cmp esi, 0x20
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x20
        // 0x58805B70: jl 0x58805b40
        __asm _emit 0x7C
        __asm _emit 0xCE
        // 0x58805B72: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805B78: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58805B7C: pop edi
        __asm _emit 0x5F
        // 0x58805B7D: pop esi
        __asm _emit 0x5E
        // 0x58805B7E: shr dl, 2
        __asm _emit 0xC0
        __asm _emit 0xEA
        __asm _emit 0x02
        // 0x58805B81: pop ebp
        __asm _emit 0x5D
        // 0x58805B82: pop ebx
        __asm _emit 0x5B
        // 0x58805B83: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58805B86: jne 0x58805b93
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58805B88: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805B8E: jmp 0x587e98a0
        __asm _emit 0xE9
        __asm _emit 0x0D
        __asm _emit 0x3D
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58805B93: ret
        __asm _emit 0xC3
    }
}
