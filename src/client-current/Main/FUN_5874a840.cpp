// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 368 bytes in 1 exact ranges.
// Source symbol alias: FUN_5874a840.

// Ghidra body range 0x5874A840..0x5874A9B0; 368 mapped bytes.
extern "C" __declspec(naked) void FUN_5874a840_segment_00() {
    __asm {
        // 0x5874A840: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5874A843: push ebx
        __asm _emit 0x53
        // 0x5874A844: push ebp
        __asm _emit 0x55
        // 0x5874A845: push esi
        __asm _emit 0x56
        // 0x5874A846: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874A848: mov ebp, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x5874A84B: mov edx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A851: push edi
        __asm _emit 0x57
        // 0x5874A852: xor cl, cl
        __asm _emit 0x32
        __asm _emit 0xC9
        // 0x5874A854: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5874A856: lea edi, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0xD0
        // 0x5874A859: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874A85D: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874A861: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5874A864: je 0x5874a868
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x5874A866: mov cl, 1
        __asm _emit 0xB1
        __asm _emit 0x01
        // 0x5874A868: test dl, 2
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x5874A86B: je 0x5874a86f
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x5874A86D: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5874A86F: cmp cl, 1
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x5874A872: jne 0x5874a882
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5874A874: cmp al, cl
        __asm _emit 0x3A
        __asm _emit 0xC1
        // 0x5874A876: jne 0x5874a882
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5874A878: lea edi, [ebp - 0x34]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0xCC
        // 0x5874A87B: add ebp, -0x27
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0xD9
        // 0x5874A87E: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874A882: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5874A884: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x5874A888: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x01
        // 0x5874A88B: movzx bp, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xE9
        // 0x5874A88F: mov word ptr [esp + 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5874A894: add esi, 0x1d0
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A89A: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A89F: nop
        __asm _emit 0x90
        // 0x5874A8A0: mov eax, dword ptr [esi - 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF8
        // 0x5874A8A3: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5874A8A7: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A8AC: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5874A8AF: or cx, bp
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xCD
        // 0x5874A8B2: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5874A8B6: mov ecx, dword ptr [esi - 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xF8
        // 0x5874A8B9: push edi
        __asm _emit 0x57
        // 0x5874A8BA: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x8A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874A8BF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5874A8C1: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5874A8C5: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A8CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5874A8CD: or cx, word ptr [esp + 0x12]
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5874A8D2: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5874A8D6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874A8DA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5874A8DC: push eax
        __asm _emit 0x50
        // 0x5874A8DD: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x8A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874A8E2: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5874A8E5: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5874A8E8: jne 0x5874a8a0
        __asm _emit 0x75
        __asm _emit 0xB6
        // 0x5874A8EA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874A8EE: movzx edx, word ptr [ecx + 0x194]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A8F5: mov eax, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A8FB: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5874A8FE: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5874A901: movzx eax, word ptr [ecx + 0x194]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A908: pop edi
        __asm _emit 0x5F
        // 0x5874A909: pop esi
        __asm _emit 0x5E
        // 0x5874A90A: and eax, 3
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x5874A90D: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x5874A910: pop ebp
        __asm _emit 0x5D
        // 0x5874A911: pop ebx
        __asm _emit 0x5B
        // 0x5874A912: je 0x5874a969
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x5874A914: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5874A917: je 0x5874a95b
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5874A919: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5874A91C: jne 0x5874a9ac
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A922: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874A927: cmp dword ptr [eax + 0x170], 0x25
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x5874A92E: jle 0x5874a94f
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x5874A930: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A937: je 0x5874a94f
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5874A939: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A93F: mov eax, dword ptr [edx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A945: mov dword ptr [ecx + 0x1b8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A94B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874A94E: ret
        __asm _emit 0xC3
        // 0x5874A94F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874A951: mov dword ptr [ecx + 0x1b8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A957: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874A95A: ret
        __asm _emit 0xC3
        // 0x5874A95B: mov dword ptr [ecx + 0x1b8], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A965: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874A968: ret
        __asm _emit 0xC3
        // 0x5874A969: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874A96E: cmp dword ptr [eax + 0x170], 0x26
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        // 0x5874A975: jle 0x5874a98e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5874A977: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A97E: je 0x5874a98e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874A980: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A986: mov eax, dword ptr [eax + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A98C: jmp 0x5874a990
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874A98E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874A990: mov dword ptr [ecx + 0x1b8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874A996: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874A99C: cmp dword ptr [edx + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x5874A9A0: je 0x5874a9ac
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5874A9A2: mov dword ptr [ecx + 0x98], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5874A9AC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874A9AF: ret
        __asm _emit 0xC3
    }
}
