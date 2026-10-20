// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FFF20 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_586fff20_586FFF20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 160h]
        mov dword ptr [ebp - 0ch], ecx
        push 0ffffff38h
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EC 6E DB FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 160h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 160h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586fff70
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 0a0h]
        ; Exact mapped bytes 7D 1D: jge 0x586fff9b
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 164h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 5F D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5f
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CC: jmp 0x586fff67
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov esp, ebp
        pop ebp
        ret
    }
}
