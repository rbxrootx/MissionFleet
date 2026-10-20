// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434DA8 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_00434da8_00434DA8() {
    __asm {
        push ebx
        ; Exact mapped bytes 8B 1D 08 C5 43 00: mov ebx, dword ptr [0x43c508]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        push edi
        test ebp, ebp
        mov esi, ebp
        ; Exact mapped bytes 75 65: jne 0x434e21
        __asm _emit 0x75
        __asm _emit 0x65
        ; Exact mapped bytes E8 83 00 00 00: call 0x434e44
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 55: jne 0x434e1a
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes E8 91 06 FE FF: call 0x41545b
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 4C: jne 0x434e1a
        __asm _emit 0x75
        __asm _emit 0x4c
        xor esi, esi
        test esi, esi
        mov edi, esi
        mov eax, esi
        ; Exact mapped bytes 74 09: je 0x434de1
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        mov edi, eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 F7: jne 0x434dd8
        __asm _emit 0x75
        __asm _emit 0xf7
        test ebp, ebp
        ; Exact mapped bytes 75 0D: jne 0x434df2
        __asm _emit 0x75
        __asm _emit 0x0d
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x434df2
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes FF 15 0C C5 43 00: call dword ptr [0x43c50c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        mov ebx, dword ptr [esp + 18h]
        test ebx, ebx
        ; Exact mapped bytes 74 41: je 0x434e3b
        __asm _emit 0x74
        __asm _emit 0x41
        test edi, edi
        ; Exact mapped bytes 74 3A: je 0x434e38
        __asm _emit 0x74
        __asm _emit 0x3a
        push edi
        ; Exact mapped bytes FF 15 10 C5 43 00: call dword ptr [0x43c510]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x434e38
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp edi, esi
        ; Exact mapped bytes 74 2B: je 0x434e38
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0
        push edi
        mov dword ptr [ebx], edi
        ; Exact mapped bytes FF 15 48 C5 43 00: call dword ptr [0x43c548]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x434e3b
        __asm _emit 0xeb
        __asm _emit 0x21
        mov esi, dword ptr [eax + 1ch]
        test esi, esi
        ; Exact mapped bytes 74 AF: je 0x434dd0
        __asm _emit 0x74
        __asm _emit 0xaf
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, 40000000h
        ; Exact mapped bytes 74 9F: je 0x434dd0
        __asm _emit 0x74
        __asm _emit 0x9f
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov esi, eax
        ; Exact mapped bytes EB E5: jmp 0x434e1d
        __asm _emit 0xeb
        __asm _emit 0xe5
        and dword ptr [ebx], 0
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
