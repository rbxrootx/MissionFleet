// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500C67 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_00500c67_00500C67() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 75 14: jne 0x500c93
        __asm _emit 0x75
        __asm _emit 0x14
        push 27eh
        push 675764h
        ; Exact mapped bytes E8 B2 80 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500c93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x500c73
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 84h], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 0a000h
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 64h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x500ced
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 64h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x500ced
        __asm _emit 0x74
        __asm _emit 0x18
        push 46h
        push 0
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 34: jmp 0x500d21
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x500d0b
        __asm _emit 0x74
        __asm _emit 0x18
        push 4ah
        push 0
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x500d21
        __asm _emit 0xeb
        __asm _emit 0x16
        push 50h
        push 0
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
