// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860A36 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_58860a36() {
    __asm {
        // 0x58860A36: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860A38: push ebp
        __asm _emit 0x55
        // 0x58860A39: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58860A3B: push ecx
        __asm _emit 0x51
        // 0x58860A3C: push ecx
        __asm _emit 0x51
        // 0x58860A3D: push esi
        __asm _emit 0x56
        // 0x58860A3E: push edi
        __asm _emit 0x57
        // 0x58860A3F: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58860A41: call 0x58860d25
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860A46: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58860A49: mov esi, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x60
        // 0x58860A4C: lea eax, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFF
        // 0x58860A4F: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58860A52: mov byte ptr [ebp - 1], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58860A56: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x58860A59: mov edx, esp
        __asm _emit 0x8B
        __asm _emit 0xD4
        // 0x58860A5B: push eax
        __asm _emit 0x50
        // 0x58860A5C: push dword ptr [edi + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x2C
        // 0x58860A5F: lea eax, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58860A62: push dword ptr [edi + 0x28]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x28
        // 0x58860A65: push eax
        __asm _emit 0x50
        // 0x58860A66: push edx
        __asm _emit 0x52
        // 0x58860A67: call 0x5885b8d2
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xAE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860A6C: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58860A6F: push esi
        __asm _emit 0x56
        // 0x58860A70: call 0x5885cdc0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xC3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860A75: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x58860A78: cmp byte ptr [ebp - 1], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58860A7C: jne 0x58860a82
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58860A7E: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860A80: jmp 0x58860a95
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x58860A82: cmp byte ptr [edi + 0x26], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x58860A86: je 0x58860a8c
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58860A88: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58860A8A: jmp 0x58860a95
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58860A8C: push edx
        __asm _emit 0x52
        // 0x58860A8D: push eax
        __asm _emit 0x50
        // 0x58860A8E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58860A90: call 0x58861559
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860A95: pop edi
        __asm _emit 0x5F
        // 0x58860A96: pop esi
        __asm _emit 0x5E
        // 0x58860A97: leave
        __asm _emit 0xC9
        // 0x58860A98: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
