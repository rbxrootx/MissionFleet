// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 208 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_58889120.

// Ghidra body range 0x58889120..0x5888914A; 42 mapped bytes.
extern "C" __declspec(naked) void FUN_58889120_segment_00() {
    __asm {
        // 0x58889120: movzx eax, word ptr [ecx + 0xd2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889127: push ebx
        __asm _emit 0x53
        // 0x58889128: push esi
        __asm _emit 0x56
        // 0x58889129: push edi
        __asm _emit 0x57
        // 0x5888912A: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x5888912E: jne 0x58889173
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x58889130: mov al, byte ptr [esp + 0x10]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58889134: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58889136: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5888913A: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5888913D: add ecx, 0x98
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889143: mov esi, 3
        __asm _emit 0xBE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889148: jmp 0x58889150
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x58889150..0x588891F6; 166 mapped bytes.
extern "C" __declspec(naked) void FUN_58889120_segment_01() {
    __asm {
        // 0x58889150: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58889152: mov di, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58889156: mov ebx, 0xfffd
        __asm _emit 0xBB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888915B: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xFB
        // 0x5888915E: or di, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xFA
        // 0x58889161: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58889164: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58889167: mov word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5888916B: jne 0x58889150
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x5888916D: pop edi
        __asm _emit 0x5F
        // 0x5888916E: pop esi
        __asm _emit 0x5E
        // 0x5888916F: pop ebx
        __asm _emit 0x5B
        // 0x58889170: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58889173: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x58889177: jne 0x588891b5
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x58889179: mov dl, byte ptr [esp + 0x10]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888917D: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x58889180: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x58889184: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58889187: add ecx, 0x98
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888918D: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889192: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58889194: mov di, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x58889198: mov ebx, 0xfffd
        __asm _emit 0xBB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888919D: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xFB
        // 0x588891A0: or di, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xFA
        // 0x588891A3: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588891A6: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588891A9: mov word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588891AD: jne 0x58889192
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x588891AF: pop edi
        __asm _emit 0x5F
        // 0x588891B0: pop esi
        __asm _emit 0x5E
        // 0x588891B1: pop ebx
        __asm _emit 0x5B
        // 0x588891B2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588891B5: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588891B9: jne 0x588891f0
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x588891BB: mov al, byte ptr [esp + 0x10]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588891BF: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588891C1: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x588891C5: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588891C8: add ecx, 0x98
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588891CE: mov esi, 4
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588891D3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588891D5: mov di, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588891D9: mov ebx, 0xfffd
        __asm _emit 0xBB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588891DE: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xFB
        // 0x588891E1: or di, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xFA
        // 0x588891E4: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588891E7: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588891EA: mov word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588891EE: jne 0x588891d3
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x588891F0: pop edi
        __asm _emit 0x5F
        // 0x588891F1: pop esi
        __asm _emit 0x5E
        // 0x588891F2: pop ebx
        __asm _emit 0x5B
        // 0x588891F3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
