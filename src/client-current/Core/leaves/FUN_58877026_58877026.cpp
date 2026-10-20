// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877026 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_58877026_58877026() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 75 08: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 89 5D FC: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xfc
        ; Exact mapped bytes 8D 51 02: lea edx, [ecx + 2]
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 03 CF: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xcf
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 F6: jne 0x5887703f
        __asm _emit 0x75
        __asm _emit 0xf6
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes D1 F9: sar ecx, 1
        __asm _emit 0xd1
        __asm _emit 0xf9
        ; Exact mapped bytes 83 F9 03: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 0F 94 C0: sete al
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 5A 02: lea ebx, [edx + 2]
        __asm _emit 0x8d
        __asm _emit 0x5a
        __asm _emit 0x02
        ; Exact mapped bytes 89 46 10: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 66 3B 45 FC: cmp ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 75 F5: jne 0x5887705e
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes 2B D3: sub edx, ebx
        __asm _emit 0x2b
        __asm _emit 0xd3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes D1 FA: sar edx, 1
        __asm _emit 0xd1
        __asm _emit 0xfa
        ; Exact mapped bytes 83 FA 03: cmp edx, 3
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x03
        ; Exact mapped bytes 0F 94 C0: sete al
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc0
        ; Exact mapped bytes 89 46 14: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        ; Exact mapped bytes 83 F9 03: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 74 0A: je 0x58877087
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes FF 36: push dword ptr [esi]
        __asm _emit 0xff
        __asm _emit 0x36
        ; Exact mapped bytes E8 94 00 00 00: call 0x58877118
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 89 7E 0C: mov dword ptr [esi + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 68 4C 71 87 58: push 0x5887714c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x71
        __asm _emit 0x87
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 86 FF FF: call 0x5886f727
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes F6 C1 07: test cl, 7
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x07
        ; Exact mapped bytes 0F 95 C2: setne dl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc2
        ; Exact mapped bytes 0F BA E1 09: bt ecx, 9
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0xe1
        __asm _emit 0x09
        ; Exact mapped bytes 0F 92 C0: setb al
        __asm _emit 0x0f
        __asm _emit 0x92
        __asm _emit 0xc0
        ; Exact mapped bytes 22 D0: and dl, al
        __asm _emit 0x22
        __asm _emit 0xd0
        ; Exact mapped bytes 0F BA E1 08: bt ecx, 8
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0xe1
        __asm _emit 0x08
        ; Exact mapped bytes 0F 92 C0: setb al
        __asm _emit 0x0f
        __asm _emit 0x92
        __asm _emit 0xc0
        ; Exact mapped bytes 84 D0: test al, dl
        __asm _emit 0x84
        __asm _emit 0xd0
        ; Exact mapped bytes 75 03: jne 0x588770ba
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 89 5E 08: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
