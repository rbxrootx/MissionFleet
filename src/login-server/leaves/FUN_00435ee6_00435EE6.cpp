// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435EE6 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_00435ee6_00435EE6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 90h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes FF 15 E4 C3 43 00: call dword ptr [0x43c3e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D8: movsx ebx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd8
        shr eax, 10h
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        cmp ebx, 20h
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 7E 03: jle 0x435f0c
        __asm _emit 0x7e
        __asm _emit 0x03
        push 20h
        pop ebx
        lea eax, [ebx - 4]
        lea esi, [ebx + 0fh]
        cdq
        sub eax, edx
        sar esi, 4
        mov edi, eax
        mov eax, esi
        sar edi, 1
        shl eax, 4
        add edi, eax
        sub edi, ebx
        cmp edi, 0ch
        ; Exact mapped bytes 7E 03: jle 0x435f2d
        __asm _emit 0x7e
        __asm _emit 0x03
        push 0ch
        pop edi
        push 20h
        pop eax
        cmp ecx, eax
        ; Exact mapped bytes 7E 03: jle 0x435f37
        __asm _emit 0x7e
        __asm _emit 0x03
        mov dword ptr [ebp - 0ch], eax
        push 80h
        lea eax, [ebp - 90h]
        push 0ffh
        push eax
        ; Exact mapped bytes E8 93 8B FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add esp, 0ch
        add eax, -6
        mov dword ptr [ebp - 4], 43df14h
        sar eax, 1
        imul eax, esi
        add esi, esi
        mov dword ptr [ebp - 8], 5
        lea edx, [ebp + eax*2 - 90h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, edi
        ; Exact mapped bytes 66 0F B6 00: movzx ax, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x00
        shl eax, cl
        inc dword ptr [ebp - 4]
        xor ecx, ecx
        not eax
        mov cl, ah
        mov byte ptr [edx + 1], al
        mov byte ptr [edx], cl
        add edx, esi
        dec dword ptr [ebp - 8]
        ; Exact mapped bytes 75 E0: jne 0x435f72
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 90h]
        push eax
        push 1
        push 1
        push dword ptr [ebp - 0ch]
        push ebx
        ; Exact mapped bytes FF 15 48 C0 43 00: call dword ptr [0x43c048]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        test eax, eax
        ; Exact mapped bytes A3 D8 FB 44 00: mov dword ptr [0x44fbd8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        pop ebx
        ; Exact mapped bytes 75 11: jne 0x435fc4
        __asm _emit 0x75
        __asm _emit 0x11
        push 7fe3h
        push eax
        ; Exact mapped bytes FF 15 E8 C3 43 00: call dword ptr [0x43c3e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes A3 D8 FB 44 00: mov dword ptr [0x44fbd8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        leave
        ret
    }
}
