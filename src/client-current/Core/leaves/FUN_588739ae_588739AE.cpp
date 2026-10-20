// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588739AE .. +0x1AF bytes.
extern "C" __declspec(naked) void FUN_588739ae_588739AE() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 90h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        push ebx
        mov ebx, dword ptr [ebp + 18h]
        push esi
        mov esi, dword ptr [ebp + 10h]
        push edi
        xor edi, edi
        mov dword ptr [ebp - 90h], ecx
        mov dword ptr [ebp - 88h], esi
        mov dword ptr [ebx], edi
        cmp eax, 1
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x58873acd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        lea eax, [ebp - 84h]
        push eax
        push dword ptr [ebp + 14h]
        push esi
        push ecx
        ; Exact mapped bytes E8 CD FE FF FF: call 0x588738ce
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 8ch], eax
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x58873a54
        __asm _emit 0x74
        __asm _emit 0x46
        push 1
        push eax
        ; Exact mapped bytes E8 FA B7 FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov dword ptr [ebx], eax
        ; Exact mapped bytes E8 F2 91 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebx], edi
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x58873b41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8ch]
        lea eax, [ecx - 1]
        push eax
        lea eax, [ebp - 84h]
        push eax
        push ecx
        push dword ptr [ebx]
        ; Exact mapped bytes E8 EE 26 FF FF: call 0x58866130
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 06 01 00 00: jne 0x58873b53
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x58873b44
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 7ah
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x58873b41
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push edi
        push dword ptr [ebp + 14h]
        push esi
        push dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 5A FE FF FF: call 0x588738ce
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 8ch], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x58873b41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push eax
        ; Exact mapped bytes E8 83 B7 FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 2A: je 0x58873abf
        __asm _emit 0x74
        __asm _emit 0x2a
        push dword ptr [ebp - 8ch]
        push esi
        push dword ptr [ebp + 14h]
        push dword ptr [ebp - 88h]
        push dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 1E FE FF FF: call 0x588738ce
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x58873abf
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, esi
        mov esi, edi
        mov dword ptr [ebx], eax
        ; Exact mapped bytes EB 03: jmp 0x58873ac2
        __asm _emit 0xeb
        __asm _emit 0x03
        or edi, 0ffffffffh
        push esi
        ; Exact mapped bytes E8 48 91 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, edi
        ; Exact mapped bytes EB 77: jmp 0x58873b44
        __asm _emit 0xeb
        __asm _emit 0x77
        cmp eax, 2
        ; Exact mapped bytes 75 3C: jne 0x58873b0e
        __asm _emit 0x75
        __asm _emit 0x3c
        push edi
        push edi
        push dword ptr [ebp + 14h]
        push esi
        ; Exact mapped bytes E8 DB BC FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x58873b41
        __asm _emit 0x74
        __asm _emit 0x5a
        push 2
        push eax
        ; Exact mapped bytes E8 21 B7 FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 C8: je 0x58873abf
        __asm _emit 0x74
        __asm _emit 0xc8
        push dword ptr [ebp - 8ch]
        push esi
        push dword ptr [ebp + 14h]
        push dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 AC BC FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB A5: jmp 0x58873ab3
        __asm _emit 0xeb
        __asm _emit 0xa5
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x58873b41
        __asm _emit 0x75
        __asm _emit 0x2f
        push 2
        lea eax, [ebp - 88h]
        mov dword ptr [ebp - 88h], edi
        push eax
        mov eax, dword ptr [ebp + 14h]
        or eax, 20000000h
        push eax
        push esi
        ; Exact mapped bytes E8 88 BC FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x58873b41
        __asm _emit 0x74
        __asm _emit 0x0d
        mov al, byte ptr [ebp - 88h]
        mov byte ptr [ebx], al
        ; Exact mapped bytes E9 0C FF FF FF: jmp 0x58873a4d
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 FF D4 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
        push edi
        push edi
        push edi
        push edi
        push edi
        ; Exact mapped bytes E8 7C D4 FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
