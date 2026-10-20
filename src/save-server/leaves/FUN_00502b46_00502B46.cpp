// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00502B46 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_00502b46_00502B46() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 40h], ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 99 03 00 00: call 0x502ef0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 418h
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x502b89
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 6D: jae 0x502bfe
        __asm _emit 0x73
        __asm _emit 0x6d
        lea edx, [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 4E DD FF FF: call 0x5008ef
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 33h]
        and edx, 0ffh
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 75 45: jne 0x502bfc
        __asm _emit 0x75
        __asm _emit 0x45
        push 0
        lea eax, [ebp - 28h]
        push eax
        push 0bd11ffffh
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 F3 47 FD FF: call 0x4d73bf
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x502bd2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB AE: jmp 0x502b80
        __asm _emit 0xeb
        __asm _emit 0xae
        push 0
        lea ecx, [ebp - 28h]
        push ecx
        push -1
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 D9 47 FD FF: call 0x4d73bf
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x502bec
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 94: jmp 0x502b80
        __asm _emit 0xeb
        __asm _emit 0x94
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 28 50 FD FF: call 0x4d7c24
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 82: jmp 0x502b80
        __asm _emit 0xeb
        __asm _emit 0x82
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 87 20 FD FF: call 0x4d4c95
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
