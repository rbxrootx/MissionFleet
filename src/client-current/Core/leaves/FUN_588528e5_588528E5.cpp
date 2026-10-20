// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588528E5 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_588528e5_588528E5() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        push dword ptr [esi + 28h]
        ; Exact mapped bytes E8 BD 2C 00 00: call 0x588555b7
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 0ch], eax
        push 0
        pop ebx
        sub ecx, 1
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x588529a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 1
        ; Exact mapped bytes 74 75: je 0x58852986
        __asm _emit 0x74
        __asm _emit 0x75
        dec ecx
        sub ecx, 1
        ; Exact mapped bytes 74 46: je 0x5885295d
        __asm _emit 0x74
        __asm _emit 0x46
        sub ecx, 4
        ; Exact mapped bytes 74 27: je 0x58852943
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [esi + 8]
        add eax, 18h
        mov byte ptr [eax + 4], 1
        mov dword ptr [eax], 16h
        push dword ptr [esi + 8]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 F5 E5 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        xor al, al
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x58852a6b
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10h]
        mov edi, dword ptr [esi + 1ch]
        mov eax, edi
        shr eax, 4
        test al, 1
        lea eax, [ecx + 8]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 66: jmp 0x588529c3
        __asm _emit 0xeb
        __asm _emit 0x66
        mov edi, dword ptr [esi + 1ch]
        mov eax, edi
        shr eax, 4
        test al, 1
        ; Exact mapped bytes 74 0D: je 0x58852976
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 10h]
        lea ecx, [eax + 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 4C: jmp 0x588529c2
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, dword ptr [esi + 10h]
        mov dword ptr [ebp - 8], ebx
        lea eax, [ecx + 4]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes EB 40: jmp 0x588529c6
        __asm _emit 0xeb
        __asm _emit 0x40
        mov edi, dword ptr [esi + 1ch]
        mov eax, edi
        mov ecx, dword ptr [esi + 10h]
        shr eax, 4
        test al, 1
        lea eax, [ecx + 4]
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes 74 05: je 0x588529a0
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 0F BF 01: movsx eax, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x01
        ; Exact mapped bytes EB 22: jmp 0x588529c2
        __asm _emit 0xeb
        __asm _emit 0x22
        movzx eax, word ptr [ecx]
        ; Exact mapped bytes EB 1D: jmp 0x588529c2
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edi, dword ptr [esi + 1ch]
        mov eax, edi
        mov ecx, dword ptr [esi + 10h]
        shr eax, 4
        test al, 1
        lea eax, [ecx + 4]
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes 74 05: je 0x588529bf
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 0F BE 01: movsx eax, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x01
        ; Exact mapped bytes EB 03: jmp 0x588529c2
        __asm _emit 0xeb
        __asm _emit 0x03
        movzx eax, byte ptr [ecx]
        cdq
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov eax, edi
        mov ecx, dword ptr [ebp - 4]
        shr eax, 4
        test al, 1
        ; Exact mapped bytes 74 16: je 0x588529ee
        __asm _emit 0x74
        __asm _emit 0x16
        cmp edx, ebx
        ; Exact mapped bytes 7F 12: jg 0x588529ee
        __asm _emit 0x7f
        __asm _emit 0x12
        ; Exact mapped bytes 7C 04: jl 0x588529e2
        __asm _emit 0x7c
        __asm _emit 0x04
        cmp ecx, ebx
        ; Exact mapped bytes 73 0C: jae 0x588529ee
        __asm _emit 0x73
        __asm _emit 0x0c
        neg ecx
        adc edx, ebx
        neg edx
        or edi, 40h
        mov dword ptr [esi + 1ch], edi
        cmp dword ptr [esi + 24h], 0
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 7D 09: jge 0x58852a03
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [esi + 24h], 1
        ; Exact mapped bytes EB 1A: jmp 0x58852a1d
        __asm _emit 0xeb
        __asm _emit 0x1a
        push dword ptr [esi + 8]
        and edi, 0fffffff7h
        lea ecx, [esi + 3ch]
        push dword ptr [esi + 24h]
        mov dword ptr [esi + 1ch], edi
        ; Exact mapped bytes E8 CB F1 FF FF: call 0x58851be2
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, ecx
        or eax, edx
        ; Exact mapped bytes 75 04: jne 0x58852a27
        __asm _emit 0x75
        __asm _emit 0x04
        and dword ptr [esi + 1ch], 0ffffffdfh
        cmp dword ptr [ebp - 0ch], 8
        push dword ptr [ebp + 8]
        mov byte ptr [esi + 38h], bl
        ; Exact mapped bytes 75 0B: jne 0x58852a3e
        __asm _emit 0x75
        __asm _emit 0x0b
        push edx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 C9 08 00 00: call 0x58853305
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x58852a46
        __asm _emit 0xeb
        __asm _emit 0x08
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 B0 05 00 00: call 0x58852ff6
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        shr eax, 7
        test al, 1
        ; Exact mapped bytes 74 19: je 0x58852a69
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [esi + 34h], ebx
        ; Exact mapped bytes 74 08: je 0x58852a5d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi + 30h]
        cmp byte ptr [eax], 30h
        ; Exact mapped bytes 74 0C: je 0x58852a69
        __asm _emit 0x74
        __asm _emit 0x0c
        dec dword ptr [esi + 30h]
        mov ecx, dword ptr [esi + 30h]
        mov byte ptr [ecx], 30h
        inc dword ptr [esi + 34h]
        mov al, 1
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
