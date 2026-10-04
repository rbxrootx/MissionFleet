// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58778E80 .. +0xAD bytes.
// Source symbol alias: FUN_58778e80.
extern "C" __declspec(naked) void FUN_58778e80() {
    __asm {
        // 0x58778E80: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x58778E83: push esi
        __asm _emit 0x56
        // 0x58778E84: push 0x10e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778E89: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58778E8B: push 0x589cfca8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58778E90: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58778E92: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x3D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58778E97: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778E9D: mov esi, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778EA3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58778EA5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58778EA8: mov dword ptr [esp + 8], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778EB0: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58778EB4: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58778EB8: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58778EBC: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58778EC0: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58778EC4: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58778EC8: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58778ECC: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58778ED0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58778ED2: jle 0x58778f26
        __asm _emit 0x7E
        __asm _emit 0x52
        // 0x58778ED4: push ebx
        __asm _emit 0x53
        // 0x58778ED5: push ebp
        __asm _emit 0x55
        // 0x58778ED6: push edi
        __asm _emit 0x57
        // 0x58778ED7: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58778ED9: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58778EDD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58778EE0: movzx eax, word ptr [ebp + 0x40]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x40
        // 0x58778EE4: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x3F
        // 0x58778EE7: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58778EEA: ja 0x58778f16
        __asm _emit 0x77
        __asm _emit 0x2A
        // 0x58778EEC: mov ebx, dword ptr [esp + eax*4 + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x84
        __asm _emit 0x14
        // 0x58778EF0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58778EF2: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58778EF5: lea edx, [esp + eax*4 + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x84
        __asm _emit 0x14
        // 0x58778EF9: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58778EFB: lea edi, [ebx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0xCB
        // 0x58778EFE: imul edi, edi, 0xe0
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778F04: add edi, 0x589cfca8
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xA8
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58778F0A: mov ecx, 0x38
        __asm _emit 0xB9
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778F0F: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58778F11: inc ebx
        __asm _emit 0x43
        // 0x58778F12: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58778F14: mov dword ptr [edx], ebx
        __asm _emit 0x89
        __asm _emit 0x1A
        // 0x58778F16: add ebp, 0xe0
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58778F1C: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x58778F21: jne 0x58778ee0
        __asm _emit 0x75
        __asm _emit 0xBD
        // 0x58778F23: pop edi
        __asm _emit 0x5F
        // 0x58778F24: pop ebp
        __asm _emit 0x5D
        // 0x58778F25: pop ebx
        __asm _emit 0x5B
        // 0x58778F26: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58778F28: pop esi
        __asm _emit 0x5E
        // 0x58778F29: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x58778F2C: ret
        __asm _emit 0xC3
    }
}
