// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 286 bytes in 1 exact ranges.
// Source symbol alias: FUN_58779a40.

// Ghidra body range 0x58779A40..0x58779B5E; 286 mapped bytes.
extern "C" __declspec(naked) void FUN_58779a40_segment_00() {
    __asm {
        // 0x58779A40: mov al, byte ptr [ecx + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x58779A43: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58779A46: push ebx
        __asm _emit 0x53
        // 0x58779A47: movzx ebx, word ptr [ecx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x59
        __asm _emit 0x5E
        // 0x58779A4B: shr ebx, 4
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58779A4E: xor ebx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF3
        __asm _emit 0xAA
        // 0x58779A51: dec al
        __asm _emit 0xFE
        __asm _emit 0xC8
        // 0x58779A53: and ebx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779A59: cmp al, 7
        __asm _emit 0x3C
        __asm _emit 0x07
        // 0x58779A5B: ja 0x58779b57
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779A61: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x58779A64: push ebp
        __asm _emit 0x55
        // 0x58779A65: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58779A67: mov dword ptr [esp + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58779A6B: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58779A6F: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x58779A72: ja 0x58779ac9
        __asm _emit 0x77
        __asm _emit 0x55
        // 0x58779A74: jmp dword ptr [eax*4 + 0x58779b60]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x9B
        __asm _emit 0x77
        __asm _emit 0x58
        // 0x58779A7B: mov dword ptr [esp + 8], 0xfffffc18
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779A83: jmp 0x58779ac9
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x58779A85: mov dword ptr [esp + 8], 0xfffff830
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779A8D: jmp 0x58779ac9
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x58779A8F: mov dword ptr [esp + 8], 0xfffff448
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779A97: jmp 0x58779ac9
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x58779A99: mov dword ptr [esp + 8], 0xfffff060
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x60
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779AA1: jmp 0x58779ac9
        __asm _emit 0xEB
        __asm _emit 0x26
        // 0x58779AA3: mov dword ptr [esp + 8], 0xffffec78
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x78
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779AAB: jmp 0x58779ac9
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x58779AAD: mov dword ptr [esp + 8], 0xffffe890
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779AB5: jmp 0x58779ac9
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58779AB7: mov dword ptr [esp + 8], 0xffffe4a8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xA8
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779ABF: jmp 0x58779ac9
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58779AC1: mov dword ptr [esp + 8], 0xffffe0c0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779AC9: movzx eax, word ptr [ecx + 0x62]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x62
        // 0x58779ACD: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58779AD3: push eax
        __asm _emit 0x50
        // 0x58779AD4: call 0x58778ad0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779AD9: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58779ADB: je 0x58779ae6
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58779ADD: add eax, 0x360
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779AE2: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58779AE4: jne 0x58779aee
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58779AE6: pop ebp
        __asm _emit 0x5D
        // 0x58779AE7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58779AE9: pop ebx
        __asm _emit 0x5B
        // 0x58779AEA: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58779AED: ret
        __asm _emit 0xC3
        // 0x58779AEE: push esi
        __asm _emit 0x56
        // 0x58779AEF: lea esi, [eax + 2]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x02
        // 0x58779AF2: push edi
        __asm _emit 0x57
        // 0x58779AF3: cmp word ptr [esi], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x58779AF7: je 0x58779b37
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58779AF9: movzx eax, word ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x06
        // 0x58779AFC: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58779B02: push eax
        __asm _emit 0x50
        // 0x58779B03: movzx edi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF8
        // 0x58779B06: call 0x58778ad0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779B0B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58779B0D: je 0x58779b37
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58779B0F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58779B13: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x58779B16: add ecx, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58779B1A: movzx edx, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD7
        // 0x58779B1D: cmp byte ptr [edx + ecx + 0x589c8bb8], 1
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0xB8
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x58779B25: jne 0x58779b37
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58779B27: movzx eax, word ptr [eax + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0E
        // 0x58779B2B: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58779B2E: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779B33: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58779B35: je 0x58779b4a
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58779B37: inc ebp
        __asm _emit 0x45
        // 0x58779B38: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58779B3B: cmp ebp, 8
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x08
        // 0x58779B3E: jl 0x58779af3
        __asm _emit 0x7C
        __asm _emit 0xB3
        // 0x58779B40: pop edi
        __asm _emit 0x5F
        // 0x58779B41: pop esi
        __asm _emit 0x5E
        // 0x58779B42: pop ebp
        __asm _emit 0x5D
        // 0x58779B43: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58779B45: pop ebx
        __asm _emit 0x5B
        // 0x58779B46: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58779B49: ret
        __asm _emit 0xC3
        // 0x58779B4A: pop edi
        __asm _emit 0x5F
        // 0x58779B4B: pop esi
        __asm _emit 0x5E
        // 0x58779B4C: pop ebp
        __asm _emit 0x5D
        // 0x58779B4D: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779B52: pop ebx
        __asm _emit 0x5B
        // 0x58779B53: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58779B56: ret
        __asm _emit 0xC3
        // 0x58779B57: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58779B59: pop ebx
        __asm _emit 0x5B
        // 0x58779B5A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58779B5D: ret
        __asm _emit 0xC3
    }
}
