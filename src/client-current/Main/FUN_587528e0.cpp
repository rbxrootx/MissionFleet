// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587528E0 .. +0xDC bytes.
// Source symbol alias: FUN_587528e0.
extern "C" __declspec(naked) void FUN_587528e0() {
    __asm {
        // 0x587528E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587528E2: push 0x5897e75e
        __asm _emit 0x68
        __asm _emit 0x5E
        __asm _emit 0xE7
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x587528E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587528ED: push eax
        __asm _emit 0x50
        // 0x587528EE: push ecx
        __asm _emit 0x51
        // 0x587528EF: push ebx
        __asm _emit 0x53
        // 0x587528F0: push ebp
        __asm _emit 0x55
        // 0x587528F1: push esi
        __asm _emit 0x56
        // 0x587528F2: push edi
        __asm _emit 0x57
        // 0x587528F3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587528F8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587528FA: push eax
        __asm _emit 0x50
        // 0x587528FB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587528FF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752905: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58752907: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875290B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5875290F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58752913: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58752917: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875291B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875291F: push eax
        __asm _emit 0x50
        // 0x58752920: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58752924: push ecx
        __asm _emit 0x51
        // 0x58752925: push edx
        __asm _emit 0x52
        // 0x58752926: push edi
        __asm _emit 0x57
        // 0x58752927: push ebx
        __asm _emit 0x53
        // 0x58752928: push eax
        __asm _emit 0x50
        // 0x58752929: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875292B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x58752930: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58752936: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875293B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5875293D: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58752940: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x58752943: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875294A: mov dword ptr [esi + 0x5c], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x5C
        // 0x5875294D: lea edi, [esi + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x58752950: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58752952: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58752956: mov dword ptr [esi], 0x5898d624
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x24
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875295C: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xD4
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58752961: lea ebx, [esi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x58752964: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58752966: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5875296B: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xD4
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58752970: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58752972: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58752974: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58752979: call 0x58752830
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875297E: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58752980: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58752982: call 0x58752830
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58752987: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5875298C: mov dword ptr [esi + 0x90], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752992: mov dword ptr [esi + 0x94], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752998: mov dword ptr [esi + 0x98], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875299E: mov dword ptr [esi + 0xa0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587529A4: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587529A6: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587529AA: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587529B1: pop ecx
        __asm _emit 0x59
        // 0x587529B2: pop edi
        __asm _emit 0x5F
        // 0x587529B3: pop esi
        __asm _emit 0x5E
        // 0x587529B4: pop ebp
        __asm _emit 0x5D
        // 0x587529B5: pop ebx
        __asm _emit 0x5B
        // 0x587529B6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587529B9: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
