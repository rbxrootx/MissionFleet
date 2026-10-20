// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570BD6 .. +0x45 bytes.
extern "C" __declspec(naked) void _OnShow_COleServerItem__MAEXXZ_00570BD6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 11ah
        push 5d0930h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 6E A5 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 21 F5 FF FF: call 0x57011b
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 AA FF FF: call 0x56b6ca
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x570c17
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
