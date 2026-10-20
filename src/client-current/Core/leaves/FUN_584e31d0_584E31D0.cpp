// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E31D0 .. +0x17C bytes.
extern "C" __declspec(naked) void FUN_584e31d0_584E31D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8], ecx
        push 5889c3a4h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 AF FE FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0ch], eax
        push 5889c3a8h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8B AF FE FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 10h], edx
        push 5889c3ach
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 75 AF FE FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 0
        push 0e8h
        push 0fbh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 58 FF FF: call 0x584d8aa0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 90h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 82h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 69h
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B3 23 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x23
        __asm _emit 0x2d
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 82h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 0e1h
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7D 23 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x23
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 82h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 159h
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 47 23 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x23
        __asm _emit 0x2d
        __asm _emit 0x00
        push 0
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB 56 FF FF: call 0x584d8990
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 56 FF FF: call 0x584d8990
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        push 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 56 FF FF: call 0x584d8990
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], 3
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 02: je 0x584e3315
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 23: jmp 0x584e3338
        __asm _emit 0xeb
        __asm _emit 0x23
        push 5889c3b0h
        ; Exact mapped bytes E8 D1 EC 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A5 01 00 00: call 0x584e34d0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
