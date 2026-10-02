// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D314 .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_5885d314() {
    __asm {
        // 0x5885D314: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D316: push ebp
        __asm _emit 0x55
        // 0x5885D317: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D319: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5885D31C: push ebx
        __asm _emit 0x53
        // 0x5885D31D: push esi
        __asm _emit 0x56
        // 0x5885D31E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885D320: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885D322: push edi
        __asm _emit 0x57
        // 0x5885D323: cmp byte ptr [esi + 0x26], bl
        __asm _emit 0x38
        __asm _emit 0x5E
        __asm _emit 0x26
        // 0x5885D326: jne 0x5885d394
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x5885D328: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5885D32B: lea edi, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5885D32E: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x5885D331: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5885D333: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5885D335: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885D337: jne 0x5885d352
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5885D339: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D33E: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D344: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x3C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D349: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885D34B: pop edi
        __asm _emit 0x5F
        // 0x5885D34C: pop esi
        __asm _emit 0x5E
        // 0x5885D34D: pop ebx
        __asm _emit 0x5B
        // 0x5885D34E: leave
        __asm _emit 0xC9
        // 0x5885D34F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D352: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D354: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x01
        // 0x5885D357: or eax, 0
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x00
        // 0x5885D35A: je 0x5885d394
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5885D35C: lea eax, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5885D35F: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5885D362: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x5885D364: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885D366: jne 0x5885d397
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x5885D368: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D36A: and eax, 4
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5885D36D: or eax, edi
        __asm _emit 0x0B
        __asm _emit 0xC7
        // 0x5885D36F: je 0x5885d387
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5885D371: push dword ptr [esi + 8]
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5885D374: call 0x5885a0c8
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D379: pop ecx
        __asm _emit 0x59
        // 0x5885D37A: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885D37D: je 0x5885d382
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5885D37F: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5885D382: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5885D384: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D387: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D38C: mov dword ptr [eax], 0xc
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D392: jmp 0x5885d349
        __asm _emit 0xEB
        __asm _emit 0xB5
        // 0x5885D394: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x5885D397: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D39B: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5885D39E: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D3A1: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x5885D3A4: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885D3A7: mov dword ptr [ebp - 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xE8
        // 0x5885D3AA: mov dword ptr [ebp - 4], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xFC
        // 0x5885D3AD: je 0x5885d3ba
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885D3AF: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D3B2: je 0x5885d3ba
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885D3B4: lea eax, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xFF
        // 0x5885D3B7: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885D3BA: xorps xmm0, xmm0
        __asm _emit 0x0F
        __asm _emit 0x57
        __asm _emit 0xC0
        // 0x5885D3BD: movlpd qword ptr [ebp - 0x20], xmm0
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885D3C2: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE4
        // 0x5885D3C5: mov edx, dword ptr [ebp - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE0
        // 0x5885D3C8: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D3CB: or eax, dword ptr [ebp - 0x14]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885D3CE: mov dword ptr [ebp - 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xF4
        // 0x5885D3D1: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xF8
        // 0x5885D3D4: je 0x5885d3e0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885D3D6: cmp edx, dword ptr [ebp - 0x10]
        __asm _emit 0x3B
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x5885D3D9: jne 0x5885d3e0
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5885D3DB: cmp ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5885D3DE: je 0x5885d453
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x5885D3E0: push dword ptr [esi + 8]
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5885D3E3: call 0x5885a0c8
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D3E8: pop ecx
        __asm _emit 0x59
        // 0x5885D3E9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885D3EB: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE4
        // 0x5885D3EE: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5885D3F1: je 0x5885d3f6
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5885D3F3: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5885D3F6: push ecx
        __asm _emit 0x51
        // 0x5885D3F7: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885D3FA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885D3FC: call 0x588606ad
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D401: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885D403: je 0x5885d441
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5885D405: cmp byte ptr [esi + 0x26], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x5885D409: jne 0x5885d422
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5885D40B: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885D40E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885D410: je 0x5885d430
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5885D412: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x5885D415: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5885D418: mov byte ptr [edx], al
        __asm _emit 0x88
        __asm _emit 0x02
        // 0x5885D41A: inc edx
        __asm _emit 0x42
        // 0x5885D41B: dec ecx
        __asm _emit 0x49
        // 0x5885D41C: mov dword ptr [ebp - 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x5885D41F: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885D422: mov edx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xF4
        // 0x5885D425: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF8
        // 0x5885D428: add edx, 1
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5885D42B: adc ecx, 0
        __asm _emit 0x83
        __asm _emit 0xD1
        __asm _emit 0x00
        // 0x5885D42E: jmp 0x5885d3c8
        __asm _emit 0xEB
        __asm _emit 0x98
        // 0x5885D430: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D433: je 0x5885d387
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D439: mov byte ptr [ebx], 0
        __asm _emit 0xC6
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5885D43C: jmp 0x5885d387
        __asm _emit 0xE9
        __asm _emit 0x46
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D441: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5885D444: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5885D447: push eax
        __asm _emit 0x50
        // 0x5885D448: call 0x588613b9
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D44D: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF8
        // 0x5885D450: mov edx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xF4
        // 0x5885D453: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5885D455: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x5885D457: je 0x5885d349
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D45D: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D461: jne 0x5885d47b
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885D463: cmp edx, dword ptr [ebp - 0x10]
        __asm _emit 0x3B
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x5885D466: jne 0x5885d46d
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5885D468: cmp ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5885D46B: je 0x5885d47b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885D46D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885D46F: and eax, 4
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5885D472: or eax, 0
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x00
        // 0x5885D475: je 0x5885d349
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D47B: cmp byte ptr [esi + 0x26], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x5885D47F: jne 0x5885d48d
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885D481: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885D485: je 0x5885d48d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885D487: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5885D48A: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D48D: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885D48F: jmp 0x5885d34b
        __asm _emit 0xE9
        __asm _emit 0xB7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
