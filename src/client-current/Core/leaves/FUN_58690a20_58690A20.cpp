// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58690A20 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58690a20_58690A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 A2 F3 FF: call 0x585cac40
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa2
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + ecx*4 + 5d0h]
        and al, 1fh
        mov cl, byte ptr [ebp - 4]
        and cl, 0e0h
        or cl, al
        mov byte ptr [ebp - 4], cl
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0E: je 0x58690a66
        __asm _emit 0x74
        __asm _emit 0x0e
        mov dl, byte ptr [ebp - 4]
        and dl, 1fh
        or dl, 40h
        mov byte ptr [ebp - 4], dl
        ; Exact mapped bytes EB 0A: jmp 0x58690a70
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov al, byte ptr [ebp - 4]
        and al, 1fh
        or al, 20h
        mov byte ptr [ebp - 4], al
        mov byte ptr [ebp - 3], 0
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [ebp - 2], cl
        push 4
        lea edx, [ebp - 4]
        push edx
        push 16h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 63 F5 FF: call 0x585e6e20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x63
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
