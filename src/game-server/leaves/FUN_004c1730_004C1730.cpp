// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1730 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_004c1730_004C1730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov byte ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 0ch]
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4c174d
        __asm _emit 0x74
        __asm _emit 0x09
        mov cl, byte ptr [ebp - 0ch]
        or cl, 20h
        mov byte ptr [ebp - 0ch], cl
        mov edx, dword ptr [ebp + 0ch]
        and edx, 4000h
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x4c1762
        __asm _emit 0x74
        __asm _emit 0x08
        mov al, byte ptr [ebp - 0ch]
        or al, 80h
        mov byte ptr [ebp - 0ch], al
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 80h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x4c1778
        __asm _emit 0x74
        __asm _emit 0x09
        mov dl, byte ptr [ebp - 0ch]
        or dl, 10h
        mov byte ptr [ebp - 0ch], dl
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 4C 22 5E 00: call dword ptr [0x5e224c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 17: jne 0x4c17a2
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 39 FA FE FF: call 0x4b11d0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x4c1830
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 0B: jne 0x4c17b3
        __asm _emit 0x75
        __asm _emit 0x0b
        mov cl, byte ptr [ebp - 0ch]
        or cl, 40h
        mov byte ptr [ebp - 0ch], cl
        ; Exact mapped bytes EB 0F: jmp 0x4c17c2
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 75 09: jne 0x4c17c2
        __asm _emit 0x75
        __asm _emit 0x09
        mov dl, byte ptr [ebp - 0ch]
        or dl, 8
        mov byte ptr [ebp - 0ch], dl
        ; Exact mapped bytes E8 69 FB FF FF: call 0x4c1330
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 1B: jne 0x4c17eb
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 9B FA FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 18h
        ; Exact mapped bytes E8 A0 FA FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 45: jmp 0x4c1830
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 28 FD FF FF: call 0x4c1520
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dl, byte ptr [ebp - 0ch]
        or dl, 1
        mov byte ptr [ebp - 0ch], dl
        mov eax, dword ptr [ebp - 8]
        sar eax, 5
        mov ecx, dword ptr [ebp - 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        mov al, byte ptr [ebp - 0ch]
        mov byte ptr [edx + ecx + 4], al
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 A6 00 00 00: call 0x4c18d0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
