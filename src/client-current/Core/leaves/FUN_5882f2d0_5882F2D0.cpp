// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882F2D0 .. +0x16A bytes.
extern "C" __declspec(naked) void FUN_5882f2d0_5882F2D0() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0ffffffe0h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 138h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebx + 0ch]
        push esi
        mov esi, dword ptr [ebx + 8]
        push edi
        lea edi, [esi + eax]
        cmp eax, 14h
        ; Exact mapped bytes 77 50: ja 0x5882f356
        __asm _emit 0x77
        __asm _emit 0x50
        ; Exact mapped bytes C5 E1 EF DB: vpxor xmm3, xmm3, xmm3
        __asm _emit 0xc5
        __asm _emit 0xe1
        __asm _emit 0xef
        __asm _emit 0xdb
        cmp esi, edi
        ; Exact mapped bytes 74 31: je 0x5882f33f
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        movzx edx, byte ptr [esi]
        mov eax, 1
        mov ecx, edx
        inc esi
        shr ecx, 3
        and edx, 3fh
        and ecx, 18h
        shl eax, cl
        ; Exact mapped bytes C5 F9 6E CA: vmovd xmm1, edx
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0x6e
        __asm _emit 0xca
        ; Exact mapped bytes C5 F9 6E C0: vmovd xmm0, eax
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact mapped bytes C4 E2 7D 32 D0: vpmovzxbq ymm2, xmm0
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0x7d
        __asm _emit 0x32
        __asm _emit 0xd0
        ; Exact mapped bytes C5 ED F3 C9: vpsllq ymm1, ymm2, xmm1
        __asm _emit 0xc5
        __asm _emit 0xed
        __asm _emit 0xf3
        __asm _emit 0xc9
        ; Exact mapped bytes C5 F5 EB DB: vpor ymm3, ymm1, ymm3
        __asm _emit 0xc5
        __asm _emit 0xf5
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp esi, edi
        ; Exact mapped bytes 75 D1: jne 0x5882f310
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes C5 FE 6F C3: vmovdqu ymm0, ymm3
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0xc3
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 01 1D 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
        push 100h
        lea eax, [ebp - 120h]
        push 0
        push eax
        ; Exact mapped bytes E8 A7 DA 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, edi
        ; Exact mapped bytes 74 10: je 0x5882f380
        __asm _emit 0x74
        __asm _emit 0x10
        movzx eax, byte ptr [esi]
        inc esi
        mov byte ptr [ebp + eax - 120h], 0ffh
        cmp esi, edi
        ; Exact mapped bytes 75 F0: jne 0x5882f370
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes C5 FE 6F 45 C0: vmovdqu ymm0, ymmword ptr [ebp - 0x40]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes C5 FD D7 C0: vpmovmskb eax, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xc0
        ; Exact mapped bytes C5 FE 6F 45 A0: vmovdqu ymm0, ymmword ptr [ebp - 0x60]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x45
        __asm _emit 0xa0
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes C5 FD D7 C0: vpmovmskb eax, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xc0
        ; Exact mapped bytes C5 FE 6F 45 80: vmovdqu ymm0, ymmword ptr [ebp - 0x80]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x45
        __asm _emit 0x80
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes C5 FD D7 C0: vpmovmskb eax, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xc0
        ; Exact mapped bytes C5 FE 6F 85 60 FF FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0xa0]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FD D7 F8: vpmovmskb edi, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xf8
        ; Exact mapped bytes C5 FE 6F 85 40 FF FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0xc0]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FD D7 F0: vpmovmskb esi, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xf0
        ; Exact mapped bytes C5 FE 6F 85 20 FF FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0xe0]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FD D7 D0: vpmovmskb edx, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xd0
        ; Exact mapped bytes C5 FE 6F 85 00 FF FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0x100]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C5 FD D7 C8: vpmovmskb ecx, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xc8
        ; Exact mapped bytes C5 FE 6F 85 E0 FE FF FF: vmovdqu ymm0, ymmword ptr [ebp - 0x120]
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes C5 FD D7 C0: vpmovmskb eax, ymm0
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xc0
        ; Exact mapped bytes C5 F9 6E C0: vmovd xmm0, eax
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact mapped bytes C4 E3 79 22 C1 01: vpinsrd xmm0, xmm0, ecx, 1
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0xc1
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes C4 E3 79 22 C2 02: vpinsrd xmm0, xmm0, edx, 2
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0xc2
        __asm _emit 0x02
        ; Exact mapped bytes C4 E3 79 22 CE 03: vpinsrd xmm1, xmm0, esi, 3
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0xce
        __asm _emit 0x03
        ; Exact mapped bytes C5 F9 6E C7: vmovd xmm0, edi
        __asm _emit 0xc5
        __asm _emit 0xf9
        __asm _emit 0x6e
        __asm _emit 0xc7
        ; Exact mapped bytes C4 E3 79 22 85 DC FE FF FF 01: vpinsrd xmm0, xmm0, dword ptr [ebp - 0x124], 1
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x01
        ; Exact mapped bytes C4 E3 79 22 85 D8 FE FF FF 02: vpinsrd xmm0, xmm0, dword ptr [ebp - 0x128], 2
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes C4 E3 79 22 85 D4 FE FF FF 03: vpinsrd xmm0, xmm0, dword ptr [ebp - 0x12c], 3
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x03
        pop edi
        xor ecx, ebp
        ; Exact mapped bytes C4 E3 75 18 C0 01: vinsertf128 ymm0, ymm1, xmm0, 1
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0x75
        __asm _emit 0x18
        __asm _emit 0xc0
        __asm _emit 0x01
        pop esi
        ; Exact mapped bytes E8 1D 1C 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
