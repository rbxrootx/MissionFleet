// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055247B .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_0055247b_0055247B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF AF FB FF: call 0x50d48c
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xaf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 35: je 0x5524ce
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        push edx
        ; Exact mapped bytes E8 A0 D9 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd9
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5524ce
        __asm _emit 0x75
        __asm _emit 0x14
        push 300h
        push 5cf7b8h
        ; Exact mapped bytes E8 37 25 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5524ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 B9: jne 0x55248d
        __asm _emit 0x75
        __asm _emit 0xb9
        push 301h
        push 5cf7b8h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        push ecx
        ; Exact mapped bytes E8 76 8C FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 23: je 0x552516
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 8E EA FD FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x552516
        __asm _emit 0x75
        __asm _emit 0x14
        push 302h
        push 5cf7b8h
        ; Exact mapped bytes E8 EF 24 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552516
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CE: jne 0x5524ea
        __asm _emit 0x75
        __asm _emit 0xce
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
