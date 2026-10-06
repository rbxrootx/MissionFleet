// FUN_58778C40: find a type-0x04 record by the remaining packed-key bytes.
// Verified FUN_588E9940 makes four calls using the shared table receiver.
// Record/key semantics remain unknown; this preserves the exact mapped stream.
// See docs/current-main-type-04-packed-record-lookup.md.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778C40 .. +0x51 bytes.
// Source symbol alias: FUN_58778c40.
extern "C" __declspec(naked) void FUN_58778c40() {
    __asm {
        // 0x58778C40: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58778C44: push ebp
        __asm _emit 0x55
        // 0x58778C45: push esi
        __asm _emit 0x56
        // 0x58778C46: push edi
        __asm _emit 0x57
        // 0x58778C47: cmp dl, 4
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58778C4A: jne 0x58778c7b
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58778C4C: mov esi, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x58
        // 0x58778C4F: mov edi, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x64
        // 0x58778C52: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778C54: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58778C56: jle 0x58778c7b
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58778C58: mov bp, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58778C5D: lea ecx, [edi + 2]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x02
        // 0x58778C60: cmp byte ptr [ecx - 2], 4
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x58778C64: jne 0x58778c70
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58778C66: cmp dh, byte ptr [ecx - 1]
        __asm _emit 0x3A
        __asm _emit 0x71
        __asm _emit 0xFF
        // 0x58778C69: jne 0x58778c70
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58778C6B: cmp bp, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x29
        // 0x58778C6E: je 0x58778c83
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58778C70: inc eax
        __asm _emit 0x40
        // 0x58778C71: add ecx, 0x9c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778C77: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58778C79: jl 0x58778c60
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x58778C7B: pop edi
        __asm _emit 0x5F
        // 0x58778C7C: pop esi
        __asm _emit 0x5E
        // 0x58778C7D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778C7F: pop ebp
        __asm _emit 0x5D
        // 0x58778C80: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58778C83: imul eax, eax, 0x9c
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778C89: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58778C8B: pop edi
        __asm _emit 0x5F
        // 0x58778C8C: pop esi
        __asm _emit 0x5E
        // 0x58778C8D: pop ebp
        __asm _emit 0x5D
        // 0x58778C8E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
