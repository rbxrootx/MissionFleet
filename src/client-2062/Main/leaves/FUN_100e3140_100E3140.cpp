// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E3140 .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_100e3140_100E3140() {
    __asm {
        mov al, byte ptr [esp + 0ch]
        push ebx
        push esi
        mov edx, dword ptr [esp + 1ch]
        mov esi, ecx
        push edi
        mov cl, byte ptr [esp + 1ch]
        ; Exact mapped bytes 8B 3D 88 51 17 10: mov edi, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov byte ptr [esi + 57h], cl
        mov ecx, dword ptr [esp + 28h]
        mov byte ptr [esi + 56h], al
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esi + 90h], ecx
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 8ch], edx
        mov edx, dword ptr [esp + 2ch]
        mov dword ptr [esi + 88h], eax
        mov eax, dword ptr [esp + 30h]
        lea ebx, [esi + 58h]
        push ecx
        push ebx
        mov dword ptr [esi + 50h], 40000000h
        mov dword ptr [esi + 94h], edx
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0bch]
        add esp, 8
        push ebx
        ; Exact mapped bytes E8 94 56 F3 FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x56
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        lea ebx, [esi + 70h]
        push edx
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 0c0h]
        add esp, 8
        push ebx
        ; Exact mapped bytes E8 7A 56 F3 FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x56
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0c4h]
        add eax, 0b4h
        push eax
        ; Exact mapped bytes E8 76 BB 01 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        add ecx, 104h
        push ecx
        mov ecx, dword ptr [esi + 0c8h]
        ; Exact mapped bytes E8 61 BB 01 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0e0h]
        add edx, 151h
        push edx
        ; Exact mapped bytes E8 4C BB 01 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0dch]
        add eax, 19fh
        push eax
        ; Exact mapped bytes E8 38 BB 01 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0cch]
        xor ecx, ecx
        mov cl, byte ptr [esi + 56h]
        mov eax, dword ptr [edx + 6ch]
        push ecx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [esi + 0d0h]
        xor ecx, ecx
        mov cl, byte ptr [esi + 57h]
        add esp, 0ch
        mov eax, dword ptr [edx + 6ch]
        push ecx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 8ch]
        mov edx, dword ptr [esi + 0d4h]
        add esp, 0ch
        mov eax, dword ptr [edx + 6ch]
        push ecx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edx, dword ptr [esi + 0d8h]
        mov ecx, dword ptr [esi + 88h]
        add esp, 0ch
        mov eax, dword ptr [edx + 6ch]
        push ecx
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
