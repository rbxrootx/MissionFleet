// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858FB20 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_5858fb20_5858FB20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov byte ptr [ebp - 1], 0
        movzx eax, byte ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x5858fb7e
        __asm _emit 0x75
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0dh]
        sub edx, 1
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov al, byte ptr [edx + eax]
        add al, 1
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0dh]
        sub edx, 1
        imul ecx, edx, 3
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 4]
        mov byte ptr [edx + ecx], al
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0dh]
        sub ecx, 1
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dl, byte ptr [ecx + edx]
        mov byte ptr [ebp - 1], dl
        ; Exact mapped bytes EB 53: jmp 0x5858fbd1
        __asm _emit 0xeb
        __asm _emit 0x53
        movzx eax, byte ptr [ebp + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 4A: jne 0x5858fbd1
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0dh]
        sub edx, 1
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov al, byte ptr [edx + eax + 1]
        add al, 1
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0dh]
        sub edx, 1
        imul ecx, edx, 3
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 4]
        mov byte ptr [edx + ecx + 1], al
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0dh]
        sub ecx, 1
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dl, byte ptr [ecx + edx + 1]
        mov byte ptr [ebp - 1], dl
        movzx eax, byte ptr [ebp - 1]
        cmp eax, 0ah
        ; Exact mapped bytes 75 24: jne 0x5858fbfe
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0dh]
        sub edx, 1
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [edx + eax + 2], cl
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 18h], 4
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 98 E7 FF FF: call 0x5858e3a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
