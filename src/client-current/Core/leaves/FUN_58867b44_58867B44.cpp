// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867B44 .. +0x1C6 bytes.
extern "C" __declspec(naked) void FUN_58867b44_58867B44() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, 1020h
        ; Exact mapped bytes E8 9D 9F FC FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 14h]
        push ebx
        push dword ptr [ebp + 8]
        mov dword ptr [ebp - 100ch], eax
        ; Exact mapped bytes E8 E7 50 00 00: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp + 8]
        mov ebx, eax
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 0B: jne 0x58867b86
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E9 77 01 00 00: jmp 0x58867cfd
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [ecx + 4]
        push esi
        push edi
        push 0
        cdq
        push 2
        push edx
        push eax
        ; Exact mapped bytes E8 47 55 01 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [ebp - 100ch]
        mov ecx, ebx
        mov dword ptr [ebp - 1008h], eax
        mov esi, ebx
        mov dword ptr [ebp - 1014h], edx
        and ecx, 3fh
        sar esi, 6
        imul edi, ecx, 38h
        push 0
        mov eax, dword ptr [esi*4 + 589699b0h]
        push dword ptr [edi + eax + 24h]
        push dword ptr [edi + eax + 20h]
        push ebx
        ; Exact mapped bytes E8 21 97 00 00: call 0x588712f0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi*4 + 589699b0h]
        add esp, 14h
        mov dword ptr [ebp - 1010h], eax
        mov eax, edx
        mov edx, dword ptr [ebp - 1010h]
        mov dword ptr [ebp - 1020h], eax
        cmp edx, dword ptr [edi + ecx + 20h]
        ; Exact mapped bytes 0F 85 FF 00 00 00: jne 0x58867cf6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [edi + ecx + 24h]
        ; Exact mapped bytes 0F 85 F5 00 00 00: jne 0x58867cf6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        lea eax, [ebp - 101ch]
        push esi
        push eax
        push 1000h
        lea eax, [ebp - 1004h]
        push eax
        push dword ptr [edi + ecx + 18h]
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x58867cf6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 100ch]
        push esi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 B4 96 00 00: call 0x588712f0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp edx, esi
        ; Exact mapped bytes 0F 8C AF 00 00 00: jl 0x58867cf6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 08: jg 0x58867c51
        __asm _emit 0x7f
        __asm _emit 0x08
        cmp eax, esi
        ; Exact mapped bytes 0F 82 A5 00 00 00: jb 0x58867cf6
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 1014h]
        mov eax, dword ptr [ebp - 101ch]
        cmp ebx, esi
        ; Exact mapped bytes 0F 8F 91 00 00 00: jg 0x58867cf6
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 0C: jl 0x58867c73
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp - 1008h], eax
        ; Exact mapped bytes 0F 87 83 00 00 00: ja 0x58867cf6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebp - 1004h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        add edi, eax
        ; Exact mapped bytes 66 0F 13 85 E8 EF FF FF: movlpd qword ptr [ebp - 0x1018], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 1004h]
        cmp dword ptr [ebp - 1008h], esi
        ; Exact mapped bytes 75 04: jne 0x58867c98
        __asm _emit 0x75
        __asm _emit 0x04
        cmp ebx, esi
        ; Exact mapped bytes 74 45: je 0x58867cdd
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 1014h]
        mov esi, dword ptr [ebp - 1018h]
        cmp ecx, edi
        ; Exact mapped bytes 73 35: jae 0x58867cdd
        __asm _emit 0x73
        __asm _emit 0x35
        mov al, byte ptr [ecx]
        cmp al, 0dh
        ; Exact mapped bytes 75 10: jne 0x58867cbe
        __asm _emit 0x75
        __asm _emit 0x10
        lea eax, [edi - 1]
        cmp ecx, eax
        ; Exact mapped bytes 73 15: jae 0x58867cca
        __asm _emit 0x73
        __asm _emit 0x15
        cmp byte ptr [ecx + 1], 0ah
        ; Exact mapped bytes 75 0F: jne 0x58867cca
        __asm _emit 0x75
        __asm _emit 0x0f
        inc ecx
        ; Exact mapped bytes EB 0C: jmp 0x58867cca
        __asm _emit 0xeb
        __asm _emit 0x0c
        movzx eax, al
        ; Exact mapped bytes 0F BE 80 68 75 90 58: movsx eax, byte ptr [eax + 0x58907568]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        add ecx, eax
        add esi, 1
        adc edx, 0
        inc ecx
        cmp esi, dword ptr [ebp - 1008h]
        ; Exact mapped bytes 75 CB: jne 0x58867ca4
        __asm _emit 0x75
        __asm _emit 0xcb
        cmp edx, ebx
        ; Exact mapped bytes 75 C7: jne 0x58867ca4
        __asm _emit 0x75
        __asm _emit 0xc7
        lea eax, [ebp - 1004h]
        sub ecx, eax
        mov eax, ecx
        cdq
        add eax, dword ptr [ebp - 1010h]
        adc edx, dword ptr [ebp - 1020h]
        ; Exact mapped bytes EB 05: jmp 0x58867cfb
        __asm _emit 0xeb
        __asm _emit 0x05
        or edx, 0ffffffffh
        mov eax, edx
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 48 93 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}
