// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9680 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_004e9680_004E9680() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 2E B6 03 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0ffh
        ; Exact mapped bytes 7D 16: jge 0x4e96aa
        __asm _emit 0x7d
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1D B6 03 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        mov al, byte ptr [eax + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 C1 03 00: call 0x52588c
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 63: jmp 0x4e970d
        __asm _emit 0xeb
        __asm _emit 0x63
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 07 B6 03 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0fffeh
        ; Exact mapped bytes 7D 24: jge 0x4e96df
        __asm _emit 0x7d
        __asm _emit 0x24
        push 0ffh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 C1 03 00: call 0x52588c
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E9 B5 03 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F2 C1 03 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x4e970d
        __asm _emit 0xeb
        __asm _emit 0x2e
        push 0ffh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 C1 03 00: call 0x52588c
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        push 0ffffh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D6 C1 03 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B8 B5 03 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A C2 03 00: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A4 B5 03 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 0C 00 00: call 0x4ea396
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
