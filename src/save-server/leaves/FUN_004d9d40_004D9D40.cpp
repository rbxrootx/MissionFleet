// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D9D40 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_004d9d40_004D9D40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        push 1
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 10 97 FC FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d9d6b
        __asm _emit 0x75
        __asm _emit 0x11
        push 39h
        push 6733d4h
        ; Exact mapped bytes E8 DA EF 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d9d6b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4d9d47
        __asm _emit 0x75
        __asm _emit 0xd6
        push 6
        mov eax, dword ptr [ebp + 8]
        shr eax, 4
        add eax, 1
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 2B 7D 05 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 08 BA 68 00: call dword ptr [0x68ba08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4d9d9c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx], 0
        xor eax, eax
        ; Exact mapped bytes EB 2A: jmp 0x4d9dc6
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 05 7D 05 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 6C BC 68 00: call dword ptr [0x68bc6c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 06: jne 0x4d9dc3
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
