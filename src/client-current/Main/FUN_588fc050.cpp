// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 123 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fc050.

// Ghidra body range 0x588FC050..0x588FC0CB; 123 mapped bytes.
extern "C" __declspec(naked) void FUN_588fc050_segment_00() {
    __asm {
        // 0x588FC050: push ecx
        __asm _emit 0x51
        // 0x588FC051: mov ax, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FC056: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0x24
        // 0x588FC059: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FC05C: jbe 0x588fc0c7
        __asm _emit 0x76
        __asm _emit 0x69
        // 0x588FC05E: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC064: push ebp
        __asm _emit 0x55
        // 0x588FC065: mov ebp, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x60
        // 0x588FC068: push esi
        __asm _emit 0x56
        // 0x588FC069: push edi
        __asm _emit 0x57
        // 0x588FC06A: movzx edi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF8
        // 0x588FC06D: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588FC06F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588FC071: jle 0x588fc0a4
        __asm _emit 0x7E
        __asm _emit 0x31
        // 0x588FC073: push ebx
        __asm _emit 0x53
        // 0x588FC074: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FC078: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588FC07A: je 0x588fc08f
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588FC07C: mov edx, dword ptr [ebp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x50
        // 0x588FC07F: cmp edx, dword ptr [ebx + esi*4]
        __asm _emit 0x3B
        __asm _emit 0x14
        __asm _emit 0xB3
        // 0x588FC082: jne 0x588fc08f
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588FC084: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC08A: call 0x5881f2f0
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x32
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588FC08F: mov eax, dword ptr [ebx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB3
        // 0x588FC092: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC098: push eax
        __asm _emit 0x50
        // 0x588FC099: call 0x588f4500
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x84
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FC09E: inc esi
        __asm _emit 0x46
        // 0x588FC09F: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x588FC0A1: jl 0x588fc078
        __asm _emit 0x7C
        __asm _emit 0xD5
        // 0x588FC0A3: pop ebx
        __asm _emit 0x5B
        // 0x588FC0A4: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC0AA: mov ecx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC0B0: call 0x588730f0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588FC0B5: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FC0B9: mov ecx, dword ptr [edx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC0BF: call 0x588bc600
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x05
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588FC0C4: pop edi
        __asm _emit 0x5F
        // 0x588FC0C5: pop esi
        __asm _emit 0x5E
        // 0x588FC0C6: pop ebp
        __asm _emit 0x5D
        // 0x588FC0C7: pop ecx
        __asm _emit 0x59
        // 0x588FC0C8: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
