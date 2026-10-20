// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481E1E .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_00481e1e_00481E1E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 C0 0B 00: call 0x53dea8
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5ch
        push ecx
        push 40fh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 71 D4 08 00: call 0x50f2be
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 98h
        push eax
        push 413h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A8 C8 08 00: call 0x50e70c
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 9ch
        push edx
        push 416h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 90 C8 08 00: call 0x50e70c
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 5A 69 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
