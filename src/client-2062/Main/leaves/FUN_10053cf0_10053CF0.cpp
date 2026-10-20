// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10053CF0 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_10053cf0_10053CF0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, ecx
        push esi
        push edi
        xor esi, esi
        lea edi, [ebp + 214h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 85 AA 09 00 00: mov ax, word ptr [ebp + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        cmp eax, esi
        ; Exact mapped bytes 74 2A: je 0x10053d3a
        __asm _emit 0x74
        __asm _emit 0x2a
        mov al, byte ptr [esi + ebx]
        test al, al
        ; Exact mapped bytes 74 23: je 0x10053d3a
        __asm _emit 0x74
        __asm _emit 0x23
        and eax, 0ffh
        shl eax, 7
        mov ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 1fh
        lea edx, [edx + ecx + 80h]
        push edx
        ; Exact mapped bytes EB 02: jmp 0x10053d3c
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 DD B3 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb3
        __asm _emit 0x0a
        __asm _emit 0x00
        inc esi
        add edi, 4
        cmp esi, 19h
        ; Exact mapped bytes 7C B6: jl 0x10053d02
        __asm _emit 0x7c
        __asm _emit 0xb6
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
