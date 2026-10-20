// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055680B .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_0055680b_0055680B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 653h
        push 5cfa08h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 36 49 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x49
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x556847
        __asm _emit 0x75
        __asm _emit 0x14
        push 654h
        push 5cfa08h
        ; Exact mapped bytes E8 BE E1 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556847
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55682a
        __asm _emit 0x75
        __asm _emit 0xdd
        push 58ec68h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 28 56 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x55687b
        __asm _emit 0x75
        __asm _emit 0x14
        push 658h
        push 5cfa08h
        ; Exact mapped bytes E8 8A E1 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55687b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x556861
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 D2 00 00: call 0x563ab5
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
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
