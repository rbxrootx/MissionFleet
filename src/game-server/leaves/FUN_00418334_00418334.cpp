// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418334 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_00418334_00418334() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 134h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 134h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 118h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 118h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 12ch]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 12ch], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 138h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 138h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 130h]
        xor ecx, 0aaaaaaaah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 130h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4183d5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 2F: jge 0x41840a
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + ecx*2 + 15h]
        xor al, 0aah
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + ecx*2 + 15h], al
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + eax*2 + 16h]
        xor dl, 0aah
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + eax*2 + 16h], dl
        ; Exact mapped bytes EB C2: jmp 0x4183cc
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov esp, ebp
        pop ebp
        ret
    }
}
