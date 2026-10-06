// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A6720 .. +0x2C5 bytes.
// Source symbol alias: FUN_588a6720.
extern "C" __declspec(naked) void FUN_588a6720() {
    __asm {
        // 0x588A6720: push ebx
        __asm _emit 0x53
        // 0x588A6721: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588A6723: push esi
        __asm _emit 0x56
        // 0x588A6724: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A6726: cmp dword ptr [esp + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A672A: je 0x588a678c
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x588A672C: cmp word ptr [esi + 0x9c], 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588A6734: jne 0x588a6758
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x588A6736: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A673C: mov dword ptr [esi + 0xa8], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6746: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A6748: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A674B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A674D: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6753: pop esi
        __asm _emit 0x5E
        // 0x588A6754: pop ebx
        __asm _emit 0x5B
        // 0x588A6755: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A6758: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A675E: mov ecx, dword ptr [edx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x54
        // 0x588A6761: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A6763: je 0x588a676f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588A6765: movzx eax, word ptr [ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588A6769: imul eax, dword ptr [ecx + 8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588A676D: jmp 0x588a6771
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A676F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A6771: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588A6774: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A677A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A677C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A677F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A6781: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6787: pop esi
        __asm _emit 0x5E
        // 0x588A6788: pop ebx
        __asm _emit 0x5B
        // 0x588A6789: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A678C: movzx eax, word ptr [esi + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6793: mov dword ptr [esi + 0x200], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6799: mov dword ptr [esi + 0xa0], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A67A3: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588A67A7: je 0x588a6895
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A67AD: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588A67B1: je 0x588a6895
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A67B7: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588A67BB: je 0x588a6895
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A67C1: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588A67C5: je 0x588a6895
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A67CB: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x588A67CF: je 0x588a6895
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A67D5: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588A67D9: je 0x588a6895
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A67DF: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x588A67E3: je 0x588a6895
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A67E9: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x588A67ED: jne 0x588a6802
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x588A67EF: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A67F5: cmp word ptr [ecx + 0x1b8], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A67FC: je 0x588a6895
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6802: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x588A6806: je 0x588a6895
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A680C: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6812: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x588A6816: jne 0x588a686d
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x588A6818: mov dword ptr [esi + 0xa8], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6822: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6824: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588A6827: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6829: mov ecx, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A682F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6831: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588A6834: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6836: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A683C: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588A683F: cmp dword ptr [edx + 0x608c], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xBA
        __asm _emit 0x8C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588A6849: jne 0x588a69a4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A684F: cmp dword ptr [esi + 0xa4], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6855: je 0x588a69a4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A685B: mov ecx, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6861: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A6863: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588A6866: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A6868: jmp 0x588a69a4
        __asm _emit 0xE9
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A686D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A686F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588A6872: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A6874: mov eax, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A687A: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588A687D: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6883: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A6885: call 0x587b95e0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x2D
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588A688A: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6890: jmp 0x588a69a4
        __asm _emit 0xE9
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6895: cmp dword ptr [esi + 0xa8], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A689B: jne 0x588a68c6
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x588A689D: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A68A3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A68A5: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A68A8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A68AA: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A68B0: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x588A68B3: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A68B9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A68BB: call 0x587b95e0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x2D
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588A68C0: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A68C6: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A68CC: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A68CF: mov eax, dword ptr [eax + 0x608c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A68D5: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588A68DA: jne 0x588a697a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A68E0: cmp dword ptr [esi + 0xa8], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A68E6: je 0x588a6929
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x588A68E8: movzx eax, word ptr [esi + 0x94]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A68EF: movzx ecx, word ptr [esi + 0x96]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A68F6: push eax
        __asm _emit 0x50
        // 0x588A68F7: push ecx
        __asm _emit 0x51
        // 0x588A68F8: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A68FE: call 0x587b9620
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x2D
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588A6903: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6909: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A690B: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A690E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6910: mov ecx, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6916: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6918: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A691B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A691D: mov dword ptr [esi + 0xa4], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6927: jmp 0x588a69a4
        __asm _emit 0xEB
        __asm _emit 0x7B
        // 0x588A6929: movzx ecx, word ptr [esi + 0x94]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6930: movzx edx, word ptr [esi + 0x96]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6937: push ecx
        __asm _emit 0x51
        // 0x588A6938: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A693E: push edx
        __asm _emit 0x52
        // 0x588A693F: call 0x587b9620
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x2C
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588A6944: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A694A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A694C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588A694F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A6951: mov ecx, dword ptr [esi + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6957: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A6959: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588A695C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A695E: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6964: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A6966: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A6969: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A696B: mov ecx, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6971: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A6973: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A6976: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A6978: jmp 0x588a69a4
        __asm _emit 0xEB
        __asm _emit 0x2A
        // 0x588A697A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A697C: jne 0x588a69a4
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x588A697E: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6984: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6989: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A698D: mov eax, dword ptr [esi + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6993: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588A6995: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588A6999: mov eax, dword ptr [esi + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A699F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588A69A4: movzx eax, word ptr [esi + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A69AB: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588A69AF: je 0x588a69b7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588A69B1: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588A69B5: jne 0x588a69e0
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x588A69B7: mov edx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A69BD: mov ecx, dword ptr [edx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x54
        // 0x588A69C0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A69C2: je 0x588a69ce
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588A69C4: movzx eax, word ptr [ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588A69C8: imul eax, dword ptr [ecx + 8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588A69CC: jmp 0x588a69d0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A69CE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A69D0: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588A69D3: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A69D9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A69DB: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A69DE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A69E0: pop esi
        __asm _emit 0x5E
        // 0x588A69E1: pop ebx
        __asm _emit 0x5B
        // 0x588A69E2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
