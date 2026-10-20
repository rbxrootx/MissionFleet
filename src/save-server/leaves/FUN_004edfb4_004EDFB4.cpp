// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDFB4 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_004edfb4_004EDFB4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e2a9h
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
        ; Exact mapped bytes E8 B8 EF FF FF: call 0x4ecf90
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 44h
        ; Exact mapped bytes E8 B8 3B 04 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4ch
        ; Exact mapped bytes E8 AD 3B 04 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 54h
        ; Exact mapped bytes E8 A2 3B 04 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 97 3B 04 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 639c94h
        push 2ch
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 40h
        push ecx
        ; Exact mapped bytes E8 9C 78 F7 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x78
        __asm _emit 0xf7
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
