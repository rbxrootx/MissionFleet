// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432B7E .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_00432b7e_00432B7E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        ; Exact mapped bytes 8B 35 6C C0 43 00: mov esi, dword ptr [0x43c06c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push edi
        push 0ah
        mov dword ptr [ebp - 4], ecx
        pop ebx
        mov edi, 43eacch
        push 11h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x432ba8
        __asm _emit 0x75
        __asm _emit 0x08
        push 0dh
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x432bf2
        __asm _emit 0x74
        __asm _emit 0x4a
        lea ecx, [ebp - 40h]
        push ecx
        push 3ch
        push eax
        ; Exact mapped bytes FF 15 4C C0 43 00: call dword ptr [0x43c04c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x432bf2
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        lea edi, [ebp - 24h]
        ; Exact mapped bytes FF 15 C0 C3 43 00: call dword ptr [0x43c3c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp - 40h]
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x432bd2
        __asm _emit 0x7d
        __asm _emit 0x05
        neg eax
        mov dword ptr [ebp - 40h], eax
        push 5ah
        push esi
        ; Exact mapped bytes FF 15 A8 C0 43 00: call dword ptr [0x43c0a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push 48h
        push dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 15 D0 C1 43 00: call dword ptr [0x43c1d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        push 0
        mov ebx, eax
        ; Exact mapped bytes FF 15 C4 C3 43 00: call dword ptr [0x43c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 08 00: cmp word ptr [ebp + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 03: jne 0x432bfc
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ebp + 8], ebx
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        push edi
        ; Exact mapped bytes E8 5C FE FF FF: call 0x432a64
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
