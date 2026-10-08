// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1737 bytes in 9 exact ranges.
// Source symbol alias: FUN_5876f620.

// Ghidra body range 0x5876F620..0x5876F633; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f620_segment_00() {
    __asm {
        // 0x5876F620: push ebx
        __asm _emit 0x53
        // 0x5876F621: push ebp
        __asm _emit 0x55
        // 0x5876F622: push esi
        __asm _emit 0x56
        // 0x5876F623: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876F625: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876F628: push edi
        __asm _emit 0x57
        // 0x5876F629: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876F62B: je 0x5876f63d
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5876F62D: push eax
        __asm _emit 0x50
        // 0x5876F62E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xD6
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5876F63D..0x5876F83A; 509 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f620_segment_01() {
    __asm {
        // 0x5876F63D: mov bl, byte ptr [esp + 0x14]
        __asm _emit 0x8A
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876F641: cmp bl, 1
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x5876F644: jne 0x5876f64d
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5876F646: mov edi, 9
        __asm _emit 0xBF
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F64B: jmp 0x5876f65e
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x5876F64D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876F64F: cmp bl, 2
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x5876F652: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5876F655: lea eax, [eax*4 + 3]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F65C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5876F65E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5876F660: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5876F662: mov edx, 0x418
        __asm _emit 0xBA
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F667: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5876F669: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x5876F66C: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x5876F66E: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5876F670: push ecx
        __asm _emit 0x51
        // 0x5876F671: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x1E
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5876F676: imul edi, edi, 0x418
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F67C: push edi
        __asm _emit 0x57
        // 0x5876F67D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876F67F: push eax
        __asm _emit 0x50
        // 0x5876F680: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876F683: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xD5
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5876F688: movzx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC3
        // 0x5876F68B: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F690: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5876F693: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5876F695: je 0x5876fa4e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F69B: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5876F69D: je 0x5876f7c9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F6A3: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5876F6A5: jne 0x5876fd0b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F6AB: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876F6B1: push 0x58996128
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x61
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F6B6: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876F6B8: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F6BB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F6BE: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F6C3: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876F6C9: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876F6CB: je 0x5876f6df
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876F6CD: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876F6CF: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876F6D1: je 0x5876f6df
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876F6D3: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876F6D5: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5876F6D7: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876F6D9: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5876F6DB: jne 0x5876f6c3
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5876F6DD: jmp 0x5876f6e3
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876F6DF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876F6E1: jne 0x5876f6e5
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5876F6E3: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876F6E5: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876F6E8: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876F6EB: mov dword ptr [eax + 0x404], 0x38f
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F6F5: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F6F8: push 0x589960f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x60
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F6FD: mov dword ptr [ecx + 0x408], 0x23a
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F707: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876F709: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F70C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F70F: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F714: add ecx, 0x418
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F71A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F720: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876F726: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876F728: je 0x5876f73c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876F72A: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876F72C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876F72E: je 0x5876f73c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876F730: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876F732: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5876F734: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876F736: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5876F738: jne 0x5876f720
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5876F73A: jmp 0x5876f740
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876F73C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876F73E: jne 0x5876f742
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5876F740: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876F742: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876F745: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F748: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876F74A: mov dword ptr [ecx + 0x81c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F750: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876F753: mov dword ptr [edx + 0x820], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F759: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876F75C: push 0x589960c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x60
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F761: mov dword ptr [eax + 0x818], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F767: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876F769: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F76C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F76F: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F774: add ecx, 0x830
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F77A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F780: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876F786: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876F788: je 0x5876f79c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876F78A: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876F78C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876F78E: je 0x5876f79c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876F790: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876F792: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5876F794: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876F796: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5876F798: jne 0x5876f780
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5876F79A: jmp 0x5876f7a0
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876F79C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876F79E: jne 0x5876f7a2
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5876F7A0: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876F7A2: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876F7A5: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F7A8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876F7AA: mov dword ptr [ecx + 0xc34], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F7B0: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876F7B3: pop edi
        __asm _emit 0x5F
        // 0x5876F7B4: mov dword ptr [edx + 0xc38], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x38
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F7BA: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876F7BD: pop esi
        __asm _emit 0x5E
        // 0x5876F7BE: mov dword ptr [eax + 0xc30], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x30
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F7C4: pop ebp
        __asm _emit 0x5D
        // 0x5876F7C5: pop ebx
        __asm _emit 0x5B
        // 0x5876F7C6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5876F7C9: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876F7CF: push 0x58996098
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F7D4: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876F7D6: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F7D9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F7DC: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F7E1: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876F7E7: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876F7E9: je 0x5876f7fd
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876F7EB: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876F7ED: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876F7EF: je 0x5876f7fd
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876F7F1: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876F7F3: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5876F7F5: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876F7F7: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5876F7F9: jne 0x5876f7e1
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5876F7FB: jmp 0x5876f801
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876F7FD: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876F7FF: jne 0x5876f803
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5876F801: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876F803: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876F806: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876F809: mov dword ptr [eax + 0x404], 0x38f
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F813: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F816: push 0x58996068
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F81B: mov dword ptr [ecx + 0x408], 0x23a
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F825: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876F827: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F82A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F82D: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F832: add ecx, 0x418
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F838: jmp 0x5876f840
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x5876F840..0x5876F949; 265 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f620_segment_02() {
    __asm {
        // 0x5876F840: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876F846: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876F848: je 0x5876f85c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876F84A: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876F84C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876F84E: je 0x5876f85c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876F850: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876F852: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5876F854: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876F856: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5876F858: jne 0x5876f840
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5876F85A: jmp 0x5876f860
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876F85C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876F85E: jne 0x5876f862
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5876F860: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876F862: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876F865: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F868: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876F86A: mov dword ptr [ecx + 0x81c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F870: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876F873: push 0x58996038
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x60
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F878: mov dword ptr [edx + 0x820], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F87E: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876F880: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F883: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F886: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F88B: add ecx, 0x830
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F891: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876F897: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876F899: je 0x5876f8ad
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876F89B: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876F89D: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876F89F: je 0x5876f8ad
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876F8A1: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876F8A3: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5876F8A5: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876F8A7: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5876F8A9: jne 0x5876f891
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5876F8AB: jmp 0x5876f8b1
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876F8AD: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876F8AF: jne 0x5876f8b3
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5876F8B1: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876F8B3: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876F8B6: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F8B9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876F8BB: mov dword ptr [ecx + 0xc34], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F8C1: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876F8C4: push 0x58996008
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x60
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F8C9: mov dword ptr [edx + 0xc38], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x38
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F8CF: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876F8D1: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F8D4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F8D7: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F8DC: add ecx, 0xc48
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x48
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F8E2: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876F8E8: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876F8EA: je 0x5876f8fe
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876F8EC: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876F8EE: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876F8F0: je 0x5876f8fe
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876F8F2: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876F8F4: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5876F8F6: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876F8F8: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5876F8FA: jne 0x5876f8e2
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5876F8FC: jmp 0x5876f902
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876F8FE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876F900: jne 0x5876f904
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5876F902: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876F904: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876F907: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876F90A: mov dword ptr [eax + 0x104c], 0x22d
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x4C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F914: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F917: mov ebp, 0x1fd
        __asm _emit 0xBD
        __asm _emit 0xFD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F91C: mov dword ptr [ecx + 0x1050], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F922: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876F925: push 0x58995fd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x5F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F92A: mov dword ptr [edx + 0x1048], 1
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F934: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876F936: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F939: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F93C: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F941: add ecx, 0x1060
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F947: jmp 0x5876f950
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5876F950..0x5876FA0D; 189 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f620_segment_03() {
    __asm {
        // 0x5876F950: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876F956: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876F958: je 0x5876f96b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5876F95A: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876F95C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876F95E: je 0x5876f96b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876F960: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876F962: inc ecx
        __asm _emit 0x41
        // 0x5876F963: inc eax
        __asm _emit 0x40
        // 0x5876F964: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5876F967: jne 0x5876f950
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876F969: jmp 0x5876f96f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876F96B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876F96D: jne 0x5876f970
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5876F96F: dec ecx
        __asm _emit 0x49
        // 0x5876F970: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876F973: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F976: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876F978: mov dword ptr [ecx + 0x1464], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F97E: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876F981: push 0x58995fa8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x5F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F986: mov dword ptr [edx + 0x1468], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F98C: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876F98E: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F991: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876F994: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F999: add ecx, 0x1478
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F99F: nop
        __asm _emit 0x90
        // 0x5876F9A0: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876F9A6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876F9A8: je 0x5876f9bb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5876F9AA: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876F9AC: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876F9AE: je 0x5876f9bb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876F9B0: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876F9B2: inc ecx
        __asm _emit 0x41
        // 0x5876F9B3: inc eax
        __asm _emit 0x40
        // 0x5876F9B4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5876F9B7: jne 0x5876f9a0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876F9B9: jmp 0x5876f9bf
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876F9BB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876F9BD: jne 0x5876f9c0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5876F9BF: dec ecx
        __asm _emit 0x49
        // 0x5876F9C0: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876F9C3: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876F9C6: mov dword ptr [eax + 0x187c], 0x22d
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F9D0: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F9D3: mov dword ptr [ecx + 0x1880], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F9D9: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876F9DC: mov dword ptr [edx + 0x1884], 0x128
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F9E6: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876F9E9: push 0x58995f78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x5F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876F9EE: mov dword ptr [eax + 0x1888], 0x118
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F9F8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876F9FA: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876F9FD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876FA00: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FA05: add ecx, 0x1890
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FA0B: jmp 0x5876fa10
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5876FA10..0x5876FB9A; 394 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f620_segment_04() {
    __asm {
        // 0x5876FA10: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876FA16: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876FA18: je 0x5876fa2b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5876FA1A: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876FA1C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876FA1E: je 0x5876fa2b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876FA20: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876FA22: inc ecx
        __asm _emit 0x41
        // 0x5876FA23: inc eax
        __asm _emit 0x40
        // 0x5876FA24: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5876FA27: jne 0x5876fa10
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876FA29: jmp 0x5876fa2f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876FA2B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876FA2D: jne 0x5876fa30
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5876FA2F: dec ecx
        __asm _emit 0x49
        // 0x5876FA30: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876FA33: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FA36: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876FA38: pop edi
        __asm _emit 0x5F
        // 0x5876FA39: mov dword ptr [ecx + 0x1c94], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FA3F: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876FA42: pop esi
        __asm _emit 0x5E
        // 0x5876FA43: pop ebp
        __asm _emit 0x5D
        // 0x5876FA44: mov dword ptr [edx + 0x1c98], eax
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FA4A: pop ebx
        __asm _emit 0x5B
        // 0x5876FA4B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5876FA4E: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876FA54: push 0x58995f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x5F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876FA59: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876FA5B: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FA5E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876FA61: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FA66: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876FA6C: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876FA6E: je 0x5876fa82
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876FA70: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876FA72: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876FA74: je 0x5876fa82
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876FA76: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876FA78: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5876FA7A: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876FA7C: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5876FA7E: jne 0x5876fa66
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5876FA80: jmp 0x5876fa86
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876FA82: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876FA84: jne 0x5876fa88
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5876FA86: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876FA88: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876FA8B: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FA8E: mov dword ptr [eax + 0x404], 0x38f
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FA98: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FA9B: push 0x58995f18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x5F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876FAA0: mov dword ptr [ecx + 0x408], 0x23a
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FAAA: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876FAAC: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FAAF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876FAB2: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FAB7: add ecx, 0x418
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FABD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5876FAC0: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876FAC6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876FAC8: je 0x5876fadc
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876FACA: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876FACC: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876FACE: je 0x5876fadc
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876FAD0: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876FAD2: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5876FAD4: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876FAD6: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5876FAD8: jne 0x5876fac0
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5876FADA: jmp 0x5876fae0
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876FADC: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876FADE: jne 0x5876fae2
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5876FAE0: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876FAE2: push 0x58995ee8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876FAE7: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876FAEA: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876FAEC: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FAEF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876FAF2: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FAF7: add ecx, 0x830
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FAFD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5876FB00: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876FB06: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876FB08: je 0x5876fb1c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876FB0A: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876FB0C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876FB0E: je 0x5876fb1c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876FB10: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876FB12: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5876FB14: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876FB16: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5876FB18: jne 0x5876fb00
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5876FB1A: jmp 0x5876fb20
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876FB1C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876FB1E: jne 0x5876fb22
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5876FB20: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876FB22: push 0x58995eb8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x5E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876FB27: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876FB2A: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876FB2C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FB2F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876FB32: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FB37: add ecx, 0xc48
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x48
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FB3D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5876FB40: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876FB46: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876FB48: je 0x5876fb5c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5876FB4A: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876FB4C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876FB4E: je 0x5876fb5c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876FB50: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876FB52: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5876FB54: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876FB56: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5876FB58: jne 0x5876fb40
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5876FB5A: jmp 0x5876fb60
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876FB5C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876FB5E: jne 0x5876fb62
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5876FB60: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5876FB62: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876FB65: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FB68: mov dword ptr [eax + 0x104c], 0x22d
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x4C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FB72: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FB75: mov ebp, 0x1fd
        __asm _emit 0xBD
        __asm _emit 0xFD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FB7A: push 0x58995e88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876FB7F: mov dword ptr [ecx + 0x1050], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FB85: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876FB87: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FB8A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876FB8D: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FB92: add ecx, 0x1060
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FB98: jmp 0x5876fba0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x5876FBA0..0x5876FBDD; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f620_segment_05() {
    __asm {
        // 0x5876FBA0: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876FBA6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876FBA8: je 0x5876fbbb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5876FBAA: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876FBAC: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876FBAE: je 0x5876fbbb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876FBB0: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876FBB2: inc ecx
        __asm _emit 0x41
        // 0x5876FBB3: inc eax
        __asm _emit 0x40
        // 0x5876FBB4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5876FBB7: jne 0x5876fba0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876FBB9: jmp 0x5876fbbf
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876FBBB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876FBBD: jne 0x5876fbc0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5876FBBF: dec ecx
        __asm _emit 0x49
        // 0x5876FBC0: push 0x58995e58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x5E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876FBC5: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876FBC8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876FBCA: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FBCD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876FBD0: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FBD5: add ecx, 0x1478
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FBDB: jmp 0x5876fbe0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5876FBE0..0x5876FC4D; 109 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f620_segment_06() {
    __asm {
        // 0x5876FBE0: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876FBE6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876FBE8: je 0x5876fbfb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5876FBEA: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876FBEC: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876FBEE: je 0x5876fbfb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876FBF0: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876FBF2: inc ecx
        __asm _emit 0x41
        // 0x5876FBF3: inc eax
        __asm _emit 0x40
        // 0x5876FBF4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5876FBF7: jne 0x5876fbe0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876FBF9: jmp 0x5876fbff
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876FBFB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876FBFD: jne 0x5876fc00
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5876FBFF: dec ecx
        __asm _emit 0x49
        // 0x5876FC00: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876FC03: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FC06: mov dword ptr [eax + 0x187c], 0x22d
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FC10: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FC13: mov dword ptr [ecx + 0x1880], ebp
        __asm _emit 0x89
        __asm _emit 0xA9
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FC19: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5876FC1C: mov dword ptr [edx + 0x1884], 0xc8
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FC26: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FC29: push 0x58995e28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x5E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876FC2E: mov dword ptr [eax + 0x1888], 0x118
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FC38: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876FC3A: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FC3D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876FC40: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FC45: add ecx, 0x1890
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FC4B: jmp 0x5876fc50
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5876FC50..0x5876FC8D; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f620_segment_07() {
    __asm {
        // 0x5876FC50: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876FC56: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876FC58: je 0x5876fc6b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5876FC5A: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876FC5C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876FC5E: je 0x5876fc6b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876FC60: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876FC62: inc ecx
        __asm _emit 0x41
        // 0x5876FC63: inc eax
        __asm _emit 0x40
        // 0x5876FC64: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5876FC67: jne 0x5876fc50
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876FC69: jmp 0x5876fc6f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876FC6B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876FC6D: jne 0x5876fc70
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5876FC6F: dec ecx
        __asm _emit 0x49
        // 0x5876FC70: push 0x58995df8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x5D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876FC75: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876FC78: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876FC7A: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FC7D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876FC80: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FC85: add ecx, 0x1ca8
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA8
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FC8B: jmp 0x5876fc90
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5876FC90..0x5876FD12; 130 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f620_segment_08() {
    __asm {
        // 0x5876FC90: lea edx, [edi + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876FC96: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876FC98: je 0x5876fcab
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5876FC9A: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5876FC9C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5876FC9E: je 0x5876fcab
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876FCA0: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x5876FCA2: inc ecx
        __asm _emit 0x41
        // 0x5876FCA3: inc eax
        __asm _emit 0x40
        // 0x5876FCA4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5876FCA7: jne 0x5876fc90
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876FCA9: jmp 0x5876fcaf
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876FCAB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876FCAD: jne 0x5876fcb0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5876FCAF: dec ecx
        __asm _emit 0x49
        // 0x5876FCB0: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5876FCB3: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876FCB6: mov dword ptr [eax + 0x20ac], 0x2a8
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xAC
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FCC0: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876FCC3: push 0x58995dc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x5D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876FCC8: mov dword ptr [ecx + 0x20b0], 0x254
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FCD2: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5876FCD4: mov esi, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x6C
        // 0x5876FCD7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876FCDA: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876FCDF: nop
        __asm _emit 0x90
        // 0x5876FCE0: lea ecx, [edx + 0x7ffffbfe]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xFE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5876FCE6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876FCE8: je 0x5876fd03
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5876FCEA: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5876FCEC: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5876FCEE: je 0x5876fd03
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5876FCF0: mov byte ptr [esi], cl
        __asm _emit 0x88
        __asm _emit 0x0E
        // 0x5876FCF2: inc esi
        __asm _emit 0x46
        // 0x5876FCF3: inc eax
        __asm _emit 0x40
        // 0x5876FCF4: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876FCF7: jne 0x5876fce0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876FCF9: dec esi
        __asm _emit 0x4E
        // 0x5876FCFA: pop edi
        __asm _emit 0x5F
        // 0x5876FCFB: mov byte ptr [esi], dl
        __asm _emit 0x88
        __asm _emit 0x16
        // 0x5876FCFD: pop esi
        __asm _emit 0x5E
        // 0x5876FCFE: pop ebp
        __asm _emit 0x5D
        // 0x5876FCFF: pop ebx
        __asm _emit 0x5B
        // 0x5876FD00: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5876FD03: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876FD05: jne 0x5876fd08
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5876FD07: dec esi
        __asm _emit 0x4E
        // 0x5876FD08: mov byte ptr [esi], 0
        __asm _emit 0xC6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5876FD0B: pop edi
        __asm _emit 0x5F
        // 0x5876FD0C: pop esi
        __asm _emit 0x5E
        // 0x5876FD0D: pop ebp
        __asm _emit 0x5D
        // 0x5876FD0E: pop ebx
        __asm _emit 0x5B
        // 0x5876FD0F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
