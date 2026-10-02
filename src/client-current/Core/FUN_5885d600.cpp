// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D600 .. +0x18C bytes.
extern "C" __declspec(naked) void FUN_5885d600() {
    __asm {
        // 0x5885D600: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D602: push ebp
        __asm _emit 0x55
        // 0x5885D603: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D605: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5885D608: push ebx
        __asm _emit 0x53
        // 0x5885D609: push esi
        __asm _emit 0x56
        // 0x5885D60A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885D60C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885D60E: push edi
        __asm _emit 0x57
        // 0x5885D60F: cmp byte ptr [esi + 0x26], bl
        __asm _emit 0x38
        __asm _emit 0x5E
        __asm _emit 0x26
        // 0x5885D612: jne 0x5885d682
        __asm _emit 0x75
        __asm _emit 0x6E
        // 0x5885D614: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5885D617: lea edi, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5885D61A: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x5885D61D: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5885D61F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5885D621: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885D623: jne 0x5885d63e
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5885D625: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x4E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D62A: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D630: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x39
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D635: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885D637: pop edi
        __asm _emit 0x5F
        // 0x5885D638: pop esi
        __asm _emit 0x5E
        // 0x5885D639: pop ebx
        __asm _emit 0x5B
        // 0x5885D63A: leave
        __asm _emit 0xC9
        // 0x5885D63B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D63E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D640: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x01
        // 0x5885D643: or eax, 0
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x00
        // 0x5885D646: je 0x5885d682
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5885D648: lea eax, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5885D64B: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5885D64E: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x5885D650: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885D652: jne 0x5885d685
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x5885D654: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D656: and eax, 4
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5885D659: or eax, edi
        __asm _emit 0x0B
        __asm _emit 0xC7
        // 0x5885D65B: je 0x5885d675
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5885D65D: push dword ptr [esi + 8]
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5885D660: call 0x5885a0c8
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D665: pop ecx
        __asm _emit 0x59
        // 0x5885D666: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885D669: je 0x5885d66e
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5885D66B: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5885D66E: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5885D670: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885D672: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5885D675: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D67A: mov dword ptr [eax], 0xc
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D680: jmp 0x5885d635
        __asm _emit 0xEB
        __asm _emit 0xB3
        // 0x5885D682: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x5885D685: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D689: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5885D68C: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D68F: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x5885D692: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885D695: mov dword ptr [ebp - 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xE0
        // 0x5885D698: mov dword ptr [ebp - 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x5885D69B: je 0x5885d6a8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885D69D: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D6A0: je 0x5885d6a8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885D6A2: lea eax, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xFF
        // 0x5885D6A5: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885D6A8: xorps xmm0, xmm0
        __asm _emit 0x0F
        __asm _emit 0x57
        __asm _emit 0xC0
        // 0x5885D6AB: movlpd qword ptr [ebp - 0x1c], xmm0
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5885D6B0: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5885D6B3: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x5885D6B6: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D6B9: or eax, dword ptr [ebp - 0x14]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885D6BC: mov dword ptr [ebp - 8], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xF8
        // 0x5885D6BF: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885D6C2: je 0x5885d6ce
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885D6C4: cmp edx, dword ptr [ebp - 0x10]
        __asm _emit 0x3B
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x5885D6C7: jne 0x5885d6ce
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5885D6C9: cmp ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5885D6CC: je 0x5885d749
        __asm _emit 0x74
        __asm _emit 0x7B
        // 0x5885D6CE: push dword ptr [esi + 8]
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5885D6D1: call 0x5885a0c8
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D6D6: pop ecx
        __asm _emit 0x59
        // 0x5885D6D7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885D6D9: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5885D6DC: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5885D6DF: je 0x5885d6e4
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5885D6E1: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5885D6E4: push ecx
        __asm _emit 0x51
        // 0x5885D6E5: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885D6E8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885D6EA: call 0x588606ad
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x2F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D6EF: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885D6F1: je 0x5885d738
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x5885D6F3: cmp byte ptr [esi + 0x26], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x5885D6F7: jne 0x5885d717
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5885D6F9: cmp dword ptr [ebp - 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xF4
        __asm _emit 0x00
        // 0x5885D6FD: je 0x5885d725
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5885D6FF: push dword ptr [ebp - 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5885D702: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885D705: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885D707: push eax
        __asm _emit 0x50
        // 0x5885D708: lea eax, [ebp - 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885D70B: push eax
        __asm _emit 0x50
        // 0x5885D70C: push edi
        __asm _emit 0x57
        // 0x5885D70D: push ebx
        __asm _emit 0x53
        // 0x5885D70E: call 0x58861476
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D713: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885D715: je 0x5885d743
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5885D717: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xF8
        // 0x5885D71A: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885D71D: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5885D720: adc ecx, 0
        __asm _emit 0x83
        __asm _emit 0xD1
        __asm _emit 0x00
        // 0x5885D723: jmp 0x5885d6b6
        __asm _emit 0xEB
        __asm _emit 0x91
        // 0x5885D725: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D728: je 0x5885d675
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D72E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885D730: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x5885D733: jmp 0x5885d675
        __asm _emit 0xE9
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D738: push dword ptr [ebp - 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5885D73B: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5885D73E: call 0x588613b9
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D743: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xF8
        // 0x5885D746: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885D749: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5885D74B: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x5885D74D: je 0x5885d635
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D753: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D757: jne 0x5885d771
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885D759: cmp edx, dword ptr [ebp - 0x10]
        __asm _emit 0x3B
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x5885D75C: jne 0x5885d763
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5885D75E: cmp ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5885D761: je 0x5885d771
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885D763: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D765: and eax, 4
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5885D768: or eax, 0
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x00
        // 0x5885D76B: je 0x5885d635
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D771: cmp byte ptr [esi + 0x26], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x5885D775: jne 0x5885d785
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5885D777: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D77B: je 0x5885d785
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5885D77D: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x5885D780: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5885D782: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5885D785: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885D787: jmp 0x5885d637
        __asm _emit 0xE9
        __asm _emit 0xAB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
