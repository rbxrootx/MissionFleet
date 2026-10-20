// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEE04 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_004cee04_004CEE04() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC 1C 00 00: call 0x4d0b13
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        push 67185ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 9A 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x9a
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 40h]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x4cee51
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 40: mov cx, word ptr [eax + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x40
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 9C 05 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x4cee60
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 40h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB 99 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 44h]
        push edx
        push 671874h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 99 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 80 9B 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        push ecx
        push 67188ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC 99 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 65 9B 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        push eax
        push 6718a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 99 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 73 9C 05 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 6718b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 99 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2F 9B 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        push 6718c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 99 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
