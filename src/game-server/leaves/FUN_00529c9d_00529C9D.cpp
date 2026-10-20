// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00529C9D .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_00529c9d_00529C9D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 51 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x529cd2
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 18ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 52: jmp 0x529d24
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 07: jne 0x529ce5
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x529cf0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A8 4B 01 00: call 0x53e8a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 24: jge 0x529d21
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8B 4E 01 00: call 0x53eb94
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 11: jne 0x529d1f
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2A 4C 01 00: call 0x53e944
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 05: jmp 0x529d24
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB C6: jmp 0x529ce7
        __asm _emit 0xeb
        __asm _emit 0xc6
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
