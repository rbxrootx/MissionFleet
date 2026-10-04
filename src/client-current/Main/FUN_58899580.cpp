// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58899580 .. +0x5E bytes.
// Source symbol alias: FUN_58899580.
extern "C" __declspec(naked) void FUN_58899580() {
    __asm {
        // 0x58899580: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58899583: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58899587: push ebx
        __asm _emit 0x53
        // 0x58899588: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889958C: push esi
        __asm _emit 0x56
        // 0x5889958D: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58899591: push edi
        __asm _emit 0x57
        // 0x58899592: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58899596: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58899598: mov byte ptr [esp + 0x10], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889959C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588995A0: mov byte ptr [esp + 0xc], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588995A4: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588995A8: push eax
        __asm _emit 0x50
        // 0x588995A9: push ecx
        __asm _emit 0x51
        // 0x588995AA: push edx
        __asm _emit 0x52
        // 0x588995AB: push edi
        __asm _emit 0x57
        // 0x588995AC: push esi
        __asm _emit 0x56
        // 0x588995AD: push ebx
        __asm _emit 0x53
        // 0x588995AE: call 0x58902100
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x8B
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588995B3: sub esi, ebx
        __asm _emit 0x2B
        __asm _emit 0xF3
        // 0x588995B5: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x588995BA: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x588995BC: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x588995BE: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588995C1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588995C3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588995C6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588995C8: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588995CB: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588995D2: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588995D4: lea eax, [edi + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x8F
        // 0x588995D7: pop edi
        __asm _emit 0x5F
        // 0x588995D8: pop esi
        __asm _emit 0x5E
        // 0x588995D9: pop ebx
        __asm _emit 0x5B
        // 0x588995DA: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588995DD: ret
        __asm _emit 0xC3
    }
}
