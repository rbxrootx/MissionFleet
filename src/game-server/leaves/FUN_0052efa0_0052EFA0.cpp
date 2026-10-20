// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052EFA0 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_0052efa0_0052EFA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 75 0A: jne 0x52efbd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 28 FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 4A: jmp 0x52f007
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes FF 15 5C 25 5E 00: call dword ptr [0x5e255c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bch], 0
        lea edx, [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B D2 00 00: call 0x53c1f7
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F FA FF FF: call 0x52e9fb
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 16: jne 0x52f007
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 00 00 00: call 0x52f00d
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 10h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 CB 00 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
