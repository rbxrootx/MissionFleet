// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C2EE .. +0x54 bytes.
extern "C" __declspec(naked) void _OnNewDocument_COleLinkingDoc__UAEHXZ_0056C2EE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0a1h
        push 67d450h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 58 DF F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xdf
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 FF FF FF: call 0x56c230
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
        ; Exact mapped bytes E8 17 3F FE FF: call 0x550241
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x56c332
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x56c33e
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 1
        ; Exact mapped bytes E8 36 E8 FA FF: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
