// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005682F7 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_005682f7_005682F7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7D 06: jge 0x568314
        __asm _emit 0x7d
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 11: jge 0x568325
        __asm _emit 0x7d
        __asm _emit 0x11
        push 4fh
        push 5cf588h
        ; Exact mapped bytes E8 E0 C6 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568325
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x568303
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        ; Exact mapped bytes E8 44 29 F4 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x29
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x568356
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 D2 80 F4 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x80
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x56835d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx*4], edx
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
