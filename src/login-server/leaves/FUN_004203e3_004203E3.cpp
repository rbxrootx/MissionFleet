// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004203E3 .. +0x1AD bytes.
extern "C" __declspec(naked) void FUN_004203e3_004203E3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        push 19h
        ; Exact mapped bytes E8 17 22 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 95 01 00 00: call 0x420590
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        pop ecx
        ; Exact mapped bytes 3B 1D 9C 11 45 00: cmp ebx, dword ptr [0x45119c]
        __asm _emit 0x3b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 75 07: jne 0x420411
        __asm _emit 0x75
        __asm _emit 0x07
        xor esi, esi
        ; Exact mapped bytes E9 70 01 00 00: jmp 0x420581
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 56 01 00 00: je 0x42056f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, 44a8c0h
        cmp dword ptr [eax], ebx
        ; Exact mapped bytes 74 74: je 0x420498
        __asm _emit 0x74
        __asm _emit 0x74
        add eax, 30h
        inc edx
        cmp eax, 44a9b0h
        ; Exact mapped bytes 7C F1: jl 0x420420
        __asm _emit 0x7c
        __asm _emit 0xf1
        lea eax, [ebp - 18h]
        push eax
        push ebx
        ; Exact mapped bytes FF 15 C8 C0 43 00: call dword ptr [0x43c0c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push 1
        pop esi
        cmp eax, esi
        ; Exact mapped bytes 0F 85 21 01 00 00: jne 0x420566
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        ; Exact mapped bytes 83 25 C4 13 45 00 00: and dword ptr [0x4513c4], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        xor eax, eax
        mov edi, 4512c0h
        cmp dword ptr [ebp - 18h], esi
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        ; Exact mapped bytes 89 1D 9C 11 45 00: mov dword ptr [0x45119c], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 EB 00 00 00: jbe 0x420553
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 12h], 0
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x42052e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 11h]
        mov dl, byte ptr [ecx]
        test dl, dl
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x42052e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ecx - 1]
        movzx edx, dl
        cmp eax, edx
        ; Exact mapped bytes 0F 87 94 00 00 00: ja 0x420522
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [eax + 4512c1h], 4
        inc eax
        ; Exact mapped bytes EB EE: jmp 0x420486
        __asm _emit 0xeb
        __asm _emit 0xee
        and dword ptr [ebp - 4], 0
        push 40h
        pop ecx
        xor eax, eax
        mov edi, 4512c0h
        lea esi, [edx + edx*2]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        shl esi, 4
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        lea ebx, [esi + 44a8d0h]
        cmp byte ptr [ebx], 0
        mov ecx, ebx
        ; Exact mapped bytes 74 2C: je 0x4204e8
        __asm _emit 0x74
        __asm _emit 0x2c
        mov dl, byte ptr [ecx + 1]
        test dl, dl
        ; Exact mapped bytes 74 25: je 0x4204e8
        __asm _emit 0x74
        __asm _emit 0x25
        movzx eax, byte ptr [ecx]
        movzx edi, dl
        cmp eax, edi
        ; Exact mapped bytes 77 14: ja 0x4204e1
        __asm _emit 0x77
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov dl, byte ptr [edx + 44a8b8h]
        or byte ptr [eax + 4512c1h], dl
        inc eax
        cmp eax, edi
        ; Exact mapped bytes 76 F5: jbe 0x4204d6
        __asm _emit 0x76
        __asm _emit 0xf5
        inc ecx
        inc ecx
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 75 D4: jne 0x4204bc
        __asm _emit 0x75
        __asm _emit 0xd4
        inc dword ptr [ebp - 4]
        add ebx, 8
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 72 C1: jb 0x4204b5
        __asm _emit 0x72
        __asm _emit 0xc1
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes C7 05 AC 11 45 00 01 00 00 00: mov dword ptr [0x4511ac], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes A3 9C 11 45 00: mov dword ptr [0x45119c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E8 CE 00 00 00: call 0x4205da
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [esi + 44a8c4h]
        mov edi, 4511a0h
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        pop ecx
        ; Exact mapped bytes A3 C4 13 45 00: mov dword ptr [0x4513c4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes EB 52: jmp 0x420574
        __asm _emit 0xeb
        __asm _emit 0x52
        inc ecx
        inc ecx
        cmp byte ptr [ecx - 1], 0
        ; Exact mapped bytes 0F 85 47 FF FF FF: jne 0x420475
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        or byte ptr [eax + 4512c1h], 8
        inc eax
        cmp eax, 0ffh
        ; Exact mapped bytes 72 F1: jb 0x420530
        __asm _emit 0x72
        __asm _emit 0xf1
        push ebx
        ; Exact mapped bytes E8 95 00 00 00: call 0x4205da
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes A3 C4 13 45 00: mov dword ptr [0x4513c4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 AC 11 45 00: mov dword ptr [0x4511ac], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x42055a
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 83 25 AC 11 45 00 00: and dword ptr [0x4511ac], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov edi, 4511a0h
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes EB 0E: jmp 0x420574
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 83 3D B4 FC 44 00 00: cmp dword ptr [0x44fcb4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x42057e
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes E8 99 00 00 00: call 0x42060d
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BD 00 00 00: call 0x420636
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C FE FF FF: jmp 0x42040a
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        or esi, 0ffffffffh
        push 19h
        ; Exact mapped bytes E8 E3 20 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
