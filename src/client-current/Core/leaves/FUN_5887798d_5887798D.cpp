// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887798D .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_5887798d_5887798D() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 06 12 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 4E 50: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x50
        ; Exact mapped bytes 8D 79 02: lea edi, [ecx + 2]
        __asm _emit 0x8d
        __asm _emit 0x79
        __asm _emit 0x02
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 F6: jne 0x588779a7
        __asm _emit 0x75
        __asm _emit 0xf6
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes D1 F9: sar ecx, 1
        __asm _emit 0xd1
        __asm _emit 0xf9
        ; Exact mapped bytes 83 F9 03: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 8B 4E 54: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x54
        ; Exact mapped bytes 0F 94 C0: sete al
        __asm _emit 0x0f
        __asm _emit 0x94
        __asm _emit 0xc0
        ; Exact mapped bytes 89 46 60: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 8D 79 02: lea edi, [ecx + 2]
        __asm _emit 0x8d
        __asm _emit 0x79
        __asm _emit 0x02
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 F6: jne 0x588779c6
        __asm _emit 0x75
        __asm _emit 0xf6
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 7D 08: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x08
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
        ; Exact mapped bytes 89 46 64: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 89 5F 04: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x04
        ; Exact mapped bytes 39 5E 60: cmp dword ptr [esi + 0x60], ebx
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0x60
        ; Exact mapped bytes 75 0B: jne 0x588779f5
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes FF 76 50: push dword ptr [esi + 0x50]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x50
        ; Exact mapped bytes E8 95 00 00 00: call 0x58877a87
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 68 B3 7A 87 58: push 0x58877ab3
        __asm _emit 0x68
        __asm _emit 0xb3
        __asm _emit 0x7a
        __asm _emit 0x87
        __asm _emit 0x58
        ; Exact mapped bytes 89 56 5C: mov dword ptr [esi + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x5c
        ; Exact mapped bytes FF 15 A0 41 89 58: call dword ptr [0x588941a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
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
        ; Exact mapped bytes 75 02: jne 0x58877a23
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
