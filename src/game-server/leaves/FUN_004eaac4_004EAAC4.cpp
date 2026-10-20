// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EAAC4 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_004eaac4_004EAAC4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 73: jne 0x4eab4c
        __asm _emit 0x75
        __asm _emit 0x73
        push 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 14h
        push eax
        ; Exact mapped bytes E8 62 D1 FF FF: call 0x4e7c50
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 70 FF FF: call 0x4e1b40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, 1
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 10h]
        add eax, edx
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 12: jmp 0x4eab30
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 0ch
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 16: jl 0x4eab4c
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10h], eax
        ; Exact mapped bytes EB D2: jmp 0x4eab1e
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 11: jne 0x4eab66
        __asm _emit 0x75
        __asm _emit 0x11
        push 7dh
        push 5c7d14h
        ; Exact mapped bytes E8 9F 9E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eab66
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4eab4c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x4eabaf
        __asm _emit 0x7f
        __asm _emit 0x14
        push 82h
        push 5c7d14h
        ; Exact mapped bytes E8 56 9E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eabaf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4eab92
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 40 08 00 00: mov word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
