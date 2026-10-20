// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F93A4 .. +0x57 bytes.
extern "C" __declspec(naked) void FID_conflict__OnNcCreate_CSplitterWnd__IAEHPAUtagCREATESTRUCTW___Z_004F93A4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 40 03 00: call 0x52d3eb
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4f93c1
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 34: jmp 0x4f93f5
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 36 03 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0e5h
        push 674fe8h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 81 0E FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        push 20h
        push 0
        push 200h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED CF FD FF: call 0x4d63dd
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
