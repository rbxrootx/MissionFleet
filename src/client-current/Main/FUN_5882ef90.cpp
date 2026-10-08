// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 111 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882ef90.

// Ghidra body range 0x5882EF90..0x5882EFFF; 111 mapped bytes.
extern "C" __declspec(naked) void FUN_5882ef90_segment_00() {
    __asm {
        // 0x5882EF90: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5882EF94: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EF99: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x5882EF9C: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFA1: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5882EFA4: jne 0x5882effe
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x5882EFA6: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5882EFAA: mov edx, 0xe1ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFAF: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x5882EFB2: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFB7: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5882EFBA: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5882EFBE: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFC3: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5882EFC7: or word ptr [ecx + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5882EFCC: mov byte ptr [ecx + 0x21c], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFD2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882EFD4: mov dword ptr [ecx + 0x220], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFDA: mov dword ptr [ecx + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFE0: mov dword ptr [ecx + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFE6: mov dword ptr [ecx + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFEC: mov byte ptr [ecx + 0x21d], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFF2: mov dword ptr [ecx + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFF8: mov dword ptr [ecx + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882EFFE: ret
        __asm _emit 0xC3
    }
}
