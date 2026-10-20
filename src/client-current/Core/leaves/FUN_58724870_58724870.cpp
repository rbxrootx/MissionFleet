// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58724870 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_58724870_58724870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        movzx eax, byte ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 7C 12: jl 0x58724893
        __asm _emit 0x7c
        __asm _emit 0x12
        movzx ecx, byte ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 13a5h]
        cmp ecx, eax
        ; Exact mapped bytes 7C 06: jl 0x58724899
        __asm _emit 0x7c
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 61: jmp 0x587248f8
        __asm _emit 0xeb
        __asm _emit 0x61
        ; Exact mapped bytes EB 5D: jmp 0x587248f6
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587248b2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0a0h]
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 35: jge 0x587248f6
        __asm _emit 0x7d
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0fa4h], 0
        ; Exact mapped bytes 74 23: je 0x587248f4
        __asm _emit 0x74
        __asm _emit 0x23
        movzx eax, byte ptr [ebp + 8]
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 75 11: jne 0x587248eb
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0da4h]
        ; Exact mapped bytes EB 0F: jmp 0x587248f8
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes EB 09: jmp 0x587248f4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB B3: jmp 0x587248a9
        __asm _emit 0xeb
        __asm _emit 0xb3
        xor eax, eax
        mov esp, ebp
    }
}
