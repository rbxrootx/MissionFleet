// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004420D0 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_004420d0_004420D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ad94h
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
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 9ch
        ; Exact mapped bytes E8 44 B7 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 98h
        ; Exact mapped bytes E8 32 B7 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 99 37 09 00: call 0x4d58c2
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F2 DA 0A 00: call 0x4efc2a
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xda
        __asm _emit 0x0a
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
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 94 66 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x66
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
