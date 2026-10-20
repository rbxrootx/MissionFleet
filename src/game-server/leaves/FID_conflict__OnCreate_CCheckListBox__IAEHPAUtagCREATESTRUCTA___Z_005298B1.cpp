// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005298B1 .. +0x48 bytes.
extern "C" __declspec(naked) void FID_conflict__OnCreate_CCheckListBox__IAEHPAUtagCREATESTRUCTA___Z_005298B1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 3E 01 00: call 0x53d773
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 05: jne 0x5298ce
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 25: jmp 0x5298f3
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 55 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 50h
        cmp eax, 50h
        ; Exact mapped bytes 75 13: jne 0x5298f1
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 F8 FF FF: call 0x529157
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 57 01 00: call 0x53f00e
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x57
        __asm _emit 0x01
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
