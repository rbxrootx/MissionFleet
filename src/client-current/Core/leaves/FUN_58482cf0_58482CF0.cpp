// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58482CF0 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_58482cf0_58482CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        push 8
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 108h
        push eax
        ; Exact mapped bytes E8 05 A1 3C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 110h
        push ecx
        ; Exact mapped bytes E8 EF A0 3C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xa0
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 118h
        push edx
        ; Exact mapped bytes E8 D9 A0 3C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa0
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 8], ecx
        push 58894696h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4D 33 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 0ch], eax
        push 58894697h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 34 33 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [ebp - 10h], edx
        push 5889469ah
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1B 33 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 24 01 00 00: mov word ptr [ecx + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 22 01 00 00: mov word ptr [eax + 0x122], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 20 01 00 00: mov word ptr [edx + 0x120], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
