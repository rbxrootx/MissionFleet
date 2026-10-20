// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00401340 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_00401340_00401340() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5797f1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        push -1
        push -1
        push 0
        push 28h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 51 82 08 00: call 0x4895d0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 47b571h
        push 47b4e0h
        push 3
        push 40h
        mov eax, dword ptr [ebp - 10h]
        add eax, 0cb0h
        push eax
        ; Exact mapped bytes E8 0E 77 0A 00: call 0x4a8ab0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x77
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 581020h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7E 03 00 00: call 0x401735
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 0B 74 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
