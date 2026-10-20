// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056AA90 .. +0x7A bytes.
extern "C" __declspec(naked) void FID_conflict__OnCreate_COleIPFrameWnd__IAEHPAUtagCREATESTRUCTW___Z_0056AA90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        push 0a2h
        push 67d38ch
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 B4 F7 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf7
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 08 7E FA FF: call 0x5128c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x7e
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x56aac1
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 43: jmp 0x56ab04
        __asm _emit 0xeb
        __asm _emit 0x43
        push 0
        push 0
        push 200h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0B B9 F6 FF: call 0x4d63dd
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb9
        __asm _emit 0xf6
        __asm _emit 0xff
        push 3
        push 362h
        push 362h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 88 BE 68 00: call dword ptr [0x68be88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push 0afh
        push 67d38ch
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 5E F7 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf7
        __asm _emit 0xf6
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
