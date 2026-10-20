// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051C27E .. +0x48 bytes.
extern "C" __declspec(naked) void FID_conflict__OnCreate_CCheckListBox__IAEHPAUtagCREATESTRUCTA___Z_0051C27E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 0F 01 00: call 0x52d1d3
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 05: jne 0x51c29b
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 25: jmp 0x51c2c0
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 9F FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x9f
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 50h
        cmp eax, 50h
        ; Exact mapped bytes 75 13: jne 0x51c2be
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 F8 FF FF: call 0x51bb24
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 27 01 00: call 0x52ea6e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x27
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
