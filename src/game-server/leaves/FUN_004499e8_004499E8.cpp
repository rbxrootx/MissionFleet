// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004499E8 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_004499e8_004499E8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x449a15
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x449aa5
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x449a27
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 73 76: jae 0x449aa3
        __asm _emit 0x73
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        cmp dword ptr [eax + ecx + 2e4h], 0
        ; Exact mapped bytes 75 55: jne 0x449a9e
        __asm _emit 0x75
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        and edx, 0fh
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        cmp edx, eax
        ; Exact mapped bytes 75 2D: jne 0x449a9e
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 07: jne 0x449a9e
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x449aa5
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 7B FF FF FF: jmp 0x449a1e
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
