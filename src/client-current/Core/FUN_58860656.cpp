// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860656 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58860656() {
    __asm {
        // 0x58860656: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58860659: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5886065C: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5886065F: push esi
        __asm _emit 0x56
        // 0x58860660: mov esi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x58860663: adc esi, 0
        __asm _emit 0x83
        __asm _emit 0xD6
        __asm _emit 0x00
        // 0x58860666: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58860669: or eax, dword ptr [ecx + 0xc]
        __asm _emit 0x0B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5886066C: mov dword ptr [ecx + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x5886066F: je 0x58860681
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58860671: cmp esi, dword ptr [ecx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x58860674: jb 0x58860681
        __asm _emit 0x72
        __asm _emit 0x0B
        // 0x58860676: ja 0x5886067d
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x58860678: cmp edx, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5886067B: jbe 0x58860681
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x5886067D: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5886067F: pop esi
        __asm _emit 0x5E
        // 0x58860680: ret
        __asm _emit 0xC3
        // 0x58860681: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58860683: call 0x58860697
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860688: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5886068A: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x5886068D: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58860690: pop esi
        __asm _emit 0x5E
        // 0x58860691: cmove ecx, edx
        __asm _emit 0x0F
        __asm _emit 0x44
        __asm _emit 0xCA
        // 0x58860694: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x58860696: ret
        __asm _emit 0xC3
    }
}
