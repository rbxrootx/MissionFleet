// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 94 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772640.

// Ghidra body range 0x58772640..0x5877269E; 94 mapped bytes.
extern "C" __declspec(naked) void FUN_58772640_segment_00() {
    __asm {
        // 0x58772640: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58772643: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772647: push ebx
        __asm _emit 0x53
        // 0x58772648: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877264C: push esi
        __asm _emit 0x56
        // 0x5877264D: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772651: push edi
        __asm _emit 0x57
        // 0x58772652: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58772656: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58772658: mov byte ptr [esp + 0x10], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877265C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772660: mov byte ptr [esp + 0xc], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58772664: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58772668: push eax
        __asm _emit 0x50
        // 0x58772669: push ecx
        __asm _emit 0x51
        // 0x5877266A: push edx
        __asm _emit 0x52
        // 0x5877266B: push edi
        __asm _emit 0x57
        // 0x5877266C: push esi
        __asm _emit 0x56
        // 0x5877266D: push ebx
        __asm _emit 0x53
        // 0x5877266E: call 0x58772120
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772673: sub esi, ebx
        __asm _emit 0x2B
        __asm _emit 0xF3
        // 0x58772675: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x5877267A: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x5877267C: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x5877267E: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58772681: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58772683: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58772686: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58772688: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877268A: imul ecx, ecx, 0x118
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772690: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58772693: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58772695: pop edi
        __asm _emit 0x5F
        // 0x58772696: pop esi
        __asm _emit 0x5E
        // 0x58772697: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58772699: pop ebx
        __asm _emit 0x5B
        // 0x5877269A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5877269D: ret
        __asm _emit 0xC3
    }
}
