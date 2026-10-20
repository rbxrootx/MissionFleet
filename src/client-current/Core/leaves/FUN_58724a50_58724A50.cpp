// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58724A50 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_58724a50_58724A50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        movzx eax, byte ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 7C 12: jl 0x58724a73
        __asm _emit 0x7c
        __asm _emit 0x12
        movzx ecx, byte ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 13a5h]
        cmp ecx, eax
        ; Exact mapped bytes 7C 06: jl 0x58724a79
        __asm _emit 0x7c
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 68: jmp 0x58724adf
        __asm _emit 0xeb
        __asm _emit 0x68
        ; Exact mapped bytes EB 66: jmp 0x58724adf
        __asm _emit 0xeb
        __asm _emit 0x66
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58724a92
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0a0h]
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 3C: jge 0x58724add
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0fa4h], 0
        ; Exact mapped bytes 74 2A: je 0x58724adb
        __asm _emit 0x74
        __asm _emit 0x2a
        movzx eax, byte ptr [ebp + 8]
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 75 18: jne 0x58724ad2
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 0da4h]
        ; Exact mapped bytes E8 A4 E8 D9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 0F: jmp 0x58724adf
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes EB 09: jmp 0x58724adb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB AC: jmp 0x58724a89
        __asm _emit 0xeb
        __asm _emit 0xac
        xor eax, eax
        mov esp, ebp
    }
}
