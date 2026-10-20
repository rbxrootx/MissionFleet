// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434C30 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_00434c30_00434C30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 114h
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov edi, ecx
        push ebx
        mov dword ptr [ebp - 10h], edi
        ; Exact mapped bytes E8 B9 FF FF FF: call 0x434c02
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 4]
        push eax
        push ebx
        ; Exact mapped bytes E8 55 01 00 00: call 0x434da8
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        cmp eax, ebx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 74 18: je 0x434c74
        __asm _emit 0x74
        __asm _emit 0x18
        push ebx
        push ebx
        push 376h
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x434c74
        __asm _emit 0x74
        __asm _emit 0x04
        mov esi, eax
        ; Exact mapped bytes EB 0A: jmp 0x434c7e
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp edi, ebx
        ; Exact mapped bytes 74 06: je 0x434c7e
        __asm _emit 0x74
        __asm _emit 0x06
        lea esi, [edi + 9ch]
        cmp esi, ebx
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes 74 13: je 0x434c98
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [esi]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 10h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x434c98
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 30000h
        mov dword ptr [esi], eax
        mov ebx, dword ptr [ebp + 0ch]
        test bl, 0f0h
        ; Exact mapped bytes 75 17: jne 0x434cb7
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, ebx
        and eax, 0fh
        cmp eax, 1
        ; Exact mapped bytes 76 0A: jbe 0x434cb4
        __asm _emit 0x76
        __asm _emit 0x0a
        cmp eax, 2
        ; Exact mapped bytes 76 08: jbe 0x434cb7
        __asm _emit 0x76
        __asm _emit 0x08
        cmp eax, 4
        ; Exact mapped bytes 77 03: ja 0x434cb7
        __asm _emit 0x77
        __asm _emit 0x03
        or ebx, 30h
        test edi, edi
        ; Exact mapped bytes 74 05: je 0x434cc0
        __asm _emit 0x74
        __asm _emit 0x05
        mov edi, dword ptr [edi + 78h]
        ; Exact mapped bytes EB 1A: jmp 0x434cda
        __asm _emit 0xeb
        __asm _emit 0x1a
        lea eax, [ebp - 114h]
        push 104h
        push eax
        push 0
        lea edi, [ebp - 114h]
        ; Exact mapped bytes FF 15 74 C2 43 00: call dword ptr [0x43c274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push ebx
        push edi
        push dword ptr [ebp + 8]
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 15 18 C5 43 00: call dword ptr [0x43c518]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test esi, esi
        mov edi, eax
        ; Exact mapped bytes 74 05: je 0x434cf3
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [esi], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0B: je 0x434d04
        __asm _emit 0x74
        __asm _emit 0x0b
        push 1
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 15 48 C5 43 00: call dword ptr [0x43c548]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push 1
        ; Exact mapped bytes E8 F4 FE FF FF: call 0x434c02
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
