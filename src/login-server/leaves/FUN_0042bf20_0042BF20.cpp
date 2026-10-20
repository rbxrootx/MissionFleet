// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042BF20 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_0042bf20_0042BF20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov esi, dword ptr [ebp + 10h]
        push 0f00021h
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [esi + 0ch]
        sub eax, edx
        push eax
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        push eax
        push edx
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 44 C0 43 00: call dword ptr [0x43c044]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes FF 15 E4 C4 43 00: call dword ptr [0x43c4e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        lea eax, [eax + 5]
        add eax, 3
        and eax, 0fffffffch
        ; Exact mapped bytes E8 98 2F FF FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], esp
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 7A: je 0x42bfeb
        __asm _emit 0x74
        __asm _emit 0x7a
        add ebx, 2
        mov eax, dword ptr [ebp - 4]
        push ebx
        push eax
        push edi
        ; Exact mapped bytes FF 15 E8 C4 43 00: call dword ptr [0x43c4e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x42bfeb
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes 66 BB 40 01: mov bx, 0x140
        __asm _emit 0x66
        __asm _emit 0xbb
        __asm _emit 0x40
        __asm _emit 0x01
        mov edi, dword ptr [ebp + 14h]
        mov eax, edi
        and al, 0fh
        cmp al, 0ch
        ; Exact mapped bytes 74 0B: je 0x42bf9e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ebx, edi
        ; Exact mapped bytes 66 83 E3 0F: and bx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe3
        __asm _emit 0x0f
        ; Exact mapped bytes 66 81 CB 50 01: or bx, 0x150
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xcb
        __asm _emit 0x50
        __asm _emit 0x01
        test edi, 80h
        ; Exact mapped bytes 74 03: je 0x42bfa9
        __asm _emit 0x74
        __asm _emit 0x03
        or bh, 8
        and edi, 8000000h
        ; Exact mapped bytes 74 13: je 0x42bfc4
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes A1 3C 14 45 00: mov eax, dword ptr [0x45143c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 54 C0 43 00: call dword ptr [0x43c054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, bx
        push eax
        push esi
        push -1
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A0 C3 43 00: call dword ptr [0x43c3a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 0E: je 0x42bfeb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 0ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 54 C0 43 00: call dword ptr [0x43c054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        lea esp, [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
