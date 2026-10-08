// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 92 bytes in 1 exact ranges.
// Source symbol alias: FUN_587725e0.

// Ghidra body range 0x587725E0..0x5877263C; 92 mapped bytes.
extern "C" __declspec(naked) void FUN_587725e0_segment_00() {
    __asm {
        // 0x587725E0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587725E3: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587725E7: push ebx
        __asm _emit 0x53
        // 0x587725E8: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587725EC: push esi
        __asm _emit 0x56
        // 0x587725ED: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587725F1: push edi
        __asm _emit 0x57
        // 0x587725F2: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587725F6: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x587725F8: mov byte ptr [esp + 0x10], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587725FC: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772600: mov byte ptr [esp + 0xc], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58772604: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58772608: push eax
        __asm _emit 0x50
        // 0x58772609: push ecx
        __asm _emit 0x51
        // 0x5877260A: push edx
        __asm _emit 0x52
        // 0x5877260B: push edi
        __asm _emit 0x57
        // 0x5877260C: push esi
        __asm _emit 0x56
        // 0x5877260D: push ebx
        __asm _emit 0x53
        // 0x5877260E: call 0x587720e0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772613: sub esi, ebx
        __asm _emit 0x2B
        __asm _emit 0xF3
        // 0x58772615: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x5877261A: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x5877261C: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5877261F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58772621: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58772624: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58772626: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58772628: imul ecx, ecx, 0x108
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877262E: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58772631: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58772633: pop edi
        __asm _emit 0x5F
        // 0x58772634: pop esi
        __asm _emit 0x5E
        // 0x58772635: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58772637: pop ebx
        __asm _emit 0x5B
        // 0x58772638: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5877263B: ret
        __asm _emit 0xC3
    }
}
