// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051995B .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_0051995b_0051995B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 40h], ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 64 03 00 00: call 0x519cd0
        __asm _emit 0xe8
        __asm _emit 0x64
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
        ; Exact mapped bytes EB 09: jmp 0x51999e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 6D: jae 0x519a13
        __asm _emit 0x73
        __asm _emit 0x6d
        lea edx, [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 09 DD FF FF: call 0x5176bf
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 33h]
        and edx, 0ffh
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 75 45: jne 0x519a11
        __asm _emit 0x75
        __asm _emit 0x45
        push 0
        lea eax, [ebp - 28h]
        push eax
        push 0bd11ffffh
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 3E E9 FD FF: call 0x4f831f
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x5199e7
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB AE: jmp 0x519995
        __asm _emit 0xeb
        __asm _emit 0xae
        push 0
        lea ecx, [ebp - 28h]
        push ecx
        push -1
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 24 E9 FD FF: call 0x4f831f
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x519a01
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 94: jmp 0x519995
        __asm _emit 0xeb
        __asm _emit 0x94
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 73 F1 FD FF: call 0x4f8b84
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 82: jmp 0x519995
        __asm _emit 0xeb
        __asm _emit 0x82
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 42 D3 FD FF: call 0x4f6d65
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd3
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
