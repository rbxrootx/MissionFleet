// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00526A50 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_00526a50_00526A50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57db28h
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
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 90h
        ; Exact mapped bytes E8 CB 6D FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8ch
        ; Exact mapped bytes E8 B9 6D FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 75 CA FF FF: call 0x523517
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xca
        __asm _emit 0xff
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
