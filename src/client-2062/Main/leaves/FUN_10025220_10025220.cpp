// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10025220 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_10025220_10025220() {
    __asm {
        sub esp, 244h
        push ebx
        push ebp
        ; Exact mapped bytes 8B 2D C8 50 17 10: mov ebp, dword ptr [0x101750c8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xc8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push esi
        push edi
        push 1017f4a0h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 1017f490h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 1017f484h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 1017f478h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 1017f46ch
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 1017f45ch
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 1017f44ch
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 1017f43ch
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 1017f42ch
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 1017f420h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea eax, [esp + 114h]
        push eax
        push 10181674h
        ; Exact mapped bytes FF 15 E0 50 17 10: call dword ptr [0x101750e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 1D DC 50 17 10: mov ebx, dword ptr [0x101750dc]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        test byte ptr [esp + 114h], 10h
        ; Exact mapped bytes 75 68: jne 0x10025305
        __asm _emit 0x75
        __asm _emit 0x68
        mov ecx, 40h
        xor eax, eax
        lea edi, [esp + 14h]
        lea edx, [esp + 14h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, 10181668h
        or ecx, 0ffffffffh
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        lea edx, [esp + 14h]
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        xor eax, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        lea edi, [esp + 140h]
        or ecx, 0ffffffffh
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        mov esi, edi
        mov edi, edx
        mov edx, ecx
        or ecx, 0ffffffffh
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        mov ecx, edx
        dec edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        lea eax, [esp + 14h]
        and ecx, 3
        push eax
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esp + 10h]
        lea ecx, [esp + 114h]
        push ecx
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 0F 85 77 FF FF FF: jne 0x10025293
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 244h
        ret
    }
}
