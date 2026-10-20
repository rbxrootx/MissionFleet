// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F2C4 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_0055f2c4_0055F2C4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 D4 FF FF: call 0x55c7cf
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 67b7ach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 95 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 71 97 FC FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 67b7c0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 95 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 98 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 67b7d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A 95 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D3 96 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 67b7e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F 95 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 08 95 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 67b800h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F4 94 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C6 97 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 67b814h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 94 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 82 96 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        push 67b828h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE 94 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 97 FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        push 67b840h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 94 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 96 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 55c710h
        ; Exact mapped bytes 75 0F: jne 0x55f3cd
        __asm _emit 0x75
        __asm _emit 0x0f
        push 67b854h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 94 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x55f3da
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67b888h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 94 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push 67b8bch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A 94 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 03 96 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        push 67b8d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 94 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x94
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
