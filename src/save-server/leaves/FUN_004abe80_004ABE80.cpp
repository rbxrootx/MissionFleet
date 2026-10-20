// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ABE80 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_004abe80_004ABE80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 14: je 0x4abea9
        __asm _emit 0x74
        __asm _emit 0x14
        push 4c2h
        push 672a58h
        ; Exact mapped bytes E8 9C CE 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4abea9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4abe8c
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4abec9
        __asm _emit 0x75
        __asm _emit 0x14
        push 4c3h
        push 672a58h
        ; Exact mapped bytes E8 7C CE 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4abec9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4abeaf
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EE 97 07 00: call 0x5256c5
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4abeef
        __asm _emit 0x75
        __asm _emit 0x14
        push 4c4h
        push 672a58h
        ; Exact mapped bytes E8 56 CE 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4abeef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4abecf
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 CF 9C 00 00: call 0x4b5bd0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 7A 81 FD FF: call 0x484084
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        cmp dword ptr [edx + 4], 0
        setne al
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
