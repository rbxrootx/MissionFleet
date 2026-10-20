// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A06C0 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_587a06c0_587A06C0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 1ch]
        mov ebp, 0
        push edi
        movzx ebx, byte ptr [esi + 80h]
        lea esi, [esi + 84h]
        movzx eax, byte ptr [esi - 3]
        shl ebx, 8
        add ebx, eax
        movzx eax, byte ptr [esi - 2]
        shl ebx, 8
        add ebx, eax
        movzx eax, byte ptr [esi - 1]
        shl ebx, 8
        add ebx, eax
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x587a0793
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edi, byte ptr [esi]
        movzx eax, byte ptr [esi + 1]
        movzx edx, byte ptr [esi + 4]
        shl edi, 8
        add edi, eax
        shl edx, 8
        movzx eax, byte ptr [esi + 2]
        shl edi, 8
        add edi, eax
        movzx eax, byte ptr [esi + 3]
        shl edi, 8
        add edi, eax
        movzx eax, byte ptr [esi + 5]
        add edx, eax
        movzx eax, byte ptr [esi + 6]
        shl edx, 8
        add edx, eax
        movzx eax, byte ptr [esi + 7]
        shl edx, 8
        add edx, eax
        cmp edx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 77 5A: ja 0x587a079d
        __asm _emit 0x77
        __asm _emit 0x5a
        movzx ecx, byte ptr [esi + 8]
        movzx eax, byte ptr [esi + 9]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esi + 0ah]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [esi + 0bh]
        shl ecx, 8
        add ecx, eax
        mov eax, dword ptr [esp + 1ch]
        sub eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 77 31: ja 0x587a079d
        __asm _emit 0x77
        __asm _emit 0x31
        test dl, 3
        ; Exact mapped bytes 74 16: je 0x587a0787
        __asm _emit 0x74
        __asm _emit 0x16
        push 588b8314h
        push edi
        push dword ptr [esp + 20h]
        push dword ptr [esp + 20h]
        ; Exact mapped bytes E8 3C 00 00 00: call 0x587a07c0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        inc ebp
        add esi, 0ch
        cmp ebp, ebx
        ; Exact mapped bytes 0F 82 6D FF FF FF: jb 0x587a0700
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret
        push 588b82f4h
        push edi
        push dword ptr [esp + 20h]
        push dword ptr [esp + 20h]
        ; Exact mapped bytes E8 10 00 00 00: call 0x587a07c0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
