// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550EEB .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_00550eeb_00550EEB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F 15 FA FF: call 0x4f243c
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x15
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 35: je 0x550f3e
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
        ; Exact mapped bytes E8 40 25 F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x25
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x550f3e
        __asm _emit 0x75
        __asm _emit 0x14
        push 300h
        push 67bf90h
        ; Exact mapped bytes E8 07 7E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550f3e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 B9: jne 0x550efd
        __asm _emit 0x75
        __asm _emit 0xb9
        push 301h
        push 67bf90h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        push ecx
        ; Exact mapped bytes E8 06 93 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x93
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 23: je 0x550f86
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 1E 3E FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x550f86
        __asm _emit 0x75
        __asm _emit 0x14
        push 302h
        push 67bf90h
        ; Exact mapped bytes E8 BF 7D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x550f86
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CE: jne 0x550f5a
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
