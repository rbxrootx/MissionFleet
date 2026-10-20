// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407F00 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_00407f00_00407F00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439658h
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
        add ecx, 12ch
        ; Exact mapped bytes E8 7A 5C 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 68 5C 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 33 A8 00 00: call 0x412785
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
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
