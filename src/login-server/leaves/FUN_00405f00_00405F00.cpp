// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00405F00 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_00405f00_00405F00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439536h
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
        add ecx, 11ch
        ; Exact mapped bytes E8 7A 7C 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 118h
        ; Exact mapped bytes E8 68 7C 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 56 7C 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 44 7C 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0F C8 00 00: call 0x412785
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc8
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
