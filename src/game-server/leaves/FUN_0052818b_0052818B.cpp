// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052818B .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_0052818b_0052818B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0fh
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 20h]
        imul ecx, ecx, 3
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 88 DC 00 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 38 88 F8 FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        sub eax, dword ptr [ebp - 4]
        cmp eax, 4
        ; Exact mapped bytes 7E 09: jle 0x5281cc
        __asm _emit 0x7e
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        or edx, 50h
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 79 DC 00 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 13 88 F8 FF: call 0x4b09f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        sub eax, dword ptr [ebp - 4]
        cmp eax, 4
        ; Exact mapped bytes 7E 08: jle 0x5281f0
        __asm _emit 0x7e
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        or al, 0a0h
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
