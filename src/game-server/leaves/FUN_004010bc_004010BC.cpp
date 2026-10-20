// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004010BC .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_004010bc_004010BC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 88 70 01 00 00: mov cx, word ptr [eax + 0x170]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + 180h]
        mov byte ptr [ebp - 4], al
        push 0
        push 6
        lea ecx, [ebp - 8]
        push ecx
        push 10001h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 170h]
        or eax, 100000h
        push eax
        push 80020116h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 61 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 B9 76 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
