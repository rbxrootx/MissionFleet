// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585852F0 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_585852f0_585852F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 1ch], 0
        mov eax, 1
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        push 9
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 E0 F3 FF: call 0x584c3390
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe0
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 2A: jne 0x58585356
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 8]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 FB BC 2A 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbc
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58585368
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7D 26: jge 0x58585399
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 0F F7 FF: call 0x584f6370
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x0f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes EB C6: jmp 0x5858535f
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov esp, ebp
        pop ebp
        ret
    }
}
