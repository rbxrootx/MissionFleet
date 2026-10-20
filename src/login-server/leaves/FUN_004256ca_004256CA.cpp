// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004256CA .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_004256ca_004256CA() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        ; Exact mapped bytes 0F BE 06: movsx eax, byte ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 16 11 00 00: call 0x4267ee
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 65h
        pop ecx
        ; Exact mapped bytes 74 2C: je 0x42570a
        __asm _emit 0x74
        __asm _emit 0x2c
        inc esi
        ; Exact mapped bytes 83 3D CC AE 44 00 01: cmp dword ptr [0x44aecc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 0F: jle 0x4256f7
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 0F BE 06: movsx eax, byte ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x06
        push 4
        push eax
        ; Exact mapped bytes E8 11 D0 FF FF: call 0x422704
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 0F: jmp 0x425706
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 0F BE 06: movsx eax, byte ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x06
        ; Exact mapped bytes 8B 0D C0 AC 44 00: mov ecx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        mov al, byte ptr [ecx + eax*2]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x4256de
        __asm _emit 0x75
        __asm _emit 0xd4
        ; Exact mapped bytes 8A 0D D0 AE 44 00: mov cl, byte ptr [0x44aed0]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        mov al, byte ptr [esi]
        mov byte ptr [esi], cl
        inc esi
        mov cl, byte ptr [esi]
        mov byte ptr [esi], al
        mov al, cl
        mov cl, byte ptr [esi]
        inc esi
        test cl, cl
        ; Exact mapped bytes 75 F3: jne 0x425715
        __asm _emit 0x75
        __asm _emit 0xf3
        pop esi
        ret
    }
}
