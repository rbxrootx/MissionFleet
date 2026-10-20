// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052C242 .. +0x128 bytes.
extern "C" __declspec(naked) void FUN_0052c242_0052C242() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 21ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 218h], ecx
        lea eax, [ebp - 210h]
        push eax
        lea ecx, [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 3e8h
        ; Exact mapped bytes E8 B0 C4 F9 FF: call 0x4c8720
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52c288
        __asm _emit 0x75
        __asm _emit 0x14
        push 464h
        push 5c8fcch
        ; Exact mapped bytes E8 7D 87 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c288
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x52c254
        __asm _emit 0x75
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 208h
        mov edx, dword ptr [ebp - 4]
        push edx
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 210h]
        push edx
        push 8000h
        push 3e4h
        push 3e8h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 3A C4 F9 FF: call 0x4c871a
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 218h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 3e4h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B0 28 5E 00: call dword ptr [0x5e28b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 9C 30 FC FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x52c321
        __asm _emit 0x75
        __asm _emit 0x18
        lea ecx, [ebp - 20ch]
        push ecx
        push 5c9100h
        ; Exact mapped bytes E8 FB 38 FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x38
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 40: jmp 0x52c361
        __asm _emit 0xeb
        __asm _emit 0x40
        lea edx, [ebp - 20ch]
        push edx
        ; Exact mapped bytes E8 D3 91 00 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 21ch], eax
        mov eax, dword ptr [ebp - 21ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52c35f
        __asm _emit 0x75
        __asm _emit 0x14
        lea eax, [ebp - 20ch]
        push eax
        push 5c9140h
        ; Exact mapped bytes E8 B9 38 FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x38
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
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
