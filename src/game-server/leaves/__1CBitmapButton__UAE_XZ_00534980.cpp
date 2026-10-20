// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534980 .. +0x78 bytes.
extern "C" __declspec(naked) void __1CBitmapButton__UAE_XZ_00534980() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c81dh
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
        ; Exact mapped bytes E8 EA 23 00 00: call 0x536d98
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4ch
        ; Exact mapped bytes E8 DB 23 00 00: call 0x536d98
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 44h
        ; Exact mapped bytes E8 CC 23 00 00: call 0x536d98
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 BD 23 00 00: call 0x536d98
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6D D0 FE FF: call 0x521a57
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd0
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
