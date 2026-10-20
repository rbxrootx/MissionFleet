// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525BC9 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_00525bc9_00525BC9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57da7bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A3 D7 FF FF: call 0x523393
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8ch
        ; Exact mapped bytes E8 02 B3 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 90h
        ; Exact mapped bytes E8 F0 B2 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 585020h
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 03 A2 FA FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa2
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x525c47
        __asm _emit 0x75
        __asm _emit 0x14
        push 513h
        push 5c8174h
        ; Exact mapped bytes E8 BE ED 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525c47
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x525c24
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 56 01 00 00: call 0x525dbb
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
