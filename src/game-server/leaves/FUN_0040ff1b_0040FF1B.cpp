// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FF1B .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_0040ff1b_0040FF1B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x40ff44
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 0b2h]
        and dl, 0fh
        and edx, 0ffh
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 7D 5C: jge 0x40ffb7
        __asm _emit 0x7d
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 4]
        shl edx, 6
        mov eax, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 14h]
        mov dword ptr [ecx + edx + 0cb8h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 E0 0E 00 00: call 0x410e70
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [ebp - 4]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 1B 3A FF FF: call 0x4039d0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 84: jmp 0x40ff3b
        __asm _emit 0xeb
        __asm _emit 0x84
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 1F 88 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
