// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885160D .. +0x174 bytes.
extern "C" __declspec(naked) void FUN_5885160d_5885160D() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 474h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 18h], 0
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 1ch]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 460h], eax
        ; Exact mapped bytes 75 23: jne 0x5885165c
        __asm _emit 0x75
        __asm _emit 0x23
        push ecx
        xor ebx, ebx
        mov byte ptr [ecx + 1ch], 1
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov dword ptr [ecx + 18h], 16h
        ; Exact mapped bytes E8 DD F8 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 17 01 00 00: jmp 0x58851773
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x58851664
        __asm _emit 0x74
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 74 D5: je 0x58851639
        __asm _emit 0x74
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        push edi
        lea edi, [ebp - 470h]
        xor ebx, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        mov eax, edx
        mov edi, dword ptr [ebp - 460h]
        and eax, 2
        mov dword ptr [ebp - 474h], eax
        or eax, ebx
        mov dword ptr [ebp - 470h], edi
        mov dword ptr [ebp - 46ch], esi
        mov dword ptr [ebp - 468h], ebx
        ; Exact mapped bytes 75 0A: jne 0x588516a7
        __asm _emit 0x75
        __asm _emit 0x0a
        mov byte ptr [ebp - 464h], bl
        test edi, edi
        ; Exact mapped bytes 75 07: jne 0x588516ae
        __asm _emit 0x75
        __asm _emit 0x07
        mov byte ptr [ebp - 464h], 1
        push dword ptr [ebp + 20h]
        lea eax, [ebp - 470h]
        push ecx
        push dword ptr [ebp + 18h]
        mov dword ptr [ebp - 460h], eax
        lea ecx, [ebp - 45ch]
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 460h]
        push edx
        push eax
        ; Exact mapped bytes E8 7D 1E 00 00: call 0x58853554
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 45ch]
        mov dword ptr [ebp - 0ch], ebx
        ; Exact mapped bytes E8 36 25 00 00: call 0x58853c1b
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 460h], eax
        test edi, edi
        ; Exact mapped bytes 74 70: je 0x5885175f
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1
        or ecx, ebx
        ; Exact mapped bytes 74 21: je 0x5885171a
        __asm _emit 0x74
        __asm _emit 0x21
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x58851701
        __asm _emit 0x75
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x58851744
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 468h]
        cmp ecx, esi
        ; Exact mapped bytes 74 05: je 0x58851710
        __asm _emit 0x74
        __asm _emit 0x05
        mov byte ptr [edi + ecx], bl
        ; Exact mapped bytes EB 4F: jmp 0x5885175f
        __asm _emit 0xeb
        __asm _emit 0x4f
        test eax, eax
        ; Exact mapped bytes 78 4B: js 0x5885175f
        __asm _emit 0x78
        __asm _emit 0x4b
        cmp eax, esi
        ; Exact mapped bytes 77 2C: ja 0x58851744
        __asm _emit 0x77
        __asm _emit 0x2c
        ; Exact mapped bytes EB 45: jmp 0x5885175f
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 474h]
        or ecx, ebx
        ; Exact mapped bytes 74 1C: je 0x58851740
        __asm _emit 0x74
        __asm _emit 0x1c
        test esi, esi
        ; Exact mapped bytes 74 37: je 0x5885175f
        __asm _emit 0x74
        __asm _emit 0x37
        test eax, eax
        ; Exact mapped bytes 79 04: jns 0x58851730
        __asm _emit 0x79
        __asm _emit 0x04
        mov byte ptr [edi], bl
        ; Exact mapped bytes EB 2F: jmp 0x5885175f
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 468h]
        cmp eax, esi
        ; Exact mapped bytes 75 22: jne 0x5885175c
        __asm _emit 0x75
        __asm _emit 0x22
        mov byte ptr [esi + edi - 1], bl
        ; Exact mapped bytes EB 1F: jmp 0x5885175f
        __asm _emit 0xeb
        __asm _emit 0x1f
        test esi, esi
        ; Exact mapped bytes 75 05: jne 0x58851749
        __asm _emit 0x75
        __asm _emit 0x05
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58851765
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 468h]
        cmp eax, esi
        ; Exact mapped bytes 75 09: jne 0x5885175c
        __asm _emit 0x75
        __asm _emit 0x09
        push -2
        mov byte ptr [esi + edi - 1], bl
        pop esi
        ; Exact mapped bytes EB 09: jmp 0x58851765
        __asm _emit 0xeb
        __asm _emit 0x09
        mov byte ptr [edi + eax], bl
        mov esi, dword ptr [ebp - 460h]
        lea ecx, [ebp - 420h]
        ; Exact mapped bytes E8 B7 1E 00 00: call 0x58853627
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        mov ecx, dword ptr [ebp - 4]
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 D1 F8 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
