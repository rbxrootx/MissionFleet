// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587DAEB0 .. +0xD2 bytes.
// Source symbol alias: FUN_587daeb0.
extern "C" __declspec(naked) void FUN_587daeb0() {
    __asm {
        // 0x587DAEB0: push esi
        __asm _emit 0x56
        // 0x587DAEB1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587DAEB3: movzx dx, byte ptr [esi + 0x61]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x61
        // 0x587DAEB8: mov dword ptr [esi + 0xe0c], 0x2000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAEC2: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DAEC7: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587DAECA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DAECC: je 0x587daf77
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAED2: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAED8: cmp byte ptr [ecx + 0x35c], dl
        __asm _emit 0x38
        __asm _emit 0x91
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAEDE: jne 0x587daee9
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587DAEE0: cmp dword ptr [eax + 0xec], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAEE7: je 0x587daefd
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587DAEE9: mov eax, dword ptr [eax + 0xce0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAEEF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DAEF1: jne 0x587daed2
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587DAEF3: push eax
        __asm _emit 0x50
        // 0x587DAEF4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAEF6: call 0x587d6830
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAEFB: pop esi
        __asm _emit 0x5E
        // 0x587DAEFC: ret
        __asm _emit 0xC3
        // 0x587DAEFD: mov dword ptr [esi + 0xe14], 0xffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF07: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DAF0C: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587DAF0F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587DAF11: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DAF13: je 0x587daf46
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x587DAF15: push edi
        __asm _emit 0x57
        // 0x587DAF16: jmp 0x587daf20
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587DAF18: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF1F: nop
        __asm _emit 0x90
        // 0x587DAF20: mov edi, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF26: cmp byte ptr [edi + 0x35c], dl
        __asm _emit 0x38
        __asm _emit 0x97
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF2C: jne 0x587daf37
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587DAF2E: cmp dword ptr [eax + 0xec], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF35: je 0x587daf43
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587DAF37: mov eax, dword ptr [eax + 0xce0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF3D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DAF3F: jne 0x587daf20
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x587DAF41: jmp 0x587daf45
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587DAF43: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DAF45: pop edi
        __asm _emit 0x5F
        // 0x587DAF46: mov dword ptr [esi + 0xe10], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF4C: mov ecx, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF52: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587DAF56: shr dl, 1
        __asm _emit 0xD0
        __asm _emit 0xEA
        // 0x587DAF58: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x587DAF5B: je 0x587daf77
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587DAF5D: mov ecx, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF63: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587DAF65: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587DAF68: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587DAF6A: mov eax, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF70: mov dword ptr [eax + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAF77: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAF79: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAF7B: call 0x587d6830
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAF80: pop esi
        __asm _emit 0x5E
        // 0x587DAF81: ret
        __asm _emit 0xC3
    }
}
