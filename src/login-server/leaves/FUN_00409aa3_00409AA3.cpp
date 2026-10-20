// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409AA3 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_00409aa3_00409AA3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A E1 FF FF: call 0x407c20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 124h
        push ecx
        push 3f2h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E0 B6 02 00: call 0x4351ae
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 160h
        push eax
        push 3eeh
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 48 B6 02 00: call 0x43512d
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 164h
        push edx
        push 3edh
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 30 B6 02 00: call 0x43512d
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 16ch
        push ecx
        push 3e9h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 18 B6 02 00: call 0x43512d
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 170h
        push eax
        push 3ebh
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 01 B6 02 00: call 0x43512d
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 174h
        push edx
        push 3ech
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E9 B5 02 00: call 0x43512d
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
