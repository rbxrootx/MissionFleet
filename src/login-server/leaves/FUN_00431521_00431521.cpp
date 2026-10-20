// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431521 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00431521_00431521() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov dword ptr [esi + 24h], eax
        ; Exact mapped bytes E8 80 47 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esp + 14h]
        mov eax, dword ptr [eax + 0ch]
        ; Exact mapped bytes 8B 3D 24 C5 43 00: mov edi, dword ptr [0x43c524]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes 75 0B: jne 0x431557
        __asm _emit 0x75
        __asm _emit 0x0b
        push 7f00h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 14h], eax
        push esi
        ; Exact mapped bytes E8 B7 E8 FF FF: call 0x42fe14
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
