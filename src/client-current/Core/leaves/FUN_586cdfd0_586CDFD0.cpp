// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CDFD0 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_586cdfd0_586CDFD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 8], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 7F DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x7f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 0ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8B 7F DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 10h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 75 7F DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 14h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5F 7F DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 18h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 49 7F DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7f
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
