// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402B07 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_00402b07_00402B07() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 110h
        mov dword ptr [ebp - 110h], ecx
        mov eax, dword ptr [ebp - 110h]
        add eax, 158h
        push eax
        push 0
        push 1
        ; Exact mapped bytes E8 E5 ED 00 00: call 0x411910
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        push -6
        push 3
        push 0c8h
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx + 158h]
        push edx
        ; Exact mapped bytes E8 C0 ED 00 00: call 0x41190a
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 110h]
        add eax, 15ch
        push eax
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx + 158h]
        push edx
        push 2
        ; Exact mapped bytes E8 A2 ED 00 00: call 0x411910
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        push 448548h
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push 448550h
        push 448558h
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push 448568h
        push 448578h
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push 448588h
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [eax + 15ch]
        push ecx
        ; Exact mapped bytes E8 4D ED 00 00: call 0x411904
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 110h]
        add edx, 160h
        push edx
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [eax + 15ch]
        push ecx
        push 3
        ; Exact mapped bytes E8 34 ED 00 00: call 0x411910
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov esp, ebp
        pop ebp
        ret
    }
}
