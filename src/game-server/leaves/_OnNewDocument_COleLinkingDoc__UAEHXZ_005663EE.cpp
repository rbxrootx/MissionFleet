// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005663EE .. +0x54 bytes.
extern "C" __declspec(naked) void _OnNewDocument_COleLinkingDoc__UAEHXZ_005663EE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0a1h
        push 5d0c78h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 58 4D F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 FF FF FF: call 0x566330
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 F0 00 00 00: call dword ptr [edx + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 B3 FE FF: call 0x5517d1
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x566432
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x56643e
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 1
        ; Exact mapped bytes E8 96 7E FC FF: call 0x52e2cf
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
