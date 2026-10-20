// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005283DE .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_005283de_005283DE() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57dd63h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x528421
        __asm _emit 0x75
        __asm _emit 0x11
        push 7bh
        push 5c8f88h
        ; Exact mapped bytes E8 E4 C5 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528421
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x5283ff
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 17: jne 0x528444
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 40h], 2
        ; Exact mapped bytes 74 09: je 0x52843f
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 40h], 3
        ; Exact mapped bytes 75 05: jne 0x528444
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x52850f
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 199h
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x52850f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 4B: jne 0x5284c1
        __asm _emit 0x75
        __asm _emit 0x4b
        push 8ah
        push 5c8f88h
        push 0ch
        ; Exact mapped bytes E8 AC 4B FC FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x5284a7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0E 1A 00 00: call 0x529eb0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5284ae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 19ah
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 14: jne 0x5284fd
        __asm _emit 0x75
        __asm _emit 0x14
        push 8dh
        push 5c8f88h
        ; Exact mapped bytes E8 08 C5 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5284fd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x5284c9
        __asm _emit 0x75
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4F 0D 00 00: call 0x52925e
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
