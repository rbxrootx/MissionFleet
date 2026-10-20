// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564B90 .. +0x7A bytes.
extern "C" __declspec(naked) void FID_conflict__OnCreate_COleIPFrameWnd__IAEHPAUtagCREATESTRUCTW___Z_00564B90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        push 0a2h
        push 5d0bb4h
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 B4 65 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x65
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E9 65 FC FF: call 0x52b1a1
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x564bc1
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 43: jmp 0x564c04
        __asm _emit 0xeb
        __asm _emit 0x43
        push 0
        push 0
        push 200h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7B A3 F8 FF: call 0x4eef4d
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        push 3
        push 362h
        push 362h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0afh
        push 5d0bb4h
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 5E 65 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x65
        __asm _emit 0xf9
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
