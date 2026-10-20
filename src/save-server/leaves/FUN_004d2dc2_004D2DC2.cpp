// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2DC2 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_004d2dc2_004D2DC2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x4d2dd9
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 46 ED 05 00: call 0x531b1c
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xed
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF 87 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 B4 BF 68 00: call dword ptr [0x68bfb4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
