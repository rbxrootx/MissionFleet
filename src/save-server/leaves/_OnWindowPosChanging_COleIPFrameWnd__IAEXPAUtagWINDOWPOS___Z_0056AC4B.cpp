// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056AC4B .. +0x4D bytes.
extern "C" __declspec(naked) void _OnWindowPosChanging_COleIPFrameWnd__IAEXPAUtagWINDOWPOS___Z_0056AC4B() {
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
        ; Exact mapped bytes FF 15 88 BE 68 00: call dword ptr [0x68be88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x56ac86
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 0
        push 36ah
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 D0 BF 68 00: call dword ptr [0x68bfd0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DB 26 FC FF: call 0x52d36d
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
