// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005128E7 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_005128e7_005128E7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 A8 01 00: call 0x52d1d3
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 05: jne 0x512904
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 57: jmp 0x51295b
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 E4 00 00 00: call dword ptr [edx + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x512935
        __asm _emit 0x75
        __asm _emit 0x17
        push 673ec0h
        push 673ef0h
        ; Exact mapped bytes E8 E8 DC F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 26: jmp 0x51295b
        __asm _emit 0xeb
        __asm _emit 0x26
        push 0
        push 0e001h
        push 362h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 8D 01 00: call 0x52b68d
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
