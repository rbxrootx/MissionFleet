// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B5520 .. +0x1BB bytes.
extern "C" __declspec(naked) void FUN_100b5520_100B5520() {
    __asm {
        sub esp, 14h
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        ; Exact mapped bytes E8 02 02 00 00: call 0x100b5730
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 34h]
        lea edi, [ebp + 88h]
        mov ecx, 5
        mov eax, dword ptr [esp + 28h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [ebp + 0a4h], edx
        xor edx, edx
        mov dword ptr [ebp + 9ch], eax
        mov eax, dword ptr [esp + 38h]
        mov dword ptr [esp + 10h], edx
        mov dword ptr [esp + 14h], edx
        mov dword ptr [ebp + 0a0h], ecx
        mov ecx, dword ptr [esp + 3ch]
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 1ch], edx
        mov dword ptr [ebp + 0a8h], eax
        mov dword ptr [ebp + 0ach], ecx
        mov dword ptr [esp + 20h], edx
        xor edi, edi
        cmp edi, 9
        mov esi, 5
        ; Exact mapped bytes 77 2C: ja 0x100b55bf
        __asm _emit 0x77
        __asm _emit 0x2c
        ; Exact mapped bytes FF 24 BD DC 56 0B 10: jmp dword ptr [edi*4 + 0x100b56dc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0xbd
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x0b
        __asm _emit 0x10
        mov esi, 4
        ; Exact mapped bytes EB 1E: jmp 0x100b55bf
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov esi, 3
        ; Exact mapped bytes EB 17: jmp 0x100b55bf
        __asm _emit 0xeb
        __asm _emit 0x17
        mov esi, 2
        ; Exact mapped bytes EB 10: jmp 0x100b55bf
        __asm _emit 0xeb
        __asm _emit 0x10
        xor esi, esi
        ; Exact mapped bytes EB 0C: jmp 0x100b55bf
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov esi, 1
        ; Exact mapped bytes EB 05: jmp 0x100b55bf
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 5
        mov al, byte ptr [edi + ebp + 88h]
        mov bl, byte ptr [esp + esi + 10h]
        mov cl, byte ptr [edi + ebp + 92h]
        add bl, al
        mov byte ptr [esp + esi + 10h], bl
        mov dl, byte ptr [esp + esi + 1ah]
        add dl, cl
        mov ecx, dword ptr [ebp + esi*8 + 0b0h]
        mov byte ptr [esp + esi + 1ah], dl
        mov bl, byte ptr [esp + esi + 10h]
        mov edx, ebx
        and edx, 0ffh
        push edx
        ; Exact mapped bytes E8 26 A1 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        mov al, byte ptr [esp + esi + 1ah]
        mov ecx, dword ptr [ebp + esi*8 + 0b4h]
        and eax, 0ffh
        push eax
        ; Exact mapped bytes E8 10 A1 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        test bl, bl
        ; Exact mapped bytes 74 04: je 0x100b5618
        __asm _emit 0x74
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes EB 02: jmp 0x100b561a
        __asm _emit 0xeb
        __asm _emit 0x02
        push -64h
        mov ecx, dword ptr [ebp + esi*8 + 0b0h]
        ; Exact mapped bytes E8 3A 9B 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        mov al, byte ptr [esp + esi + 1ah]
        test al, al
        ; Exact mapped bytes 74 04: je 0x100b5632
        __asm _emit 0x74
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes EB 02: jmp 0x100b5634
        __asm _emit 0xeb
        __asm _emit 0x02
        push -64h
        mov ecx, dword ptr [ebp + esi*8 + 0b4h]
        ; Exact mapped bytes E8 20 9B 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        inc edi
        cmp edi, 0ah
        ; Exact mapped bytes 0F 8C 3F FF FF FF: jl 0x100b5589
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 40h]
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x100b56d1
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, 5
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 0e74h]
        mov al, byte ptr [edx + 2]
        and eax, 1fh
        cmp eax, 9
        ; Exact mapped bytes 77 2C: ja 0x100b569c
        __asm _emit 0x77
        __asm _emit 0x2c
        ; Exact mapped bytes FF 24 85 04 57 0B 10: jmp dword ptr [eax*4 + 0x100b5704]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x0b
        __asm _emit 0x10
        mov esi, 4
        ; Exact mapped bytes EB 1E: jmp 0x100b569c
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov esi, 3
        ; Exact mapped bytes EB 17: jmp 0x100b569c
        __asm _emit 0xeb
        __asm _emit 0x17
        mov esi, 2
        ; Exact mapped bytes EB 10: jmp 0x100b569c
        __asm _emit 0xeb
        __asm _emit 0x10
        xor esi, esi
        ; Exact mapped bytes EB 0C: jmp 0x100b569c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov esi, 1
        ; Exact mapped bytes EB 05: jmp 0x100b569c
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 5
        mov bl, byte ptr [esp + esi + 10h]
        mov ecx, dword ptr [ebp + esi*8 + 0b0h]
        dec bl
        mov al, bl
        mov byte ptr [esp + esi + 10h], bl
        and eax, 0ffh
        push eax
        ; Exact mapped bytes E8 66 A0 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ebp, dword ptr [ebp + esi*8 + 0b0h]
        mov eax, dword ptr [ebp + 64h]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x100b56d1
        __asm _emit 0x75
        __asm _emit 0x09
        push -64h
        mov ecx, ebp
        ; Exact mapped bytes E8 8F 9A 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
