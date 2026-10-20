// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DB1F6 .. +0x8F bytes.
extern "C" __declspec(naked) void FID_conflict__Load_CDialogTemplate__QAEHPBD_Z_004DB1F6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E8 AE 68 05 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 04: jne 0x4db211
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6E: jmp 0x4db27f
        __asm _emit 0xeb
        __asm _emit 0x6e
        push 5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 08 BA 68 00: call dword ptr [0x68ba08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x4db22e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x4db27f
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 0C BA 68 00: call dword ptr [0x68ba0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 04 BA 68 00: call dword ptr [0x68ba04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 84 B9 68 00: call dword ptr [0x68b984]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E7 FE FF FF: call 0x4db14e
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 60 E5 F6 FF: call 0x4497d0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 10 BA 68 00: call dword ptr [0x68ba10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
