// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570CA7 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_00570ca7_00570CA7() {
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
        ; Exact mapped bytes 7D 06: jge 0x570cc4
        __asm _emit 0x7d
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 11: jge 0x570cd5
        __asm _emit 0x7d
        __asm _emit 0x11
        push 4fh
        push 67bd60h
        ; Exact mapped bytes E8 70 80 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x570cd5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x570cb3
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        ; Exact mapped bytes E8 34 66 EF FF: call 0x467320
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x66
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x570d06
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 82 92 EF FF: call 0x469f80
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x92
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x570d0d
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
