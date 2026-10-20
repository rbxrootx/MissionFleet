// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A824 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_0056a824_0056A824() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fd42h
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
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 58 6E FA FF: call 0x5116a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 104h
        ; Exact mapped bytes E8 6A 79 FC FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 5C 79 FC FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63da7ch
        push 14h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c0h
        push ecx
        ; Exact mapped bytes E8 39 B0 EF FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0c0h], 14h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0d8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 100h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 104h
        ; Exact mapped bytes E8 CA 7B FC FF: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 BC 7B FC FF: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 124h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0e4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0dch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0e0h], 0
        push 8ch
        push 67d38ch
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 32 F9 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf9
        __asm _emit 0xf6
        __asm _emit 0xff
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
        mov esp, ebp
        pop ebp
        ret
    }
}
