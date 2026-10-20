// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4980 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_587c4980() {
    __asm {
        mov eax, dword ptr [esp + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 28: jne 0x587c49b1
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ecx + 18h], 10h
        ; Exact mapped bytes 72 11: jb 0x587c49a0
        __asm _emit 0x72
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 4]
        mov al, byte ptr [esp + 0ch]
        mov edx, dword ptr [esp + 4]
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov al, byte ptr [esp + 0ch]
        mov edx, dword ptr [esp + 4]
        add ecx, 4
        mov byte ptr [ecx + edx], al
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [ecx + 18h], 10h
        ; Exact mapped bytes 72 05: jb 0x587c49bc
        __asm _emit 0x72
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 03: jmp 0x587c49bf
        __asm _emit 0xeb
        __asm _emit 0x03
        add ecx, 4
        mov edx, dword ptr [esp + 4]
        push eax
        ; Exact mapped bytes 0F BE 44 24 10: movsx eax, byte ptr [esp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        push eax
        add ecx, edx
        push ecx
        ; Exact mapped bytes E8 76 82 1B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x82
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
