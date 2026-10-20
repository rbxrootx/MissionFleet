// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508FD4 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_00508fd4_00508FD4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e7c9h
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
        ; Exact mapped bytes E8 D8 EF FF FF: call 0x507fd0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 44h
        ; Exact mapped bytes E8 28 C6 02 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4ch
        ; Exact mapped bytes E8 1D C6 02 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 54h
        ; Exact mapped bytes E8 12 C6 02 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 07 C6 02 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 587674h
        push 2ch
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 40h
        push ecx
        ; Exact mapped bytes E8 2C 03 FA FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 40h], 0
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
