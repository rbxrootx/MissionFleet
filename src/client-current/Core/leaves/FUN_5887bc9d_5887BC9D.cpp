// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887BC9D .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5887bc9d_5887BC9D() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        lea ecx, [ebp - 10h]
        push ebx
        push esi
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 25 C0 FD FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        or edx, 0ffffffffh
        inc ecx
        cmp eax, edx
        ; Exact mapped bytes 74 1C: je 0x5887bcdb
        __asm _emit 0x74
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5887bcdb
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, ecx
        ; Exact mapped bytes 75 14: jne 0x5887bcdb
        __asm _emit 0x75
        __asm _emit 0x14
        movzx ecx, byte ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        push 2
        test byte ptr [ecx + eax + 19h], 8
        pop ecx
        cmove ecx, edx
        ; Exact mapped bytes EB 27: jmp 0x5887bd02
        __asm _emit 0xeb
        __asm _emit 0x27
        movzx esi, byte ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov bl, byte ptr [esi + eax + 19h]
        test bl, 4
        ; Exact mapped bytes 75 17: jne 0x5887bd02
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, 157h
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 66 85 0C 70: test word ptr [eax + esi*2], cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x70
        ; Exact mapped bytes 75 05: jne 0x5887bd00
        __asm _emit 0x75
        __asm _emit 0x05
        test bl, 3
        ; Exact mapped bytes 74 04: je 0x5887bd04
        __asm _emit 0x74
        __asm _emit 0x04
        xor ecx, ecx
        mov edx, ecx
        cmp byte ptr [ebp - 4], 0
        pop esi
        pop ebx
        ; Exact mapped bytes 74 0A: je 0x5887bd16
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov eax, edx
        leave
        ret
    }
}
