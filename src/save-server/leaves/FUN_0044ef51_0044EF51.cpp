// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044EF51 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_0044ef51_0044EF51() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x44ef6c
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 75 05: jne 0x44ef71
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x44f01a
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        push ecx
        push 640cf0h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 0F 8C 87 00 00 00: jl 0x44f01a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x44efad
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c2h
        push 67702ch
        ; Exact mapped bytes E8 98 9D 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44efad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x44ef93
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 8], 0
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 3C: jl 0x44f00e
        __asm _emit 0x7c
        __asm _emit 0x3c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x44efec
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c7h
        push 67702ch
        ; Exact mapped bytes E8 59 9D 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44efec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x44efd2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
