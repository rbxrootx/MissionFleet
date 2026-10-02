// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885AC64 .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_5885ac64() {
    __asm {
        // 0x5885AC64: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885AC66: push ebp
        __asm _emit 0x55
        // 0x5885AC67: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885AC69: push ebx
        __asm _emit 0x53
        // 0x5885AC6A: push esi
        __asm _emit 0x56
        // 0x5885AC6B: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885AC6E: push edi
        __asm _emit 0x57
        // 0x5885AC6F: lea edx, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5885AC72: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5885AC74: nop
        __asm _emit 0x90
        // 0x5885AC75: shr eax, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0C
        // 0x5885AC78: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885AC7A: jne 0x5885acef
        __asm _emit 0x75
        __asm _emit 0x73
        // 0x5885AC7C: push esi
        __asm _emit 0x56
        // 0x5885AC7D: call 0x5886cc56
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x1F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885AC82: mov edi, 0x58907530
        __asm _emit 0xBF
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885AC87: pop ecx
        __asm _emit 0x59
        // 0x5885AC88: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885AC8B: je 0x5885aca8
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5885AC8D: cmp eax, -2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFE
        // 0x5885AC90: je 0x5885aca8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5885AC92: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5885AC94: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885AC96: and edx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x3F
        // 0x5885AC99: sar ecx, 6
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5885AC9C: imul ebx, edx, 0x38
        __asm _emit 0x6B
        __asm _emit 0xDA
        __asm _emit 0x38
        // 0x5885AC9F: add ebx, dword ptr [ecx*4 + 0x589699b0]
        __asm _emit 0x03
        __asm _emit 0x1C
        __asm _emit 0x8D
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5885ACA6: jmp 0x5885acb4
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5885ACA8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885ACAA: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5885ACAC: sar ecx, 6
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5885ACAF: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x5885ACB1: and edx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x3F
        // 0x5885ACB4: cmp byte ptr [ebx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7B
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x5885ACB8: jne 0x5885acd4
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5885ACBA: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885ACBD: je 0x5885acce
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5885ACBF: cmp eax, -2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFE
        // 0x5885ACC2: je 0x5885acce
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885ACC4: imul edi, edx, 0x38
        __asm _emit 0x6B
        __asm _emit 0xFA
        __asm _emit 0x38
        // 0x5885ACC7: add edi, dword ptr [ecx*4 + 0x589699b0]
        __asm _emit 0x03
        __asm _emit 0x3C
        __asm _emit 0x8D
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5885ACCE: test byte ptr [edi + 0x2d], 1
        __asm _emit 0xF6
        __asm _emit 0x47
        __asm _emit 0x2D
        __asm _emit 0x01
        // 0x5885ACD2: je 0x5885acec
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5885ACD4: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885ACD9: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885ACDF: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x62
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885ACE4: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885ACE7: pop edi
        __asm _emit 0x5F
        // 0x5885ACE8: pop esi
        __asm _emit 0x5E
        // 0x5885ACE9: pop ebx
        __asm _emit 0x5B
        // 0x5885ACEA: pop ebp
        __asm _emit 0x5D
        // 0x5885ACEB: ret
        __asm _emit 0xC3
        // 0x5885ACEC: lea edx, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5885ACEF: mov ebx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x5885ACF2: cmp ebx, -1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5885ACF5: je 0x5885ace4
        __asm _emit 0x74
        __asm _emit 0xED
        // 0x5885ACF7: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5885ACF9: nop
        __asm _emit 0x90
        // 0x5885ACFA: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x5885ACFC: nop
        __asm _emit 0x90
        // 0x5885ACFD: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885ACFF: jne 0x5885ad09
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885AD01: and ecx, 6
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x06
        // 0x5885AD04: cmp cl, 6
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5885AD07: jne 0x5885ace4
        __asm _emit 0x75
        __asm _emit 0xDB
        // 0x5885AD09: cmp dword ptr [esi + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885AD0D: jne 0x5885ad19
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5885AD0F: push esi
        __asm _emit 0x56
        // 0x5885AD10: call 0x5887136c
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885AD15: pop ecx
        __asm _emit 0x59
        // 0x5885AD16: lea edx, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5885AD19: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885AD1B: cmp eax, dword ptr [esi + 4]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5885AD1E: jne 0x5885ad29
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5885AD20: cmp dword ptr [esi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885AD24: jne 0x5885ace4
        __asm _emit 0x75
        __asm _emit 0xBE
        // 0x5885AD26: inc eax
        __asm _emit 0x40
        // 0x5885AD27: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x5885AD29: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5885AD2B: nop
        __asm _emit 0x90
        // 0x5885AD2C: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x5885AD2E: shr eax, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0C
        // 0x5885AD31: lea ecx, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0xFF
        // 0x5885AD34: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x5885AD36: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885AD38: je 0x5885ad42
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885AD3A: cmp byte ptr [ecx], bl
        __asm _emit 0x38
        __asm _emit 0x19
        // 0x5885AD3C: je 0x5885ad44
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885AD3E: mov dword ptr [esi], edi
        __asm _emit 0x89
        __asm _emit 0x3E
        // 0x5885AD40: jmp 0x5885ace4
        __asm _emit 0xEB
        __asm _emit 0xA2
        // 0x5885AD42: mov byte ptr [ecx], bl
        __asm _emit 0x88
        __asm _emit 0x19
        // 0x5885AD44: inc dword ptr [esi + 8]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5885AD47: push -9
        __asm _emit 0x6A
        __asm _emit 0xF7
        // 0x5885AD49: pop eax
        __asm _emit 0x58
        // 0x5885AD4A: lock and dword ptr [edx], eax
        __asm _emit 0xF0
        __asm _emit 0x21
        __asm _emit 0x02
        // 0x5885AD4D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885AD4F: inc eax
        __asm _emit 0x40
        // 0x5885AD50: lock or dword ptr [edx], eax
        __asm _emit 0xF0
        __asm _emit 0x09
        __asm _emit 0x02
        // 0x5885AD53: movzx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC3
        // 0x5885AD56: jmp 0x5885ace7
        __asm _emit 0xEB
        __asm _emit 0x8F
    }
}
