// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854D410 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_5854d410_5854D410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x5854d428
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 78: jmp 0x5854d4a0
        __asm _emit 0xeb
        __asm _emit 0x78
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5854d43a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 5E: jge 0x5854d49e
        __asm _emit 0x7d
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 58h]
        ; Exact mapped bytes E8 41 84 F4 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 45: jne 0x5854d49c
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 5]
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x5854d46e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x5854d475
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp - 0ch]
        mov byte ptr [edx + 5], al
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 5]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 18 01 00 00: call 0x5854d5b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, 1
        ; Exact mapped bytes EB 04: jmp 0x5854d4a0
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 93: jmp 0x5854d431
        __asm _emit 0xeb
        __asm _emit 0x93
        xor al, al
        mov esp, ebp
        pop ebp
        ret
    }
}
