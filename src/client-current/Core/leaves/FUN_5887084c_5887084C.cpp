// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887084C .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_5887084c_5887084C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, 140ch
        ; Exact mapped bytes E8 95 12 FC FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, ecx
        mov edx, dword ptr [ebp + 14h]
        and ecx, 3fh
        sar eax, 6
        imul ecx, ecx, 38h
        push ebx
        mov ebx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax*4 + 589699b0h]
        push esi
        push edi
        mov edi, ebx
        mov eax, dword ptr [eax + ecx + 18h]
        mov ecx, dword ptr [ebp + 10h]
        add edx, ecx
        mov dword ptr [ebp - 1408h], eax
        xor eax, eax
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        mov dword ptr [ebp - 140ch], edx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        cmp ecx, edx
        ; Exact mapped bytes 73 73: jae 0x58870916
        __asm _emit 0x73
        __asm _emit 0x73
        mov edi, dword ptr [ebp - 1408h]
        lea esi, [ebp - 1404h]
        cmp ecx, edx
        ; Exact mapped bytes 73 18: jae 0x588708cb
        __asm _emit 0x73
        __asm _emit 0x18
        mov al, byte ptr [ecx]
        inc ecx
        cmp al, 0ah
        ; Exact mapped bytes 75 07: jne 0x588708c1
        __asm _emit 0x75
        __asm _emit 0x07
        inc dword ptr [ebx + 8]
        mov byte ptr [esi], 0dh
        inc esi
        mov byte ptr [esi], al
        inc esi
        lea eax, [ebp - 5]
        cmp esi, eax
        ; Exact mapped bytes 72 E4: jb 0x588708af
        __asm _emit 0x72
        __asm _emit 0xe4
        lea eax, [ebp - 1404h]
        mov dword ptr [ebp + 10h], ecx
        sub esi, eax
        lea eax, [ebp - 1408h]
        push 0
        push eax
        push esi
        lea eax, [ebp - 1404h]
        push eax
        push edi
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x5887090e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 1408h]
        add dword ptr [ebx + 4], eax
        cmp eax, esi
        ; Exact mapped bytes 72 17: jb 0x58870916
        __asm _emit 0x72
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 140ch]
        cmp ecx, edx
        ; Exact mapped bytes 72 9D: jb 0x588708a9
        __asm _emit 0x72
        __asm _emit 0x9d
        ; Exact mapped bytes EB 08: jmp 0x58870916
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebx], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, ebx
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 2B 07 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}
