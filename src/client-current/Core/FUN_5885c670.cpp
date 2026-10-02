// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885C670 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_5885c670() {
    __asm {
        // 0x5885C670: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885C672: push ebp
        __asm _emit 0x55
        // 0x5885C673: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885C675: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5885C678: push ebx
        __asm _emit 0x53
        // 0x5885C679: push esi
        __asm _emit 0x56
        // 0x5885C67A: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885C67D: lea eax, [ebp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C680: push edi
        __asm _emit 0x57
        // 0x5885C681: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5885C684: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885C686: mov dword ptr [ebp - 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xF4
        // 0x5885C689: mov dword ptr [ebp - 8], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF8
        // 0x5885C68C: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885C68F: mov al, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x07
        // 0x5885C691: cmp al, byte ptr [ebx + 0x588c3ed8]
        __asm _emit 0x3A
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C697: je 0x5885c6a1
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885C699: cmp al, byte ptr [ebx + 0x588c3edc]
        __asm _emit 0x3A
        __asm _emit 0x83
        __asm _emit 0xDC
        __asm _emit 0x3E
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x5885C69F: jne 0x5885c6eb
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x5885C6A1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C6A3: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C6A8: inc ebx
        __asm _emit 0x43
        // 0x5885C6A9: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C6AB: cmp ebx, 3
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x5885C6AE: jne 0x5885c68f
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x5885C6B0: push eax
        __asm _emit 0x50
        // 0x5885C6B1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C6B3: call 0x58861372
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C6B8: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5885C6BB: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5885C6BE: mov dword ptr [ebp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5885C6C1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C6C3: mov dword ptr [ebp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C6C6: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C6CB: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C6CD: cmp al, 0x28
        __asm _emit 0x3C
        __asm _emit 0x28
        // 0x5885C6CF: je 0x5885c6f7
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5885C6D1: lea ecx, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885C6D4: call 0x5885dc39
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C6D9: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5885C6DB: pop ecx
        __asm _emit 0x59
        // 0x5885C6DC: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885C6DE: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885C6E0: pop edx
        __asm _emit 0x5A
        // 0x5885C6E1: cmovne ecx, edx
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0xCA
        // 0x5885C6E4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5885C6E6: jmp 0x5885c773
        __asm _emit 0xE9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C6EB: lea ecx, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885C6EE: call 0x5885dc39
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C6F3: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5885C6F5: jmp 0x5885c772
        __asm _emit 0xEB
        __asm _emit 0x7B
        // 0x5885C6F7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C6F9: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C6FE: push esi
        __asm _emit 0x56
        // 0x5885C6FF: push edi
        __asm _emit 0x57
        // 0x5885C700: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C702: call 0x5885c826
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C707: pop ecx
        __asm _emit 0x59
        // 0x5885C708: pop ecx
        __asm _emit 0x59
        // 0x5885C709: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885C70B: je 0x5885c71c
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5885C70D: movzx eax, byte ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x07
        // 0x5885C710: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C712: push eax
        __asm _emit 0x50
        // 0x5885C713: call 0x58861372
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C718: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x5885C71A: jmp 0x5885c772
        __asm _emit 0xEB
        __asm _emit 0x56
        // 0x5885C71C: push esi
        __asm _emit 0x56
        // 0x5885C71D: push edi
        __asm _emit 0x57
        // 0x5885C71E: call 0x5885c7b2
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C723: pop ecx
        __asm _emit 0x59
        // 0x5885C724: pop ecx
        __asm _emit 0x59
        // 0x5885C725: mov cl, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x0F
        // 0x5885C727: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885C729: je 0x5885c737
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5885C72B: push ecx
        __asm _emit 0x51
        // 0x5885C72C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C72E: call 0x58861372
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C733: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x5885C735: jmp 0x5885c772
        __asm _emit 0xEB
        __asm _emit 0x3B
        // 0x5885C737: cmp cl, 0x29
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x29
        // 0x5885C73A: je 0x5885c770
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x5885C73C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5885C73E: je 0x5885c6d1
        __asm _emit 0x74
        __asm _emit 0x91
        // 0x5885C740: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C742: sub al, 0x30
        __asm _emit 0x2C
        __asm _emit 0x30
        // 0x5885C744: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5885C746: jbe 0x5885c761
        __asm _emit 0x76
        __asm _emit 0x19
        // 0x5885C748: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C74A: sub al, 0x61
        __asm _emit 0x2C
        __asm _emit 0x61
        // 0x5885C74C: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C74E: jbe 0x5885c761
        __asm _emit 0x76
        __asm _emit 0x11
        // 0x5885C750: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5885C752: sub al, 0x41
        __asm _emit 0x2C
        __asm _emit 0x41
        // 0x5885C754: cmp al, 0x19
        __asm _emit 0x3C
        __asm _emit 0x19
        // 0x5885C756: jbe 0x5885c761
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x5885C758: cmp cl, 0x5f
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x5F
        // 0x5885C75B: jne 0x5885c6d1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C761: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885C763: call 0x58860656
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C768: mov byte ptr [edi], al
        __asm _emit 0x88
        __asm _emit 0x07
        // 0x5885C76A: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x5885C76C: cmp al, 0x29
        __asm _emit 0x3C
        __asm _emit 0x29
        // 0x5885C76E: jne 0x5885c73c
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x5885C770: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885C772: pop eax
        __asm _emit 0x58
        // 0x5885C773: pop edi
        __asm _emit 0x5F
        // 0x5885C774: pop esi
        __asm _emit 0x5E
        // 0x5885C775: pop ebx
        __asm _emit 0x5B
        // 0x5885C776: leave
        __asm _emit 0xC9
        // 0x5885C777: ret
        __asm _emit 0xC3
    }
}
