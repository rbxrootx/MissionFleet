// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A1D5 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_5883a1d5_5883A1D5() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        push 588f0330h
        mov esi, ecx
        push 588f0324h
        push 0a4h
        push 588f033ch
        lea edi, [esi + 28h]
        ; Exact mapped bytes E8 E1 24 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 8A FE FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov eax, 589060c0h
        cmp dword ptr [ebp + 8], 0
        cmovne eax, dword ptr [ebp + 8]
        push 5883a3cah
        push eax
        push dword ptr [esi + 1470h]
        push 588f036ch
        ; Exact mapped bytes E8 2D 21 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 5C FE FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 A9 01 00 00: call 0x5883a3dc
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 57 B9 FF FF: call 0x58835b91
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes E8 CC B7 FF FF: call 0x58835a0d
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
