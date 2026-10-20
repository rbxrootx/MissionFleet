// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053C201 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0053c201_0053C201() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 4000h
        ; Exact mapped bytes E8 14 91 F9 FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x91
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x53c22c
        __asm _emit 0x75
        __asm _emit 0x11
        push 1dh
        push 673188h
        ; Exact mapped bytes E8 19 CB FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53c22c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x53c20d
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp + 8]
        and ecx, 40000000h
        test ecx, ecx
        ; Exact mapped bytes 75 11: jne 0x53c250
        __asm _emit 0x75
        __asm _emit 0x11
        push 20h
        push 673198h
        ; Exact mapped bytes E8 F5 CA FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53c250
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DC: jne 0x53c232
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 6731a8h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
