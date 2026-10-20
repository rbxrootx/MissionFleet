// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045960F .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_0045960f_0045960F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        cmp eax, 8
        ; Exact mapped bytes 74 22: je 0x459666
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 0eh
        ; Exact mapped bytes 74 14: je 0x459666
        __asm _emit 0x74
        __asm _emit 0x14
        push 0fbh
        push 678664h
        ; Exact mapped bytes E8 DF F6 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf6
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x459666
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CB: jne 0x459637
        __asm _emit 0x75
        __asm _emit 0xcb
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DC 19 0F 00: call 0x54b050
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x19
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 C7 00 08 00: mov word ptr [eax], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 8], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x45972a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        cmp edx, 0eh
        ; Exact mapped bytes 75 23: jne 0x4596c1
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 50 BB 68 00: call dword ptr [0x68bb50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 5B: jmp 0x45971c
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x4596d6
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 36: jmp 0x45970c
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 AB C8 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], esp
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 E7 3E FF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 F4 BA 68 00: call dword ptr [0x68baf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 05: jne 0x45972a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 B2 97 04 00: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        lea esp, [ebp - 2ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
