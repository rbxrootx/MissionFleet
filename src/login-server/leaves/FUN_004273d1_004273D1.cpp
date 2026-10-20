// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004273D1 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_004273d1_004273D1() {
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 10h]
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        mov esi, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 0ch]
        push edi
        lea edi, [esi + 1]
        mov byte ptr [esi], 30h
        test ebx, ebx
        mov eax, edi
        ; Exact mapped bytes 7E 1F: jle 0x42740e
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov dword ptr [ebp + 8], ebx
        xor ebx, ebx
        mov dl, byte ptr [ecx]
        test dl, dl
        ; Exact mapped bytes 74 06: je 0x427400
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 0F BE D2: movsx edx, dl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xd2
        inc ecx
        ; Exact mapped bytes EB 03: jmp 0x427403
        __asm _emit 0xeb
        __asm _emit 0x03
        push 30h
        pop edx
        mov byte ptr [eax], dl
        inc eax
        dec dword ptr [ebp + 8]
        ; Exact mapped bytes 75 E9: jne 0x4273f4
        __asm _emit 0x75
        __asm _emit 0xe9
        mov edx, dword ptr [ebp + 10h]
        and byte ptr [eax], 0
        test ebx, ebx
        ; Exact mapped bytes 7C 12: jl 0x427427
        __asm _emit 0x7c
        __asm _emit 0x12
        cmp byte ptr [ecx], 35h
        ; Exact mapped bytes 7C 0D: jl 0x427427
        __asm _emit 0x7c
        __asm _emit 0x0d
        dec eax
        cmp byte ptr [eax], 39h
        ; Exact mapped bytes 75 05: jne 0x427425
        __asm _emit 0x75
        __asm _emit 0x05
        mov byte ptr [eax], 30h
        ; Exact mapped bytes EB F5: jmp 0x42741a
        __asm _emit 0xeb
        __asm _emit 0xf5
        inc byte ptr [eax]
        cmp byte ptr [esi], 31h
        ; Exact mapped bytes 75 05: jne 0x427431
        __asm _emit 0x75
        __asm _emit 0x05
        inc dword ptr [edx + 4]
        ; Exact mapped bytes EB 12: jmp 0x427443
        __asm _emit 0xeb
        __asm _emit 0x12
        push edi
        ; Exact mapped bytes E8 09 77 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        inc eax
        push eax
        push edi
        push esi
        ; Exact mapped bytes E8 40 7C FF FF: call 0x41f080
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
