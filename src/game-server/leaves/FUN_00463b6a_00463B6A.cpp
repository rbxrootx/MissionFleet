// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00463B6A .. +0x152 bytes.
extern "C" __declspec(naked) void FUN_00463b6a_00463B6A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 13ch]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 13ch], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 120h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 120h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 134h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 134h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 140h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 140h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 138h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 138h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 124h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 124h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 128h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 128h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 144h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 144h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 148h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 148h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1a4h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 1a4h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x463c83
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 2F: jge 0x463cb8
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + ecx*2 + 1dh]
        xor al, 0aah
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + ecx*2 + 1dh], al
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + eax*2 + 1eh]
        xor dl, 0aah
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + eax*2 + 1eh], dl
        ; Exact mapped bytes EB C2: jmp 0x463c7a
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov esp, ebp
        pop ebp
        ret
    }
}
