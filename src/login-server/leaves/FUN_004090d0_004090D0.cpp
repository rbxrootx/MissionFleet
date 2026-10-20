// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004090D0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_004090d0_004090D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439b56h
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
        add ecx, 124h
        ; Exact mapped bytes E8 AA 4A 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 98 4A 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 86 4A 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 74 4A 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3F 96 00 00: call 0x412785
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x96
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
