// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F7660 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_586f7660_586F7660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        push 7ch
        mov eax, dword ptr [ebp - 8]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1cch
        push ecx
        ; Exact mapped bytes E8 0D 52 15 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x52
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586f7698
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 1fh
        ; Exact mapped bytes 7D 38: jge 0x586f76d6
        __asm _emit 0x7d
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 2e0h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 1cch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5C FD FF FF: call 0x586f7420
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CD E9 D8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B9: jmp 0x586f768f
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov esp, ebp
        pop ebp
        ret
    }
}
