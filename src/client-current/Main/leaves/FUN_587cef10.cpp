// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CEF10 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_587cef10() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        mov ebx, ecx
        push edi
        xor esi, esi
        lea edi, [ebx + 510h]
        movzx eax, word ptr [ebx + 0a06h]
        dec eax
        cmp eax, esi
        ; Exact mapped bytes 74 26: je 0x587cef54
        __asm _emit 0x74
        __asm _emit 0x26
        mov al, byte ptr [esi + ebp]
        test al, al
        ; Exact mapped bytes 74 1F: je 0x587cef54
        __asm _emit 0x74
        __asm _emit 0x1f
        movzx ecx, al
        shl ecx, 7
        mov eax, 51eb851fh
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 1fh
        lea edx, [edx + ecx + 80h]
        push edx
        ; Exact mapped bytes EB 02: jmp 0x587cef56
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 83 3D 13 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x13
        __asm _emit 0x00
        inc esi
        add edi, 4
        cmp esi, 19h
        ; Exact mapped bytes 7C BC: jl 0x587cef22
        __asm _emit 0x7c
        __asm _emit 0xbc
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
