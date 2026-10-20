// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00547980 .. +0x17F bytes.
extern "C" __declspec(naked) void FUN_00547980_00547980() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes FF 15 8C 23 5E 00: call dword ptr [0x5e238c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        shl eax, 8
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        sar ecx, 8
        and ecx, 0ffh
        and ecx, 0ffh
        add eax, ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 54h], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 80000000h
        neg eax
        sbb eax, eax
        neg eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 58h], eax
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        xor eax, eax
        cmp edx, 4
        setge al
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 5ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, 1
        sub eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [edx + 64h], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 74 16: je 0x547a31
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        ; Exact mapped bytes FF 15 4C 23 5E 00: call dword ptr [0x5e234c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 40000h
        sbb ecx, ecx
        inc ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 68h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AA 5B FB FF: call 0x4fd5e3
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E5 5A FB FF: call 0x4fd530
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x5a
        __asm _emit 0xfb
        __asm _emit 0xff
        push 7f02h
        push 0
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 3ch], eax
        push 7f00h
        push 0
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 40h], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 75 11: jne 0x547a8b
        __asm _emit 0x75
        __asm _emit 0x11
        push 53h
        push 5ca20ch
        ; Exact mapped bytes E8 7A CF FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547a8b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x547a71
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 75 11: jne 0x547aab
        __asm _emit 0x75
        __asm _emit 0x11
        push 54h
        push 5ca20ch
        ; Exact mapped bytes E8 5A CF FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547aab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x547a91
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 44h], 0
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        cmp dword ptr [edx + 5ch], 0
        setne al
        inc eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        cmp dword ptr [edx + 5ch], 0
        setne al
        inc eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 44h], 0
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
