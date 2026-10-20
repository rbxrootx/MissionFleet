// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878AC50 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5878ac50_5878AC50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5878ac6b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 1D: jge 0x5878ac8e
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0a8h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 05 B3 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb3
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5878ac62
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC B2 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
