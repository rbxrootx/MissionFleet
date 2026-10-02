// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D494 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_5885d494() {
    __asm {
        // 0x5885D494: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D496: push ebp
        __asm _emit 0x55
        // 0x5885D497: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D499: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5885D49C: push ebx
        __asm _emit 0x53
        // 0x5885D49D: push esi
        __asm _emit 0x56
        // 0x5885D49E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885D4A0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885D4A2: push edi
        __asm _emit 0x57
        // 0x5885D4A3: cmp byte ptr [esi + 0x2e], bl
        __asm _emit 0x38
        __asm _emit 0x5E
        __asm _emit 0x2E
        // 0x5885D4A6: jne 0x5885d50b
        __asm _emit 0x75
        __asm _emit 0x63
        // 0x5885D4A8: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5885D4AB: lea edi, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5885D4AE: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x5885D4B1: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5885D4B3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5885D4B5: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885D4B7: jne 0x5885d4d2
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5885D4B9: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x4F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D4BE: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D4C4: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x3A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D4C9: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885D4CB: pop edi
        __asm _emit 0x5F
        // 0x5885D4CC: pop esi
        __asm _emit 0x5E
        // 0x5885D4CD: pop ebx
        __asm _emit 0x5B
        // 0x5885D4CE: leave
        __asm _emit 0xC9
        // 0x5885D4CF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D4D2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D4D4: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x01
        // 0x5885D4D7: or eax, 0
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x00
        // 0x5885D4DA: je 0x5885d50b
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5885D4DC: lea eax, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5885D4DF: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5885D4E2: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x5885D4E4: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885D4E6: jne 0x5885d50e
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x5885D4E8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D4EA: and eax, 4
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5885D4ED: or eax, edi
        __asm _emit 0x0B
        __asm _emit 0xC7
        // 0x5885D4EF: je 0x5885d4fe
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5885D4F1: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5885D4F4: call 0x58860697
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D4F9: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5885D4FB: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D4FE: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x4F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D503: mov dword ptr [eax], 0xc
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D509: jmp 0x5885d4c9
        __asm _emit 0xEB
        __asm _emit 0xBE
        // 0x5885D50B: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x5885D50E: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D512: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x5885D515: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D518: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5885D51B: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885D51E: mov dword ptr [ebp - 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xE8
        // 0x5885D521: mov dword ptr [ebp - 4], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xFC
        // 0x5885D524: je 0x5885d531
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885D526: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D529: je 0x5885d531
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885D52B: lea eax, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xFF
        // 0x5885D52E: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885D531: xorps xmm0, xmm0
        __asm _emit 0x0F
        __asm _emit 0x57
        __asm _emit 0xC0
        // 0x5885D534: movlpd qword ptr [ebp - 0x20], xmm0
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885D539: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE4
        // 0x5885D53C: mov edx, dword ptr [ebp - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE0
        // 0x5885D53F: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D542: or eax, dword ptr [ebp - 0x14]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885D545: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xF4
        // 0x5885D548: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xF8
        // 0x5885D54B: je 0x5885d557
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885D54D: cmp edx, dword ptr [ebp - 0x10]
        __asm _emit 0x3B
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x5885D550: jne 0x5885d557
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5885D552: cmp ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5885D555: je 0x5885d5bf
        __asm _emit 0x74
        __asm _emit 0x68
        // 0x5885D557: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5885D55A: call 0x58860697
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D55F: push eax
        __asm _emit 0x50
        // 0x5885D560: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885D563: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885D565: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5885D568: call 0x588606fd
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D56D: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885D56F: je 0x5885d5ad
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5885D571: cmp byte ptr [esi + 0x2e], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x2E
        __asm _emit 0x00
        // 0x5885D575: jne 0x5885d58e
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5885D577: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885D57A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885D57C: je 0x5885d59c
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5885D57E: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5885D581: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x5885D584: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5885D586: inc ecx
        __asm _emit 0x41
        // 0x5885D587: dec eax
        __asm _emit 0x48
        // 0x5885D588: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5885D58B: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885D58E: mov edx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xF4
        // 0x5885D591: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF8
        // 0x5885D594: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5885D597: adc ecx, 0
        __asm _emit 0x83
        __asm _emit 0xD1
        __asm _emit 0x00
        // 0x5885D59A: jmp 0x5885d53f
        __asm _emit 0xEB
        __asm _emit 0xA3
        // 0x5885D59C: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D59F: je 0x5885d4fe
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D5A5: mov byte ptr [ebx], 0
        __asm _emit 0xC6
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5885D5A8: jmp 0x5885d4fe
        __asm _emit 0xE9
        __asm _emit 0x51
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D5AD: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x5885D5B0: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5885D5B3: push edx
        __asm _emit 0x52
        // 0x5885D5B4: call 0x588613d7
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D5B9: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF8
        // 0x5885D5BC: mov edx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xF4
        // 0x5885D5BF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5885D5C1: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x5885D5C3: je 0x5885d4c9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D5C9: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D5CD: jne 0x5885d5e7
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885D5CF: cmp edx, dword ptr [ebp - 0x10]
        __asm _emit 0x3B
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x5885D5D2: jne 0x5885d5d9
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5885D5D4: cmp ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5885D5D7: je 0x5885d5e7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885D5D9: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D5DB: and eax, 4
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5885D5DE: or eax, 0
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x00
        // 0x5885D5E1: je 0x5885d4c9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D5E7: cmp byte ptr [esi + 0x2e], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x2E
        __asm _emit 0x00
        // 0x5885D5EB: jne 0x5885d5f9
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885D5ED: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D5F1: je 0x5885d5f9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885D5F3: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5885D5F6: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D5F9: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885D5FB: jmp 0x5885d4cb
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
