// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00510174 .. +0x57 bytes.
extern "C" __declspec(naked) void FID_conflict__OnNcCreate_CSplitterWnd__IAEHPAUtagCREATESTRUCTW___Z_00510174() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 02 D8 02 00: call 0x53d98b
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x510191
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 34: jmp 0x5101c5
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A0 CE 02 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0e5h
        push 5c84b0h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 B1 AF FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        push 20h
        push 0
        push 200h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D ED FD FF: call 0x4eef4d
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xed
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
