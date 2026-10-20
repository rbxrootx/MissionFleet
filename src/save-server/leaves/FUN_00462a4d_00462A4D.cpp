// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462A4D .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_00462a4d_00462A4D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 34h
        mov dword ptr [ebp - 8], eax
        push 27eh
        push 67ca48h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 EE 77 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x462a8c
        __asm _emit 0x75
        __asm _emit 0x14
        push 27fh
        push 67ca48h
        ; Exact mapped bytes E8 B9 62 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x62
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x462a8c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x462a72
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x462aac
        __asm _emit 0x75
        __asm _emit 0x14
        push 280h
        push 67ca48h
        ; Exact mapped bytes E8 99 62 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x62
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x462aac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x462a92
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 641488h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
