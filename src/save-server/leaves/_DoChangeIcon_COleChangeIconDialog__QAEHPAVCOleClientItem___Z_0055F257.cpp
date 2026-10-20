// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F257 .. +0x6D bytes.
extern "C" __declspec(naked) void _DoChangeIcon_COleChangeIconDialog__QAEHPAVCOleClientItem___Z_0055F257() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 3e2h
        push 67b3b8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 EF AF F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        push 3e3h
        push 67b3b8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 DC AF F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB 14 00 00: call 0x560737
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF 59 FF FF: call 0x554c44
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x55f29d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 21: jmp 0x55f2be
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BD 75 FF FF: call 0x556862
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 75 0F: jne 0x55f2b9
        __asm _emit 0x75
        __asm _emit 0x0f
        push 4
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
