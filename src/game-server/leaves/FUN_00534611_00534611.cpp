// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534611 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_00534611_00534611() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c7e1h
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
        ; Exact mapped bytes E8 6E 9E 00 00: call 0x53e4a3
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 32 27 00 00: call 0x536d79
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 44h
        ; Exact mapped bytes E8 23 27 00 00: call 0x536d79
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4ch
        ; Exact mapped bytes E8 14 27 00 00: call 0x536d79
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 54h
        ; Exact mapped bytes E8 05 27 00 00: call 0x536d79
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 5822d4h
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
