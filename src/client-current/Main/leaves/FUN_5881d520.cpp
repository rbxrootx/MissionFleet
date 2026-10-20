// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881D520 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_5881d520() {
    __asm {
        cmp dword ptr [esp + 8], 2
        ; Exact mapped bytes 75 37: jne 0x5881d55e
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [esp + 4]
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 75 22: jne 0x5881d552
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0dch]
        mov ecx, dword ptr [ecx + 160h]
        ; Exact mapped bytes E8 23 69 01 00: call 0x58833e70
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 78h]
        ; Exact mapped bytes 75 07: jne 0x5881d55e
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
