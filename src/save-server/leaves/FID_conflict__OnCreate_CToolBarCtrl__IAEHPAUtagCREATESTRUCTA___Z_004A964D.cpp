// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A964D .. +0x2F bytes.
extern "C" __declspec(naked) void FID_conflict__OnCreate_CToolBarCtrl__IAEHPAUtagCREATESTRUCTA___Z_004A964D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 3B 08 00: call 0x52d1d3
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 05: jne 0x4a966a
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 0C: jmp 0x4a9676
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 14h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE 31 00 00: call 0x4ac862
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x31
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
