// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051FF31 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_0051ff31_0051FF31() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x51ff63
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp + 8], eax
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB 0C 00 00: call 0x520c3c
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 4D: jle 0x51ffc7
        __asm _emit 0x7e
        __asm _emit 0x4d
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 4A 51 FC FF: call 0x4e50d5
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 C7 27 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 25: jne 0x51ffc7
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 B3 27 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x51ffc7
        __asm _emit 0x75
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 0E 51 FC FF: call 0x4e50d5
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
