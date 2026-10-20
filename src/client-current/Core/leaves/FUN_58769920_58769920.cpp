// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769920 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_58769920_58769920() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF B8 E7 FF: call 0x585e51e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ecch], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 7ch], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58769959
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 37: jge 0x58769996
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 37 D2 FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x37
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x58769994
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 37 D2 FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x37
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CD D4 DF FF: call 0x58566e60
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd4
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x58769950
        __asm _emit 0xeb
        __asm _emit 0xba
        push 589604e0h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 57 25 D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x25
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, 6
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x587699d0
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5f24h], 1
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 28 5F 00 00: mov word ptr [edx + 0x5f28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
