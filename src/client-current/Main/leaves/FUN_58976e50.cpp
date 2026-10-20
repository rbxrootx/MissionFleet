// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976E50 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_58976e50() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push 0e0h
        push esi
        ; Exact mapped bytes E8 F0 FE FF FF: call 0x58976d50
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 10h
        push esi
        ; Exact mapped bytes E8 48 FF FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 4ah
        push esi
        ; Exact mapped bytes E8 00 FF FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 46h
        push esi
        ; Exact mapped bytes E8 F8 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 49h
        push esi
        ; Exact mapped bytes E8 F0 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 46h
        push esi
        ; Exact mapped bytes E8 E8 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push esi
        ; Exact mapped bytes E8 E0 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov al, byte ptr [esi + 0c5h]
        push eax
        push esi
        ; Exact mapped bytes E8 D1 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        add esp, 40h
        mov cl, byte ptr [esi + 0c6h]
        push ecx
        push esi
        ; Exact mapped bytes E8 BF FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov dl, byte ptr [esi + 0c7h]
        push edx
        push esi
        ; Exact mapped bytes E8 B0 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 C8 00 00 00: mov ax, word ptr [esi + 0xc8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes E8 E0 FE FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E CA 00 00 00: mov cx, word ptr [esi + 0xca]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        ; Exact mapped bytes E8 D0 FE FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push esi
        ; Exact mapped bytes E8 88 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push esi
        ; Exact mapped bytes E8 80 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 30h
        pop esi
        ret
    }
}
