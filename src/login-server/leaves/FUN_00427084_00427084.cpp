// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427084 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_00427084_00427084() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        push esi
        push edi
        lea edi, [eax - 1]
        push 20h
        pop ecx
        and dword ptr [ebp - 4], 0
        lea ebx, [edi + 1]
        push 20h
        mov eax, ebx
        pop esi
        cdq
        idiv ecx
        push 1fh
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv esi
        mov eax, dword ptr [ebp + 8]
        pop esi
        push 1
        mov dword ptr [ebp - 8], ecx
        lea eax, [eax + ecx*4]
        mov dword ptr [ebp + 0ch], eax
        sub esi, edx
        pop edx
        mov ecx, esi
        shl edx, cl
        test dword ptr [eax], edx
        ; Exact mapped bytes 74 21: je 0x4270e8
        __asm _emit 0x74
        __asm _emit 0x21
        inc ebx
        push ebx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 FF FF FF: call 0x426fe5
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 0E: jne 0x4270e5
        __asm _emit 0x75
        __asm _emit 0x0e
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E FF FF FF: call 0x42702e
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 4], eax
        pop ecx
        mov eax, dword ptr [ebp + 0ch]
        or edx, 0ffffffffh
        mov ecx, esi
        shl edx, cl
        push 3
        pop ecx
        and dword ptr [eax], edx
        mov eax, dword ptr [ebp - 8]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7D 0C: jge 0x427108
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        sub ecx, eax
        lea edi, [edx + eax*4]
        xor eax, eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
