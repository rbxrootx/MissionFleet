// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528700 .. +0x78 bytes.
extern "C" __declspec(naked) void __1CBitmapButton__UAE_XZ_00528700() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c1cdh
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
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 54h
        ; Exact mapped bytes E8 C2 AA 00 00: call 0x5331f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4ch
        ; Exact mapped bytes E8 B3 AA 00 00: call 0x5331f0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 44h
        ; Exact mapped bytes E8 A4 AA 00 00: call 0x5331f0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 95 AA 00 00: call 0x5331f0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0D 85 FE FF: call 0x510c77
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
