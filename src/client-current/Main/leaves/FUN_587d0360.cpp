// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D0360 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_587d0360() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx + 0ccch]
        mov eax, 1
        cmp dword ptr [edx + 28h], eax
        ; Exact mapped bytes 75 35: jne 0x587d03ad
        __asm _emit 0x75
        __asm _emit 0x35
        push 0
        push 0
        push 0
        cmp dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 16: jne 0x587d039a
        __asm _emit 0x75
        __asm _emit 0x16
        push 326h
        ; Exact mapped bytes E8 62 B7 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B 49 F9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 327h
        ; Exact mapped bytes E8 4C B7 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 85 49 F9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
