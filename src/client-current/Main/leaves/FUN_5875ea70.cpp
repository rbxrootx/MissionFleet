// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875EA70 .. +0x1EB bytes.
extern "C" __declspec(naked) void FUN_5875ea70() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 DA 01 00 00: je 0x5875ec59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 70h], 0
        ; Exact mapped bytes 76 17: jbe 0x5875ea9c
        __asm _emit 0x76
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 09: je 0x5875ea97
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        dec dword ptr [esi + 70h]
        pop esi
        ret
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 05: jne 0x5875eaa9
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        mov eax, dword ptr [esi + 84h]
        mov ecx, dword ptr [esi + 88h]
        push ebx
        push edi
        mov edi, dword ptr [esi + 8ch]
        neg eax
        lea edx, [eax + 0fh]
        neg ecx
        neg edi
        cmp edx, 1eh
        ; Exact mapped bytes 77 38: ja 0x5875eb03
        __asm _emit 0x77
        __asm _emit 0x38
        lea edx, [eax + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 23: ja 0x5875eaf6
        __asm _emit 0x77
        __asm _emit 0x23
        lea edx, [eax + 3]
        cmp edx, 6
        ; Exact mapped bytes 77 12: ja 0x5875eaed
        __asm _emit 0x77
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x5875eae4
        __asm _emit 0x7d
        __asm _emit 0x05
        or ebx, 0ffffffffh
        ; Exact mapped bytes EB 2A: jmp 0x5875eb0e
        __asm _emit 0xeb
        __asm _emit 0x2a
        xor ebx, ebx
        test eax, eax
        setg bl
        ; Exact mapped bytes EB 21: jmp 0x5875eb0e
        __asm _emit 0xeb
        __asm _emit 0x21
        cdq
        sub eax, edx
        mov ebx, eax
        sar ebx, 1
        ; Exact mapped bytes EB 18: jmp 0x5875eb0e
        __asm _emit 0xeb
        __asm _emit 0x18
        cdq
        and edx, 3
        add eax, edx
        mov ebx, eax
        sar ebx, 2
        ; Exact mapped bytes EB 0B: jmp 0x5875eb0e
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 7
        add eax, edx
        mov ebx, eax
        sar ebx, 3
        lea eax, [ecx + 0fh]
        cmp eax, 1eh
        ; Exact mapped bytes 77 3E: ja 0x5875eb54
        __asm _emit 0x77
        __asm _emit 0x3e
        lea edx, [ecx + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 27: ja 0x5875eb45
        __asm _emit 0x77
        __asm _emit 0x27
        lea eax, [ecx + 3]
        cmp eax, 6
        ; Exact mapped bytes 77 14: ja 0x5875eb3a
        __asm _emit 0x77
        __asm _emit 0x14
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x5875eb2f
        __asm _emit 0x7d
        __asm _emit 0x05
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 32: jmp 0x5875eb61
        __asm _emit 0xeb
        __asm _emit 0x32
        xor edx, edx
        test ecx, ecx
        setg dl
        mov ecx, edx
        ; Exact mapped bytes EB 27: jmp 0x5875eb61
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, ecx
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        ; Exact mapped bytes EB 1C: jmp 0x5875eb61
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        sar ecx, 2
        ; Exact mapped bytes EB 0D: jmp 0x5875eb61
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, ecx
        cdq
        and edx, 7
        add eax, edx
        mov ecx, eax
        sar ecx, 3
        lea eax, [edi + 0fh]
        cmp eax, 1eh
        ; Exact mapped bytes 77 38: ja 0x5875eba1
        __asm _emit 0x77
        __asm _emit 0x38
        lea edx, [edi + 7]
        cmp edx, 0eh
        ; Exact mapped bytes 77 23: ja 0x5875eb94
        __asm _emit 0x77
        __asm _emit 0x23
        lea eax, [edi + 3]
        cmp eax, 6
        ; Exact mapped bytes 77 12: ja 0x5875eb8b
        __asm _emit 0x77
        __asm _emit 0x12
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x5875eb82
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 2A: jmp 0x5875ebac
        __asm _emit 0xeb
        __asm _emit 0x2a
        xor eax, eax
        test edi, edi
        setg al
        ; Exact mapped bytes EB 21: jmp 0x5875ebac
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 18: jmp 0x5875ebac
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 0B: jmp 0x5875ebac
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, edi
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        add dword ptr [esi + 8ch], eax
        add dword ptr [esi + 88h], ecx
        mov eax, dword ptr [esi + 8ch]
        add dword ptr [esi + 84h], ebx
        mov edx, dword ptr [esi + 84h]
        add dword ptr [esi + 7ch], edx
        lea ecx, [eax + eax*2]
        mov edi, dword ptr [esi + 88h]
        add ecx, ecx
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov ebx, dword ptr [esi + 7ch]
        add ecx, edi
        add dword ptr [esi + 80h], ecx
        mov ecx, dword ptr [esi + 80h]
        mov eax, 5d9f7391h
        imul ecx
        mov ecx, dword ptr [esi + 78h]
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub ecx, eax
        mov eax, 51eb851fh
        imul ebx
        sar edx, 6
        mov eax, edx
        push ecx
        mov ecx, dword ptr [esi + 74h]
        shr eax, 1fh
        add eax, edx
        lea edx, [eax + ecx + 1]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 5F 46 1A 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x46
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        cmp eax, dword ptr [esi + 60h]
        pop edi
        pop ebx
        ; Exact mapped bytes 7D 06: jge 0x5875ec41
        __asm _emit 0x7d
        __asm _emit 0x06
        inc eax
        mov dword ptr [esi + 50h], eax
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 D8 3F 1A 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x3f
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 21 40 1A 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x40
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ret
    }
}
