// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052FD60 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_0052fd60_0052FD60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes 75 11: jne 0x52fd90
        __asm _emit 0x75
        __asm _emit 0x11
        push 27h
        push 5ccae4h
        ; Exact mapped bytes E8 75 4C 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52fd90
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x52fd73
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0b4h]
        ; Exact mapped bytes E8 45 B5 FC FF: call 0x4fb2e9
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x52fdb2
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 FA FF F9 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        push 588240h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 B2 FC FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x52fdd4
        __asm _emit 0x75
        __asm _emit 0x11
        push 2bh
        push 5ccae4h
        ; Exact mapped bytes E8 31 4C 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52fdd4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x52fdb2
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 FC 00 00 00: call dword ptr [edx + 0xfc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x52fdf9
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 CA 47 FD FF: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
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
