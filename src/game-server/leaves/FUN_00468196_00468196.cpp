// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468196 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_00468196_00468196() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        shr al, 5
        and al, 1
        and eax, 0ffh
        cmp eax, 1
        ; Exact mapped bytes 75 4F: jne 0x468214
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 13ch], 0
        ; Exact mapped bytes 75 43: jne 0x468214
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 120h], 0
        ; Exact mapped bytes 75 37: jne 0x468214
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 124h], 0
        ; Exact mapped bytes 75 2B: jne 0x468214
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 128h], 0
        ; Exact mapped bytes 75 1F: jne 0x468214
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 144h], 0
        ; Exact mapped bytes 75 13: jne 0x468214
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 134h], 0
        ; Exact mapped bytes 75 07: jne 0x468214
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x468216
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
