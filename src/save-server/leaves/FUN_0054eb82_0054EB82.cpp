// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054EB82 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_0054eb82_0054EB82() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 115h
        push 67bee8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 BF B6 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x54ebcc
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 18h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B2 48 F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x48
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54ebcc
        __asm _emit 0x75
        __asm _emit 0x14
        push 117h
        push 67bee8h
        ; Exact mapped bytes E8 79 A1 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ebcc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x54eba1
        __asm _emit 0x75
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 8]
        add eax, 10h
        push eax
        push 1
        push 0
        ; Exact mapped bytes FF 15 70 C2 68 00: call dword ptr [0x68c270]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 13: jge 0x54ebff
        __asm _emit 0x7d
        __asm _emit 0x13
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0D: je 0x54ebff
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 6C F7 FF FF: call 0x54e36b
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7C 1D: jl 0x54ec22
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54ec22
        __asm _emit 0x75
        __asm _emit 0x14
        push 11dh
        push 67bee8h
        ; Exact mapped bytes E8 23 A1 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ec22
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x54ebff
        __asm _emit 0x75
        __asm _emit 0xd7
        xor eax, eax
        cmp dword ptr [ebp - 4], 0
        setge al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
