// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3C9D .. +0x2F bytes.
extern "C" __declspec(naked) void FID_conflict__OnCreate_CToolBarCtrl__IAEHPAUtagCREATESTRUCTA___Z_004D3C9D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C3 9A 06 00: call 0x53d773
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 05: jne 0x4d3cba
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 0C: jmp 0x4d3cc6
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 14h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 32 00 00: call 0x4d6ecc
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
