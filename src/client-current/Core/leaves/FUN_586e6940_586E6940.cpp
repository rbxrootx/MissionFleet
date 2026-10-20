// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E6940 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_586e6940_586E6940() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 148h], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586e6968
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 1a4h]
        ; Exact mapped bytes 7D 26: jge 0x586e699c
        __asm _emit 0x7d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 0f4h]
        ; Exact mapped bytes E8 28 EE DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xee
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx + 148h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 148h], eax
        ; Exact mapped bytes EB C3: jmp 0x586e695f
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 2B DD FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x2b
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 88 48 01 00 00: mov cx, word ptr [eax + 0x148]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D FE: mov word ptr [ebp - 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfe
        movzx edx, word ptr [ebp - 2]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2B 0A 00 00: call 0x586e73f0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
