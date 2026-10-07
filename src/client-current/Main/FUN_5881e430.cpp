// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 102 bytes in 1 exact ranges.
// Source symbol alias: FUN_5881e430.

// Ghidra body range 0x5881E430..0x5881E496; 102 mapped bytes.
extern "C" __declspec(naked) void FUN_5881e430_segment_00() {
    __asm {
        // 0x5881E430: push ebx
        __asm _emit 0x53
        // 0x5881E431: push ebp
        __asm _emit 0x55
        // 0x5881E432: push esi
        __asm _emit 0x56
        // 0x5881E433: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5881E435: push edi
        __asm _emit 0x57
        // 0x5881E436: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5881E43A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5881E43C: lea eax, [ecx + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x5881E43F: lea ebx, [ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x01
        // 0x5881E442: mov edx, dword ptr [eax - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0xF0
        // 0x5881E445: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5881E447: jne 0x5881e474
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x5881E449: or word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x5881E44D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881E44F: or word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x5881E453: mov edx, dword ptr [eax - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0xF0
        // 0x5881E456: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x5881E459: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881E45B: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x5881E45E: mov edx, dword ptr [eax - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0xF0
        // 0x5881E461: mov dword ptr [ecx + 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x70
        // 0x5881E464: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881E466: mov dword ptr [ecx + 0x80], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E46C: mov dword ptr [ecx + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xB9
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E472: jmp 0x5881e485
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x5881E474: mov ebp, 0xfffe
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881E479: and word ptr [edx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x5881E47D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881E47F: and word ptr [edx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x5881E483: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5881E485: add esi, ebx
        __asm _emit 0x03
        __asm _emit 0xF3
        // 0x5881E487: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5881E48A: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x5881E48D: jl 0x5881e442
        __asm _emit 0x7C
        __asm _emit 0xB3
        // 0x5881E48F: pop edi
        __asm _emit 0x5F
        // 0x5881E490: pop esi
        __asm _emit 0x5E
        // 0x5881E491: pop ebp
        __asm _emit 0x5D
        // 0x5881E492: pop ebx
        __asm _emit 0x5B
        // 0x5881E493: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
