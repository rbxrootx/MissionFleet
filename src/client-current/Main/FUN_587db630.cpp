// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 493 bytes in 1 exact ranges.
// Source symbol alias: FUN_587db630.

// Ghidra body range 0x587DB630..0x587DB81D; 493 mapped bytes.
extern "C" __declspec(naked) void FUN_587db630_segment_00() {
    __asm {
        // 0x587DB630: push ecx
        __asm _emit 0x51
        // 0x587DB631: push ebx
        __asm _emit 0x53
        // 0x587DB632: push ebp
        __asm _emit 0x55
        // 0x587DB633: push edi
        __asm _emit 0x57
        // 0x587DB634: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587DB636: mov eax, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB63C: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB642: movzx eax, word ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587DB646: movzx ebx, word ptr [ecx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x59
        __asm _emit 0x02
        // 0x587DB64A: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587DB64C: and eax, 0x3e0
        __asm _emit 0x25
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB651: and ebp, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x1F
        // 0x587DB654: cmp eax, 0xa0
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB659: jne 0x587db813
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB65F: mov cx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0E
        // 0x587DB663: mov edx, 0xff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB668: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587DB66B: mov eax, 0x780
        __asm _emit 0xB8
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB670: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587DB673: jne 0x587db813
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB679: mov ecx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB67F: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB685: movzx eax, word ptr [edx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x0E
        // 0x587DB689: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x587DB68C: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587DB68F: push esi
        __asm _emit 0x56
        // 0x587DB690: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587DB692: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DB696: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB698: jle 0x587db78c
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB69E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587DB6A0: mov ecx, 0x73
        __asm _emit 0xB9
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB6A5: cmp ebx, 0x1be
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB6AB: jne 0x587db6ba
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587DB6AD: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587DB6B0: jl 0x587db6bf
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x587DB6B2: je 0x587db783
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB6B8: jmp 0x587db6c4
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587DB6BA: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x587DB6BD: jge 0x587db6c4
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587DB6BF: mov ecx, 0x78
        __asm _emit 0xB9
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB6C4: cmp ebp, 8
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x08
        // 0x587DB6C7: jne 0x587db6db
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587DB6C9: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x587DB6CC: je 0x587db783
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB6D2: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x587DB6D5: je 0x587db783
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB6DB: mov eax, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB6E1: mov eax, dword ptr [eax + esi*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB6E8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB6EA: je 0x587db797
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB6F0: movzx edx, word ptr [eax + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x5E
        // 0x587DB6F4: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x587DB6F7: xor edx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF2
        __asm _emit 0xAA
        // 0x587DB6FA: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB700: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587DB702: jb 0x587db7b6
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB708: mov eax, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB70E: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB714: movzx edx, byte ptr [ecx + 0x35c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB71B: mov eax, dword ptr [eax + esi*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB722: movzx ecx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCA
        // 0x587DB725: movzx edx, word ptr [eax + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x5E
        // 0x587DB729: mov eax, dword ptr [eax + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB72F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x587DB733: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x587DB735: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x587DB738: cmp ebx, 0x1be
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB73E: jne 0x587db74a
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587DB740: cmp ebp, 8
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x08
        // 0x587DB743: je 0x587db771
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x587DB745: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587DB748: jmp 0x587db757
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x587DB74A: cmp ebp, 8
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x08
        // 0x587DB74D: je 0x587db771
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587DB74F: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587DB752: je 0x587db759
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587DB754: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x587DB757: jne 0x587db771
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587DB759: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x587DB75C: je 0x587db768
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587DB75E: cmp eax, 0x12
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x12
        // 0x587DB761: je 0x587db768
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587DB763: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x587DB766: jne 0x587db7d5
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x587DB768: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587DB76B: jne 0x587db7f4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB771: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DB773: push esi
        __asm _emit 0x56
        // 0x587DB774: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587DB776: call 0x587da710
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB77B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DB77D: je 0x587db7ae
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587DB77F: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DB783: inc esi
        __asm _emit 0x46
        // 0x587DB784: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587DB786: jl 0x587db6a0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DB78C: pop esi
        __asm _emit 0x5E
        // 0x587DB78D: pop edi
        __asm _emit 0x5F
        // 0x587DB78E: pop ebp
        __asm _emit 0x5D
        // 0x587DB78F: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB794: pop ebx
        __asm _emit 0x5B
        // 0x587DB795: pop ecx
        __asm _emit 0x59
        // 0x587DB796: ret
        __asm _emit 0xC3
        // 0x587DB797: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB799: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB79B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB79D: push 0x4bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB7A2: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587DB7A7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DB7A9: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x95
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DB7AE: pop esi
        __asm _emit 0x5E
        // 0x587DB7AF: pop edi
        __asm _emit 0x5F
        // 0x587DB7B0: pop ebp
        __asm _emit 0x5D
        // 0x587DB7B1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB7B3: pop ebx
        __asm _emit 0x5B
        // 0x587DB7B4: pop ecx
        __asm _emit 0x59
        // 0x587DB7B5: ret
        __asm _emit 0xC3
        // 0x587DB7B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB7B8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB7BA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB7BC: push 0x4b9
        __asm _emit 0x68
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB7C1: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x03
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587DB7C6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DB7C8: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x95
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DB7CD: pop esi
        __asm _emit 0x5E
        // 0x587DB7CE: pop edi
        __asm _emit 0x5F
        // 0x587DB7CF: pop ebp
        __asm _emit 0x5D
        // 0x587DB7D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB7D2: pop ebx
        __asm _emit 0x5B
        // 0x587DB7D3: pop ecx
        __asm _emit 0x59
        // 0x587DB7D4: ret
        __asm _emit 0xC3
        // 0x587DB7D5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB7D7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB7D9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB7DB: push 0x4bb
        __asm _emit 0x68
        __asm _emit 0xBB
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB7E0: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x03
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587DB7E5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DB7E7: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x95
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DB7EC: pop esi
        __asm _emit 0x5E
        // 0x587DB7ED: pop edi
        __asm _emit 0x5F
        // 0x587DB7EE: pop ebp
        __asm _emit 0x5D
        // 0x587DB7EF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB7F1: pop ebx
        __asm _emit 0x5B
        // 0x587DB7F2: pop ecx
        __asm _emit 0x59
        // 0x587DB7F3: ret
        __asm _emit 0xC3
        // 0x587DB7F4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB7F6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB7F8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DB7FA: push 0x4be
        __asm _emit 0x68
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB7FF: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587DB804: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DB806: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x95
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DB80B: pop esi
        __asm _emit 0x5E
        // 0x587DB80C: pop edi
        __asm _emit 0x5F
        // 0x587DB80D: pop ebp
        __asm _emit 0x5D
        // 0x587DB80E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DB810: pop ebx
        __asm _emit 0x5B
        // 0x587DB811: pop ecx
        __asm _emit 0x59
        // 0x587DB812: ret
        __asm _emit 0xC3
        // 0x587DB813: pop edi
        __asm _emit 0x5F
        // 0x587DB814: pop ebp
        __asm _emit 0x5D
        // 0x587DB815: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DB81A: pop ebx
        __asm _emit 0x5B
        // 0x587DB81B: pop ecx
        __asm _emit 0x59
        // 0x587DB81C: ret
        __asm _emit 0xC3
    }
}
