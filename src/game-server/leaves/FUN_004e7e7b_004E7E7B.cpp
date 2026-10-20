// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7E7B .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_004e7e7b_004E7E7B() {
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
        ; Exact mapped bytes 75 73: jne 0x4e7f03
        __asm _emit 0x75
        __asm _emit 0x73
        push 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 14h
        push eax
        ; Exact mapped bytes E8 AB FD FF FF: call 0x4e7c50
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 90 9C FF FF: call 0x4e1b40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, 1
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 12: jmp 0x4e7ee7
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 0ch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 16: jl 0x4e7f03
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 10h], eax
        ; Exact mapped bytes EB D2: jmp 0x4e7ed5
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 11: jne 0x4e7f1d
        __asm _emit 0x75
        __asm _emit 0x11
        push 62h
        push 5cfeb0h
        ; Exact mapped bytes E8 E8 CA 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7f1d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e7f03
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
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7F 11: jg 0x4e7f74
        __asm _emit 0x7f
        __asm _emit 0x11
        push 69h
        push 5cfeb0h
        ; Exact mapped bytes E8 91 CA 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7f74
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e7f5a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        mov eax, dword ptr [ebp - 4]
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
