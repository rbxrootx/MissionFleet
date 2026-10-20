// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00458824 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_00458824_00458824() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b96dh
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
        sub esp, 8
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B8 6B FF FF: call 0x44f410
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 440h
        ; Exact mapped bytes E8 2F 4E 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], 581a7ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CC 00 00 00: call 0x458952
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 3C FF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
