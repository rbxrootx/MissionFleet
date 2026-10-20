// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481780 .. +0x4F bytes.
extern "C" __declspec(naked) void __mbsnbicoll_00481780() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 04: jne 0x48178e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x4817cb
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes A1 00 8B 68 00: mov eax, dword ptr [0x688b00]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 1
        ; Exact mapped bytes 8B 15 A4 8D 68 00: mov edx, dword ptr [0x688da4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 5E 4B FF FF: call 0x476310
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x4817c5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 7fffffffh
        ; Exact mapped bytes EB 06: jmp 0x4817cb
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        sub eax, 2
        mov esp, ebp
        pop ebp
        ret
    }
}
