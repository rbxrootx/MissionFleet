// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B3BF0 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_100b3bf0_100B3BF0() {
    __asm {
        sub esp, 0b8h
        xor eax, eax
        push ebx
        push ebp
        ; Exact mapped bytes 8B 2D 88 51 17 10: mov ebp, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push esi
        mov ebx, ecx
        push edi
        mov ecx, 0eh
        lea edi, [esp + 10h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        xor edi, edi
        cmp edi, 9
        mov esi, 5
        ; Exact mapped bytes 77 2F: ja 0x100b3c4a
        __asm _emit 0x77
        __asm _emit 0x2f
        ; Exact mapped bytes FF 24 BD F0 3C 0B 10: jmp dword ptr [edi*4 + 0x100b3cf0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0xbd
        __asm _emit 0xf0
        __asm _emit 0x3c
        __asm _emit 0x0b
        __asm _emit 0x10
        mov esi, 5
        ; Exact mapped bytes EB 21: jmp 0x100b3c4a
        __asm _emit 0xeb
        __asm _emit 0x21
        mov esi, 4
        ; Exact mapped bytes EB 1A: jmp 0x100b3c4a
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov esi, 3
        ; Exact mapped bytes EB 13: jmp 0x100b3c4a
        __asm _emit 0xeb
        __asm _emit 0x13
        mov esi, 1
        ; Exact mapped bytes EB 0C: jmp 0x100b3c4a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov esi, 2
        ; Exact mapped bytes EB 05: jmp 0x100b3c4a
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 6
        mov ecx, dword ptr [esp + esi*8 + 10h]
        xor eax, eax
        mov al, byte ptr [ebx + edi + 108h]
        add ecx, eax
        mov dword ptr [esp + esi*8 + 10h], ecx
        mov edx, dword ptr [esp + esi*8 + 14h]
        xor ecx, ecx
        mov cl, byte ptr [ebx + edi + 112h]
        add edx, ecx
        mov dword ptr [esp + esi*8 + 14h], edx
        mov eax, edx
        mov edx, dword ptr [esp + esi*8 + 10h]
        push eax
        push edx
        lea eax, [esp + 50h]
        push 101abd14h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 10h
        lea ecx, [esp + 48h]
        push ecx
        mov ecx, dword ptr [ebx + esi*4 + 90h]
        ; Exact mapped bytes E8 A8 4B F6 FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x4b
        __asm _emit 0xf6
        __asm _emit 0xff
        inc edi
        cmp edi, 0ah
        ; Exact mapped bytes 0F 8C 6F FF FF FF: jl 0x100b3c11
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [ebx + 90h]
        mov edi, 7
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 FC 4B F6 FF: call 0x100188b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x4b
        __asm _emit 0xf6
        __asm _emit 0xff
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x100b3cad
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [ebx + 0ach]
        xor edx, edx
        mov dl, byte ptr [ebx + 0feh]
        push edx
        ; Exact mapped bytes E8 52 BA 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0b0h]
        xor eax, eax
        mov al, byte ptr [ebx + 0ffh]
        push eax
        ; Exact mapped bytes E8 3E BA 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0b8h
        ret
    }
}
