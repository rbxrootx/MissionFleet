// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D770 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_0045d770_0045D770() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 72 09: jb 0x45d792
        __asm _emit 0x72
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 07: jne 0x45d799
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 59 02 00 00: call 0x45d9f0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x45d7aa
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 01 00 00: call 0x45d960
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 4]
        add eax, dword ptr [ebp + 8]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 2C B0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
