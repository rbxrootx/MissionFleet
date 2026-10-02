// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885C4AD .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_5885c4ad() {
    __asm {
        // 0x5885C4AD: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885C4AF: push ebp
        __asm _emit 0x55
        // 0x5885C4B0: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885C4B2: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5885C4B5: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885C4B8: lea ecx, [ebp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5885C4BB: push ebx
        __asm _emit 0x53
        // 0x5885C4BC: push esi
        __asm _emit 0x56
        // 0x5885C4BD: push edi
        __asm _emit 0x57
        // 0x5885C4BE: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5885C4C1: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5885C4C3: mov dword ptr [ebp - 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885C4C6: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x5885C4C8: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885C4CB: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885C4CE: mov al, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x00
        // 0x5885C4D0: cmp al, byte ptr [ebx + 0x588c3ec0]
        __asm _emit 0x3A
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C4D6: je 0x5885c4e0
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C4D8: cmp al, byte ptr [ebx + 0x588c3ec4]
        __asm _emit 0x3A
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C4DE: jne 0x5885c545
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x5885C4E0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C4E2: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C4E7: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C4E9: inc ebx
        __asm _emit 0x43
        // 0x5885C4EA: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885C4ED: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5885C4EF: cmp ebx, 3
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x5885C4F2: jne 0x5885c4ce
        __asm _emit 0x75
        __asm _emit 0xDA
        // 0x5885C4F4: push ecx
        __asm _emit 0x51
        // 0x5885C4F5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C4F7: call 0x58861372
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x4E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C4FC: mov ecx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5885C4FF: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5885C502: mov dword ptr [ebp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5885C505: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C507: mov dword ptr [ebp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C50A: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C50F: mov ebx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x5885C512: mov byte ptr [ebx], al
        __asm _emit 0x88
        __asm _emit 0x03
        // 0x5885C514: cmp al, byte ptr [esi + 0x588c3ec8]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C51A: je 0x5885c524
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C51C: cmp al, byte ptr [esi + 0x588c3ed0]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C522: jne 0x5885c551
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x5885C524: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C526: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C52B: inc esi
        __asm _emit 0x46
        // 0x5885C52C: mov byte ptr [ebx], al
        __asm _emit 0x88
        __asm _emit 0x03
        // 0x5885C52E: cmp esi, 5
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x05
        // 0x5885C531: jne 0x5885c514
        __asm _emit 0x75
        __asm _emit 0xE1
        // 0x5885C533: mov dl, al
        __asm _emit 0x8A
        __asm _emit 0xD0
        // 0x5885C535: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885C537: push edx
        __asm _emit 0x52
        // 0x5885C538: call 0x58861372
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x4E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C53D: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5885C53F: pop eax
        __asm _emit 0x58
        // 0x5885C540: pop edi
        __asm _emit 0x5F
        // 0x5885C541: pop esi
        __asm _emit 0x5E
        // 0x5885C542: pop ebx
        __asm _emit 0x5B
        // 0x5885C543: leave
        __asm _emit 0xC9
        // 0x5885C544: ret
        __asm _emit 0xC3
        // 0x5885C545: lea ecx, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885C548: call 0x5885dc39
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C54D: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5885C54F: jmp 0x5885c53f
        __asm _emit 0xEB
        __asm _emit 0xEE
        // 0x5885C551: lea ecx, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885C554: call 0x5885dc39
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C559: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x5885C55C: xor eax, 1
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0x01
        // 0x5885C55F: lea eax, [eax*4 + 3]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C566: jmp 0x5885c540
        __asm _emit 0xEB
        __asm _emit 0xD8
    }
}
