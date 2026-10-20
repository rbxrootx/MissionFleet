// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FC5A0 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_588fc5a0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 68h]
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 68h]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a8h]
        mov byte ptr [esi + 0a4h], 0
        ; Exact mapped bytes E8 33 00 FC FF: call 0x588bc600
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes E8 C8 01 FC FF: call 0x588bc7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a8h]
        push 0c8h
        push 130h
        ; Exact mapped bytes E8 A3 6C 00 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes E8 D8 17 E5 FF: call 0x5874ddd0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x17
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 8ch]
        sub eax, 0
        ; Exact mapped bytes 74 17: je 0x588fc627
        __asm _emit 0x74
        __asm _emit 0x17
        sub eax, 1
        ; Exact mapped bytes 75 22: jne 0x588fc637
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [esi + 0a8h]
        mov dword ptr [eax + 13b4h], 0ah
        pop esi
        ret
        mov ecx, dword ptr [esi + 0a8h]
        mov dword ptr [ecx + 13b4h], 0ch
        pop esi
        ret
    }
}
