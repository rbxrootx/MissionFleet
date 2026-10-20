// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043A670 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_0043a670_0043A670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 72 0C: jb 0x43a6ab
        __asm _emit 0x72
        __asm _emit 0x0c
        mov dword ptr [ebp - 30h], 0ffffffffh
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x43a759
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov al, byte ptr [ebp - 8]
        mov byte ptr [ebp - 1ch], al
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 09: jmp 0x43a6d6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 44: je 0x43a722
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 09: jmp 0x43a6ef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp - 2ch]
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 74 26: je 0x43a720
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x43a71e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0A: jmp 0x43a728
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes EB C6: jmp 0x43a6e6
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes EB AB: jmp 0x43a6cd
        __asm _emit 0xeb
        __asm _emit 0xab
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 13: je 0x43a74c
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 07: jmp 0x43a753
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0ffffffffh
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
