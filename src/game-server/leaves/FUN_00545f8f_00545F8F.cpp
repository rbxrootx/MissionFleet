// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00545F8F .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_00545f8f_00545F8F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 11: jge 0x545fb0
        __asm _emit 0x7d
        __asm _emit 0x11
        push 51h
        push 5c8b74h
        ; Exact mapped bytes E8 55 EA FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x545fb0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x545f99
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 11: jge 0x545fcd
        __asm _emit 0x7d
        __asm _emit 0x11
        push 52h
        push 5c8b74h
        ; Exact mapped bytes E8 38 EA FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x545fcd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x545fb6
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 11: jge 0x545fea
        __asm _emit 0x7d
        __asm _emit 0x11
        push 53h
        push 5c8b74h
        ; Exact mapped bytes E8 1B EA FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x545fea
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x545fd3
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7D 11: jge 0x546007
        __asm _emit 0x7d
        __asm _emit 0x11
        push 54h
        push 5c8b74h
        ; Exact mapped bytes E8 FE E9 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546007
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x545ff0
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 48h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 4ch], edx
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
