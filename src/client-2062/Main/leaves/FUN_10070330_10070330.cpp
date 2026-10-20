// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10070330 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_10070330_10070330() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [eax + 3c8h]
        test edx, edx
        ; Exact mapped bytes 75 36: jne 0x10070374
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ecx + 21a34h]
        push eax
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x10070360
        __asm _emit 0x74
        __asm _emit 0x17
        xor edx, edx
        mov dl, byte ptr [eax + 330h]
        mov ecx, dword ptr [ecx + edx*4 + 21744h]
        ; Exact mapped bytes E8 53 50 05 00: call 0x100c53b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 330h]
        mov ecx, dword ptr [ecx + edx*4 + 21724h]
        ; Exact mapped bytes E8 CC 5A 06 00: call 0x100d5e40
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
