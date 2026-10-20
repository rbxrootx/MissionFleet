// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00483E0C .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_00483e0c_00483E0C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18d0h
        ; Exact mapped bytes E8 FC 1D 00 00: call 0x485c30
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x483ef8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 18f0h], 0
        ; Exact mapped bytes 74 18: je 0x483e60
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 18f0h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 AC 95 06 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18d0h
        ; Exact mapped bytes E8 C2 1D 00 00: call 0x485c30
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 18f4h], eax
        push 3b4h
        push 5c44d4h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18f4h]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 A0 91 06 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 18f0h], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x483eb7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18d0h
        ; Exact mapped bytes E8 BB 1C 00 00: call 0x485b80
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x483ef8
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18d0h
        ; Exact mapped bytes E8 D9 1C 00 00: call 0x485bb0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 18f0h]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        mov dword ptr [edx + ecx*4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18d0h
        ; Exact mapped bytes E8 EA 1C 00 00: call 0x485be0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B6: jmp 0x483eae
        __asm _emit 0xeb
        __asm _emit 0xb6
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 DE 48 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
