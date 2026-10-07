// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 553 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a7f10.

// Ghidra body range 0x587A7F10..0x587A8139; 553 mapped bytes.
extern "C" __declspec(naked) void FUN_587a7f10_segment_00() {
    __asm {
        // 0x587A7F10: push ebp
        __asm _emit 0x55
        // 0x587A7F11: mov ebp, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A7F15: push esi
        __asm _emit 0x56
        // 0x587A7F16: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A7F1A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A7F1C: je 0x587a7f22
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A7F1E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A7F20: jne 0x587a7f39
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587A7F22: push 0x59e
        __asm _emit 0x68
        __asm _emit 0x9E
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7F27: push 0x589999a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A7F2C: push 0x589999d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A7F31: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x4F
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A7F36: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A7F39: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587A7F3E: je 0x587a7f46
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A7F40: mov cl, byte ptr [esi]
        __asm _emit 0x8A
        __asm _emit 0x0E
        // 0x587A7F42: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587A7F44: jmp 0x587a7f4c
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587A7F46: mov cl, byte ptr [esi + 8]
        __asm _emit 0x8A
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587A7F49: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587A7F4C: mov dl, byte ptr [ebp]
        __asm _emit 0x8A
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587A7F4F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587A7F51: shr eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x587A7F54: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587A7F57: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x587A7F59: shr esi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x0A
        // 0x587A7F5C: cmp dl, cl
        __asm _emit 0x3A
        __asm _emit 0xD1
        // 0x587A7F5E: je 0x587a7f71
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587A7F60: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587A7F63: jne 0x587a7fe1
        __asm _emit 0x75
        __asm _emit 0x7C
        // 0x587A7F65: cmp cl, 8
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x587A7F68: jne 0x587a7fe1
        __asm _emit 0x75
        __asm _emit 0x77
        // 0x587A7F6A: cmp dword ptr [esp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587A7F6F: je 0x587a7fe1
        __asm _emit 0x74
        __asm _emit 0x70
        // 0x587A7F71: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x587A7F74: add ecx, -2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xFE
        // 0x587A7F77: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x587A7F7A: ja 0x587a7fe1
        __asm _emit 0x77
        __asm _emit 0x65
        // 0x587A7F7C: jmp dword ptr [ecx*4 + 0x587a813c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x81
        __asm _emit 0x7A
        __asm _emit 0x58
        // 0x587A7F83: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587A7F86: movzx ecx, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7F8D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A7F8F: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587A7F91: pop esi
        __asm _emit 0x5E
        // 0x587A7F92: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x587A7F95: pop ebp
        __asm _emit 0x5D
        // 0x587A7F96: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A7F99: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x587A7F9C: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587A7F9F: ja 0x587a7fe1
        __asm _emit 0x77
        __asm _emit 0x40
        // 0x587A7FA1: jmp dword ptr [eax*4 + 0x587a8158]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x81
        __asm _emit 0x7A
        __asm _emit 0x58
        // 0x587A7FA8: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x587A7FAB: movzx eax, byte ptr [edx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7FB2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587A7FB4: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587A7FB6: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x587A7FB9: pop esi
        __asm _emit 0x5E
        // 0x587A7FBA: pop ebp
        __asm _emit 0x5D
        // 0x587A7FBB: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587A7FBD: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A7FC0: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587A7FC3: movzx edx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7FCA: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x587A7FCC: jne 0x587a7fe1
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587A7FCE: cmp dword ptr [eax + 0x60bc], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xBC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587A7FD5: jne 0x587a7fe1
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587A7FD7: pop esi
        __asm _emit 0x5E
        // 0x587A7FD8: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7FDD: pop ebp
        __asm _emit 0x5D
        // 0x587A7FDE: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A7FE1: pop esi
        __asm _emit 0x5E
        // 0x587A7FE2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A7FE4: pop ebp
        __asm _emit 0x5D
        // 0x587A7FE5: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A7FE8: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587A7FEB: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7FF1: movzx edx, word ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A7FF5: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587A7FF8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A7FFA: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x587A7FFC: pop esi
        __asm _emit 0x5E
        // 0x587A7FFD: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x587A8000: pop ebp
        __asm _emit 0x5D
        // 0x587A8001: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A8004: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587A8007: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A800D: movzx edx, word ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A8011: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A8013: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587A8016: shr ecx, 3
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x03
        // 0x587A8019: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587A801B: jne 0x587a7fe1
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x587A801D: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587A801F: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587A8022: cmp byte ptr [eax + 0x354], dl
        __asm _emit 0x38
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8028: jmp 0x587a7fd5
        __asm _emit 0xEB
        __asm _emit 0xAB
        // 0x587A802A: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587A802C: jne 0x587a8055
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587A802E: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587A8031: cmp dword ptr [eax + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8038: je 0x587a7fe1
        __asm _emit 0x74
        __asm _emit 0xA7
        // 0x587A803A: mov al, byte ptr [eax + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8040: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x587A8043: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587A8045: jne 0x587a7fe1
        __asm _emit 0x75
        __asm _emit 0x9A
        // 0x587A8047: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x587A8049: jbe 0x587a7fe1
        __asm _emit 0x76
        __asm _emit 0x96
        // 0x587A804B: pop esi
        __asm _emit 0x5E
        // 0x587A804C: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8051: pop ebp
        __asm _emit 0x5D
        // 0x587A8052: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A8055: push ebx
        __asm _emit 0x53
        // 0x587A8056: push edi
        __asm _emit 0x57
        // 0x587A8057: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587A8059: jne 0x587a80be
        __asm _emit 0x75
        __asm _emit 0x63
        // 0x587A805B: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A8061: mov ecx, dword ptr [edx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587A8067: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x587A8069: shr esi, 8
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x08
        // 0x587A806C: push esi
        __asm _emit 0x56
        // 0x587A806D: and edi, 0xf
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x0F
        // 0x587A8070: call 0x587765f0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xE5
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587A8075: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587A8077: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587A8079: je 0x587a80be
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x587A807B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A807D: je 0x587a80c7
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x587A807F: push edi
        __asm _emit 0x57
        // 0x587A8080: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587A8082: call 0x587352b0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xD2
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A8087: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587A8089: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A808B: je 0x587a80be
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x587A808D: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A8090: sub eax, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587A8093: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A8095: test eax, 0xfffffffc
        __asm _emit 0xA9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A809A: je 0x587a80be
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587A809C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587A80A0: push edi
        __asm _emit 0x57
        // 0x587A80A1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A80A3: call 0x587a7eb0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A80A8: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587A80AB: cmp ecx, dword ptr [ebp + 4]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x587A80AE: je 0x587a812d
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x587A80B0: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587A80B3: sub edx, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587A80B6: inc edi
        __asm _emit 0x47
        // 0x587A80B7: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587A80BA: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x587A80BC: jne 0x587a80a0
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x587A80BE: pop edi
        __asm _emit 0x5F
        // 0x587A80BF: pop ebx
        __asm _emit 0x5B
        // 0x587A80C0: pop esi
        __asm _emit 0x5E
        // 0x587A80C1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A80C3: pop ebp
        __asm _emit 0x5D
        // 0x587A80C4: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A80C7: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x587A80CA: sub eax, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x587A80CD: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587A80CF: test eax, 0xfffffffc
        __asm _emit 0xA9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A80D4: je 0x587a80be
        __asm _emit 0x74
        __asm _emit 0xE8
        // 0x587A80D6: push ebp
        __asm _emit 0x55
        // 0x587A80D7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587A80D9: call 0x587a7ee0
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A80DE: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587A80E0: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A80E2: je 0x587a8116
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x587A80E4: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587A80E7: sub ecx, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587A80EA: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A80EC: test ecx, 0xfffffffc
        __asm _emit 0xF7
        __asm _emit 0xC1
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A80F2: je 0x587a8116
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587A80F4: push edi
        __asm _emit 0x57
        // 0x587A80F5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A80F7: call 0x587a7eb0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A80FC: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587A80FF: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A8103: cmp edx, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587A8106: je 0x587a812d
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587A8108: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587A810B: sub ecx, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587A810E: inc edi
        __asm _emit 0x47
        // 0x587A810F: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587A8112: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587A8114: jne 0x587a80f4
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x587A8116: mov edx, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x1C
        // 0x587A8119: sub edx, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x53
        __asm _emit 0x18
        // 0x587A811C: inc ebp
        __asm _emit 0x45
        // 0x587A811D: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587A8120: cmp ebp, edx
        __asm _emit 0x3B
        __asm _emit 0xEA
        // 0x587A8122: jne 0x587a80d6
        __asm _emit 0x75
        __asm _emit 0xB2
        // 0x587A8124: pop edi
        __asm _emit 0x5F
        // 0x587A8125: pop ebx
        __asm _emit 0x5B
        // 0x587A8126: pop esi
        __asm _emit 0x5E
        // 0x587A8127: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8129: pop ebp
        __asm _emit 0x5D
        // 0x587A812A: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587A812D: pop edi
        __asm _emit 0x5F
        // 0x587A812E: pop ebx
        __asm _emit 0x5B
        // 0x587A812F: pop esi
        __asm _emit 0x5E
        // 0x587A8130: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8135: pop ebp
        __asm _emit 0x5D
        // 0x587A8136: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
