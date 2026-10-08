// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 169 bytes in 1 exact ranges.
// Source symbol alias: FUN_58833d70.

// Ghidra body range 0x58833D70..0x58833E19; 169 mapped bytes.
extern "C" __declspec(naked) void FUN_58833d70_segment_00() {
    __asm {
        // 0x58833D70: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58833D74: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D79: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x58833D7C: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D81: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58833D84: je 0x58833e18
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D8A: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58833D8E: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D93: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x58833D96: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833D9B: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58833D9E: jne 0x58833dc9
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58833DA0: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833DA5: cmp byte ptr [ecx + 0x60], al
        __asm _emit 0x38
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x58833DA8: jne 0x58833e18
        __asm _emit 0x75
        __asm _emit 0x6E
        // 0x58833DAA: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58833DAE: push esi
        __asm _emit 0x56
        // 0x58833DAF: mov esi, 0xe2ff
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833DB4: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD6
        // 0x58833DB7: mov esi, 0x200
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833DBC: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD6
        // 0x58833DBF: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58833DC3: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58833DC7: pop esi
        __asm _emit 0x5E
        // 0x58833DC8: ret
        __asm _emit 0xC3
        // 0x58833DC9: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58833DCD: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833DD2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x58833DD5: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833DDA: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58833DDD: jne 0x58833e18
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x58833DDF: cmp byte ptr [ecx + 0x60], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x58833DE3: jne 0x58833e18
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x58833DE5: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58833DE9: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833DEE: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x58833DF1: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833DF6: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58833DF9: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58833DFD: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833E02: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58833E06: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833E0B: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58833E0F: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833E14: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58833E18: ret
        __asm _emit 0xC3
    }
}
