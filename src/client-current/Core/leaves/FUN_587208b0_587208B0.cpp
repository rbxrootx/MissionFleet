// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587208B0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_587208b0_587208B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C1 56 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x56
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 0ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AB 56 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x56
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 45 EF D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xef
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, 7
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 9C 01 00 00: mov word ptr [ecx + 0x19c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
