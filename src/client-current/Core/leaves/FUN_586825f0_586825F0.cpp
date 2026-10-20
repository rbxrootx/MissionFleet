// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586825F0 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_586825f0_586825F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0f4h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 86 F4 FF: call 0x585cac40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [ecx + eax*4 + 878h]
        and dl, 1fh
        mov al, byte ptr [ebp - 8]
        and al, 0e0h
        or al, dl
        mov byte ptr [ebp - 8], al
        mov cl, byte ptr [ebp - 8]
        and cl, 1fh
        or cl, 20h
        mov byte ptr [ebp - 8], cl
        mov byte ptr [ebp - 7], 0
        mov edx, dword ptr [ebp - 0ch]
        mov al, byte ptr [edx + 0f4h]
        mov byte ptr [ebp - 6], al
        mov byte ptr [ebp - 2], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58682660
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 73 48: jae 0x586826ae
        __asm _emit 0x73
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + edx*4 + 0d0h], 1
        ; Exact mapped bytes 75 36: jne 0x586826ac
        __asm _emit 0x75
        __asm _emit 0x36
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5868268c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 0B: jae 0x5868269f
        __asm _emit 0x73
        __asm _emit 0x0b
        movzx eax, byte ptr [ebp - 1]
        shl eax, 1
        mov byte ptr [ebp - 1], al
        ; Exact mapped bytes EB E4: jmp 0x58682683
        __asm _emit 0xeb
        __asm _emit 0xe4
        movzx ecx, byte ptr [ebp - 1]
        movzx edx, byte ptr [ebp - 2]
        or edx, ecx
        mov byte ptr [ebp - 2], dl
        ; Exact mapped bytes EB A9: jmp 0x58682657
        __asm _emit 0xeb
        __asm _emit 0xa9
        movzx eax, byte ptr [ebp - 2]
        mov byte ptr [ebp - 7], al
        push 4
        lea ecx, [ebp - 8]
        push ecx
        push 16h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 47 F6 FF: call 0x585e6e20
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x47
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
