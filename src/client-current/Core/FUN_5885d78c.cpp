// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D78C .. +0x178 bytes.
extern "C" __declspec(naked) void FUN_5885d78c() {
    __asm {
        // 0x5885D78C: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D78E: push ebp
        __asm _emit 0x55
        // 0x5885D78F: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D791: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5885D794: push ebx
        __asm _emit 0x53
        // 0x5885D795: push esi
        __asm _emit 0x56
        // 0x5885D796: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885D798: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885D79A: push edi
        __asm _emit 0x57
        // 0x5885D79B: cmp byte ptr [esi + 0x2e], bl
        __asm _emit 0x38
        __asm _emit 0x5E
        __asm _emit 0x2E
        // 0x5885D79E: jne 0x5885d805
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x5885D7A0: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5885D7A3: lea edi, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5885D7A6: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x5885D7A9: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5885D7AB: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5885D7AD: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885D7AF: jne 0x5885d7ca
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5885D7B1: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D7B6: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D7BC: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x37
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D7C1: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885D7C3: pop edi
        __asm _emit 0x5F
        // 0x5885D7C4: pop esi
        __asm _emit 0x5E
        // 0x5885D7C5: pop ebx
        __asm _emit 0x5B
        // 0x5885D7C6: leave
        __asm _emit 0xC9
        // 0x5885D7C7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D7CA: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D7CC: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x01
        // 0x5885D7CF: or eax, 0
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x00
        // 0x5885D7D2: je 0x5885d805
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5885D7D4: lea eax, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5885D7D7: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5885D7DA: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x5885D7DC: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885D7DE: jne 0x5885d808
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x5885D7E0: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D7E2: and eax, 4
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5885D7E5: or eax, edi
        __asm _emit 0x0B
        __asm _emit 0xC7
        // 0x5885D7E7: je 0x5885d7f8
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5885D7E9: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5885D7EC: call 0x58860697
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D7F1: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5885D7F3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885D7F5: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5885D7F8: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D7FD: mov dword ptr [eax], 0xc
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D803: jmp 0x5885d7c1
        __asm _emit 0xEB
        __asm _emit 0xBC
        // 0x5885D805: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x5885D808: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D80C: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x5885D80F: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D812: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5885D815: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885D818: mov dword ptr [ebp - 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xE0
        // 0x5885D81B: mov dword ptr [ebp - 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885D81E: je 0x5885d82b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885D820: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D823: je 0x5885d82b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885D825: lea eax, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xFF
        // 0x5885D828: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885D82B: xorps xmm0, xmm0
        __asm _emit 0x0F
        __asm _emit 0x57
        __asm _emit 0xC0
        // 0x5885D82E: movlpd qword ptr [ebp - 0x1c], xmm0
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5885D833: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5885D836: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x5885D839: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D83C: or eax, dword ptr [ebp - 0x14]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885D83F: mov dword ptr [ebp - 8], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xF8
        // 0x5885D842: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885D845: je 0x5885d851
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885D847: cmp edx, dword ptr [ebp - 0x10]
        __asm _emit 0x3B
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x5885D84A: jne 0x5885d851
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5885D84C: cmp ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5885D84F: je 0x5885d8c1
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x5885D851: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5885D854: call 0x58860697
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D859: push eax
        __asm _emit 0x50
        // 0x5885D85A: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885D85D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885D85F: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5885D862: call 0x588606fd
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D867: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885D869: je 0x5885d8b0
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x5885D86B: cmp byte ptr [esi + 0x2e], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x2E
        __asm _emit 0x00
        // 0x5885D86F: jne 0x5885d88f
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5885D871: cmp dword ptr [ebp - 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xF4
        __asm _emit 0x00
        // 0x5885D875: je 0x5885d89d
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5885D877: push dword ptr [ebp - 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5885D87A: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885D87D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885D87F: push eax
        __asm _emit 0x50
        // 0x5885D880: lea eax, [ebp - 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885D883: push eax
        __asm _emit 0x50
        // 0x5885D884: push edi
        __asm _emit 0x57
        // 0x5885D885: push ebx
        __asm _emit 0x53
        // 0x5885D886: call 0x588614ec
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D88B: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885D88D: je 0x5885d8bb
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5885D88F: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xF8
        // 0x5885D892: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885D895: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5885D898: adc ecx, 0
        __asm _emit 0x83
        __asm _emit 0xD1
        __asm _emit 0x00
        // 0x5885D89B: jmp 0x5885d839
        __asm _emit 0xEB
        __asm _emit 0x9C
        // 0x5885D89D: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D8A0: je 0x5885d7f8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D8A6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885D8A8: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x5885D8AB: jmp 0x5885d7f8
        __asm _emit 0xE9
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D8B0: push dword ptr [ebp - 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5885D8B3: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5885D8B6: call 0x588613d7
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x3B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D8BB: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xF8
        // 0x5885D8BE: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885D8C1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5885D8C3: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x5885D8C5: je 0x5885d7c1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF6
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D8CB: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D8CF: jne 0x5885d8e9
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885D8D1: cmp edx, dword ptr [ebp - 0x10]
        __asm _emit 0x3B
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x5885D8D4: jne 0x5885d8db
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5885D8D6: cmp ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5885D8D9: je 0x5885d8e9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885D8DB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D8DD: and eax, 4
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5885D8E0: or eax, 0
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x00
        // 0x5885D8E3: je 0x5885d7c1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D8E9: cmp byte ptr [esi + 0x2e], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x2E
        __asm _emit 0x00
        // 0x5885D8ED: jne 0x5885d8fd
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5885D8EF: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D8F3: je 0x5885d8fd
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885D8F5: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x5885D8F8: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5885D8FA: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5885D8FD: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885D8FF: jmp 0x5885d7c3
        __asm _emit 0xE9
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
