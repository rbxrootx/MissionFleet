// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564D4B .. +0x4D bytes.
extern "C" __declspec(naked) void _OnWindowPosChanging_COleIPFrameWnd__IAEXPAUtagWINDOWPOS___Z_00564D4B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        push 0
        push 36ah
        push 36ah
        push 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x564d86
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 0
        push 36ah
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 6C 26 5E 00: call dword ptr [0x5e266c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7B 8B FD FF: call 0x53d90d
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
