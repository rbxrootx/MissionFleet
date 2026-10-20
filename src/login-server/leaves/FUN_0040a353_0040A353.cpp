// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A353 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_0040a353_0040A353() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0
        mov dword ptr [ebp - 4], 1014h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 449448h
        ; Exact mapped bytes E8 A4 A9 02 00: call 0x434d17
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 75 30: jne 0x40a3a8
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 64h], 0
        push 1
        ; Exact mapped bytes FF 15 88 C5 43 00: call dword ptr [0x43c588]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 FB 57 00 00: call 0x40fb90
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 10 58 00 00: call 0x40fbb0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 40 C5 43 00: call dword ptr [0x43c540]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
