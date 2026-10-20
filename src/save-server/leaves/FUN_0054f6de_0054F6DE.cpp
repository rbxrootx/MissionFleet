// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F6DE .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0054f6de_0054F6DE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 67bfa8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B AA F8 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xaa
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54f70a
        __asm _emit 0x75
        __asm _emit 0x11
        push 58h
        push 67bf90h
        ; Exact mapped bytes E8 3B 96 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f70a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x54f6e8
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 11: je 0x54f72a
        __asm _emit 0x74
        __asm _emit 0x11
        push 5ah
        push 67bf90h
        ; Exact mapped bytes E8 1B 96 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f72a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x54f710
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 63 2C F7 FF: call 0x4c23a2
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], edx
        push 5eh
        push 67bf90h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 08 AB F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xab
        __asm _emit 0xf8
        __asm _emit 0xff
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
