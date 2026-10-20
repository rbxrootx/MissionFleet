// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051092F .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_0051092f_0051092F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 19ch
        push 5c84b0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 14 A8 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 0B: jl 0x51095d
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 40h]
        ; Exact mapped bytes 7C 14: jl 0x510971
        __asm _emit 0x7c
        __asm _emit 0x14
        push 19dh
        push 5c84b0h
        ; Exact mapped bytes E8 94 40 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510971
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x51094c
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x510991
        __asm _emit 0x7d
        __asm _emit 0x14
        push 19eh
        push 5c84b0h
        ; Exact mapped bytes E8 74 40 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510991
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x510977
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 14: jge 0x5109b1
        __asm _emit 0x7d
        __asm _emit 0x14
        push 19fh
        push 5c84b0h
        ; Exact mapped bytes E8 54 40 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5109b1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x510997
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + eax + 4], ecx
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ecx + edx], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
