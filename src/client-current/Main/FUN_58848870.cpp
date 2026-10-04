// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58848870 .. +0x161 bytes.
// Source symbol alias: FUN_58848870.
extern "C" __declspec(naked) void FUN_58848870() {
    __asm {
        // 0x58848870: sub esp, 0xf4
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848876: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884887B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884887D: mov dword ptr [esp + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848884: push ebx
        __asm _emit 0x53
        // 0x58848885: push ebp
        __asm _emit 0x55
        // 0x58848886: push esi
        __asm _emit 0x56
        // 0x58848887: push edi
        __asm _emit 0x57
        // 0x58848888: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884888D: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884888F: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58848893: push ebp
        __asm _emit 0x55
        // 0x58848894: push eax
        __asm _emit 0x50
        // 0x58848895: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58848897: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x43
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884889C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5884889F: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588488A1: lea edi, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588488A5: movsx ecx, word ptr [esi + 0xf2]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x8E
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588488AC: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x588488AE: jge 0x58848906
        __asm _emit 0x7D
        __asm _emit 0x56
        // 0x588488B0: cmp dword ptr [esi + 0x108], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588488B7: jne 0x588488c2
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588488B9: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588488BC: mov dword ptr [esi + 0x108], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588488C2: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588488C8: mov ecx, dword ptr [eax + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x70
        // 0x588488CB: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x588488CE: push edx
        __asm _emit 0x52
        // 0x588488CF: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588488D4: push edi
        __asm _emit 0x57
        // 0x588488D5: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588488DB: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588488E1: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x588488E4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588488E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588488E9: je 0x588488f3
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588488EB: mov dword ptr [esi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588488F1: jmp 0x588488fc
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588488F3: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588488F6: mov dword ptr [esi + 0x108], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588488FC: inc ebx
        __asm _emit 0x43
        // 0x588488FD: inc ebp
        __asm _emit 0x45
        // 0x588488FE: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x18
        // 0x58848901: cmp ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0A
        // 0x58848904: jl 0x588488a5
        __asm _emit 0x7C
        __asm _emit 0x9F
        // 0x58848906: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58848908: jle 0x5884891d
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5884890A: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58848910: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58848912: push ebp
        __asm _emit 0x55
        // 0x58848913: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58848917: push edx
        __asm _emit 0x52
        // 0x58848918: call 0x587b91b0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5884891D: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848922: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58848924: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58848928: push ebp
        __asm _emit 0x55
        // 0x58848929: push eax
        __asm _emit 0x50
        // 0x5884892A: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x43
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x5884892F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58848932: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58848934: lea edi, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58848938: jmp 0x58848940
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5884893A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848940: movsx ecx, word ptr [esi + 0xf0]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848947: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x58848949: jge 0x588489a1
        __asm _emit 0x7D
        __asm _emit 0x56
        // 0x5884894B: cmp dword ptr [esi + 0x10c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848952: jne 0x5884895d
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58848954: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x58848957: mov dword ptr [esi + 0x10c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884895D: mov eax, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848963: mov ecx, dword ptr [eax + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x70
        // 0x58848966: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x58848969: push edx
        __asm _emit 0x52
        // 0x5884896A: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884896F: push edi
        __asm _emit 0x57
        // 0x58848970: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58848976: mov eax, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884897C: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x5884897F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58848982: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848984: je 0x5884898e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58848986: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884898C: jmp 0x58848997
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5884898E: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58848991: mov dword ptr [esi + 0x10c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848997: inc ebx
        __asm _emit 0x43
        // 0x58848998: inc ebp
        __asm _emit 0x45
        // 0x58848999: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x18
        // 0x5884899C: cmp ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x0A
        // 0x5884899F: jl 0x58848940
        __asm _emit 0x7C
        __asm _emit 0x9F
        // 0x588489A1: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588489A3: jle 0x588489b8
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588489A5: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588489AB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588489AD: push ebp
        __asm _emit 0x55
        // 0x588489AE: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588489B2: push edx
        __asm _emit 0x52
        // 0x588489B3: call 0x587b91b0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588489B8: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588489BF: pop edi
        __asm _emit 0x5F
        // 0x588489C0: pop esi
        __asm _emit 0x5E
        // 0x588489C1: pop ebp
        __asm _emit 0x5D
        // 0x588489C2: pop ebx
        __asm _emit 0x5B
        // 0x588489C3: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588489C5: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x42
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x588489CA: add esp, 0xf4
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588489D0: ret
        __asm _emit 0xC3
    }
}
