// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849BC0 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58849bc0_58849BC0() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov eax, dword ptr [esi + 1af5ch]
        cmp eax, 8
        ; Exact mapped bytes 7E 43: jle 0x58849c16
        __asm _emit 0x7e
        __asm _emit 0x43
        mov eax, dword ptr [esi + 1af68h]
        lea edi, [esi + 1af64h]
        dec eax
        cmp dword ptr [edi], eax
        ; Exact mapped bytes 72 0F: jb 0x58849bf3
        __asm _emit 0x72
        __asm _emit 0x0f
        push edi
        push dword ptr [esi + 1af60h]
        push dword ptr [esi]
        ; Exact mapped bytes FF 56 10: call dword ptr [esi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [esi + 1af60h]
        mov al, byte ptr [esi + 1af58h]
        mov byte ptr [edx + ecx], al
        inc dword ptr [edi]
        mov edx, dword ptr [edi]
        mov ecx, dword ptr [esi + 1af60h]
        mov al, byte ptr [esi + 1af59h]
        ; Exact mapped bytes EB 31: jmp 0x58849c47
        __asm _emit 0xeb
        __asm _emit 0x31
        test eax, eax
        ; Exact mapped bytes 7E 32: jle 0x58849c4c
        __asm _emit 0x7e
        __asm _emit 0x32
        lea edi, [esi + 1af64h]
        mov eax, dword ptr [edi]
        cmp eax, dword ptr [esi + 1af68h]
        ; Exact mapped bytes 72 0F: jb 0x58849c39
        __asm _emit 0x72
        __asm _emit 0x0f
        push edi
        push dword ptr [esi + 1af60h]
        push dword ptr [esi]
        ; Exact mapped bytes FF 56 10: call dword ptr [esi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x10
        add esp, 0ch
        mov edx, dword ptr [esi + 1af60h]
        mov ecx, dword ptr [edi]
        mov al, byte ptr [esi + 1af58h]
        mov byte ptr [edx + ecx], al
        inc dword ptr [edi]
        xor edi, edi
        cmp dword ptr [esi + 1af54h], edi
        ; Exact mapped bytes 74 15: je 0x58849c6b
        __asm _emit 0x74
        __asm _emit 0x15
        lea eax, [esi + 1af64h]
        push eax
        push dword ptr [esi + 1af60h]
        push dword ptr [esi]
        ; Exact mapped bytes FF 56 10: call dword ptr [esi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x10
        add esp, 0ch
        mov eax, dword ptr [esi + 1af6ch]
        add eax, 7
        mov dword ptr [esi + 1af58h], edi
        mov dword ptr [esi + 1af5ch], edi
        and eax, 0fffffff8h
        pop edi
        mov dword ptr [esi + 1af6ch], eax
        pop esi
        pop ebp
        ret
    }
}
