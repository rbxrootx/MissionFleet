// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CDE1 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_5886cde1_5886CDE1() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes E8 00 CC 00 00: call 0x588799f1
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        cmp eax, -1
        ; Exact mapped bytes 75 04: jne 0x5886cdfb
        __asm _emit 0x75
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 4E: jmp 0x5886ce49
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes A1 B0 99 96 58: mov eax, dword ptr [0x589699b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edi, 1
        ; Exact mapped bytes 75 09: jne 0x5886ce0e
        __asm _emit 0x75
        __asm _emit 0x09
        test byte ptr [eax + 98h], 1
        ; Exact mapped bytes 75 0B: jne 0x5886ce19
        __asm _emit 0x75
        __asm _emit 0x0b
        cmp edi, 2
        ; Exact mapped bytes 75 1C: jne 0x5886ce2f
        __asm _emit 0x75
        __asm _emit 0x1c
        test byte ptr [eax + 60h], 1
        ; Exact mapped bytes 74 16: je 0x5886ce2f
        __asm _emit 0x74
        __asm _emit 0x16
        push 2
        ; Exact mapped bytes E8 D1 CB 00 00: call 0x588799f1
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov esi, eax
        ; Exact mapped bytes E8 C8 CB 00 00: call 0x588799f1
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        cmp eax, esi
        ; Exact mapped bytes 74 C8: je 0x5886cdf7
        __asm _emit 0x74
        __asm _emit 0xc8
        push edi
        ; Exact mapped bytes E8 BC CB 00 00: call 0x588799f1
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 B6: jne 0x5886cdf7
        __asm _emit 0x75
        __asm _emit 0xb6
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        push edi
        ; Exact mapped bytes E8 11 CB 00 00: call 0x58879960
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, edi
        and edi, 3fh
        sar ecx, 6
        imul edx, edi, 38h
        mov ecx, dword ptr [ecx*4 + 589699b0h]
        mov byte ptr [ecx + edx + 28h], 0
        test esi, esi
        ; Exact mapped bytes 74 10: je 0x5886ce7b
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 C2 55 FF FF: call 0x58862436
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x5886ce7d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        ret
    }
}
