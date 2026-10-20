// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00589220 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_00589220_00589220() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c549h
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
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63573ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 4E 2C F6 FF: call 0x4ebea6
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x2c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 49 0B EC FF: call 0x449db0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0b
        __asm _emit 0xec
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
