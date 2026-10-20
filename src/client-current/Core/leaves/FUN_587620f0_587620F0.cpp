// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587620F0 .. +0x129 bytes.
extern "C" __declspec(naked) void FUN_587620f0_587620F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + ecx + 8ch]
        mov dword ptr [ebp - 1ch], eax
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 18h], eax
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ecx + eax + 94h]
        mov dword ptr [ebp - 24h], edx
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ecx + eax + 98h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 0ch]
        imul eax, ecx, 0aah
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7C 18: jl 0x587621a0
        __asm _emit 0x7c
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7D 10: jge 0x587621a0
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7C 08: jl 0x587621a0
        __asm _emit 0x7c
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 7C 04: jl 0x587621a4
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6F: jmp 0x58762213
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [ebp - 1ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 18h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [eax + 0b0h]
        add ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 78 18: js 0x587621f5
        __asm _emit 0x78
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        imul ecx, dword ptr [eax + 0b0h]
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 7C 04: jl 0x587621f9
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1A: jmp 0x58762213
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5eb8h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov eax, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + eax]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
