// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 414 bytes in 3 discontiguous ranges.
// Source symbol alias: FUN_588536c0.

// Ghidra body range 0x588536C0..0x588537A9; 233 mapped bytes.
extern "C" __declspec(naked) void FUN_588536c0_segment_00() {
    __asm {
        // 0x588536C0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588536C3: push ebx
        __asm _emit 0x53
        // 0x588536C4: push ebp
        __asm _emit 0x55
        // 0x588536C5: push esi
        __asm _emit 0x56
        // 0x588536C6: push edi
        __asm _emit 0x57
        // 0x588536C7: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588536C9: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588536CB: push ebx
        __asm _emit 0x53
        // 0x588536CC: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588536CE: mov dword ptr [ebp + 0x2c4], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588536D8: mov dword ptr [ebp + 0x2d4], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588536DE: mov dword ptr [ebp + 0x2d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588536E4: mov dword ptr [ebp + 0x2cc], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588536EA: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588536F0: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588536F2: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588536F6: call 0x588804f0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xCD
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588536FB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588536FD: mov eax, dword ptr [ebp + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853703: jle 0x5885371a
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x58853705: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885370A: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885370E: mov eax, dword ptr [ebp + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853714: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58853718: jmp 0x5885372f
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5885371A: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885371F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58853723: mov eax, dword ptr [ebp + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853729: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5885372B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5885372F: mov eax, dword ptr [ebp + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853735: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58853738: mov ecx, dword ptr [ebp + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885373E: call 0x587c7c80
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x45
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58853743: mov ecx, dword ptr [ebp + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853749: call 0x58793e00
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x06
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885374E: mov ecx, dword ptr [ebp + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853754: call 0x58793e00
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x06
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58853759: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885375E: lea ecx, [ebp + 0x1a8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853764: push ebx
        __asm _emit 0x53
        // 0x58853765: push ecx
        __asm _emit 0x51
        // 0x58853766: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5885376B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885376E: lea esi, [ebp + 0x108]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853774: mov edi, 0x20
        __asm _emit 0xBF
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853779: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853780: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58853782: push 0xfffffe70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58853787: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xFB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885378C: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5885378E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58853791: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58853794: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x58853797: jne 0x58853780
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58853799: lea esi, [ebp + 0x198]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885379F: mov dword ptr [esp + 0x10], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588537A7: jmp 0x588537b0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588537B0..0x588537DD; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_588536c0_segment_01() {
    __asm {
        // 0x588537B0: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588537B5: mov eax, dword ptr [esi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF0
        // 0x588537B8: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588537BB: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588537BD: push ebx
        __asm _emit 0x53
        // 0x588537BE: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x3B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588537C3: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588537C6: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588537C9: jne 0x588537b5
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588537CB: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x588537D0: jne 0x588537b0
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x588537D2: lea esi, [ebp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x7C
        // 0x588537D5: add ebp, 0xf8
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588537DB: jmp 0x588537e2
        __asm _emit 0xEB
        __asm _emit 0x05
    }
}

// Ghidra body range 0x588537E0..0x58853868; 136 mapped bytes.
extern "C" __declspec(naked) void FUN_588536c0_segment_02() {
    __asm {
        // 0x588537E0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588537E2: mov dword ptr [ebp], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x588537E5: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588537E7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588537E9: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588537EC: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x588537EF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588537F1: movzx ebx, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDF
        // 0x588537F4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588537F6: push ebx
        __asm _emit 0x53
        // 0x588537F7: call 0x58857ec0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588537FC: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588537FF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58853801: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58853803: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58853805: push ebx
        __asm _emit 0x53
        // 0x58853806: call 0x58857ec0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885380B: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5885380D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885380F: mov eax, dword ptr [edx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x20
        // 0x58853812: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58853814: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58853816: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58853818: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5885381B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885381D: mov eax, dword ptr [edx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x20
        // 0x58853820: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58853822: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58853824: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58853826: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58853828: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885382A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885382C: call 0x5885c240
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853831: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58853834: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58853836: call 0x58863460
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885383B: inc edi
        __asm _emit 0x47
        // 0x5885383C: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5885383F: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x58853842: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x04
        // 0x58853845: jl 0x588537e0
        __asm _emit 0x7C
        __asm _emit 0x99
        // 0x58853847: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885384B: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853851: call 0x588587c0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x4F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853856: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885385C: pop edi
        __asm _emit 0x5F
        // 0x5885385D: pop esi
        __asm _emit 0x5E
        // 0x5885385E: pop ebp
        __asm _emit 0x5D
        // 0x5885385F: pop ebx
        __asm _emit 0x5B
        // 0x58853860: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58853863: jmp 0x5885ee90
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
