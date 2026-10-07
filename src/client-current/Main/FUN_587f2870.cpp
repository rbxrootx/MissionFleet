// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587F2870 .. +0xC9 bytes.
// Source symbol alias: FUN_587f2870.
extern "C" __declspec(naked) void FUN_587f2870() {
    __asm {
        // 0x587F2870: push esi
        __asm _emit 0x56
        // 0x587F2871: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587F2873: mov ecx, dword ptr [esi + 0x10558]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2879: push edi
        __asm _emit 0x57
        // 0x587F287A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F287C: je 0x587f28ad
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587F287E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F2880: call 0x588da150
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x78
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587F2885: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F288A: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587F288D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F288F: je 0x587f289a
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587F2891: movzx eax, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2898: jmp 0x587f289d
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587F289A: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587F289D: mov dword ptr [esi + 0x104c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F28A3: mov dword ptr [esi + 0x10568], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F28AD: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F28B1: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F28B4: je 0x587f2921
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x587F28B6: mov ecx, dword ptr [esi + 0x10554]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F28BC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F28BE: je 0x587f2921
        __asm _emit 0x74
        __asm _emit 0x61
        // 0x587F28C0: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587F28C5: call 0x588da150
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587F28CA: mov ecx, dword ptr [esi + 0x10554]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F28D0: mov dword ptr [esi + 0x104c8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F28D6: mov dword ptr [esi + 0x10558], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F28DC: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F28E2: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F28E5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F28E7: je 0x587f2900
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587F28E9: movzx eax, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F28F0: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587F28F2: je 0x587f2900
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587F28F4: mov dword ptr [esi + 0x10568], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587F28FE: jmp 0x587f290a
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587F2900: mov dword ptr [esi + 0x10568], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F290A: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587F290D: mov dword ptr [esi + 0x10bb8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2913: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587F2916: pop edi
        __asm _emit 0x5F
        // 0x587F2917: mov dword ptr [esi + 0x10bbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F291D: pop esi
        __asm _emit 0x5E
        // 0x587F291E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587F2921: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F2923: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F2925: mov dword ptr [esi + 0x10558], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F292F: call 0x587eac40
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F2934: pop edi
        __asm _emit 0x5F
        // 0x587F2935: pop esi
        __asm _emit 0x5E
        // 0x587F2936: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
