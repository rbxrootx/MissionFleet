// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005499DB .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_005499db_005499DB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e949h
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 91 6F FE FF: call 0x530990
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 DD D5 F9 FF: call 0x4e6ff0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 587ad8h
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
        mov esp, ebp
        pop ebp
        ret
    }
}
