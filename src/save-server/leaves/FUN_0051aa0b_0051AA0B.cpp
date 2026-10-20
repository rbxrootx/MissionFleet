// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051AA0B .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_0051aa0b_0051AA0B() {
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
        ; Exact mapped bytes E8 7E 78 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F8 FC F4 FF: call 0x46a730
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        sub eax, dword ptr [ebp - 4]
        cmp eax, 4
        ; Exact mapped bytes 7E 09: jle 0x51aa4c
        __asm _emit 0x7e
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        or edx, 50h
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 6F 78 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D3 FC F4 FF: call 0x46a730
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfc
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        sub eax, dword ptr [ebp - 4]
        cmp eax, 4
        ; Exact mapped bytes 7E 08: jle 0x51aa70
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
