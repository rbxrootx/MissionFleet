// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 115 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bcd20.

// Ghidra body range 0x588BCD20..0x588BCD93; 115 mapped bytes.
extern "C" __declspec(naked) void FUN_588bcd20_segment_00() {
    __asm {
        // 0x588BCD20: push ebp
        __asm _emit 0x55
        // 0x588BCD21: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588BCD23: mov cl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588BCD27: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BCD29: cmp cl, byte ptr [ebp + 0xad]
        __asm _emit 0x3A
        __asm _emit 0x8D
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCD2F: jae 0x588bcd61
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x588BCD31: movzx edx, byte ptr [ebp + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCD38: push ebx
        __asm _emit 0x53
        // 0x588BCD39: push esi
        __asm _emit 0x56
        // 0x588BCD3A: push edi
        __asm _emit 0x57
        // 0x588BCD3B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BCD3D: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588BCD3F: jle 0x588bcd5c
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588BCD41: lea esi, [ebp + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCD47: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588BCD4A: je 0x588bcd54
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BCD4C: movzx ebx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD9
        // 0x588BCD4F: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588BCD51: je 0x588bcd65
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588BCD53: inc edi
        __asm _emit 0x47
        // 0x588BCD54: inc eax
        __asm _emit 0x40
        // 0x588BCD55: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BCD58: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588BCD5A: jl 0x588bcd47
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588BCD5C: pop edi
        __asm _emit 0x5F
        // 0x588BCD5D: pop esi
        __asm _emit 0x5E
        // 0x588BCD5E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BCD60: pop ebx
        __asm _emit 0x5B
        // 0x588BCD61: pop ebp
        __asm _emit 0x5D
        // 0x588BCD62: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BCD65: mov ecx, dword ptr [ebp + 0x3d4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCD6B: push eax
        __asm _emit 0x50
        // 0x588BCD6C: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xB3
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BCD71: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588BCD74: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BCD7A: push eax
        __asm _emit 0x50
        // 0x588BCD7B: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xBD
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588BCD80: movzx eax, word ptr [eax + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0E
        // 0x588BCD84: pop edi
        __asm _emit 0x5F
        // 0x588BCD85: pop esi
        __asm _emit 0x5E
        // 0x588BCD86: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588BCD89: pop ebx
        __asm _emit 0x5B
        // 0x588BCD8A: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCD8F: pop ebp
        __asm _emit 0x5D
        // 0x588BCD90: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
