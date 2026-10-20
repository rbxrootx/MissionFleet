// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587360C0 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_587360c0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0ch]
        ; Exact mapped bytes E8 15 06 1A 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x1a
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 2D: jne 0x587360ff
        __asm _emit 0x75
        __asm _emit 0x2d
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 74 19: je 0x587360f2
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [esi + 0ch]
        mov al, byte ptr [ecx + 354h]
        cmp al, byte ptr [edx + 354h]
        ; Exact mapped bytes 75 0D: jne 0x587360ff
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esp + 8]
        push ecx
        mov ecx, dword ptr [esi + 0ch]
        ; Exact mapped bytes E8 51 0C 1A 00: call 0x588d6d50
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0x1a
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
