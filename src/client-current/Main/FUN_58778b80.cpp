// FUN_58778B80: match a packed key against strided records and resolve a
// corresponding +0xCE-stride entry from receiver +0x14. Key/record semantics
// remain unknown; verified FUN_588E9940 stores the returned value at +0xCC4.
// See docs/current-main-packed-key-strided-record-lookup.md.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778B80 .. +0x54 bytes.
// Source symbol alias: FUN_58778b80.
extern "C" __declspec(naked) void FUN_58778b80() {
    __asm {
        // 0x58778B80: push ebp
        __asm _emit 0x55
        // 0x58778B81: push esi
        __asm _emit 0x56
        // 0x58778B82: push edi
        __asm _emit 0x57
        // 0x58778B83: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58778B85: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58778B89: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x58778B8C: jne 0x58778bbd
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58778B8E: mov esi, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x1C
        // 0x58778B91: mov edx, dword ptr [edi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x28
        // 0x58778B94: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778B96: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58778B98: jle 0x58778bbd
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58778B9A: mov bp, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x58778B9F: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x58778BA2: cmp byte ptr [edx - 2], 1
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x58778BA6: jne 0x58778bb2
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58778BA8: cmp ch, byte ptr [edx - 1]
        __asm _emit 0x3A
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58778BAB: jne 0x58778bb2
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58778BAD: cmp bp, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x2A
        // 0x58778BB0: je 0x58778bc5
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58778BB2: inc eax
        __asm _emit 0x40
        // 0x58778BB3: add edx, 0x390
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778BB9: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58778BBB: jl 0x58778ba2
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x58778BBD: pop edi
        __asm _emit 0x5F
        // 0x58778BBE: pop esi
        __asm _emit 0x5E
        // 0x58778BBF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778BC1: pop ebp
        __asm _emit 0x5D
        // 0x58778BC2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58778BC5: imul eax, eax, 0xce
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778BCB: add eax, dword ptr [edi + 0x14]
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x14
        // 0x58778BCE: pop edi
        __asm _emit 0x5F
        // 0x58778BCF: pop esi
        __asm _emit 0x5E
        // 0x58778BD0: pop ebp
        __asm _emit 0x5D
        // 0x58778BD1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
