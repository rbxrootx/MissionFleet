// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E7B8 .. +0x165 bytes.
extern "C" __declspec(naked) void FUN_0055e7b8_0055E7B8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 E0 FF FF: call 0x55c7cf
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0d0h
        push ecx
        push 67b4d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 A0 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 62 A0 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        push eax
        push 67b4e0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E A0 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F A2 FC FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        push 67b4f4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 A0 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 A3 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        push 67b508h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 A0 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C1 A1 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        push eax
        push 67b51ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FD 9F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F6 9F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        push edx
        push 67b534h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 9F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 A2 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        push 67b548h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 9F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 70 A1 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        push eax
        push 67b55ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 9F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7E A2 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        push edx
        push 67b574h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 9F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 37 A1 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 70h], 55c710h
        ; Exact mapped bytes 75 0F: jne 0x55e8df
        __asm _emit 0x75
        __asm _emit 0x0f
        push 67b588h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E 9F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x55e8ec
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67b5bch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 9F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        push edx
        push 67b5f0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 9F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F1 A0 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        push 67b604h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 34 9F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9f
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
