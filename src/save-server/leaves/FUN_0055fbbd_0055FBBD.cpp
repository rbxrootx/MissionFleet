// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055FBBD .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_0055fbbd_0055FBBD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 4c0h
        push 67b3b8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 84 A6 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 75 14: jne 0x55fbf9
        __asm _emit 0x75
        __asm _emit 0x14
        push 4c1h
        push 67b3b8h
        ; Exact mapped bytes E8 4C 91 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55fbf9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55fbdc
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 75 05: jne 0x55fc10
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 31: jmp 0x55fc41
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6F E9 F6 FF: call 0x4ce587
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 68h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 2C 45 F2 FF: call 0x484156
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x45
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 69 CB FF FF: call 0x55c79c
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BE E9 F6 FF: call 0x4ce5fc
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
