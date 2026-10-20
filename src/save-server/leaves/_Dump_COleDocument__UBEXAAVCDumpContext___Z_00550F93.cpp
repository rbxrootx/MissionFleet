// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550F93 .. +0x115 bytes.
extern "C" __declspec(naked) void _Dump_COleDocument__UBEXAAVCDumpContext___Z_00550F93() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 13 FA FF: call 0x4f235e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x13
        __asm _emit 0xfa
        __asm _emit 0xff
        push 67c104h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 0C 5D FD FF: call 0x526cc2
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 67c0fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 78 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CC 7A FD FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 78 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 67c110h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 78 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0E 7A FD FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        push ecx
        push 67c128h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A 78 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F 7A FD FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        push eax
        push 67c13ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F 78 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 7A FD FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        push edx
        push 67c14ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 78 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E6 7A FD FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        push 67c15ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 77 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3E 7A FD FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        push eax
        push 67c170h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB 77 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 20 7A FD FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        push edx
        push 67c180h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BD 77 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F 7A FD FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        push 67c18ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 77 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
