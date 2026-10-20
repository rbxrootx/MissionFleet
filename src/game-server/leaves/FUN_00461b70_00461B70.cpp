// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461B70 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_00461b70_00461B70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bae9h
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
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 35 EF FF FF: call 0x460ae0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 48h
        ; Exact mapped bytes E8 B1 FA 0C 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 58h
        ; Exact mapped bytes E8 A6 FA 0C 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 9B FA 0C 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 581bf0h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 54h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4ch], 0
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
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 CA 6B 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
